# Eric Dubberstein

**Weekly update for 3/30:**



Progress for this week:

We are now able to control the spincoater from the API endpoint. This is the crux of the initial project proposal.&#x20;



Here is a video demo:&#x20;

[https://drive.google.com/file/d/1p8djwfYRjVoW6D\_y8B1DaZZaasztiDXw/view?usp=drive\_link](https://drive.google.com/file/d/1p8djwfYRjVoW6D_y8B1DaZZaasztiDXw/view?usp=drive_link)&#x20;



NOTE: The spincoater will not run at 1000 RPM. This is too low and is cut off. Send 5000RPM at least as the test RPM value.\


The following changes were made to the codebase this week:&#x20;

1. I updated the AWS lambda function to accept floating point numbers as inputs and to only fetch a certain machine’s job. The desired machine is added as a query parameter.

\


![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXf8Xe5eO5t3pMK954zwrK-KLGEWm_IJ9usjgEBX3Hu4jXyhQyIXVrYNnO7fK_FAXjOTGAEO-Qdd67lLEPOsUTyM5cYhd7DWjepBXLVbSXswoGeDg-GqAzodFBiLJBPGtEpVjWFS?key=4ugOZ0-Ag2fH7nqoUn7K_qHU)

\


2. I added more comments to the arduino code and added a message to communicate from the arduino to the RPI that says whether the spinning occurred successfully or not.&#x20;

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXd_D97NyxuCdNk6XSXCSbFcvsvCqo7AOQm6uNnowDdOQ1ZGaimkmFhWWjH7UCG1EiQh7JTsbbb-xgsKb3EbuuFc2T8jYuFy0VytxOW6-XfpnrmpVSjjV44grx8i48vYyj9lzyXaUQ?key=4ugOZ0-Ag2fH7nqoUn7K_qHU)

\


3. To accomplish the tasks that were originally outlined in week 10, I made the following modification: When the spin coater job finishes running, the arduino immediately sends a message to the RPI that the job was successfully completed instead of the user having to type in a completion message into the UI. The need to manually type in the completion status contributed to a poor user interface experience before. In addition, gentle failure logic is already present in the api requests, so there is no additional work to be done for that requirement.&#x20;

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXftH0YYWzY2qVcYcEVT5DUmhoBevBtcUCzogpTydLN0oQ33pWgHYPX2IpDzYJJx7UdEz8z6yJxit1k4JZYjgUbHSA01kMhg2Wv25mUMXJyen1qwBOgjAbXYomK9hoOloZE71nXb_g?key=4ugOZ0-Ag2fH7nqoUn7K_qHU)

\


4. Although it wasn’t originally outlined in my plan for this week, we also made significant progress by integrating the lithostepper to this framework. I was able to provide carson with the following snippet of code. He was easily able to add the stepper to this system with no major issues. This clearly demonstrates the robust design and extensibility of this lab communication framework.&#x20;

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXdODCZSlGVQzFr5j2nPKkYNKW9nUQzIP9724AyEgNvZdbvTfMMPqO3qvp8vQjGt55eGEJHne-m4GSyKy5uPQJ0QZ8ojywGG3nCSzfgICDlNSBaVFmJpUBE2QOhVc81f6elpkrHPCg?key=4ugOZ0-Ag2fH7nqoUn7K_qHU)

\


These were the tasks from this week:

Week 8: End-to-End Testing

* Test the full data flow:
  * Create a job using Postman.
  * Fetch the job on the Raspberry Pi.
  * Execute the job on the spin coater.
  * Verify job completion status is updated in AWS.
* Debug and address issues in data flow, timing, or physical connections.
* Justification: This will be the first test of the whole system.

1. Tasks from Week 10:

Week 10: Optimization

* Optimize the Raspberry Pi code for performance and reliability:
  * Handle API timeouts or failures gracefully.
  * Add retry logic for API calls.
* Refine the UI for user-friendliness based on feedback from initial users.
* Justification: This will be important for future scalability.

\


Plan for next week:

The only two weeks left on the original plan are for documentation and training. It doesn’t make sense to complete these two steps while work is still being done, so I will leave that work until after demo #2.&#x20;

1. To finish integrating the stepper, we need to have a way to communicate files alongside the job commands. For the stepper specifically, this will be the images of the patterns. We want to keep the overall system as general as possible, so it will work as follows:&#x20;

* In the POST jobs endpoint, you’ll be able to specify the file you’d like to include. It will then be uploaded to the AWS server.&#x20;
* I haven’t fully researched how the solution will work, but it may involve an additional API call.&#x20;
* The machine will then receive the URL for the file in the input parameters list and can download the file to complete the job.&#x20;
* The file will then be deleted on job completion to reduce storage usage.&#x20;
* I will provide exact specifications in the documentation for how to use this system

2. To better demonstrate the capabilities of the system that I have developed this semester, we need a way for people to use it from the web interface. So, I will create a basic page on the website that allows the user to control the spin coater. This webpage will allow the user to specify the time and the RPM. This webpage will call the API endpoints that have already been created. This will be done in time for the second demo
3. I will start working on the presentation for the third demo

\


Roadblocks:&#x20;

1. AWS expiring soon: Akshunna said he’d look into it.&#x20;
2. I’ll need to discuss with Arinud if I will be allowed to hook my system into the actual spin coater before the end of the semester.&#x20;

\


Github progress tracker is up to date

Documentation is up to date&#x20;



> The spin coater one nearing full completion is amazing to see. Just writing down some of the stuff I remember from our discussion in class: for the stepper, we discussed that some sort of blob/object storage would be good as a permanent solution, and this way we can independently track which patterns were uploaded, store them in a hash table (so that repeating pattern images don't take up extra storage), etc. But for now, the best approach seems to be to have a temporary storage on the server which runs db.hackerfab.org, and this temporary storage will have a file endpoint from where the stepper can retrieve the pattern image. Maybe the storage of which pattern was used can be done on the stepper side, or again we can have a hash, and if the hash is new (new pattern image), we can store that image only. Since more than likely there will not be many new patterns, just repeats of existing ones for now.









**Weekly updates for 3/23:**

Gitbook has refused to save my work multiple times because there are too many open change requests. For now, I will be using google docs for my weekly update until A-V approves my change requests.&#x20;



Read my gitbook update below (hopefully this saves)

[https://docs.google.com/document/d/1t3JHU0V2qEjshk2x43ekmjDYdkZ4ChMUf5-mbo72TLA/edit?usp=sharing](https://docs.google.com/document/d/1t3JHU0V2qEjshk2x43ekmjDYdkZ4ChMUf5-mbo72TLA/edit?usp=sharing)



I tried to paste the google doc below:

Gitbook has discarded my work multiple times because there are too many change requests.&#x20;

My update is going to be on google docs for now.&#x20;

\


Progress for this week:

I got local job creation working on the arduino.

\


Here is a video demo:&#x20;

Note that the job doesn’t actually do anything. Anirud is going to have the spincoater set up tomorrow, so I will be able to test it for the next week’s demo.&#x20;

[https://drive.google.com/file/d/1zMtn7b1HO5kucqc2ypLdfpWQ1Wd0AuPt/view?usp=drive\_link](https://drive.google.com/file/d/1zMtn7b1HO5kucqc2ypLdfpWQ1Wd0AuPt/view?usp=drive_link)

\


All of the changes to the lab\_com\_gui.py file are in the repo (under the EricLabComV1 branch)

\


Here are the highlights of the changes:

1. New GUI buttons added. Note that these buttons are NOT hardcoded.&#x20;

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeqYvBMux86FVt9pyPkwEwy7w0Tgg-Vb00bVL9l4dALU2LhHj06ESMZ2qW41cg19MsAgbbyCrzFTm7dNpBGDfcLxzkenRkwyxtAK_-h7cek4Z8392bx5cIMLgKRHLK_DbZejT0Aog?key=yy18A-W-EUDVk5VHIwu4Wik0)

\


2. Instead, the buttons are configured in one spot near other parameters that will be changed when a new tool is integrated. I am still improving this system. The documentation will be improved for this once it is finalized.&#x20;

\


![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXfKG54Ln_7sPsRpACIITL28f88o4x3ntOMGu95xLnnGV5rERLngcUL2iMFRKxxbL-dB0Khf3z3H7FoXwfVUkrjsSgxG8AA5d4WdPsuv73x7cMuRKOIMZ-d2wAatPNViXAvIXdOhmw?key=yy18A-W-EUDVk5VHIwu4Wik0)

\
\


Lastly, there is some logic to show and hide the UI elements as appropriate and complete the request after the user types in the details.&#x20;

\


![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXcvYyrXkp5JSwOtyka7rrynCUtSW2YKFggc1d2RMppNkE-Lby-dTnV1OFz0DT366N_gcUl3c-8eRU_BOKhNdV2UDefPIXutFRAzRA-ti68JTDdhTZ-8CES-xC9CHDvNjURhjpGx?key=yy18A-W-EUDVk5VHIwu4Wik0)

\
\
\
\
\


Note that if the RPI is not connected to the database, the job will still be run locally.&#x20;

\


The documentation is up to date (although it will be improved once I have finalized the code structure).&#x20;

\


The gitbook project tracker is up to date.&#x20;

\
\
\


I am unable to complete the tasks from week 8 outlined below (testing the full system with the spincoater) because arinud did not finish making the mock spin coater yet. He said he will have it completed by tomorrow (3/24) and I will be able to test the full system then.

Plan for next week:

1. original tasks from week 8 since I will have the spincoater to test on:

Week 8: End-to-End Testing

* Test the full data flow:
*
  * Create a job using Postman.
  * Fetch the job on the Raspberry Pi.
  * Execute the job on the spin coater.
  * Verify job completion status is updated in AWS.
* Debug and address issues in data flow, timing, or physical connections.
* Justification: This will be the first test of the whole system.

1. Tasks from Week 10:

Week 10: Optimization

* Optimize the Raspberry Pi code for performance and reliability:
*
  * Handle API timeouts or failures gracefully.
  * Add retry logic for API calls.
* Refine the UI for user-friendliness based on feedback from initial users.
* Justification: This will be important for future scalability.

In addition, I will meet with stepper team on monday 3/24 to look into integrating this system with the spincoater.

Feedback from documentation/presentation:

The feedback for the documentation and presentation were positive, but there are a few things to work on moving forward:

1. Improve communication with other teams, specifically regarding need for "real-time" data gathering. AV: Who should I meet with in the lab to discuss this?
2. Improving documentation specifically related to how to implement a new machine into the framework: I will make sure to do this as part of the tasks in week 11.&#x20;

Roadblocks:&#x20;

1. Need access to spincoater (Anirud will have it done by EOD tomorrow, 3/24)
2. Need to get in contact with other teams who want a continuous data stream (this is question for AV: who should I reach out to?)&#x20;
3. Need to have gitbook changes accepted & cleaned up.









**Weekly updates for 3/16:**&#x20;

Progress for this week: Existing arduino code for spincoater firmware is integrated with the USB communication to the RPI.&#x20;



Here is the updated driver code that runs on the RPI:

This code is run on the RPI to control the spincoater. It simply sends messages over UART with the RPM value, the time value, and the start command.&#x20;

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



**ROADBLOCKS:**&#x20;

1. **I need to get access to an additional spincoater to test my design. Arinud said he can rig one up quick. I will reach out to him this week to get this completed.**&#x20;



**Plans for next week:**

**The project is going pretty well (on schedule), so I am going to tackle two weeks this next week.**&#x20;



Week 8: End-to-End Testing

* Test the full data flow:
*
  * Create a job using Postman.
  * Fetch the job on the Raspberry Pi.
  * Execute the job on the spin coater.
  * Verify job completion status is updated in AWS.
* Debug and address issues in data flow, timing, or physical connections.
* Justification: This will be the first test of the whole system.

Week 9: Redundancy and Local Job Creation

* Add functionality to the Raspberry Pi UI to:
*
  * Allow users to create jobs locally.
  * Optionally enqueue these jobs in AWS.
* Test the local job creation and execution workflow.
* Justification: Local job creation is a nice feature to have but not absolutely necessary, so it is put towards the end of the schedule.



**The goals in week 8 will be simple to accomplish because it just requires testing once I get access to the additional spincoater. I want to have these accomplished for the second demo.**&#x20;

Thus, I will work on local job creation on the RPI in parallel.



Documentation and project tracker is also updated.





**Weekly updates for 3/2:**

Progress for the week: Arduino connected to full system. In other words, we can now control the arduino via AWS requests.&#x20;



Important details:&#x20;

I spent 5+ hours attempting to get the raspberry PI to arduino connection to work using the GPIO uart TX and RX on the rasberry pi. Ultimately, I was unsuccessful and realized that it would be much easier (and scalable in the future because we have multiple USB ports) to simply connect the arduino via USB and use the UART through the USB cable.&#x20;



Here are the reasons why we are using UART over USB instead of using the GPIO TX and RX on the rasperry PI and arduino. (Also included in documentation).&#x20;

The raspberry PI runs on 3.3V while the arduino runs on 5V. This presents a problem for the signal from the arduino to the RPI. We have to use either a level shifter or a voltage divider. I didn't have a level shifter on hand, so I tried building a voltage divider using a 20k and 10k resistor. This divided the voltage as needed, but it's possible this was part of the issue. Here is an image of the basic voltage divider I tried.&#x20;

<figure><img src="../../.gitbook/assets/IMG_7754 (1).JPG" alt="" width="375"><figcaption></figcaption></figure>



I also attempted to bitbang a UART connection between the RPI and arduino. This was also unsuccessful. After a bit of research, it looks like this is because Raspberry PI OS is not a RTOS (real time operating system), so the timing is not precise enough to bitbang a UART connection.&#x20;



At this point I was pretty stumped, so I searched around the internet a bit. I then realized it would be MUCH MUCH easier to simply use UART over the USB connection between the two devices. The reasons why I settled with this approach are as follows:

1. I was able to get UART over USB from RPI to arduino working, but I was not able to get it working using the GPIO UART module.&#x20;
2. This solution is more scalable as we can have multiple arduinos that control individual devices plugged into one raspberry PI as the RPI only has one UART TX/RX vs multiple usb ports.&#x20;
3. We can leverage existing consumer grade USB extension cables and hubs
4. The USB cable is physically studier than the multiple thin GPIO cables. Also, there is only one cable to deal with.&#x20;



Here is the code that runs on the arduino:&#x20;

NOTE: This code will eventually be integrated into the existing spincoater firmware to control the spincoater instead of just turn the LED on and off.

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

Here is the updated lab\_com\_gui (running on RPI):&#x20;

I've only included the part of the code that changed.&#x20;

The first portion that changed just opens the UART port to communicate with the arduino.&#x20;

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





Video demo:&#x20;

{% embed url="https://drive.google.com/file/d/1uk_OOovLhDsRJ_EdZQi1aF-RhFq1CBGd/view?usp=drive_link" %}

The documentation is updated.

Github progress tracker updated.

Roadblocks:&#x20;

1. I need to reach out to anirud to make sure that it is ok that we are interfacing with the spin coater arduino via USB. I am assuming this will be fine, but I still need to check with him.&#x20;
2. Permission to test on the spincoater or a duplicate spincoater. I will talk to anirud about this once I get the code working on the test arduino.&#x20;
3. We need more USB cables for the arduinos. I had to search through hackerfab until I found one, but I am afraid someone else might need it eventually.



Plans for next week (spring break + week after):

Week 7: Microcontroller Integration

1. Complete mid semester documentation.&#x20;

* Finalize the physical connection between the Raspberry Pi and spin coater.
* Write and test code on the Raspberry Pi to interface with the microcontroller:
  * Ensure commands (e.g., start, stop) are executed reliably.
* Justification: This is crucial for automating the spin coater.

NOTES: This will not involve the actual spincoater, but rather the arduino programmed with the spincoater's firmware. Anirud is building a new spincoater which we will test on later in the semester.&#x20;



> Hmm, the shift to USB should be fine, and lmk I can order some more USB cables if needed. I think USB switch is good, since we need to have a standard and using GPIO might have been less accessible than UART. But the arduino control through postman requests is big, looking forward to seeing the spin coater work with the full end-to-end system! Also as we spoke, I will see how we can best put this up on the website, whether it's a new Django page or interfacing w Ridge's prototype.





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



