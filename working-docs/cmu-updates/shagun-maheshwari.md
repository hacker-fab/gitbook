---
description: Weekly Updates for Shagun Maheshwari (CMOS Project)
---

# Shagun Maheshwari

## Update 3:

Progress Update:

* Fabricated a p-type MOScap&#x20;
  * Completed oxide growth&#x20;
  * Completed aluminium evaporation&#x20;
  * Created patterns&#x20;
  * Patterned&#x20;
  * Applied photoresist&#x20;
  * Figured out correct procedure for aluminum etching&#x20;
  * Learned and used the probe station to see if there was ohmic contact and optimized the aluminum etching process accordingly&#x20;
  * HF etched the oxide&#x20;
  * Aluminum evaporated again with new pattern&#x20;



Roadblocks:

* Main roadblock was the long time it took to fabricate and improving the aluminum etching process
* Also had an issue with the evaporator on the second round of aluminum evaporation where the pressure wouldn't drop below 1e-4 hPa&#x20;

Next Steps:

* Learn more about CV testing and the procedure we want to follow + understand how to interpret the different results we could see and what that tells us about the device&#x20;

#### Responses

• From Cesely

Good work getting a MOSCap fabricated. This week we should perform a CV test on the chip and seeing if we can get the dopant concentration vs. depth and using this to compare with the model I had from last semester. We should also begin fabricating/developing a process to fabricate MOSCaps more akin to the CMOS process we hope to generate.

Also, it is not clear to me which chips you have fabricated. Did you fabricate a chip with or without the RCA clean? Or both?  If you only fabricated one chip, then variations in the Al deposition might affect our observed CV results between chips and may not be related to the RCA clean.

Issues with the Al evaporator are likely caused by the chamber not being clean, since it was used this week for labs.

* From Jay
  * Please make sure to link to the notes/documentation form the fabbing process, ie pics of surface between steps, notes of errors, new findings (like Al etch rate witht eh new ethcant) etc.&#x20;
  * Make sure task tracker is updated (as per the update rubric)
  * Good job working hard to get a clean moscap fabed and working through difficulties of microfabrication
  * Next steps is a little lacking I would rec
    * perform CV testing on fabed p type moscap
    * Interpret results to attain threshhold voltage, flatband voltage, and dopant profile vs depth.
    * determine doping process for CMOS represntative MOSCaps to be used based on Cesely's code from F24, and make relevant SOPs
    * Begin fabing of CMOS representative MOSCaps (this may be out of scope for the next week)
  * BTW I have the new tubes and push rod for the tube furnace

## Update 2:

Progress Update:

* Did research on performing an RCA clean and wrote the SOP of the RCA clean we will conduct here: [https://docs.google.com/document/d/1EJc17dcLvwOp3yGAgUv3rpoIKi2gON022oEVz9VkTkE/edit?usp=sharing](https://docs.google.com/document/d/1EJc17dcLvwOp3yGAgUv3rpoIKi2gON022oEVz9VkTkE/edit?usp=sharing)
* Added initial notes for RCA clean to the CMOS process dev master doc: [https://docs.google.com/document/d/1566Sux3ALGOfexcq4ajqJ6XRDOvNgEnyw1Al20tyuYY/edit?tab=t.0](https://docs.google.com/document/d/1566Sux3ALGOfexcq4ajqJ6XRDOvNgEnyw1Al20tyuYY/edit?tab=t.0)
* Built a FabuBlocks process for the p-type MOScap fabrication here + got feedback from Cesely : [https://www.fabublox.com/process-editor/b12fd11e-5a87-4d3f-ad97-d2f436606290](https://www.fabublox.com/process-editor/b12fd11e-5a87-4d3f-ad97-d2f436606290)
* Created the solutions for SC-1 and SC-2 we will be using for the RCA clean within the fume hood
* Completed phase 1 of the Resistor lab&#x20;
* Got HF training done&#x20;
* Got Evaporator training done&#x20;
* Got Fume Hood training done&#x20;



Roadblocks:&#x20;

* No current roadblocks, tube furnace seemed to have died so couldn't make the p-type MOScap last week but it seems to have been fixed so I can do that next week



Plans:&#x20;

* Conduct an RCA clean following my SOP
* Fab a p-type MOScap
* Read through chapters 4 and 5 of Modern Semiconductor devices for Integrated circuits again in detail and read through dopant profiles to help with CV testing.



#### Responses

* From Cesely
  *   Great work this week! Your documentation looks very good and professional.

      It will be imperative that you start fabricating this week as you learned last week things in the lab can take much longer than expected.

      How do you intend to measure the effectiveness of the RCA clean? Will you be comparing the results of the RCA clean by having a baseline chip with no RCA clean?

      Also, will need to make patterns for your MOS Caps. I can review how to do this with you.
* From Jay
  * Good job getting familiar with the fume hoof and setting up the RCA clean.&#x20;
  * I gave feedback on fabublox process via discord, but here is what I recommended instead (to ensure we have a surface bulk contact that can be used for testing MOSCaps doped wells too): [https://www.fabublox.com/process-editor/4f8374e9-d89c-4486-b54f-716cac33802e](https://www.fabublox.com/process-editor/4f8374e9-d89c-4486-b54f-716cac33802e)

## Update 1:

Progress Update:

* Read through chapters 4 and 5 of Modern Semiconductor devices for Integrated circuits&#x20;
* Did research on CV characterization&#x20;
* Wrote the Project Proposal for PMOS including Junction Depth and CV characterization&#x20;
* Completed pattern training with Jay



Roadblocks:&#x20;

* No major roadblocks to report&#x20;

Plans:&#x20;

* Fab a p-type substrate&#x20;
* Look more into the specific experiments we should conduct for CV characterization&#x20;
* Lab next week&#x20;

#### Responses

* From Jay
  *   Critiques: For the progress update, be sure to link to the document(s) that show evidence of your progress. this week that would be a link to you project proposal

      For roadblocks, this is an opportunity to request help, or clarify what you need from us to keep moving forward. I would argue training on certain equipment to be roadblock for you.

      For plans, there should be more detail in how you're going to proceed, or link to your working doc that demonstrates your plans in more detail. For example, Fabing a p type MOSCap will require designing a fabublox process and reviewing it with someone, creating the patterns you're going to use for lithography, etc.

      For CV testing, I understand you will research specific experiments we what to do, but you should include a tentative plan of what readings youre going to look at first. This can help us guide your research more concretely.

      Overall good job!
* From Cesely
  * Great work this week. I would continue to understand and devise a plant to extract specifically the carrier concentration vs junction depth. Also, this week you should begin to fabricate MOS Caps with a p-type substrate. This will be tentative as we are waiting for a power supply for the Thermal Evaporator. In the meantime you should use Fabublox (link below) to create a fabrication process for the MOS Cap.

## Update 0:

Progress Updates

* Reviewed some documentation from the Project Primer&#x20;
* Had initial group meeting with the CMOS team to go over problems&#x20;
* Read through assigned readings&#x20;



Roadblocks

* No major roadblocks to report&#x20;



Plans

* Read through chapter 1,4,5,6 in the Modern Semiconductor Devices for Integrated circuits textbook&#x20;
* Read through the documents from the Project Primer&#x20;
* Draft project proposal (due Thursday before class)







