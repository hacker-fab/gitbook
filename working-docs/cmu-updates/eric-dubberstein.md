# Eric Dubberstein



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



