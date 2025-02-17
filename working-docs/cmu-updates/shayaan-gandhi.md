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
3. The plans for the next week are to get stuff communicating. Steps to this are seeing movement on the RX line. People that could possible help are alicat engineers and hopefully Carson.   &#x20;
{% endstep %}
{% endstepper %}

