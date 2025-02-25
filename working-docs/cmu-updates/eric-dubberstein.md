# Eric Dubberstein

**Weekly updates for 2/23:**



> Nice work. I am def interested in using the GUI, although I don't have a linux machine on me so I might have to borrow the RPi from u haha. As we discussed on discord, feel free to create a folder for the files you write, and then just put that link in this update and the documentation, so that everything is more concise and you don't have to paste your script in multiple places, like here, db documentation, etc.
>
> By the way great work keeping the documentation updated. I would say add some more explanation of how the code works, maybe some pseudocode or some high level explanation that tells people what is going on with each new step.





Progress for this week: I wrote a Tkinter GUI for the raspberry PI. Here is a demo video:

[https://drive.google.com/file/d/1urpoj3qYbh18Ti-hXBs-8LBYLlDNa4fD/view?usp=drive\_link](https://drive.google.com/file/d/1urpoj3qYbh18Ti-hXBs-8LBYLlDNa4fD/view?usp=drive_link)



The python code is below. Here is the key piece: only one function will need to be modified to make it work with a different tool (it is clearly marked in the code with comments). This is critical for extensibility of this system. The code was written with about 20% chat GPT (it took care of all of the boilerplate code), but it needed significant tweaks by hand.&#x20;

```python
import gpiod
import time
import requests
import threading
import tkinter as tk
from tkinter import ttk

IO_PIN = 17  # Change to your GPIO pin number
chip = gpiod.Chip('gpiochip4')
line = chip.get_line(IO_PIN)

# Request the GPIO line for output
line.request(consumer="gpio_test", type=gpiod.LINE_REQ_DIR_OUT)

BASE_URL = "https://fbc4oam2we.execute-api.us-east-2.amazonaws.com/prod"

def get_next_job():
    """Fetch the next job from the queue."""
    endpoint = f"{BASE_URL}/jobs/next"
    try:
        response = requests.get(endpoint)
        response.raise_for_status()
        return response.json()
    except requests.exceptions.RequestException as e:
        print(f"Error fetching next job: {e}")
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
    except requests.exceptions.RequestException as e:
        print(f"Error posting job completion: {e}")

class JobGUI:
    def __init__(self, root):
        self.root = root
        self.root.title("Job Monitor")
        
        self.auto_run = tk.BooleanVar(value=True)

        self.auto_run_switch = ttk.Checkbutton(root, text="Auto-run Jobs", variable=self.auto_run, command=self.toggle_approve_deny_buttons)
        self.auto_run_switch.pack()
        
        self.job_id_label = ttk.Label(root, text="Current Job ID: ", font=("Arial", 14))
        self.job_id_label.pack()
        self.job_id_label.pack_forget()
        
        self.system_status_label = ttk.Label(root, text="System Status: Waiting for job...", font=("Arial", 14))
        self.system_status_label.pack()
        
        self.input_param_label = ttk.Label(root, text="Input parameters: ", font=("Arial", 14))
        self.input_param_label.pack()
        self.input_param_label.pack_forget()
        
        self.job_status = ttk.Label(root, text="Job Status: LED OFF", font=("Arial", 14))
        self.job_status.pack()
        self.job_status.pack_forget()
        
        self.approve_button = ttk.Button(root, text="Approve Job", command=self.run_job)
        self.approve_button.pack()
        self.approve_button.pack_forget()
        
        self.deny_button = ttk.Button(root, text="Deny Job", command=self.deny_job)
        self.deny_button.pack()
        self.deny_button.pack_forget()
        
        self.input_label = ttk.Label(root, text="Enter response:", font=("Arial", 14))
        self.input_entry = ttk.Entry(root, font=("Arial", 14))
        self.input_entry.bind("<Return>", lambda event: self.submit_textbox_response())
        self.submit_button = ttk.Button(root, text="Submit", command=self.submit_textbox_response)
        
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
        if self.running:
            job = get_next_job()
            if job:
                self.job = job
                self.job_id_label.config(text=f"Current Job ID: {self.job.get('job_id', 'unknown')}")
                self.job_id_label.pack()
                #self.input_param_label.config(text=f"Time: {self.job.get('input_parameters', {}).get('time', 5)} seconds")
                self.input_param_label.config(text=f"Input Params: {self.job.get('input_parameters', {})}")
                self.input_param_label.pack()
                if self.auto_run.get():
                    self.run_job()
                else:
                    self.system_status_label.config(text="System Status: Job available. Approve or Deny?")
                    self.approve_button.pack()
                    self.deny_button.pack()
            else:
                self.root.after(5000, self.check_for_jobs)
    
    def toggle_approve_deny_buttons(self):
        if self.auto_run.get():
            self.approve_button.pack_forget()
            self.deny_button.pack_forget()
            
            # we also want the job to run automatically if we just turned on auto-run and the job was already loaded into memory.
            self.run_job()
        elif self.job and not self.job_running_on_machine:
            self.approve_button.pack()
            self.deny_button.pack()
    
    def run_job(self):
        if not self.job:
            return
        
        self.approve_button.pack_forget()
        self.deny_button.pack_forget()
        
        job_input_parameters = self.job.get("input_parameters", {})

        self.system_status_label.config(text="System Status: Running job...")

        self.job_running_on_machine = True
        
        
        ##############################
        # Run the job in a new thread
        
        threading.Thread(target=self.run_led, args=(job_input_parameters,), daemon=True).start()



    
    def deny_job(self):
        if self.job:
            send_job_completion(self.job["job_id"], {"info": "job_skipped"})
            self.system_status_label.config(text="System Status: Job Denied. Waiting for next job...")
            self.approve_button.pack_forget()
            self.deny_button.pack_forget()
            self.job_id_label.pack_forget()
            self.input_param_label.pack_forget()
            self.root.after(5000, self.check_for_jobs)
    
    def submit_textbox_response(self):
        user_input = self.input_entry.get()
        self.input_entry.delete(0, tk.END)
        self.input_label.pack_forget()
        self.input_entry.pack_forget()
        self.submit_button.pack_forget()
        self.system_status_label.config(text="System Status: Text submitted...")
        self.output_text = user_input
        self.output_text_avail_semaphore.release()


    def submit_completed_response_to_server(self, output_parameters):
        if self.job:
            send_job_completion(self.job["job_id"], output_parameters)

            # Reset job variables
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
        self.running = False
        line.release()

    def set_job_status_label(self, text):
        self.job_status.config(text=text)
        self.job_status.pack()

    ## This function will only return when the user has submitted a response.
    def get_user_output_response(self):
        self.input_label.pack()
        self.input_entry.pack()
        self.submit_button.pack()

        self.output_text_avail_semaphore.acquire() # we need to wait until the user has submitted a response... 


    ##### ONLY EDIT THIS FUNCTION IF INTEGRATING A NEW TOOL ##################
    #### This is the function that will be edited to integrate new tools #####
    def run_led(self, job_input_parameters):
        
        ### This is where you write the firmware code to run the job. ##
        line.set_value(1)  # Turn on GPIO
        self.set_job_status_label("Job Status: GPIO: ON")

        t = job_input_parameters.get("time", 5)
        
        for i in range(t, 0, -1):
            self.set_job_status_label("Job Status: GPIO: ON, Time remaining: " + str(i) + " seconds")
            time.sleep(1)
        
        line.set_value(0)  # Turn off GPIO

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
        print("Exiting program")

```

This took longer than expected with testing, so the local lob creation has been pushed to week 9 (this task is listed in both weeks 5 and 9 on my roadmap).

The database section of the documentation has also been updated.

Tasks are updated in project tracker.

Roadblocks:&#x20;

* I need to meet with the spincoater team to get started on interfacing with the spincoater. Solution: I have a meeting scheduled for Tuesday afternoon.

Plans for next week:

Week 6 tasks (Some of these may bleed into week 7, but this is planned for in the project plan roadmap)

* Write Python code to send job parameters to the spin coater microcontroller:
  * Simulate button presses using GPIO pins (might be better way to do this, will talk to spin coater team)
* Implement monitoring for job execution and update the status locally.
  * i.e. store the status of the current job locally before sending to AWS.
* Integrate the POST /job\_completion  API call to report job results to AWS (this is already complete at the start of the week!!)
* Justification: this is the setup week for week 7. I will also try to start those tasks if I have time as those could be time consuming.





W**eekly updates for 2/16:**

The first thing I did this week was get a basic API test script written. See below. This script will be useful to ensure that the api is working if we make modifications in the future. It follows the standard job lifecycle.&#x20;

<figure><img src="../../.gitbook/assets/image (129) (1).png" alt=""><figcaption></figcaption></figure>

As you can see, it is currently passing.

<figure><img src="../../.gitbook/assets/image (130).png" alt=""><figcaption></figcaption></figure>

The next thing I did was all the work I had originally planned for next week (i.e. have the python script pull data from the AWS database when running on the raspberry pi)

<figure><img src="../../.gitbook/assets/image (131).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (132).png" alt=""><figcaption></figcaption></figure>

See this video for a demo. I am not talking during it because this is the video I plan to use for my presentation. I'll bring the raspberry pi to class for the presentation also, but I think it will be easier to just play the video and then I can focus on explaining it and everyone can see what I am doing much more clearly.

{% embed url="https://drive.google.com/file/d/1a-lWFI1BR4i7BwIaaq3hIeg65479_LDF/view?usp=drive_link" %}

thus, I've accomplished all of my goals that I had for myself this week



Roadblocks:&#x20;

No major roadblocks at this time. I will need to get in contact with the person in charge of the spin coater microcontroller code next week to start planning out how I will do the integration with the real spin coater. I don't recall his name, but I will get the ball rolling on this after class on tuesday.



Tasks for next week:&#x20;

For next week, I will start tackling the jobs in weeks 5 & 6 (I'm a week ahead!!)

Week 5 tasks (main focus. Will get these 100% done):

* Develop the GUI using Tkinter:
  * Display job details fetched from AWS.
  * Add buttons to start, stop, or skip jobs.
  * Include an interface for creating new jobs locally.
* If Tkinter GUI does not work well, write command line interface instead.
* Test GUI on the Raspberry Pi screen.
* Justification: GUI will be important for further testing. GUI development can take time so I set aside a whole week.

Week 6 tasks (will start working on these, but might not complete by end of this week. Key idea is to start working with spincoater team)

* Write Python code to send job parameters to the spin coater microcontroller:
  * Simulate button presses using GPIO pins (might be better way to do this, will talk to spin coater team)
* Implement monitoring for job execution and update the status locally.
  * i.e. store the status of the current job locally before sending to AWS.
* Integrate the POST /job\_completion  API call to report job results to AWS (this is already complete at the start of the week!!)
* Justification: this is the setup week for week 7. I will also try to start those tasks if I have time as those could be time consuming.







_**Weekly updates for 2/9:**_

Tasks I accomplished:

Database is set up and configured for api endpoints that are needed for the first demo. These are POST /jobs, GET /jobs/next, and POST /job\_completion. Full details of the implementation can be found in the database section of the documentation



Demo: Just photos for this week of sucessful api calls.

<figure><img src="../../.gitbook/assets/image (89).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (90).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (91).png" alt=""><figcaption></figcaption></figure>



Roadblocks:

No significant roadblocks. I just need to pick up the cable that got delivered before using the monitor



Plans for next week:

From schedule:

* Use Postman to test all API endpoints for job management.
* Populate DynamoDB with test jobs and verify the job lifecycle (enqueue → in progress → completion).
* Create a few basic automated tests
* Justification: Automated testing is extremely important for future reliability.

Additional tasks:

Although it is officially scheduled for week 4 on the project proposal, I will make sure I get a basic API fetch working on the raspberry pi to support my demo. My demo will have me sending an API request to postman on my computer that then turns on an LED (or changes the voltage on a multimeter).&#x20;



> Good work, I am wondering how this would work beyond the API get/post and postman interface? As in how does it connect to a low-level machine, I am assuming since it's a HTTP request it can be handled by something running on a port on the local machine somehow, but I am curious to find out more about how this is done.





_**Weekly updates for 2/2:**_

Tasks I accomplished:&#x20;

Physical hardware is set up. Raspberry PI is connected to spin coater microcontroller. I am able to send data to microcontroller using the Raspberry PI GPIO pins. I checked off these tasks in github progress tracker.&#x20;



See database section of gitbook for documentation.



Weekly demo:

[https://drive.google.com/file/d/1g-vEBh8HtQuMvDOqQpFuI3LrrTV60lJq/view?usp=drive\_link](https://drive.google.com/file/d/1g-vEBh8HtQuMvDOqQpFuI3LrrTV60lJq/view?usp=drive_link)



Roadblocks:&#x20;

I do not have a micro hdmi to mini hdmi cable needed to plug the portable monitor into the raspberry pi. Solution: This has been ordered on AMAZON and will arrive within the next week or so. For the meantime, I can just connec the cable to the monitor at my desk.&#x20;



Plans for next week:&#x20;

Set up AWS resources: Create DynamoDB tables for the job queue and logs.&#x20;

Configure S3 bucket (if needed) for job-related resources. Implement basic API Gateway endpoints using Lambda:&#x20;

`POST /jobs: Enqueue new jobs.`&#x20;

`GET /jobs/next: Fetch the next job.`&#x20;

`POST /jobs/completio`n: Update job completion status.

Deliverable: Can enqueue a job from POSTMAN on any computer to turn on the led (or change voltage on multimeter) connected to the GPIO pin on the raspberry PI.



> Good work. I think the cable should arrive by tomorrow or so, I will let you know. If you are stuck on AWS stuff let me know. I would say just create a free account, if not I can also give you access to the HackerFab account if needed.\
> \
> I like the weekly demo thing, I am going to suggest that to others as well. Now that the GPIO pins can be used to send data to the microcontroller, maybe you can even try modifying the microcontrollers spin-coater script actions based off the data received to the microcontroller from the raspberry pi. If this is the next step u are working on, that's great.







Mid week update 1/30:&#x20;

I got a basic test script running on the raspberry pi to turn a GPIO pin on and off

Roadblocks: There is no mini hdmi to mini hdmi cable to plug the raspberry pi directly into the portable monitor

I need headers to be able to connect the wires to the raspberry pi and the arduino (for the spincoater).







_**Weekly updates for 1/26:**_

My primary deliverable for this week was creating the plan for the rest of the semester for my role on the database team.&#x20;



Here is the proposal document: [https://docs.google.com/document/d/1SrD66bqmS1xxs2jt\_WWSY7eLr6vyDJxIB4dbMdbxkws/edit?usp=drive\_link](https://docs.google.com/document/d/1SrD66bqmS1xxs2jt_WWSY7eLr6vyDJxIB4dbMdbxkws/edit?usp=drive_link)



My roadblocks are as follows:&#x20;

1. The parts from the BOM outlined in the proposal document need to be acquired. Most of the parts should be ready to use by the end of class on Tuesday
2. I do not think there is a spot on the github documentation for the database team. I will ask my teammates on tuesday to get clarification on where to document how the system I am building works. Right now, all that documentation is done in the proposal document.&#x20;

Next week, I will follow week 1 of the project proposal document. Specifically, this is: \


Week 1: Hardware Setup

* Assemble and configure the Raspberry Pi 5:
* specifically:
  * Install Raspberry Pi OS on the microSD card...
  * Connect and test peripherals (monitor, keyboard, mouse).
  * Ensure the Raspberry Pi can connect to CMU WiFi or Ethernet.
* Prototype physical connections between the Raspberry Pi and the spin coater's microcontroller using the breadboard and jumper wires.
* NOTE: there is an extra spin coater microcontroller that I will be able to interface with



_Weekly updates for 1/19:_

On thursday after class, I met with the rest of the database team. We got the repo cloned on all of our machines and we outlined what we need to accomplish by the end of the week (1/19). Our task was to browse through the current working version of the website running locally on our machines and make a list (here in gitbook) about what could be improved as a new user that has not used the website before. My list is as follows:&#x20;

IDEAS FOR IMPROVMENTS:

On the homepage:&#x20;

1. change the name of the button "chip summary" to "See everyone's chips" or "All user's chips", etc. As a new user to the website I wasn't sure what "chip summary" was before I clicked on it.&#x20;



When I click "Input"

Then chose AluminumEtch from the dropdown menu and click submit,&#x20;

<figure><img src="../../.gitbook/assets/image (66).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (67).png" alt=""><figcaption></figcaption></figure>

I get the error as shown in the screenshot above. This is likely an edge case because I haven't added any chips yet.&#x20;



When I instead choose create a new chip, I am directed to this page:

<figure><img src="../../.gitbook/assets/image (68).png" alt=""><figcaption></figcaption></figure>

This page also is unintuitive as a new user. Why are there two submit buttons? My understanding is that you type in the number, hit submit, fill in the rest of the details, and hit submit again? All for the same chip? This is unintuitive and the first and second parts should be separate. Finally, when you hit the final submit button, there is no clear feedback that the data has been submited. The text is just cleared. There needs to be some feedback to the user (even just plain text that says "data submitted") when the form is submitted.&#x20;

There should also be a clear back button to go back to the main menu.&#x20;



Next, I went back to the homepage and clicked on search.&#x20;

<figure><img src="../../.gitbook/assets/image (69).png" alt=""><figcaption></figcaption></figure>

Here we have the same issue where we have two submit buttons after submitting the first form. It's not clear to the user what is supposed to be done. The first menu should be hidden after the first submit button is clicked.&#x20;



Next, I typed in a search chip number and clicked submit. I am then brought to an error page. This is clearly an issue that needs to be addressed.&#x20;

&#x20;![](<../../.gitbook/assets/image (71).png>)



It is also generally unclear what we are searching for when using this search tool.&#x20;



The chip summary page does appear to work as intended though, so that's good. ![](<../../.gitbook/assets/image (72).png>)



My plans for next week are TBD and will be decided after class on tuesday. It will likely include fixing a subset of the bugs I identified above.&#x20;



