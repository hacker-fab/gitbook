# Machine Integration

The goal of the Machine Integration project is to develop an extensible interface that can be used to communicate between the primary web application and each individual machine in the hacker fab.&#x20;



Here is an architecture diagram of the Full System.&#x20;

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXcXFEy5eu8qqub8VfT0DtOGANdlEVJ_8rg_pJXm70vyX_eaJHmDveBvXo2BWOT7YVaSzvHLU9m00Oulh7ZUKEUt__dG1V0hWEmV8ktRQiHB8FnVH2xi3JV30i4tdtipNq5f9kmI?key=sLvmXSFPn-LZd1TfxNYT9Cv3" alt=""><figcaption></figcaption></figure>

## High level overview:

1. **Web Application Frontend & Backend:** This is the first two boxes on the architecture diagram above. This is how the end user will interface with the system. The user can create/edit/delete jobs. The exact details of how the web application frontend and backend work are covered in more detail in that section of the documentation (not on this page).&#x20;
2. **Jobs Queue on AWS**: This is where the list of jobs that the machines will need to run is stored. The jobs queue on AWS will have an API interface that is accessible to the web application (in order to take in new jobs) and the Raspberry PI (in order to complete jobs).&#x20;
3. **Raspberry PI mini computer**: This raspberry PI will be physically located near the tool that will be controlled (spin coater to start). The raspberry PI will be connected to the device using either USB or I/O pins on the raspberry PI. The raspberry PI will pull jobs from the jobs queue and run them on the device. There will also be a keyboard, mouse, and portable monitor connected to the Raspberry PI to monitor the status of the machine (these components will be optional, but provide additional redundancy).&#x20;
4. **Device to be controlled**: Will receive control signals from the raspberry PI. For this version of the project, we will be controlling the spin coater.&#x20;

## Data Flow Description:

1. #### Job Creation:

* The primary way that jobs will be created is through the hacker fab website. The hacker fab website will call the appropriate API call to manage the jobs database. The implementation of this is out of the initial scope for my project. For testing purposes for this semester, I will use POSTMAN to send API calls to the AWS jobs database.&#x20;
* Users can also create new jobs directly via the Raspberry Pi UI. This allows for redundancy in the case that the machine needs to be controlled without the database.
* There will be an option to run the job immediately or to send it to the database to be added to the queue.&#x20;

1. #### Job Queue Management:

* The AWS server maintains a centralized queue of jobs.
* The Raspberry Pi fetches and dequeues jobs by querying the API. Only jobs for the specific machine are dequeued.&#x20;

1. #### Job Execution:

* The Raspberry Pi receives the job and displays it on the connected UI.
* Upon user interaction (manual start) or automatically (if set), the job is run on the spin coater (or other device in the future)

1. #### Job Completion:

* After execution, the Raspberry Pi sends the success/failure status to the AWS server, updating the job's record in the database.



## Justification for Design choices:

### 1. Why do we need lab automation?

This will significantly automate the process of chip development. Our goal is to make basic chip tape outs like 3D printing.

### 2. Why do we need an additional full raspberry pi for each tool that we are controlling? This is much more expensive than having one raspberry pi that then communicates wirelessly with smaller arduinos for each tool.&#x20;

Answer: KISS: Keep it simple stupid. Adding the additional communication step between a central raspberry pi to peripheral arduinos would significantly increase complexity of the system in multiple ways:&#x20;

1. Initial implementation time is significantly longer for an arduino solution. The additional communication link between the raspberry pi and arduinos is not trivial, especially considering issues with the CMU wifi.&#x20;
2. The user experience is significantly worse for the arduino solution. The user who is standing at the tool is completely reliant on the automation system in this case. By contrast, with my proposal, the user will still have direct control of the tool via the on-screen gui at the machine. &#x20;
3. A raspberry pi for each machine would be a significantly more robust solution, while still offering all of the potential for automation.&#x20;
   1. Less complexity (removed additional wireless link)
   2. Tools can still easily be operated manually (using on screen gui) in case of issues with the website/database.



I will now go through the jobs queue and Raspberry PI mini computer in more detail, as these are the key innovations of the machine integration framework.

## **Jobs Queue on AWS:**&#x20;

The jobs queue is where jobs that are requested by the web applicaiton are stored before they are fetched by the appropriate tool's raspberry PI. First, here are details about the Job Queue API interface:

#### API Gateway Endpoints from AWS for raspberry PI:

* #### GET /jobs/next: Fetch the next job from the queue.
* #### POST /job\_completion : Update job completion details.

**API Gateway Endpoints from AWS for web application:**

* #### POST /jobs: Enqueue a new job. The request has the machine name, input parameters, priority. The response will have the job\_id of the newly created job, or error.&#x20;
* #### GET /jobs\_by\_id: The request includes the job\_id(s) for which you will get details. All data for that row of the table will then be returned. NOTE: you can pass a list of job\_ids to get multiple rows of data at the same time.
* #### GET /jobs\_by\_machine: The request includes the machine name. All jobs that are in the database (regardless of status) will be returned.&#x20;

#### Job Queue Table Schema:

* #### job\_id (Primary Key)
* #### machine (the machine to run the job on. E.g. spin coater)
* #### status (Pending/In Progress/Completed/Failed)
* #### input\_parameters (JSON for variable parameters)
* #### output\_parameters (JSON for results from the machine)
* #### timestamp (Queued timestamp)
* #### priority (Optional for prioritized execution)

#### Here are implementation details:

**AWS Configuration for jobs queue:**

This is the jobs queue that the tools (right now only the spincoater) pull from. Jobs are enqueued from the primary web application.&#x20;

The API gateway routes are configured as follows:

<figure><img src="../../.gitbook/assets/image (92).png" alt="" width="375"><figcaption></figcaption></figure>

The dynamo DB is configured with default settings. job\_id is the primary key.&#x20;

<figure><img src="../../.gitbook/assets/image (93).png" alt=""><figcaption></figcaption></figure>

I am currently using a free tier AWS account from hacker fab. This takes care of all licensing requirements for this project.&#x20;

The majority of the logic is in the lambda function. The lambda function is the code that runs on AWS servers that processes API requests to the database. The python code is as follows (up to date as of 3/8/2025):

````python
```python
"""AWS Lambda handler module.

This module contains the Lambda function that runs the API endpoints
for the job queue system in AWS.
"""
import json
import uuid
import time
import logging
from decimal import Decimal
import boto3

### This code runs on the AWS instance as a lambda function for managing the API requests ###

# Set up logging
logger = logging.getLogger()
logger.setLevel(logging.INFO)

dynamodb = boto3.resource("dynamodb")
table = dynamodb.Table("JobQueue")

def lambda_handler(event, context):
    """
    Handles API requests for different endpoints.
    """
    logger.info("Received event: %s", json.dumps(event, indent=2, default=decimal_serializer))

    # Extract HTTP method and route
    route = event.get("routeKey", "")
    method = event["requestContext"]["http"]["method"]
    body = json.loads(event.get("body", "{}"))  # Parse JSON body safely

    logger.info("Processing route: %s with method: %s", route, method)

    # Routing based on the request
    if route == "GET /jobs/next" and method == "GET":
        return get_next_job()
    if route == "POST /job_completion" and method == "POST":   # Ensure correct endpoint
        return update_job_completion(body)
    if route == "POST /jobs" and method == "POST":
        return enqueue_job(body)
    if route == "GET /jobs_by_id" and method == "GET":
        return get_jobs_by_id(event)
    if route == "GET /jobs_by_machine" and method == "GET":
        return get_jobs_by_machine(event)
    logger.warning("Invalid request received: %s", route)
    return {"statusCode": 400, "body": json.dumps({"message": "Invalid request"})}

# **Helper Function to Convert Decimal to Native Python Types**
def decimal_serializer(obj):
    """
    Convert Decimal to native Python types.
    """
    if isinstance(obj, Decimal):
        return int(obj) if obj % 1 == 0 else float(obj)
    raise TypeError(f"Object of type {obj.__class__.__name__} is not JSON serializable")

# **Function to Update Job Completion (Completed or Failed)**
def update_job_completion(body):
    """
    Update job completion status.
    """
    job_id = body.get("job_id", "-1")
    logger.info("Received job completion request: %s", body)

    # **Check if job_id is missing, invalid, or set to "-1"**
    if not job_id or not isinstance(job_id, str) or len(job_id) < 8 or job_id == "-1":
        logger.error("Invalid job_id received: %s", job_id)
        return {"statusCode": 400, "body": json.dumps({"message": "Invalid or missing job_id"})}

    # Retrieve the job from DynamoDB to verify it exists
    response = table.get_item(Key={"job_id": job_id})
    if "Item" not in response:
        logger.error("Job ID not found: %s", job_id)
        return {"statusCode": 410, "body": json.dumps({"message": f"Job ID {job_id} not found"})}

    output_parameters = body.get("output_parameters", {})
    status = body.get("status", "").capitalize()

    if status not in ["Completed", "Failed"]:
        logger.error("Invalid status received: %s", status)
        return {"statusCode": 400, "body":
                json.dumps({"message": "Invalid status, must be 'Completed' or 'Failed'"})}

    timestamp = int(time.time())
    table.update_item(
        Key={"job_id": job_id},
        UpdateExpression="SET #s = :s, output_parameters = :o, #t = :t",
        ExpressionAttributeNames={"#s": "status", "#t": "timestamp"},
        ExpressionAttributeValues={":s": status, ":o": output_parameters, ":t": timestamp}
    )

    logger.info("Job %s updated to %s", job_id, status)
    return {"statusCode": 200, "body": json.dumps({"message": f"Job {job_id} marked as {status}."})}

# **Function to Add a New Job**
def enqueue_job(body):
    """
    Add a new job to the queue.
    """
    job_id = str(uuid.uuid4())
    machine = body.get("machine", "unknown")
    input_parameters = body.get("input_parameters", {})
    priority = body.get("priority", 1)
    timestamp = int(time.time())
    logger.info("Adding new job with ID: %s", job_id)

    table.put_item(Item={
        "job_id": job_id,
        "machine": machine,
        "status": "Pending",
        "input_parameters": input_parameters,
        "output_parameters": {},
        "timestamp": timestamp,
        "priority": priority
    })

    return {"statusCode": 200, "body": json.dumps({"message": "Job added", "job_id": job_id})}

# **Function to Get the Next Pending Job and Mark It "In Progress", Then Return Updated Data**
def get_next_job():
    """
    Get the next pending job and mark it as "In Progress".
    """
    logger.info("Fetching next job from queue")
    response = table.scan(
        FilterExpression="#s = :s",
        ExpressionAttributeNames={"#s": "status"},
        ExpressionAttributeValues={":s": "Pending"}
    )

    jobs = response.get("Items", [])
    if not jobs:
        logger.warning("No pending jobs found")
        return {"statusCode": 404, "body": json.dumps({"message": "No pending jobs found"})}

    jobs.sort(key=lambda x: x.get("priority", 1), reverse=True)
    next_job = jobs[0]
    logger.info("Next job selected: %s", next_job["job_id"])

    table.update_item(
        Key={"job_id": next_job["job_id"]},
        UpdateExpression="SET #s = :s, #t = :t",
        ExpressionAttributeNames={"#s": "status", "#t": "timestamp"},
        ExpressionAttributeValues={":s": "In Progress", ":t": int(time.time())}
    )

    updated_job = table.get_item(Key={"job_id": next_job["job_id"]}).get("Item", {})
    logger.info("Updated job details: %s", updated_job)

    return {"statusCode": 200, "body": json.dumps(updated_job, default=decimal_serializer)}

# **Function to Fetch a Job by Its ID**
def get_jobs_by_id(event):
    """
    Fetch a job by its ID.
    """
    job_id = event.get("queryStringParameters", {}).get("job_id")

    if not job_id:
        return {"statusCode": 400, "body": json.dumps({"message": "Missing job_id parameter"})}

    response = table.get_item(Key={"job_id": job_id})

    if "Item" not in response:
        return {"statusCode": 404, "body": json.dumps({"message": "Job not found"})}

    return {"statusCode": 200, "body": json.dumps(response["Item"], default=decimal_serializer)}

# **Function to Fetch Jobs by Machine name. This is needed for interface w/web application.**
def get_jobs_by_machine(event):
    """
    Fetch jobs by machine.
    """
    machine = event.get("queryStringParameters", {}).get("machine")
    if not machine:
        return {"statusCode": 400, "body": json.dumps({"message": "Missing machine parameter"})}

    response = table.scan(
        FilterExpression="#m = :m",
        ExpressionAttributeNames={"#m": "machine"},
        ExpressionAttributeValues={":m": machine}
    )

    jobs = response.get("Items", [])
    if not jobs:
        return {"statusCode": 404, "body":
                json.dumps({"message": "No jobs found for the specified machine"})}

    return {"statusCode": 200, "body": json.dumps(jobs, default=decimal_serializer)}

```


````

The lambda code fully passes pylint/google code guidelines. The two errors shown are because the AWS specific modules aren't present when running pylint locally. \


<figure><img src="../../.gitbook/assets/image (160).png" alt=""><figcaption></figcaption></figure>



Here is an automated test script to run. Run this script locally on your PC. The script should pass if the AWS database is configured correctly. You may need to change the base URL.&#x20;

````python
```python
"""
This module contains automated tests for the job queue API endpoints.
"""
import requests

# Constants
BASE_URL = "https://fbc4oam2we.execute-api.us-east-2.amazonaws.com/prod"

def test_jobqueue_api():
    """
    Test the job queue API endpoints.
    """
    # Step 1: POST /jobs - Enqueue a new job
    job_data = {
        "machine": "test_machine",
        "input_parameters": {"param1": "value1"},
        "priority": 2
    }
    response = requests.post(f"{BASE_URL}/jobs", json=job_data)
    assert response.status_code == 200, "Failed to enqueue job"
    job_id = response.json().get("job_id")
    print(f"Job enqueued: {job_id}")

    # Step 2: GET /jobs_by_id - Verify job exists
    response = requests.get(f"{BASE_URL}/jobs_by_id", params={"job_id": job_id})
    assert response.status_code == 200, "Job not found"
    print("Job verification successful")

    # Step 3: GET /jobs_by_machine - Verify job is present for machine
    response = requests.get(f"{BASE_URL}/jobs_by_machine", params={"machine": "test_machine"})
    assert response.status_code == 200, "Job not found for machine"
    print("Job found under machine")

    # Step 4: GET /jobs/next - Fetch job from queue
    response = requests.get(f"{BASE_URL}/jobs/next")
    assert response.status_code == 200, "Failed to fetch next job"
    assert response.json().get("job_id") == job_id, "Fetched wrong job"
    print("Job fetched successfully")

    # Step 5: GET /jobs_by_id - Ensure job is now in progress
    response = requests.get(f"{BASE_URL}/jobs_by_id", params={"job_id": job_id})
    assert response.status_code == 200, "Job ID not found"
    assert response.json().get("status") == "In Progress", "Job status not updated"
    print("Job status updated to In Progress")

    # Step 6: POST /jobs_completion - Complete the job
    completion_data = {
        "job_id": job_id,
        "status": "Completed",
        "output_parameters": {"result": "success"}
    }
    response = requests.post(f"{BASE_URL}/job_completion", json=completion_data)
    assert response.status_code == 200, "Failed to update job completion"
    print("Job completion updated")

    # Step 7: GET /jobs_by_id - Verify job is completed
    response = requests.get(f"{BASE_URL}/jobs_by_id", params={"job_id": job_id})
    assert response.status_code == 200, "Job not found"
    assert response.json().get("status") == "Completed", "Job status not updated to Completed"
    print("Job verified as Completed")

if __name__ == "__main__":
    test_jobqueue_api()

```
````

The test code passes pylint

<figure><img src="../../.gitbook/assets/image (161).png" alt=""><figcaption></figcaption></figure>

## Raspberry PI mini computer

The raspberry PI pulls job requests from the AWS jobs queue



**Basic raspberry PI hardware setup:**

Raspberry PI 5 with case and heatsink. Jumper wires connect GPIO pins to external device. See image attached. The device could also interface with the raspberry PI over one of the Raspberry PIs USB ports.&#x20;

<figure><img src="../../.gitbook/assets/IMG_7608.JPG" alt="" width="375"><figcaption></figcaption></figure>



To control the Raspberry PI 5 GPIO ports, use the gpiod python package (see screenshot below). It is critical to use gpiochip4. If you are interfacing with the device over USB, the exact setup instructions will depend on the device you are controlling. I will detail how to interface with the spincoater in this guide.



Here are the reasons why we are using UART over USB instead of using the GPIO TX and RX on the rasperry PI and arduino. Keep this in mind if you are integrating future devices other than the spincoater.

The raspberry PI runs on 3.3V while the arduino runs on 5V. This presents a problem for the signal from the arduino to the RPI. We have to use either a level shifter or a voltage divider. I didn't have a level shifter on hand, so I tried building a voltage divider using a 20k (on the bottom) and 10k resistor (on the top). This filtered the voltage as needed, but it's possible this was part of the issue. Here is an image of the basic voltage divider I tried.&#x20;

<figure><img src="../../.gitbook/assets/IMG_7754 (1).JPG" alt="" width="375"><figcaption></figcaption></figure>

I also attempted to bitbang a UART connection between the RPI and arduino. This was also unsuccessful. After a bit of research, it looks like this is because Raspberry PI OS is not a RTOS (real time operating system), so the timing is not precise enough to bitbang a UART connection. Keep this in mind before trying this approach for a new tool.

At this point I was pretty stumped, so I searched around the internet a bit. I then realized it would be MUCH MUCH easier to simply use UART over the USB connection between the two devices. The reasons why I settled with this approach are as follows:

1. I was able to get UART over USB from RPI to arduino working, but I was not able to get it working using the GPIO UART module.&#x20;
2. This solution is more scalable as we can have multiple arduinos that control individual devices plugged into one raspberry PI as the RPI only has one UART TX/RX vs multiple usb ports.&#x20;
3. We can leverage existing consumer grade USB extension cables and hubs
4. The USB cable is physically studier than the multiple thin GPIO cables. Also, there is only one cable to deal with.&#x20;

[https://roboticsbackend.com/raspberry-pi-arduino-serial-communication/](https://roboticsbackend.com/raspberry-pi-arduino-serial-communication/)



For the first documentation checkpoint, the integration with the spincoater is not complete. Here is documentation for simply turning the LED on the Arduino on and off.&#x20;

Here is the code that runs on the Arduino:&#x20;

NOTE: This code will eventually be integrated into the existing spin coater firmware to control the spincoater instead of just turn the LED on and off.

It does the following things:&#x20;

On startup, it sets the baud rate (speed of UART connection) to 115200 and sets up the LED pin output

It reads an entire command from the RPI

It parses the integer number of seconds to run the LED from the command

It turns on the LED for that amount of time

```cpp
#define LED_PIN 13  // Built-in LED

void setup() {
    // Initialize USB Serial (Communication with Raspberry Pi)
    Serial.begin(115200);
    Serial.println("[DEBUG] USB Serial Initialized. Waiting for command...");
    
    pinMode(LED_PIN, OUTPUT);
}

void loop() {
    if (Serial.available()) {
        String command = Serial.readStringUntil('\n');  // Read full command

        // Print received command to Serial Monitor (Debugging)
        Serial.print("[DEBUG] Received: ");
        Serial.println(command);

        if (command.startsWith("LED:")) {
            int seconds = command.substring(4).toInt();  // Extract the integer

            Serial.print("[DEBUG] Parsed LED duration: ");
            Serial.print(seconds);
            Serial.println(" seconds.");

            Serial.println("[DEBUG] Turning LED ON...");
            digitalWrite(LED_PIN, HIGH);

            for (int i = 0; i < seconds; i++) {
                Serial.print("[DEBUG] Remaining time: ");
                Serial.print(seconds - i);
                Serial.println(" seconds...");
                delay(1000);  // 1-second delay per loop
            }

            digitalWrite(LED_PIN, LOW);
            Serial.println("[DEBUG] LED OFF.");
        } else {
            Serial.println("[DEBUG] Invalid command received.");
        }
    }
}

```

Here is the lab\_com\_gui. This is the code running on the raspberry PI:&#x20;



When the machine is IDLE, the monitor connected to the RPI just displays a message that we are waiting for the next job

<figure><img src="../../.gitbook/assets/waiting_for_jobs.png" alt=""><figcaption></figcaption></figure>

If autorun is not turned on, you'll need to manually approve the job

<figure><img src="../../.gitbook/assets/approve_deny_job.png" alt=""><figcaption></figcaption></figure>

Next, the job will be run

<figure><img src="../../.gitbook/assets/running_job.png" alt=""><figcaption></figcaption></figure>

Finally, the user can type in input for the final job status (this will vary based on the machine automated)

<figure><img src="../../.gitbook/assets/waiting_for_user_response.png" alt=""><figcaption></figcaption></figure>

I will first detail two important pieces of the code. These two parts should be the only parts of the code that you need to modify when integrating a new tool.&#x20;

The first portion is an initialization block. In this case, it just opens the UART port to communicate with the Arduino. In general though, put any code here that needs to run once when the raspberry PI starts up.&#x20;

```python
########################## PERIPHERAL CONFIGURATION ##########################
#### UART OVER USB SERIAL TO ARDUINO ####
# This may be different on a different RPI
USB_PORT = "/dev/ttyACM0"  # Adjust this based on your device
BAUD_RATE = 115200  # Must match Arduino

# Open Serial Connection
try:
    ser = serial.Serial(USB_PORT, BAUD_RATE, timeout=1)
    time.sleep(2)  # Allow time for connection to stabilize
    print("Connected to Arduino over USB Serial!")

except serial.SerialException:
    print("ERROR: Could not open serial port. Check USB connection!")
    exit()


###################################################################################
```

The second portion sends the command to the arduino. Note that it is a self-contained method for this new device. To add this device to the code, all we needed to do was add the peripheral config and write this method.&#x20;

This method also reads out the debugging messages from the arduino. Once we actually get the spincoater working, this could be messages if the spincoater is malfunctioning.&#x20;

```python
def run_spincoater(self, job_input_parameters):
        
        ### This is where you write the firmware code to run the job. ##
        duration = job_input_parameters.get("time", 5)
        
        command = f"LED:{duration}\n"
        print(f"Sending: {command.strip()}")

        ser.write(command.encode())  # Send data over USB Serial

        # Read response from Arduino
        while True:
            response = ser.readline().decode('utf-8').strip()
            if response:
                print(f"Arduino: {response}")
            else:
                break  # Stop reading when no more data

        ### End of firmware code. ###


        ## Gather the user response [Optional]##
        self.set_job_status_label("Job Status: GPIO: OFF. Please type in response.")

        self.get_user_output_response()

        ## Submit the data back to the server ##
        final_output_parameters = {"response": self.output_text}

        self.submit_completed_response_to_server(final_output_parameters)
```

Finally, here is the full python code that runs on the raspberry PI:\
\
It does the following things:

1. Fetches jobs from AWS jobs queue
2. Displays the currently running job on the GUI. Also allows users to control whether jobs run automatically or require manual confirmation.&#x20;
3. Runs the job on the device
4. Sends completion details back to the AWS jobs queue.\


````python
```python
"""
This module contains the GUI for the job queue system.
"""

import time
import threading
import tkinter as tk
from tkinter import ttk
import sys
import requests
import gpiod
import serial

IO_PIN = 17  # Change to your GPIO pin number
chip = gpiod.Chip('gpiochip4')
line = chip.get_line(IO_PIN)

# Request the GPIO line for output
line.request(consumer="gpio_test", type=gpiod.LINE_REQ_DIR_OUT)

BASE_URL = "https://fbc4oam2we.execute-api.us-east-2.amazonaws.com/prod"

########################## PERIPHERAL CONFIGURATION ##########################
#### UART OVER USB SERIAL TO ARDUINO ####
# This may be different on a different RPI
USB_PORT = "/dev/ttyACM0"  # Adjust this based on your device
BAUD_RATE = 115200  # Must match Arduino

# Open Serial Connection
try:
    ser = serial.Serial(USB_PORT, BAUD_RATE, timeout=1)
    time.sleep(2)  # Allow time for connection to stabilize
    print("Connected to Arduino over USB Serial!")
except serial.SerialException:
    print("ERROR: Could not open serial port. Check USB connection!")
    sys.exit()

###################################################################################



def get_next_job():
    """Fetch the next job from the queue."""
    endpoint = f"{BASE_URL}/jobs/next"
    try:
        response = requests.get(endpoint)
        response.raise_for_status()
        return response.json()
    except requests.exceptions.RequestException as err:
        print(f"Error fetching next job: {err}")
        return None

def send_job_completion(job_id, output_parameters):
    """Send job completion data to the server."""
    endpoint = f"{BASE_URL}/job_completion"
    data = {
        "job_id": job_id,
        "status": "completed",
        "output_parameters": output_parameters
    }
    try:
        response = requests.post(endpoint, json=data)
        response.raise_for_status()
        print("Job completion posted successfully.")
    except requests.exceptions.RequestException as err:
        print(f"Error posting job completion: {err}")

class JobGUI:
    """Class to manage the GUI for the job queue system."""
    def __init__(self, root):
        """Initialize the JobGUI class."""

        # Google code guidelines recommend fewer class variables
        # (I have 17, they recommend 7 or fewer)
        # However, I believe this is the most
        # efficient way to manage the GUI

        self.root = root
        self.root.title("Job Monitor")

        self.auto_run = tk.BooleanVar(value=True)

        self.auto_run_switch = ttk.Checkbutton(root, text="Auto-run Jobs",
                                               variable=self.auto_run,
                                               command=self.toggle_approve_deny_buttons)
        self.auto_run_switch.pack()

        self.job_id_label = ttk.Label(root, text="Current Job ID: ", font=("Arial", 14))
        self.job_id_label.pack()
        self.job_id_label.pack_forget()

        self.system_status_label = ttk.Label(root,
                                             text="System Status: Waiting for job...",
                                             font=("Arial", 14))
        self.system_status_label.pack()

        self.input_param_label = ttk.Label(root, text="Input parameters: ",
                                           font=("Arial", 14))
        self.input_param_label.pack()
        self.input_param_label.pack_forget()

        self.job_status = ttk.Label(root, text="Job Status: LED OFF",
                                    font=("Arial", 14))
        self.job_status.pack()
        self.job_status.pack_forget()

        self.approve_button = ttk.Button(root, text="Approve Job",
                                         command=self.run_job)
        self.approve_button.pack()
        self.approve_button.pack_forget()

        self.deny_button = ttk.Button(root, text="Deny Job",
                                      command=self.deny_job)
        self.deny_button.pack()
        self.deny_button.pack_forget()

        self.input_label = ttk.Label(root, text="Enter response:",
                                     font=("Arial", 14))
        self.input_entry = ttk.Entry(root, font=("Arial", 14))
        self.input_entry.bind("<Return>",
                              lambda event: self.submit_textbox_response())
        self.submit_button = ttk.Button(root, text="Submit",
                                        command=self.submit_textbox_response)

        self.input_label.pack_forget()
        self.input_entry.pack_forget()
        self.submit_button.pack_forget()

        self.job = None
        self.job_running_on_machine = False
        self.running = True
        self.output_text = None
        self.output_text_avail_semaphore = threading.Semaphore(0)
        self.check_for_jobs()

    def check_for_jobs(self):
        """Check for new jobs in the queue."""
        if self.running:
            job = get_next_job()
            if job:
                self.job = job
                self.job_id_label.config(
                    text=f"Current Job ID: {self.job.get('job_id', 'unknown')}")
                self.job_id_label.pack()
                self.input_param_label.config(
                    text=f"Input Params: {self.job.get('input_parameters', {})}")
                self.input_param_label.pack()
                if self.auto_run.get():
                    self.run_job()
                else:
                    self.system_status_label.config(
                        text="System Status: Job available. Approve or Deny?")
                    self.approve_button.pack()
                    self.deny_button.pack()
            else:
                self.root.after(5000, self.check_for_jobs)

    def toggle_approve_deny_buttons(self):
        """Toggle the visibility of approve and deny buttons."""
        if self.auto_run.get():
            self.approve_button.pack_forget()
            self.deny_button.pack_forget()

            # we also want the job to run automatically if we just
            # turned on auto-run and the job was already loaded into memory.
            self.run_job()
        elif self.job and not self.job_running_on_machine:
            self.approve_button.pack()
            self.deny_button.pack()

    def run_job(self):
        """Run the current job."""
        if not self.job:
            return

        self.approve_button.pack_forget()
        self.deny_button.pack_forget()

        job_input_parameters = self.job.get("input_parameters", {})
        self.system_status_label.config(text="System Status: Running job...")
        self.job_running_on_machine = True

        threading.Thread(target=self.run_spincoater,
                         args=(job_input_parameters,), daemon=True).start()

    def deny_job(self):
        """Deny the current job."""
        if self.job:
            send_job_completion(self.job["job_id"], {"info": "job_skipped"})
            self.system_status_label.config(
                text="System Status: Job Denied. Waiting for next job...")
            self.approve_button.pack_forget()
            self.deny_button.pack_forget()
            self.job_id_label.pack_forget()
            self.input_param_label.pack_forget()
            self.root.after(5000, self.check_for_jobs)

    def submit_textbox_response(self):
        """Submit the response from the textbox."""
        user_input = self.input_entry.get()
        self.input_entry.delete(0, tk.END)
        self.input_label.pack_forget()
        self.input_entry.pack_forget()
        self.submit_button.pack_forget()
        self.system_status_label.config(text="System Status: Text submitted...")
        self.output_text = user_input
        self.output_text_avail_semaphore.release()

    def submit_completed_response_to_server(self, output_parameters):
        """Submit the completed job response to the server."""
        if self.job:
            send_job_completion(self.job["job_id"], output_parameters)
            self.job = None
            self.job_id_label.pack_forget()
            self.job_id_label.config(text="Current Job ID: ")
            self.system_status_label.config(text="System Status: Waiting for job...")
            self.input_param_label.pack_forget()
            self.input_param_label.config(text="Input Parameters: ")
            self.job_status.pack_forget()
            self.job_status.config(text="Job Status:")
            self.job_running_on_machine = False
            self.toggle_approve_deny_buttons()
            self.root.after(5000, self.check_for_jobs)

    def stop(self):
        """Stop the GUI and release resources."""
        self.running = False
        line.release()

    def set_job_status_label(self, text):
        """Set the job status label text."""
        self.job_status.config(text=text)
        self.job_status.pack()

    def get_user_output_response(self):
        """Get the user output response."""
        self.input_label.pack()
        self.input_entry.pack()
        self.submit_button.pack()

        # we need to wait until the user has submitted a response...

        # this introduces a pylint warning, but it is necessary to
        # format the program in this way for better readability
        self.output_text_avail_semaphore.acquire()


    ##### ONLY EDIT THIS FUNCTION IF INTEGRATING A NEW TOOL ##################
    #### This is the function that will be edited to integrate new tools #####
    def run_led(self, job_input_parameters):
        """Run the LED job."""

        ### This is where you write the firmware code to run the job. ##
        line.set_value(1)  # Turn on GPIO
        self.set_job_status_label("Job Status: GPIO: ON")

        duration = job_input_parameters.get("time", 5)
        for i in range(duration, 0, -1):
            self.set_job_status_label(f"Job Status: GPIO: ON, Time remaining: {i} seconds")
            time.sleep(1)

        line.set_value(0)  # Turn off GPIO

        ### End of firmware code. ###

        ## Gather the user response [Optional]##
        self.set_job_status_label("Job Status: GPIO: OFF. Please type in response.")
        self.get_user_output_response()

        ## Submit the data back to the server ##
        final_output_parameters = {"response": self.output_text}
        self.submit_completed_response_to_server(final_output_parameters)

    def run_spincoater(self, job_input_parameters):
        """Run the spincoater job."""

        ### This is where you write the firmware code to run the job. ##
        duration = job_input_parameters.get("time", 5)
        command = f"LED:{duration}\n"
        print(f"Sending: {command.strip()}")
        ser.write(command.encode())  # Send data over USB Serial

        # Read response from Arduino
        while True:
            response = ser.readline().decode('utf-8').strip()
            if response:
                print(f"Arduino: {response}")
            else:
                break  # Stop reading when no more data

        ### End of firmware code. ###


        ## Gather the user response [Optional]##
        self.set_job_status_label("Job Status: GPIO: OFF. Please type in response.")

        self.get_user_output_response()

        ## Submit the data back to the server ##
        final_output_parameters = {"response": self.output_text}

        self.submit_completed_response_to_server(final_output_parameters)


    ###########################################################################



if __name__ == "__main__":
    root = tk.Tk()
    gui = JobGUI(root)
    try:
        root.mainloop()
    except KeyboardInterrupt:
        gui.stop()
        ser.close()
        line.release()
        print("Exiting program")

```

````

This code passes the majority of pylint/google code guidelines. The remaining issue are either due to my editor environment not having the raspberry pi libraries (not an issue on the actual PI) or other minor details. I have addressed why I made these design decisions in the comments.&#x20;

<figure><img src="../../.gitbook/assets/image (162).png" alt=""><figcaption></figcaption></figure>

##

##

## Roadmap to project completion

**Weeks 7–9: System Integration and Spin Coater Automation**&#x20;

#### **Week 7: Microcontroller Integration**

* Finalize the physical connection between the Raspberry Pi and the spin coater.
* Write and test code on the Raspberry Pi to interface with the microcontroller:
  * Ensure commands (e.g., start, stop) are executed reliably.
* This will be done on the arduino that is running the spincoater firmware, but not actually connected to the spincoater (we don't want to take our only spincoater offline).&#x20;

**Justification:** This step is crucial for automating the spin coater.

***

#### **Week 8: End-to-End Testing**

* Test the full data flow:
  1. Create a job using Postman.
  2. Fetch the job on the Raspberry Pi.
  3. Execute the job on the spin coater.
  4. Verify that the job completion status is updated in AWS.
* Debug and address issues related to:
  * Data flow
  * Timing
  * Physical connections

**Justification:** This will be the first test of the entire system.

***

#### **Week 9: Redundancy and Local Job Creation**

* Add functionality to the Raspberry Pi UI to:
  * Allow users to create jobs locally.
  * Optionally enqueue these jobs in AWS.
* Test the local job creation and execution workflow.

**Justification:** While local job creation is a useful feature, it is not essential, so it is scheduled toward the end.

**Weeks 10–12: Optimization, Documentation, and Deployment**

#### **Week 10: Optimization**

* Optimize the Raspberry Pi code for performance and reliability:
  * Handle API timeouts or failures gracefully.
  * Add retry logic for API calls.
* Refine the UI for user-friendliness based on feedback from initial users.

**Justification:** Optimization is crucial for future scalability.

***

#### **Week 11: Documentation and Training**

* Write documentation for:
  * Setting up the Raspberry Pi for a new tool.
  * Modifying microcontroller interface code for different devices.
  * AWS infrastructure setup and API details.
* Conduct training or create tutorials to help others replicate the system.

**Justification:** Proper documentation ensures long-term maintainability and scalability.

***

#### **Week 12: Final Testing and Deployment**

* Perform **stress testing** by enqueueing multiple jobs and running them sequentially.
* Validate the system using real-world scenarios.
* Deploy the solution to fully automate the spin coater.

**Justification:** This final phase ensures the system is robust and ready for production use.





**New documentation after first submission:**

Here is the updated driver code that runs on the RPI:

This code is run on the RPI to control the spincoater. It simply send messages over UART with the RPM value, the time value, and the start command.&#x20;

```python
def run_spincoater(self, job_input_parameters):
        """Run the spincoater job."""

        ### This is where you write the firmware code to run the job. ##
        rpm = job_input_parameters.get("rpm", 1000)
        duration = job_input_parameters.get("time", 5)

        # Send RPM command
        rpm_command = f"RPM:{rpm}\n"
        print(f"Sending: {rpm_command.strip()}")
        ser.write(rpm_command.encode())
        time.sleep(0.5)  # Small delay to ensure command is processed

        # Send Time command
        time_command = f"TIME:{duration}\n"
        print(f"Sending: {time_command.strip()}")
        ser.write(time_command.encode())
        time.sleep(0.5)  # Small delay to ensure command is processed

        # Send Start command
        start_command = "START\n"
        print(f"Sending: {start_command.strip()}")
        ser.write(start_command.encode())

        # Read response from Arduino
        while True:
            response = ser.readline().decode('utf-8').strip()
            if response:
                print(f"Arduino: {response}")
            else:
                break  # Stop reading when no more data

        ### End of firmware code. ###


        ## Gather the user response [Optional]##
        self.set_job_status_label("Job Status: GPIO: OFF. Please type in response.")

        self.get_user_output_response()

        ## Submit the data back to the server ##
        final_output_parameters = {"response": self.output_text}

        self.submit_completed_response_to_server(final_output_parameters)
```



Here is the code that will run on the arduino. Notice that only a section was added for the USB UART interface.&#x20;

```cpp
#include <LiquidCrystal.h>
#include <Servo.h>


#define PIN_RS 10
#define PIN_RW 11
#define PIN_E 12
#define PIN_D4 2
#define PIN_D5 3
#define PIN_D6 4
#define PIN_D7 5

#define PIN_RPM_UP    15
#define PIN_RPM_DOWN  14
#define PIN_TIME_UP   21
#define PIN_TIME_DOWN 20

#define PIN_START 17

#define PIN_MOTOR 9


void setup() {
  Serial.begin(115200);
  pinMode(PIN_RPM_UP, INPUT_PULLUP);
  pinMode(PIN_RPM_DOWN, INPUT_PULLUP);
  pinMode(PIN_TIME_UP, INPUT_PULLUP);
  pinMode(PIN_TIME_DOWN, INPUT_PULLUP);
  pinMode(PIN_START, INPUT_PULLUP);
}

void loop() {
  
  auto lcd = LiquidCrystal(PIN_RS, PIN_RW, PIN_E, PIN_D4, PIN_D5, PIN_D6, PIN_D7);

  Servo servo;

  servo.attach(PIN_MOTOR);
  servo.writeMicroseconds(1000);

  lcd.begin(16, 2);
  lcd.clear();

  bool prev_spinning = false;
  long long prev_rpm = 3000;
  long long prev_duration = 30;
  long long prev_progress = 0;

  long long rpm = 3000;
  long long duration = 30;
  long long progress = 0;
  long long period = 1000;

  lcd.setCursor(0, 0); lcd.print("RPM: "); lcd.print(rpm);
  lcd.setCursor(0, 1); lcd.print("Duration: "); lcd.print(duration);

  bool prev_button_states[5] = { false, false, false, false };
  bool button_states[5] = { false, false, false, false };

  long long start_time = 0;

  bool spinning = false;

  while (true) {
    button_states[0] = digitalRead(PIN_RPM_UP);
    button_states[1] = digitalRead(PIN_RPM_DOWN);
    button_states[2] = digitalRead(PIN_TIME_UP);
    button_states[3] = digitalRead(PIN_TIME_DOWN);
    button_states[4] = digitalRead(PIN_START);

    bool changed = false;

    bool pushed[5] = { false, false, false, false };
    for (int i = 0; i < 5; ++i) {
      pushed[i] = !button_states[i] && prev_button_states[i];
      if (pushed[i]) {
        changed = true;
        delay(100);
      }
    }

    if (spinning) {
      progress = (millis() - start_time) / 1000;
      if ((millis() - start_time) > duration * 1000) {
        spinning = false;
      }
      if (pushed[4]) {
        spinning = false;
        delay(100);
      }
    } 
    else {
      if (pushed[0]) {
        rpm += 100;
        delay(100);
      } 
      else if (pushed[1]) {
        rpm -= 100;
        delay(100);
      }

      if (pushed[2]) {
        duration += 1;
        delay(100);
      }
      else if (pushed[3]) {
        duration -= 1;
        delay(100);
      }

      if (pushed[4]) {
        start_time = millis();
        spinning = true;
        delay(100);
      }


      // Now, read the USB UART serial input and parse the command
      if (Serial.available()) {
        String command = Serial.readStringUntil('\n');  // Read full command

        // Print received command to Serial Monitor (Debugging)
        Serial.print("[DEBUG] Received: ");
        Serial.println(command);

        if (command.startsWith("RPM:")) {
          rpm = command.substring(4).toInt();  // Extract the integer

          Serial.print("[DEBUG] Parsed RPM: ");
          Serial.print(rpm);
          Serial.println(" RPM.");
        } 
        else if (command.startsWith("TIME:")) {
          duration = command.substring(5).toInt();  // Extract the integer

          Serial.print("[DEBUG] Parsed Duration: ");
          Serial.print(duration);
          Serial.println(" seconds.");
        } 
        else if (command.startsWith("START")) {
          start_time = millis();
          spinning = true;

          Serial.println("[DEBUG] Starting the spin...");
        } 
        else {
          Serial.println("[DEBUG] Invalid command received.");
        }
      }

    }

    memcpy(prev_button_states, button_states, sizeof(button_states));

    if (prev_spinning != spinning || prev_progress != progress || prev_rpm != rpm || prev_duration != duration) {
      prev_spinning = spinning;
      prev_rpm = rpm;
      prev_duration = duration;
      prev_progress = progress;

      if (spinning) {
        lcd.clear();
        lcd.setCursor(0, 0); lcd.print("Spinning...");
        lcd.setCursor(0, 1); lcd.print(progress); lcd.print(" / "); lcd.print(duration); lcd.print(" s");
        period = map(rpm, 0, 12000, 1000, 2000);
        servo.writeMicroseconds(period);
      } 
      else {
        lcd.clear();
        lcd.setCursor(0, 0); lcd.print("RPM: "); lcd.print(rpm);
        lcd.setCursor(0, 1); lcd.print("Duration: "); lcd.print(duration);
        servo.writeMicroseconds(1000);
      }
    }
  }
}


```

The user also has the ability to create a job locally directly on the RPI. If the RPI is not connected to the internet, the job will just run locally. This is a redundancy feature.&#x20;

See this feature in action here: [https://drive.google.com/file/d/1zMtn7b1HO5kucqc2ypLdfpWQ1Wd0AuPt/view?usp=drive\_link](https://drive.google.com/file/d/1zMtn7b1HO5kucqc2ypLdfpWQ1Wd0AuPt/view?usp=drive_link)



Note that if the RPI is indeed able to connect to the AWS database, the job will be uploaded to the database for tracking purposes.&#x20;



The specific fields are based on the template data when integrating the tool. No manual editing of the GUI code is required when integrating a new tool. You can see that the spincoater and LED connected to RPI IO are already implemented.&#x20;

<figure><img src="../../.gitbook/assets/image (179).png" alt=""><figcaption></figcaption></figure>

More details about this will be provided once development is complete.&#x20;
