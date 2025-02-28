---
description: Weekly Updates for CMOS Process Dev - Metal-Si Contacts Project
---

# Marta Freitas

***

### <mark style="background-color:blue;">Weekly Update #0 (Jan 18)</mark>

#### <mark style="color:blue;">Accomplished this week</mark>

Familiarized myself with the project, by reading the project primer and F24 documentation to assess what has been completed and what are the next steps. Had the initial group meeting with the team and was presented with two problems to be tackled this semester. Performed a literature review on both problems, including the suggested reading "Modern Semiconductor Devices for Integrated Circuits" (chapters 1, 4, 5, 6). Achieved a satisfactory comprehension of both problems and became inclined toward one of them.

#### <mark style="color:blue;">Roadblocks/Challenges</mark>

The major challenge was getting familiarized with new concepts. No roadblocks at the time.

#### <mark style="color:blue;">Plans for next week</mark>

Determine the problem to tackle. Define a concrete plan and write the project proposal.

***

### <mark style="background-color:blue;">Weekly Update #1 (Jan 26)</mark>

#### <mark style="color:blue;">Accomplished this week</mark>

Determined that I am going to be working on the metal contacts problem. Performed a literature review to better understand it. Reviewed previous documentation to assess the current state of the problem in the lab and determine what will be my first steps. Came up with a plan and wrote the proposal.

#### <mark style="color:blue;">Roadblocks/Challenges</mark>

No roadblocks at the time.

#### <mark style="color:blue;">Plans for next week</mark>

Will have the first training in the lab with the team.  Will receive feedback from the project proposal and define concrete first steps and determine what changes need to be made to the initial plan.



#### Responses

* From Jay
  *   For the progress update, be sure to link to the document(s) that show evidence of your progress. this week that would be a link to you project proposal

      For roadblocks, this is an opportunity to request help, or clarify what you need from us to keep moving forward. I would argue training on certain equipment to be roadblock for you.

      For plans, include more detail, or a working doc with more detail that we can look at to help give concrete advice. For example, clarify which trainings youre prioritizing to help you start fabing test devices. As for determining what changes need to be made, be specific, are we going to update the order of experiments? which experiments we will prioritize (thermal processing vs surface cleaning vs Ni contacts etc)? creating fabublox process flows for the test devices you want to make? Adding detail in you plan helps us give you advice. The more concrete plans you provide, the better we can help. These plans can be reflected in a working doc instead of typing it in the update, but be sure to link that doc and direct us on what part we should read over.
* From Cesely
  * Great work this week! I think that for the next couple of weeks the work is very well outlined for getting baseline contact resistance measurements using the transmission line method as expanded upon in your proposal. This week you should focus on making a Fabublox (link below) for the baseline testing and annealing testing as well as aim to start fabricating. https://www.fabublox.com/?code=tjb5YB9SR-N0rRKGmp6otki2udn6CikvKoSqdh\_Xza4uW\&state=cTBYYUpKUW4yMjZBZVFSQ2pYMm5lUlVKZC1iUHZGYkpxRnhodUJ0d2pfaQ%3D%3D

***

### <mark style="background-color:blue;">Weekly Update #2 (Feb 2)</mark>

Tasks: [https://github.com/orgs/hacker-fab/projects/35/views/1](https://github.com/orgs/hacker-fab/projects/35/views/1)

#### <mark style="color:blue;">Accomplished this week:</mark>

* Completed all the training that was needed to start fabrication.&#x20;
* Created Fabublox process for baseline testing ([https://www.fabublox.com/process-editor/2b1a8f1f-8915-4e10-83a6-1cb50809dc19](https://www.fabublox.com/process-editor/2b1a8f1f-8915-4e10-83a6-1cb50809dc19))
* Created Fabublox process for annealing testing ([https://www.fabublox.com/process-editor/0bf4952c-a946-4297-88c2-b4ad10fb9143](https://www.fabublox.com/process-editor/0bf4952c-a946-4297-88c2-b4ad10fb9143))
* Created Fabublox process for Ni contacts testing ([https://www.fabublox.com/process-editor/dd27629e-aa67-4ec5-8450-e68649ff62fc](https://www.fabublox.com/process-editor/dd27629e-aa67-4ec5-8450-e68649ff62fc))
* Defined the parameters to be extracted from IV and CV measurements ([https://docs.google.com/document/d/1kRxrYw\_IqMbyyWSPSQffWJJDcG3zCKjm/edit?usp=sharing\&ouid=104911347651865134602\&rtpof=true\&sd=true](https://docs.google.com/document/d/1kRxrYw_IqMbyyWSPSQffWJJDcG3zCKjm/edit?usp=sharing\&ouid=104911347651865134602\&rtpof=true\&sd=true))
* Started the chip fabrication for baseline testing following my Fabublox process flow

#### <mark style="color:blue;">Roadblocks/Challenges:</mark>

Fabrication this week could have been better. Started with 3 chips but lost 2 in the spin coater. Decided to take this first fabrication to the end with only the remaining chip. I would say my major challenge is getting accustomed to the equipment and processes.

#### <mark style="color:blue;">Plans for next week:</mark>

* In terms of fabrication, my plan is to have at least 3 viable chips ready for baseline measurements&#x20;
* If everything goes well with the fabrication, the plan is also to start making some measurements with TLM and extract valuable parameters
* In parallel, I would like to start doing some research on possible differences in metal-Si contact behavior for both p type and n type Si and assess the viability of introducing these in further testings

***

#### Responses

* From Cesely
  *   Great work this week!

      The spin coater can be difficult to work with. In the past I have tried ensuring that photoresist is prohibiting the vacuum or that the o-rings are clean. Another, parameter that affects its effectiveness is the size of the chip- try to keep your chips to 1 cm^2 so that they stay on. Additionally, you can try using double sided tape.

      Where are you in the fabrication process for your baseline chip? Are you varying any parameters between your three baseline chips (cleaning process, dopant concentration, etc.)? If you are varying any parameters I would make sure to deposit the aluminum at the same time on all three chips if you haven't already deposited.

      If you want you can attempt to perform a baseline p-type chip using B154. The Filmtronics Data Sheet provides good detail about junction depth/sheet resistance for their B154 SOG, which makes it easy to gauge the carrier concentration.
*   From Jay

    * Good job getting trained, getting used to the fab, and beginning some chips for TLM.
    * Make sure to link updated github project tracker
    * make sure to link your notes/documentation from fabing the TLM chips





***

### <mark style="background-color:blue;">Weekly Update #3 (Feb 9)</mark>

Tasks: [https://github.com/orgs/hacker-fab/projects/35/views/1](https://github.com/orgs/hacker-fab/projects/35/views/1)

Folder: [https://drive.google.com/drive/u/0/folders/1qafBxH8luKwNSnPRmJxCRI\_14apNio72](https://drive.google.com/drive/u/0/folders/1qafBxH8luKwNSnPRmJxCRI_14apNio72)

#### <mark style="color:blue;">Accomplished this week:</mark>

* We decided to fabricate 4 chips for the baseline testing: 2 with Aluminum and 2 with Nickel, and within those 1 p-doped and 1 n-doped ([https://docs.google.com/document/d/1ySbER2cQHFqWkUeQs8Q9j2Xhx4sTrYl5xfo5lC\_T\_s0/edit?tab=t.0](https://docs.google.com/document/d/1ySbER2cQHFqWkUeQs8Q9j2Xhx4sTrYl5xfo5lC_T_s0/edit?tab=t.0)). This way we ensure the baseline testing covers several parameters and chip variations.&#x20;
* I have fabricated the 4 chips side by side, according to the Fabublox process ([https://www.fabublox.com/process-editor/2b1a8f1f-8915-4e10-83a6-1cb50809dc19](https://www.fabublox.com/process-editor/2b1a8f1f-8915-4e10-83a6-1cb50809dc19)). The fabrication was not a smooth process. I learned that a lot of things can and will go wrong, creating several stepbacks and delays in the fabrication process.
* The 2 Al chips are finalized and ready to test.
* The 2 Ni chips are currently stuck on the Nickel etching step.

#### <mark style="color:blue;">Roadblocks/Challenges:</mark>

The major roadblock right now is Nickel etching. According to the deposited thickness and the etch rate, the etch time should be around 4 minutes at 40C. We used a thermistor to ensure that temperature was reached, and the Nickel was nowhere near being etched. We decided to increase the etch time, but still no luck. I plan to do some reading on this and try to find the problem.

#### <mark style="color:blue;">Plans for next week:</mark>

* Make IV and CV testing on the 2 fabricated Al chips
* Research Nickel etching to find the problem with our current process
* If I am successful in etching the Nickel, I also plan to do IV and CV testing on those chips, in hopes of having the full baseline testing ready for the first demo
* I have been making daily logs with the inputs of fabrication progress, including everything that was accomplished, what went wrong, calculations, parameters, and weird things observed. I plan on going through all of these and joining them in a public document.&#x20;

#### Responses

• From Cesely\
\
Accomplishing the fabrication this week is a big step forward. This week you should prioritize testing the Al chips and troubleshooting the Nickle chips.

Probing the Al chips should be straight forward. I can perform training with you on Friday or Saturday.

The electroless Nickle process and etching was a new process researched last semester, so I am not fully aware/familiar with the process. I’d recommend working with Daniel and meeting with him as he developed that process. Based on the issues encountered, it might be wise to fabricate some back up chips with n and p doped regions: that way once you identify the issue with the plating/etching you have chips you can quickly continue fabricating.

Additionally, as you wrap up the fabrication of our baseline chips, it will be important to finalize how we want to improve the contacts once you have collected the data. One way of doing this is by annealing the Al contacts. I would recommend that you start finalizing a fabrication and testing process.

Lastly, where are you documenting your daily logs? I do not see them in your folder.

*   From Jay

    * Make sure to document what worked in terms of plating Ni, and what didn't work in terms of etching Ni (link your logs). Also make sure github tracker is up to date!
    * I would remake the p type and n type chips for testing Ni contact. But I recommend using a lift off process (now that we know the Ni may unexpectedly plate the entire surface). To do this, you would keep the photoresist on after using HF to etch the 700B SOG, then do Ni plating with the photoresist still on, then strip the photoresist. This works well with electrodeposits because they deposits because they deposit incoherent spherical particles. you may find this interesting (Shaun and I did this before): [https://docs.google.com/presentation/d/1bSWTTT-sIEubeuqaU07rOFuCD53CE3sTV\_890MjevvU/edit#slide=id.g2d1d23487f0\_1\_5](https://docs.google.com/presentation/d/1bSWTTT-sIEubeuqaU07rOFuCD53CE3sTV_890MjevvU/edit#slide=id.g2d1d23487f0_1_50), and [https://docs.google.com/presentation/d/1oSqJersLTUbzyhDs-7WHrj79tlpNNgWxgJMDRFjoSxc/edit#slide=id.g2bcd2c5f16c\_0\_110](https://docs.google.com/presentation/d/1oSqJersLTUbzyhDs-7WHrj79tlpNNgWxgJMDRFjoSxc/edit#slide=id.g2bcd2c5f16c_0_110). My hope would be to compare to results Shaun and I got, then also test Schottky barrier and annealing effects.
    * After probing the Al contact, you should anneal them and reprobe.



***

### <mark style="background-color:blue;">Weekly Update #4 (Feb 16)</mark>

Tasks: [https://github.com/orgs/hacker-fab/projects/35/views/1](https://github.com/orgs/hacker-fab/projects/35/views/1)

Folder: [https://drive.google.com/drive/u/0/folders/1qafBxH8luKwNSnPRmJxCRI\_14apNio72](https://drive.google.com/drive/u/0/folders/1qafBxH8luKwNSnPRmJxCRI_14apNio72)

#### <mark style="color:blue;">Accomplished this week:</mark>

* This week I was out of town for most of the days so the accomplishments were not too focused on fabrication, but more on computer work.
* Did the IV testing of the 2 Al-Si chips before annealing ([https://drive.google.com/drive/u/0/folders/1xUAGCG\_4qKMOKwY4XnZI6zqIe8Cj1hDt](https://drive.google.com/drive/u/0/folders/1xUAGCG_4qKMOKwY4XnZI6zqIe8Cj1hDt)).
* Annealed the chips at 250C for 15 minutes and reprobed.
* I drafted a doc with the results and interpretation of the IV testing of the chips ([https://docs.google.com/document/d/1trwQnbqlPfQ9Eh84AGdTB\_nJhIKhLQ6Lg6GDPYc7yvs/edit?tab=t.0](https://docs.google.com/document/d/1trwQnbqlPfQ9Eh84AGdTB_nJhIKhLQ6Lg6GDPYc7yvs/edit?tab=t.0)).
* I have made some superficial research on what could be the Nickel etching problem but I put a pause on that research because we decided to just redo the fabrication, this time leaving the photoresist on upon Nickel deposition.
* My previous daily logs were private in my Notion app. This week I made sure to put them all together in a single public doc in the drive ([https://docs.google.com/document/d/1p4lcY1\_Jr3aeueYAerozEAqLVf2e0bBO/edit](https://docs.google.com/document/d/1p4lcY1_Jr3aeueYAerozEAqLVf2e0bBO/edit)).

#### <mark style="color:blue;">Roadblocks/Challenges:</mark>

I don't believe I have any roadblocks at the moment.&#x20;

#### <mark style="color:blue;">Plans for next week:</mark>

* The IV testing doc right now is simply a draft with some results pasted there. This week I want to finalize the doc with a more thorough interpretation with the resistance calculations and complete report.
* Last week I did not yet know how to perform CV testing, but I want to go through with that this week on the 2 fabricated Al chips.
* Fabricate 2 Ni-Si chips for baseline testing, this time with the photoresist on when depositing the Nickel.
* Prepare presentation 1.
* Prepare lab report 1.
* Conduct literature review on Nickel etching processes and identify potential improvements for future fabrication attempts.

Feedback

• Cesely\
This week you should prioritize interpreting your results from the Al contacts for presentation 1 and fabricating chips to test the nickel contacts.

Interpreting your results will be important for deciding our next steps forward. It’s not completely clear to me based on your results document which graphs correlate to the n-doped and p-doped chips as well as which graphs correspond to before and after annealing. If am understanding it correctly, it appears that annealing made the contacts more ohmic, which is a good result. You only annealed for 15 minutes at 250°C. It may be worthwhile to evaluate the effect of varying time and temperature on the quality of the ohmic contacts.

Under roadblocks you should have put that you could not perform the CV testing. The Keithley is already set up to perform CV measurements, and we simply only have to change the probe leads. I can go over CV testing during our weekly CMOS meeting and we can get some results for you to include in your first presentation.

*   Jay

    * I agree with Cesely that higher temp anneal would be intersting. However, not worth making a second Aluminum chip to test this, so just reanneal the same chip at higher temps to see if there is any effect.
    * I also agree that remaking the Ni contact chip with a "liftoff" is a priority
    * Overall good job documenting preliminary results
    * We need to get on the same page about how to interpret CV testing results, and whether or not the probes should each be on a metal pad, or one probe on the probe station chuck.



***

### <mark style="background-color:blue;">Weekly Update #5 (Feb 23)</mark>

Tasks: [https://github.com/orgs/hacker-fab/projects/35/views/1](https://github.com/orgs/hacker-fab/projects/35/views/1)

Folder: [https://drive.google.com/drive/u/0/folders/1qafBxH8luKwNSnPRmJxCRI\_14apNio72](https://drive.google.com/drive/u/0/folders/1qafBxH8luKwNSnPRmJxCRI_14apNio72)

#### <mark style="color:blue;">Accomplished this week:</mark>

* Did the CV testing of the 2 Al-Si chips after annealing ([https://drive.google.com/drive/u/0/folders/1OtfSeHiOk9\_0VzbUJs\_QtlfJ4iF9OcPx](https://drive.google.com/drive/u/0/folders/1OtfSeHiOk9_0VzbUJs_QtlfJ4iF9OcPx))
* Interpreted and reported the IV and CV testing of the Al chips before and after annealing ([https://docs.google.com/document/d/1LWW8GRc6YJ19bA5i7fVkmBhBC39hiSN-/edit#heading=h.gjdgxs](https://docs.google.com/document/d/1LWW8GRc6YJ19bA5i7fVkmBhBC39hiSN-/edit#heading=h.gjdgxs)).
* Prepared demo 1 ([https://docs.google.com/presentation/d/1YVpjbd\_4WD9iAc4TRs4-pJ2zuRISwatKMxx0omEiaQU/edit#slide=id.g2d99bb64625\_0\_786](https://docs.google.com/presentation/d/1YVpjbd_4WD9iAc4TRs4-pJ2zuRISwatKMxx0omEiaQU/edit#slide=id.g2d99bb64625_0_786))
* Fabricated the 2 Nickel chips for baseline testing (1 n-doped and 1 p-doped):

<div><figure><img src="../../.gitbook/assets/641_final.jpg" alt="" width="375"><figcaption><p>641 Ni-Si (n-doped)</p></figcaption></figure> <figure><img src="../../.gitbook/assets/642_final.jpg" alt="" width="375"><figcaption><p>642 Ni-Si (p-doped)</p></figcaption></figure></div>

#### <mark style="color:blue;">Roadblocks/Challenges:</mark>

CV testing might be a roadblock at the moment in terms of interpretation. I have made it on the Al chips only after annealing and the interpretation of the results is very limited. I will do the CV testing on the Ni chips before and after annealing and try to figure out the curves.

I also have a feeling that the Nickel deposition did not go as well as expected and I am suspicious the Nickel was not well deposited. I will confirm this when I probe the chips.

#### <mark style="color:blue;">Plans for next week:</mark>

* Perform IV and CV testing on the fabricated Ni chips
* Anneal Ni chips and reprobe
* Anneal Al chips at higher temperatures and reprobe
* Prepare lab report 1
* Prepare mid semester documentation

Feedback

• Cesely

You're on track with everything. Based on the images, it looks like the nickel deposition went well, so you’re good to proceed with fabrication/testing. Your goals and plans for this week are spot on. The data you collect will guide our fabrication and testing in the coming weeks. Wrapping up this baseline is crucial, and you’re in a great position to get it completed. Additionally, the results from this week will help us refine our annealing conditions and may inform us about silicide formation for future fab processes. It will also give us insight into whether we need to explore different annealing parameters for aluminum.

Also the mid-semester documentation is due this week. Document the experiments you have run to date covering theory, fabrication/process, and results.

·      Theory: Describe the type of device you plan to fabricate, the testing    methods, and the expected outcomes.

·      Fabrication/Process: Detail how the device is made.

·      Results: Summarize the data collected and provide an interpretation of that data.

You aren’t required to follow this format exactly, but I hope it gives you insight into what we are looking for.
