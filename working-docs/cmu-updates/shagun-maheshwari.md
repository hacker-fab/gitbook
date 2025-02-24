---
description: Weekly Updates for Shagun Maheshwari (CMOS Project)
---

# Shagun Maheshwari

## Update 5:

Progress tracker: [https://github.com/orgs/hacker-fab/projects/34/views/1](https://github.com/orgs/hacker-fab/projects/34/views/1)

Progress Update:

* Did an in depth deep dive into CV testing and extracting dopant concentration, dopant profile, junction depth from CV measurements. Notes: [https://docs.google.com/document/d/1rfdL9Ypr3\_JzwIx1Obn2l71P70NSGfTt9WlnXYr3Q34/edit?tab=t.0#heading=h.t1vhkaq9dye0](https://docs.google.com/document/d/1rfdL9Ypr3_JzwIx1Obn2l71P70NSGfTt9WlnXYr3Q34/edit?tab=t.0#heading=h.t1vhkaq9dye0)
* Put together the Demo 1 presentation for Hacker Fab and presented it: [https://docs.google.com/presentation/d/1sbkR2R6tLvjAYCmGAw-rUHeOSoS4zhoQOcE0l\_GfS\_Q/edit#slide=id.g3373c10cf4b\_0\_288](https://docs.google.com/presentation/d/1sbkR2R6tLvjAYCmGAw-rUHeOSoS4zhoQOcE0l_GfS_Q/edit#slide=id.g3373c10cf4b_0_288)
* Finished all testing for the resistor lab and collected pictures
* Did an in depth code walkthrough with Cesely for the Diffusion Model to understand its limitations and capabilities (1.5 hours) [https://colab.research.google.com/drive/1\_KY15QEsGiW\_qM6DI9G2ryNJ\_q8Hdyiz#scrollTo=6ivcaIbc3fLF](https://colab.research.google.com/drive/1_KY15QEsGiW_qM6DI9G2ryNJ_q8Hdyiz#scrollTo=6ivcaIbc3fLF)
* Had an in depth discussion on the patterns + experiments for the N-well MOSCAP we will fab next. The goal is to fab 3 chips at the same time with a CV test and transmission line test on each chip. Each chip will have different constant source diffusion times to test. [https://docs.google.com/document/d/1UUBJwmIzOASs8iViaeoWSC-DHOq\_JzK7mthqLg3Q0M8/edit?tab=t.0](https://docs.google.com/document/d/1UUBJwmIzOASs8iViaeoWSC-DHOq_JzK7mthqLg3Q0M8/edit?tab=t.0)

Roadblocks:

* Was a bit sick this weekend so wasn't able to complete the full analysis for CV testing&#x20;
* Have a midterm heavy upcoming week but will aim to push as much progress&#x20;

Next Steps:

* With Cesely's updated code, figure out the constant source diffusion (SOG) diffusion times we will fab on our 3 N-well MOSCAP chips&#x20;
* CV testing analysis&#x20;
* Resistor Lab report&#x20;
* Fabrication&#x20;

Feedback

• Cesely

Good work this week on the detailed update and the deep dive into CV testing, the demo presentation, and the extensive discussions on the upcoming fab process.

**Priorities for This Week:**

* **CV Analysis:** The analysis was not completed and should be the top priority. While I understand that preparing demos and discussing the fab process can be time-consuming, completing the CV analysis is a critical next step.
* **Fab Process & Fabrication:** We need to finalize the fab process for the upcoming chips and start fabrication in the coming weeks. I'm fine with postponing fabrication until next week due to midterms, but it will be our top priority then. If you can begin earlier, that would be an added bonus.

**Documentation:**

* Please ensure that you update the mid-semester documentation. Document the experiments you have run to date with clear sections on theory, fabrication/process, and results. For instance:
  * **Theory:** Describe the type of device you plan to fabricate, the testing methods, and the expected outcomes.
  * **Fabrication/Process:** Detail how the device is made.
  * **Results:** Summarize the data collected and provide an interpretation of that data.

You aren’t required to follow this format , but I hope it gives you insight into what we are looking for.

## Update 4:

Progress tracker: [https://github.com/orgs/hacker-fab/projects/34/views/1](https://github.com/orgs/hacker-fab/projects/34/views/1)

Progress Update:&#x20;

* Successfully used the Keithley 4200 to conduct CV tests for the fabed p-type MOSCap. [https://docs.hackerfab.org/home/standard-operating-procedures/probe-station-sop](https://docs.hackerfab.org/home/standard-operating-procedures/probe-station-sop)
  * Ran high and low frequency CV tests and compared it to target CV curves for the accumulation, depletion, and inversion regions for a p-type MOSCap. Stored the data for 4 patterns on the chip
  * Debugged the Keithley 4200 controls&#x20;
  * Read/skimmed through the Keithley 4200 CV test manual [https://download.tek.com/document/4200%20CV%20ApplicationsGuide.pdf](https://download.tek.com/document/4200%20CV%20ApplicationsGuide.pdf)
  * Watched Sam Zeloof's CV testing video [https://www.youtube.com/watch?v=v6Mb7J6c6og](https://www.youtube.com/watch?v=v6Mb7J6c6og)
  * Read through these two documents on CV testing Sam Zeloof linked&#x20;
    * [http://sam.zeloof.xyz/wp-content/uploads/2021/01/CV-resource1.pdf](http://sam.zeloof.xyz/wp-content/uploads/2021/01/CV-resource1.pdf)
    * [http://sam.zeloof.xyz/wp-content/uploads/2021/01/CV-resource2.pdf](http://sam.zeloof.xyz/wp-content/uploads/2021/01/CV-resource2.pdf)
* Did a code walkthrough with Cesely for the diffusion model and loaded/ran it in google colab [https://colab.research.google.com/drive/1cJ8WHxEa8jF9vQnLNw5twRnWye24PjPx](https://colab.research.google.com/drive/1cJ8WHxEa8jF9vQnLNw5twRnWye24PjPx)

Roadblocks:

* Chatted with Cesely and she mentioned it may not make sense to edit the diffusion model code and use that to inform fabing the next set of chips as it is not accurate + a lot of assumptions were made in that model. Her suggestion was to just go ahead with fabing the next set of chips, conduct CV tests, and use those results to inform the parameter changes within the diffusion model. Beleive Jay, Cesely, and I would need to align on this path.&#x20;

Next Steps:&#x20;

* Work on first presentation for Hacker Fab&#x20;
* Analyze results from the CV tests&#x20;
* Create fabublocks for next set of chips to be fabed&#x20;
* Start fabing next set of chips&#x20;

Feedback

• Cesely\
Great job on getting your first set of results from a chip! Do you have these results documented, and have you started interpreting them? It's important to begin analyzing your data as soon as possible, as this will be crucial for your presentation and will also help guide the next set of chip fabrications.

_Next Steps for CV Testing:_ One key aspect I want to determine from the CV testing is whether we can back-calculate carrier concentration and junction depth. These parameters will be essential for refining our understanding of the device characteristics.

_Future Experiments & Model Refinement:_ For the next batch of chips, I suggest performing SOG diffusion while varying the drive-in diffusion parameters, specifically time and temperature. The goal is to use these variations to improve the accuracy of the current model. I have concerns about the reliability of my model due to the assumptions and experimental methods used for verification, so updating it with more accurate CV data is a priority.

&#x20;Action Items:\
1\. Outline an experimental plan detailing how you will use CV characterization to refine the model.\
2\. Identify which parameters you will vary and how this will contribute to improving the accuracy of the model.\
3\. Once the model is updated, we can use it to make informed predictions for optimal doping levels in n-well and CMOS processes.

* Jay
  * talked with Cesely to clarify, but absolutley use her code from last semester. You need to do this in order to figure out what doping parameters to use when making MOSCaps. The point is to use the model to get close to the desired doping parameters, then test with moscaps, then tune the model, then re iterate on moscap testing with updated model to finalize CMOS doping parameters.
  * use ceselys model to determine what doping parameters you will use for the first set of moscaps, then fab them this week to stay on schedule.

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







