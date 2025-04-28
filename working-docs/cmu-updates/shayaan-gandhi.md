---
description: Sputtering Control Systems - Weekly Update Thread
---

# Shayaan Gandhi

{% stepper %}
{% step %}
### Weekly Update 1

Created project proposal and started reading Alicat and Pfieffer manuals to understand how to connect microcontroller to them. Alicat uses MODBUS RTU protocol and connects through a DB9 cord. In the following week, I will finishing finding out how to communicate with all the sputtering parameters and starting writing code to communicate with gas controller and vaccum pump. Communication with parameters will be kept here: [https://docs.google.com/document/d/1e5NmWFM19hEzyVlvQo01xP2gn9aTncJCWMAtZo8TncQ/edit?usp=sharing](https://docs.google.com/document/d/1e5NmWFM19hEzyVlvQo01xP2gn9aTncJCWMAtZo8TncQ/edit?usp=sharing) and will be added to the hackerFab drive.

> **Feedback**
>
> Good work this first week on the control protocols and updating the master doc. The compilation of all these protocols and their manuals is a critical step to getting started.&#x20;
>
> Next time mention if you have any roadblocks, and enumerate your answers to the questions from the rubric. Document should be in Sputtering Folder with a more descriptive name though. Plans should be more detailed for next week with precise deliverables that progress towards to proposal's timeline. You should be writing what sequence of steps you'll be taking to start communication and controlling the gas/pump.
>
> Overall good job!
>
>
>
> \*Hacker Fab not hackerFab
>
> [Rubric](https://docs.google.com/document/d/1VIL6_VEkJ3WJWSxd1Ij3GuT30xgoiurXHgvJoFRKE7c/edit?tab=t.0#heading=h.8paefix4wysk)
{% endstep %}

{% step %}
### Weekly Update 2

1. This week I attempted to communicate with Alicat Gas Pump with Arduino Nano. However attempts were unsuccessful due to incompatible protocols. I have order RS232 converters and RS485 converters for Alicat Gas Pump and Pfieffer Vaccum pump respectively. These should allow me to communicate with the devices using UART from the Nano. Some confusion that was solved was the difference between RS232, RS485, and Modbus RTU. The first 2 describe physical communication hardware, while Modbus is an interpretation of the bytes.
2. The main roadblock I encountered was the incompatibility of the Arduino Nano protocols and the device protocols. These should hopefully be solved with the ordered converters.
3. This following week the converters should be shipped and I will establish communication with Alicat device and hopefull Pfieffer device. I expect communication with alicat device to be easier because it accepts Modbus RTU. I have already found neccesary libraries for Modbus RTU on arduino nano

> **Feedback**
>
> Good work this week and this is much better formatting for weekly updates. You have concrete goals next week, but I still want more details on how exactly you're going to establish those connections (pinouts, pseudocode, etc). If those are in a document somewhere, please link it again in your update. I ordered a data cable for you, but you need to make sure you put orders in for other things you've been borrowing like a USB adapter if you can't find one in the cable drawer or breadboard if you are using yours for ECE classes. I'll send you a ping when the converters get here.
>
>
>
> [Rubric](https://docs.google.com/document/d/1VIL6_VEkJ3WJWSxd1Ij3GuT30xgoiurXHgvJoFRKE7c/edit?tab=t.0#heading=h.8paefix4wysk)


{% endstep %}

{% step %}
### Weekly Update 3

1. I created a library to interface with Pffiefer vaccum pump and finished most of the formatting for the control system. However, the code and the library is untested. Code is uploaded to Github/hacker-fab/Sputtering-Controls, but is also linked here: [https://github.com/hacker-fab/Sputtering-Controls](https://github.com/hacker-fab/Sputtering-Controls). Much of the raw numbers have been left out such as valid pump temperature and addresses.
2. The biggest roadblock was that the converters I ordered came on Friday. This made me unable to test the previous test scripts that I had written earlier.
3. Now that the RS485 to TTL have arrived I hope to get control over Pffiefer vaccum pump working. Once this is done and if the RS232 has not arrived I hope to establish some sort of communication with Yaesu radio. I have found an CAT arduino library that should hopefully help with this. Additionally, I will write tests for my library functions and all the free functions&#x20;

> **Feedback**
>
> Good work this week, and understandable that plans for hardware were delayed. Nice job pivoting to software and linking your repository. We talked on Monday, and I've updated the task tracker to reflect the new tasks (vacuum+gas pressure routine, gas set routine). You can ignore the Yaesu for now unless you finish the others early. Memory management might not be necessary, but I'll do a more thorough code review when more code is written. I would like to have seen a testbench or some evidence of the code being feasible, but it did compile and seem functional.
>
> Next time, please update the Github Project Tracker and Dev Log with progress you made and tasks you've updated. Repository should also be linked on Master Doc.
>
> [Rubric](https://docs.google.com/document/d/1VIL6_VEkJ3WJWSxd1Ij3GuT30xgoiurXHgvJoFRKE7c/edit?tab=t.0#heading=h.8paefix4wysk)


{% endstep %}

{% step %}
### Weekly Update 4

1. Most of the week was spend trying to get Modbus RTU communicating with Alicat sensor. Efforts to receive information through Modbus was unsuccessful, but sending information eventually was. I am not sure why this is the case because it should be relatively simple. I now have contacts with both Alicat and Pfieffer to try and debug communication protocols.  I used multiple libraries to try and communicate including ArduinoModbus and ModbusMaster. Interesting the bit packets observed by oscilliscope are different sizes which is odd (Video will be attached to master doc). I also formalized and debugged the pfieffer inteface into arduino library with .h and .cpp file (Check github).
2. I am struggling to figure out why the communication is not working. I briefly attempted Pfieffer communication as well which was unsuccessful. I can see bit packets on the TX. but I never see the RX line being driven. Interesting note is that in Alicat\_ModbusMaster\_test.c (check github) the code passes the success if statement, but no data is read. I had Carson help me debug some of the transmitting this week and I hope he can help this week as well.&#x20;
3. The plans for the next week are to get stuff communicating. Steps to this are seeing movement on the RX line. People that could possible help are alicat engineers and hopefully Carson.

> **Feedback**
>
> Good work this week trying to get the communication established. A big accomplishment is having those Alicat and Pfieffer numbers for debugging help down the line. I asked ChatGPT why that if statement was passing without data being read, and the only suggestions it gave me were to assign the node to the result variable so that result reflects the actual result. I'm unsure whether the library automatically looks for that variable though kinda like an errno. Since it's local I kinda doubt it. The attached code below will probably resolve the error to agree with the scope but not make it function as we want unfortunately.
>
> I've looked at these references:
>
> * [https://documents.alicat.com/manuals/DOC-MANUAL-MODBUS.pdf](https://documents.alicat.com/manuals/DOC-MANUAL-MODBUS.pdf)
> * [https://documents.alicat.com/Alicat-Serial-Primer.pdf](https://documents.alicat.com/Alicat-Serial-Primer.pdf)
> * [https://www.alicat.com/support/communication-options-for-alicat-instruments/](https://www.alicat.com/support/communication-options-for-alicat-instruments/)
>
> and think the problem could be due to the baud rate needing to be 19200. The Alicat should list the baud rate on its screen so it's probably not that. Another thing I saw was the error code of 4 being an unsupported command (if that's what's being received). This was in the Alicat modbus reference not the library documentation. To verify the error code is being sent, I will try to secure and ALDM for you since scopy is superior for digital oscilloscoping.
>
> Also you should try communicating with the Alicat over Alicat's custom serial terminal, like this: [https://www.youtube.com/watch?v=sLaUxEmOlj0](https://www.youtube.com/watch?v=sLaUxEmOlj0). You will probably need a USB-serial adapter though which I'm not sure we have, but I can order. If you can also cutup a USB cable and wire it yourself, but communication like this will probably work before demos.
>
> I also recommend not using a library, and using the command uint\_id reference in the serial communications primer and modbus libraries to send bytes directly and see if you get a response. I recommend Blink Display as the test command.
>
> I will revise the GitHub project tracker, but please create a new entry in the dev log of Master Doc for progress made (even if it's relinking your "How to connect stuff" doc with a brief recap).
>
> [Rubric](https://docs.google.com/document/d/1VIL6_VEkJ3WJWSxd1Ij3GuT30xgoiurXHgvJoFRKE7c/edit?tab=t.0#heading=h.8paefix4wysk)

<pre class="language-cpp" data-full-width="false"><code class="lang-cpp"><strong>#include &#x3C;ModbusMaster.h>
</strong>#include &#x3C;SoftwareSerial.h>

const uint8_t TX_pin = 11;
const uint8_t RX_pin = 10;

SoftwareSerial mySerial(RX_pin, TX_pin); // RX, TX
ModbusMaster node;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  node.begin(1, mySerial);
}

void loop() {
  uint8_t result = node.readHoldingRegisters(0, 5); // Store the result

  if (result == node.ku8MBSuccess) {
    Serial.print("ReadHoldingRegisters: ");
    for (uint8_t i = 0; i &#x3C; 5; i++) {
      Serial.print(node.getResponseBuffer(i));
      Serial.print(" ");
    }
    Serial.println();
  } else {
    Serial.print("Modbus Error: ");
    Serial.println(result, HEX);
  }

  delay(1000);
}
</code></pre>




{% endstep %}

{% step %}
### Weekly Update 5

1. I was pretty busy this week so I was not able to accomplish much. Presentations on Tuesdays went well and I tried to debug with Anirud. Ordered a different RS232 and RS485 shield and converter respectively to test because tests are not working. I found this pfieffer tubro pump tutorial [http://brendansweeny.com/posts/pump-readout.html ](http://brendansweeny.com/posts/pump-readout.html)which I copied the code excluding the LCD screen and treid, but it didn't working. I might send the guy an email tomorrow.&#x20;
2. I am dealing with the same roadblock as last week. I have ordered some different converters to try and hopefully they will help. I also tried using the Alicat software for the alicat devices, but that wouldn't work either. I want to try and hop on a zoom call with the Alicat help center this week.
3. The plans of this week are pretty much the same as last week because all efforts are currently unsuccessful. I really want to get some stuff working before I leave for spring break

> **Feedback**
>
> Good effort this week. I wasn't able to watch your demo, but the other TAs should give you feedback on it once it's graded. I'm writing this after you established Alicat communication with serial terminal but not with Arduino despite the Arduino sending the bits. I talked to Anirud and we believe it's an Alicat invisible padding associated with their shell. Going forward, if the new shield and converters don't work, you should pivot to:
>
> * running the Alicat shell on a Raspberry Pi and having that double as the MCU for closed loop communication.
> * You could also have an Arduino connected to a laptop connected to the Alicat and use pipes to foward the shell. It would be less elegant but we might need a computer anyway for sputtering automation.&#x20;
>
> Both could be done with existing equipment in the lab. I would confront Alicat about why only their shell and not an MCU outputting the same bitstream works.
>
> Remember to indicate in the master doc what tests you ran and debugging you attempted. If you're using a separate doc, make sure it reads like a proper development log with dated entries that could easily be merged into a final dev log. Also, spell check these updates and use proper grammar. This is an informal documentation assignment that you should not be rushing.
>
> [Rubric](https://docs.google.com/document/d/1VIL6_VEkJ3WJWSxd1Ij3GuT30xgoiurXHgvJoFRKE7c/edit?tab=t.0#heading=h.8paefix4wysk)
{% endstep %}

{% step %}
### Weekly Update 6

1. Significant process was made this week as communication with Alicat from arduino is complete. Couple things to note on why it was difficult. Firstly, alicat does not use a standard db9 pinout for their models. This means the connector was connecting to the wrong pins. Secondly, Alicat uses RS232 but has modified it to have multiple devices on the bus. Lastly, though Alicat says they use Modbus, this did not work. Instead I am using there Serial ASCII protocol. I am not sure why modbus didn't work, but the ASCII protocol is very simple as it mainly just involves sending the unit ID and a couple more characters. Next to complete is Pfeiffer
2. This week I was able to overcome the really big roadblock of communicating with Alicat. Communication with Pfeiffer is still not complete, but I found that Sky knows a lot about these communication protocols so he might be able to help.
3. The following week is spring break so I don't think I will be able to do any work because I am not in Pittsburgh. The week after, I hope to figure out Pfeiffer. I talked to Jay and he said we could use the Pfeiffer pressure gauge on sputtering which should have the same protocol making the pressure gauge part easier

> **Feedback**
>
> Great work finally getting Alicat to work! This week I'd work to establish the control loop we've been needing for gas control—essentially, the completed and tested routine the Arduino can run based on a gas pressure value input. Talk to Jay for more details on what parameters he wants for that routine. I imagine it would be a quick refactor of the existing code you wrote in the sputtering-controls repository.&#x20;
>
> In parallel, work on the Pfeiffer serial communication. Sky can figure it out but, like Anirud said in lab yesterday, it's important you learn to do this work too since it's the entirety of the engineering process. It was my understanding that the Pfeiffer gauge has the same range limit as the Inficon, but if Jay says it doesn't matter it should be fine. Make sure to get the needed cable.
>
> In terms of the weekly update structure, again, indicate in the master doc what tests you ran and what debugging you attempted. If you're using a separate doc, make sure it reads like a proper development log with dated entries that could easily be merged into a final dev log. Your weekly update needs to be much more detailed. Simply saying "RS232 but has modified it to have multiple devices on the bus" or "the ASCII protocol is very simple as it mainly just involves sending the unit ID and a couple more characters" or "the connector was connecting to the wrong pins" is not enough. If you didn't link a doc in this update or in a recent entry in the master doc, you must provide exactly which pins are swapped, what the RS232 problem is, how to use the ASCII protocol, etc here. This is not documented well enough for anyone to replicate or use to debug, and it's not good my feedback is longer than your update. Please use this and past feedback to improve your weekly updates going forward.
>
> Also, spell check these updates and use proper grammar. This is an informal documentation assignment that you should not be rushing. I don't like taking off points for something that plugging into ChatGPT or Grammarly could solve instantly.
>
> [Rubric](https://docs.google.com/document/d/1VIL6_VEkJ3WJWSxd1Ij3GuT30xgoiurXHgvJoFRKE7c/edit?tab=t.0#heading=h.8paefix4wysk)
{% endstep %}

{% step %}
### Weekly Update 7

1. This week, I tested communication with Pfeiffer devices, but it was unsuccessful. My debugging process involved connecting the converter to the DB9 RS485 pinout (pins 3 and 7) and sending `"Hello\n"` using CoolTerm. However, the signal was often corrupted, returning `"Hello"` followed by an unexpected character instead of a newline. Initially, I suspected the issue was due to poor soldering and tape, which might have been causing signal corruption. However, after resoldering using a different method, the problem persisted. I also attempted to read data using the converter, but this was unsuccessful. I believe the issue is related to my read enable configuration. Over winter break, I received new converters, but I haven’t been able to test them thoroughly yet. Unlike my previous converter, which had implicit enable control, these new ones have explicit enables.
2. The biggest roadblock is the converter's inability to read incoming signals. It writes correctly for the most part, but when CoolTerm sends data, the converter does not detect it. My next step is to test the new converters, as they have more online documentation available for troubleshooting.
3. For next week, my plan is to fully test the new converters to determine if they can properly read and write. I also double-checked the strings I was previously sending to the Pfeiffer device and corrected a few errors. If the new converter functions correctly, I should be able to finalize communication and focus on testing the control loop.

> **Feedback**
>
> Good work this week! I'm writing this after our Monday meeting when we discussed wrapping your code into a script that runs in the serial monitor and seeing the final product. The completion of that is impressive and now there's only the vacuum gauge left to go.
>
> As for format, I appreciate your work to incorporate my past feedback for your weekly updates. Good work on readability and updating the master doc. Progress was a little light this week, but I understand it was malloc lab.
>
> [Rubric](https://docs.google.com/document/d/1VIL6_VEkJ3WJWSxd1Ij3GuT30xgoiurXHgvJoFRKE7c/edit?tab=t.0#heading=h.8paefix4wysk)
{% endstep %}

{% step %}
### Weekly Update 8

1.  I successfully established communication with Pfeiffer devices and wrote the serial command program. The program, **SetPoint\_Alicat.ino**, is located in the **Sputtering Controls** GitHub repository. If the Arduino wiring is correct, the program should work with a simple copy-paste and run. However, I recommend double-checking the unit ID and baud rate on the Alicat.

    The signal corruption issue I encountered last week did not occur with the new RS485 converters I tested. I initially verified communication by writing bits to CoolTerm, which worked successfully. However, when I attempted to read bits from CoolTerm using the Arduino, it was unsuccessful. I later realized that the **DB9 cable** I was using contained only an **RS232 converter**, which was the root cause. Writing still worked because the **A+ line on RS485** corresponds to **TX on RS232**, but reading does not follow the same principle.

    Since I couldn't use the cable to test reading, I proceeded to check if Pfeiffer communication was working. I adapted code from **Brenden Sweeney's tutorial**, and communication was successful. However, while **writing** to the vacuum pump works, **reading** from it is still an issue. I expect ASCII characters in the **0x30–0x3A** range, but instead, I receive much higher values. I examined the hex values for patterns but found none. For example, all responses should end with **0x13**, but they end with **0x6A** instead. Initially, I suspected a shifted byte pattern, but that does not appear to be the case. I believe the issue might be with my wiring, but I haven't identified the exact cause yet.
2. The main issue I’m facing is **reading from the vacuum pump**. I have already emailed Pfeiffer for assistance, but in the meantime, I plan to use a **logic analyzer** this week to determine which side of the communication is faulty. Since the signal is differential, I can manually decode the pump’s response to verify whether it matches my expectations. If it does not, then the issue lies with the pump.
3. I aim to fully resolve Pfeiffer communication. Once this is complete, I can begin testing the **control loop for maintaining target pressures**. My goal is to have some control loop testing completed before **Presentation 2**.

> **Feedback**
>
> Good work, Jay and I are happy with the gas controller routine and we will prob use it for the first sputter test on V2. If you have time it might be a good idea to clean up your wiring (color coding, soldering, etc) before that test. Writing to the vacuum pump is a huge deal, and my suspiscions for reading errors are probably not wiring but could be that you might need to flush the read buffer, add a delay before reading, and/or try different terminators. Using a waveform viewer is the best first step though. I would aim to complete that this week (with assistance from Pfieffer, Anirud if necessary) so that you can test PID/P loop the week before your Presentation 2. I have to debug this transformer and machine cooling for the ANT tuner, so I won't be that available to debug. After Presentation 2 and before Final, you should work on cleaning up the wiring, packaging the Arduino with buttons and a simple I2C/SPI text display, and optimizing control algorithms with emperical tests.
>
> [Rubric](https://docs.google.com/document/d/1VIL6_VEkJ3WJWSxd1Ij3GuT30xgoiurXHgvJoFRKE7c/edit?tab=t.0#heading=h.8paefix4wysk)
{% endstep %}

{% step %}
### Weekly Update 9

1.  Reading and writing to Pfeiffer devices, including the vacuum pump and vacuum gauge, was successful. The issue stemmed from a delay between writing and reading, which caused bit shifts. Brendon Sweeney’s tutorial was a great reference overall, but some modifications—such as adjusting delays and filling in missing code—were necessary to ensure proper communication.\


    Once communication with the Pfeiffer devices was established, I began testing the control loop code. Currently, I have an Arduino that successfully communicates with both the vacuum gauge and the pump. This program has been verified: it turns on the pump and continuously reads pressure values as the chamber approaches vacuum.

    I attempted to add communication with the Alicat to the same Arduino, but this failed. I suspect the issue may be incorrect wiring, which I will verify tomorrow. Since I have successfully communicated with the Alicat before, I expect this will be a quick fix.\


    In addition to working on the project, I also troubleshot one of the Alicat devices. Its main screen was glitching, and it was unable to reach the setpoint. After consulting with Alicat IT, we determined the device was stuck in a **VOV error**, which occurs when the device attempts to output more mass than its configured limit. The solution was to perform a factory reset and then change the setpoint mode to digital, allowing the setpoint to be adjusted properly.
2. The next major issue to address is determining why the Alicat does not work with the Arduino that successfully communicates with the other devices. Another potential concern is the number of available I/O pins. If the Arduino needs to communicate with additional devices, it may not have enough pins to support them all. One possible solution is to use multiple Arduinos in tandem. Currently, I am using two separate serial ports for each RS485 device, but I may also explore combining serial connections to free up additional pins.
3. My goal is to have a fully functional control loop—capable of setting and maintaining pressure—ready by **Presentation 2**. This should be achievable as long as the Alicat issue is resolved quickly. Additionally, the wiring setup is becoming increasingly complex, so I plan to find a more organized way to arrange everything.

> **Feedback**
>
> Great work resolving communication with the pressure gauge and pump. I suspected it was a delay issue. We talked about the following in person, but I'll rewrite them here for organization:
>
> * priority #1 - establishing a control loop, you'll likely need to experiment with P or PID with real gas pressure testing to see what is most reliable and fluctuates the least, modularize your P/PID loop it so you can easily tweak parameters for a different chamber (V2), you can also simplify your serial by reading the pressure gauge directly from the pump (if you use Pfeiffer pump and cable)
> * priority #2 - packaging and wiring, 3D print a sled with heat inserts for an Arduino and protoboard, connect your converter to the protoboard, solder on header pins for jumper cables to the arduino
> * priority #3 - PID loop for impedance matching network, you'll need to figure out how to read analog data from the VSWR meter on the tuner (easy way is to isolate the meter, apply a voltage, record what you observe, make a look up table or continuous function; then you'll need to control stepper motors on the capacitor in a PID loop to stabilize VSWR at 1
>
> [Rubric](https://docs.google.com/document/d/1VIL6_VEkJ3WJWSxd1Ij3GuT30xgoiurXHgvJoFRKE7c/edit?tab=t.0#heading=h.8paefix4wysk)
{% endstep %}

{% step %}
### Weekly Update 10

The prototype control loop is now complete, and I began testing it this week. Progress  slowed due to the sputtering chamber being disassembled and rebuilt as Version 2.

One key issue I resolved was the Alicat MFC not responding within the control loop. The root cause was improper handling of serial communication—specifically, I wasn’t telling the Arduino to actively listen to the Alicat serial port, which led to dropped messages.

I also explored the idea of connecting the Pfeiffer pressure gauge directly to the vacuum pump to simplify wiring. However, this isn’t viable because the pressure gauge is designed to connect to the DCU, which we are bypassing. While I could share the same RS485 bus for both the gauge and the pump to reduce I/O usage, this isn't necessary at the moment since I have enough available pins.

Another issue is powering the pressure gauge. Typically, it draws power from the DCU, but the DCU is powered off when the control loop is running. To address this, I need either a power cable that connects the gauge directly to a wall outlet or to see if the vacuum pump offers a dedicated power output for the gauge, similar to how it powers the DCU.

The control loop itself accepts an input as a base and exponent—for example, a target pressure of 3.2 × 10⁻³ hPa would be entered as 3.2 and -3. During testing, the loop successfully approaches and holds the desired pressure briefly. However, after a short period, the measured pressure drifts, forcing the system to readjust. I believe this behavior is due to a lag in the chamber reaching its true equilibrium pressure after a new setpoint is applied.

The current finite state machine (FSM) cycles through three states: vacuum, pressure, and MFC, with each state lasting 10 seconds. This means the loop writes a new setpoint every 30 seconds. That interval may be too short for the chamber to stabilize, so I may consider modifying the FSM to sample pressure more frequently but update the setpoint less often.

My next priorities are:

* **Improving control loop precision**, ideally to within 1 × 10⁻⁴ hPa. This will require tuning the control coefficients.
* **Adding pressure visualization** to help analyze behavior and optimize PID tuning. I plan to use Arduino's Serial Plotter for real-time graphing.

Now that chamber V2 is ready, I can resume testing. My goal is to have a fully functioning and precise control loop ready by next week. Feedback from Presentation 2 should also help me evaluate changes to the FSM and overall design.

> **Feedback**
>
> Good work on the Arduino active listen and prototype of PID. We talked on Monday about how to proceed with the PID (converting to a pressure change triggered model instead of a standard clock cycle), and metrics for assessing whether the PID meets standards during testing. I would talk with the process team and Jay to determine targets for settling time since I don't think overshoot time matters while power is not on.
>
> Going forward, your first priority should be a rigorously-tested PID completion, then a hardware package. No need for automatic impedance matching, power control, QCM, cooling, or mechanical feedthrough control.
>
> [Rubric](https://docs.google.com/document/d/1VIL6_VEkJ3WJWSxd1Ij3GuT30xgoiurXHgvJoFRKE7c/edit?tab=t.0#heading=h.8paefix4wysk)
{% endstep %}

{% step %}
### Weekly Update 11

**What did you accomplish this week?**\
This week, I implemented and modularized a FSM for pressure finding automation. The FSM is now cleanly organized across multiple files to separate logic, reduce complexity, and make future development easier. Specifically, I created `FSM.h` and `FSM.cpp` to contain the main `updateFSM()` logic and state handling. Supporting files handle tasks like pressure checking, serial communication, and transition timing. This structure should be easier for other people to understand and easier to made adjustments/additions. The FSM itself cycles through six states defined in an enum:

* `TURN_ON`: Sends a command to power on the Pfeiffer vacuum system. Next state is `SPEED_SET`
* `SPEED_SET`: Sets the rotational speed of the turbo pump to %25 percent. It is called Speed Set because there are 2 speed parameters in the vacuum pump (Set Speed, Stand-by speed). You can change each of these parameters and then activate each of them. Next state is `STANDBY_SET`
* `STANDBY_SET`: Set rotational speed of turbo pump to %100
* `EVAC`: Sets speed to standby\_speed and moves state to `GAUGE`
* `SPUTTER_SPEED` : Sets speed to set speed and moves state to `GAUGE`
* `GAUGE`: Requests current pressure readings from the gauge and check equilibrium. If evac flag is on, state goes to  `SPUTTER_SPEED`otherwise goes to `ALICAT`
* `ALICAT`: Adjusts the Alicat mass flow controller setpoint to maintain or reach the desired pressure.

The FSM also has 2 stages with different sampling rates. TURN\_ON, SPEED\_SET, EVAC, SPUTTER\_SPEED all occur at a slower interval (like every 10s). This is because it sometimes takes the pump a couple seconds to setup all the received commands and there is not need to bombard the pump with messages. GAUGE and ALICAT are in a faster interval because I want to measure pressure at a much faster rate. All changes have been added and pushed to the github under the PressureControl folder in SputteringControl. I am still testing everything, but I think the main issues are just modifying the PID coefficients.&#x20;

I also had presentation 2 which I thought went well, but wish I got more feedback/questions from other individuals.&#x20;

**What roadblocks are you dealing with and what is your plan to overcome these challenges?**\
I talked about adding a way to plot pressure vs time in my presentation and last week update. I am currently using Serial Plotter, which works, but does not have all the graphing capabilites that I would like. I looked into other methods to graph, but I could not find any that are used on Arduino. I think I will keep with Serial Plotter for right now, but it might be worth it to pipe the data to something else to graph. Like maybe send the data to a python script on a computer that plots with matplot.lib

**What are your plans for next week?**\
Main goal is to keep testing and implementing my new FSM. I think I can have it done by the end of the week and then start working on the packaging. I also need some hardware for my packaging which I will make sure to order early this week.

> **Feedback**
>
> Took a look at your code and agree with your two stage approach. For style and convenience though, you should replace the serial inputs like "0011001006111111015" with #define constants at the top. Also do the same for the stages, so instead of 1 and 2, use #define INIT 1 and SPUTTER 2. Or an enum for the stages. Basically no magic numbers.
>
> For this week focus on testing so you can wrap up PID by next update, and complete packaging before your final demo. Ping me when you have the parts in the purchase tracker.
>
> Feedback for presentation 2 should be out soon, but myself and the TAs were generally happy with your presentation. As for project specific feedback, I'd recommend sticking with just me and Jay since we are familiar with the process constraints, and maybe Carson or Sky since they do a lot with controls for stepper.
>
> Also please update the Master Doc.
>
> [Rubric](https://docs.google.com/document/d/1VIL6_VEkJ3WJWSxd1Ij3GuT30xgoiurXHgvJoFRKE7c/edit?tab=t.0#heading=h.8paefix4wysk)
{% endstep %}

{% step %}
### Weekly Update 12

This week, I made several key improvements to the **pressure control system** across both software and hardware domains:

1. **PID Loop Refinement**:\
   I made major upgrades to the PID control logic. The loop is now a PI loop:
   * Added **error normalization** so the controller scales proportionally with the magnitude of the desired pressure.
   * Introduced a **dynamic `Kp`** that increases when the error is large and softens as the system converges, reducing overshoot.
   * Implemented **conditional integral activation**: the integral term only activates when the proportional output is small, preventing windup and instability during large transitions.
   * Began implementing a **rolling buffer for the integral term**, which will allow the system to sum only the last `n` errors for more stable and tunable control.
2. **FSM Logic Update**:\
   I added a new logic condition to the FSM: when the **measured pressure is still higher than the desired setpoint** and the **MFC setpoint is at 0**, the system **automatically increases the vacuum pump speed**. This allows the chamber to continue evacuating even when gas input is shut off.
3. **Emergency Interrupt**:\
   I implemented an **interrupt function** in the PID loop that can **instantly set the MFC setpoint to 0** and **turn off the vacuum pump**. This acts as an emergency stop or rapid shutdown feature, useful for fault recovery or safety interlocks.
4. **Hardware Packaging**:\
   I also created **CAD models and a 3D-printable enclosure** to house the Arduino, RS485 converters, and supporting electronics. This enclosure will clean up the testbench setup and prepare the system for permanent installation.
5.  **Soldering for Packaging:**

    I finished all the soldering for the packaging so I just need to heat insert holes and screw everything in.

Check github for updated code

***

**What roadblocks are you dealing with and what is your plan to overcome these challenges?**

The **biggest challenge** right now is that **RS485 communication with the vacuum pump suddenly stopped working**. The physical connections and transceiver wiring are unchanged, and other serial devices are still responsive. I didn't change anything so I am not sure what happened. I think I will have to use a logic analyzer and test the command on the other pump.

***

**What are your plans for next week?**

For next week, my goals are:

1. **Finish physical packaging**:\
   Finalize the 3D-printed enclosure and permanently mount the Arduino and converters. Reroute wiring for easier debugging and improved airflow.
2. **Integrate `PfiefferLib`**:\
   Refactor the FSM to **replace raw ASCII commands with named function calls** using the `PfiefferLib` I wrote earlier this year. This will improve code readability, maintainability, and safety.
3. **Make PID code more presentable**:\
   Clean up the structure of the PID code and add documentation, comments, and formatting. I’ll also abstract tuning parameters.

> **Feedback**
>
> Excellent progress this week, I'm impressed you're tackling both software and hardware at once and how much improvement the PI loop has undergone. Do you have any testing results, or metrics you are using for testing? Also can you link your CADs for packaging? Also I agree prioritizing reestablishing communication with the pump is essential, and debugging against the other pump seems like the best strategy. Let me know when you are ready for heat inserts and need any help.
>
> [Rubric](https://docs.google.com/document/d/1VIL6_VEkJ3WJWSxd1Ij3GuT30xgoiurXHgvJoFRKE7c/edit?tab=t.0#heading=h.8paefix4wysk)
{% endstep %}

{% step %}
### Weekly Update 13

#### What did you accomplish this week?

This week was mostly focused on **wrapping up tasks for the final presentation**:

* **Integrated the Pfeiffer library:**\
  I fully implemented the `ArduinoPfiefferVacuum` library I created earlier this semester into the main codebase. This replaced hardcoded ASCII commands with cleaner, formatted function calls.
* **Added help functionality:**\
  I wrote a **help feature** for the program to make it easier for users to understand how to interact with the system.
* **Created a live data plotting script:**\
  I wrote a **Python script** that connects to the Arduino over the serial port, listens for pressure data, and **plots the data live using Matplotlib**.\
  The script continuously monitors the Arduino’s serial output and updates the graph in real-time, showing both the desired and measured pressures. This will provide a **visual demonstration of the PI loop behavior** during the final presentation.

This is also the link to the CAD: [https://cad.onshape.com/documents/1eb610edda8e5842b27a1322/w/dbc61868c30d3fae3044ff35/e/27c46d794bbc0f7f06439be1?renderMode=0\&uiState=680ed13d8b51db61358e7524](https://cad.onshape.com/documents/1eb610edda8e5842b27a1322/w/dbc61868c30d3fae3044ff35/e/27c46d794bbc0f7f06439be1?renderMode=0\&uiState=680ed13d8b51db61358e7524)

***

#### What roadblocks are you dealing with and what is your plan to overcome these challenges?

* **Presentation preparation:**\
  Making sure that the live plotting setup is reliable for the final presentation.
* I also created an outline for final project documentation.

***

#### What are your plans for next week?

* **1. Final testing of Arduino and Python integration:**\
  Fully test the live plotting script with the Arduino in presentation conditions to make sure the data flow is stable.
* **2. Polish the final presentation:**\
  Prepare a clear, visual demonstration showing how the PI loop behaves in real-time using the plotting tool.
* **3. Final cleanup:**\
  Minor code cleanups and documentation updates to make sure the final project is presentable and organized.
{% endstep %}
{% endstepper %}

