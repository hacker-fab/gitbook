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

* From Jay
  * Make sure to document what worked in terms of plating Ni, and what didn't work in terms of etching Ni (link your logs). Also make sure github tracker is up to date!
  * I would remake the p type and n type chips for testing Ni contact. But I recommend using a lift off process (now that we know the Ni may unexpectedly plate the entire surface). To do this, you would keep the photoresist on after using HF to etch the 700B SOG, then do Ni plating with the photoresist still on, then strip the photoresist. This works well with electrodeposits because they deposits because they deposit incoherent spherical particles. you may find this interesting (Shaun and I did this before): [https://docs.google.com/presentation/d/1bSWTTT-sIEubeuqaU07rOFuCD53CE3sTV\_890MjevvU/edit#slide=id.g2d1d23487f0\_1\_5](https://docs.google.com/presentation/d/1bSWTTT-sIEubeuqaU07rOFuCD53CE3sTV_890MjevvU/edit#slide=id.g2d1d23487f0_1_50), and [https://docs.google.com/presentation/d/1oSqJersLTUbzyhDs-7WHrj79tlpNNgWxgJMDRFjoSxc/edit#slide=id.g2bcd2c5f16c\_0\_110](https://docs.google.com/presentation/d/1oSqJersLTUbzyhDs-7WHrj79tlpNNgWxgJMDRFjoSxc/edit#slide=id.g2bcd2c5f16c_0_110). My hope would be to compare to results Shaun and I got, then also test Schottky barrier and annealing effects.
  * After probing the Al contact, you should anneal them and reprobe.
*
*
