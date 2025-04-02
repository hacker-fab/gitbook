---
description: My name is Ying and I will be working on the EDA this semester
---

# Ying Meng

### **Weekly Update #0**

I created this Gitbook page.



### **Weekly Update #1**

The EDA team breaks down into Device Modeling and DRC Mask Design. I chose to be in the Device Modeling team helping with creating SPICE model simulation. The three of us wrote the project proposal together here [https://docs.google.com/document/d/1sCj4PGeCfQZ3DJODLZkjC7j2guPgpSJxxSDldw\_wTm8/edit?tab=t.0](https://docs.google.com/document/d/1sCj4PGeCfQZ3DJODLZkjC7j2guPgpSJxxSDldw_wTm8/edit?tab=t.0) and revised it with Icey. We divided the research work and planned to finish it before our next meeting on Tuesday. I'm in charge of researching MOSFET models with different precision along with the SPICE parameters required from each model and suggest one to follow first. Details of my work are recorded here [https://docs.google.com/document/d/1GPqJ3GYlR0PzqFpR4nMNGcOII4sagbmCd-OWbnomDD0/edit?tab=t.0](https://docs.google.com/document/d/1GPqJ3GYlR0PzqFpR4nMNGcOII4sagbmCd-OWbnomDD0/edit?tab=t.0).



### **Weekly Update #2**

#### **What was accomplished:**

I researched more about SPICE MOSFET level 1. I updated the main documentation with the detailed formulas used to model the level 1 simulation, including current formulas for different MOSFET working regions, explanations and formulas for each SPICE parameter, ways to measure some parameters through experiments, and what limitations this simulation model has.

#### **Roadblocks:**

One roadblock I had was that there is few documentation with enough detailed information for me to fully understand which parameters are necessary for which MOSFET level simulation. I had to research each parameter one by one in detail to see why they are needed and how they are incorporated into the SPICE model. The roadblock is resolved for now, but I'm not sure if I need any help for more precise MOSFET simulation levels.

#### **Plans for next week:**

Next week, I will collaborate with Gongwei to finish developing the parameter extraction method for all parameters for level 1 simulation. I will keep working on level 2 simulation documentation if I have time.



### **Weekly Update #3**

#### **What was accomplished:**

Our team learned how to use the probe station to measure I-V curves for MOSFETs. Because of the roadblock described below, we designed two chip masks, one for probe station testing and one for packaged testing, and planned to do parameter extraction based on them after fabrication. I wrote a test plan based on my documentation on MOSFET level 1 SPICE simulation [https://docs.google.com/document/d/1wRFp3ccW5n\_bPLZD3rvi\_6JWFzY\_\_D2YDD\_fRpHgOsE/edit?tab=t.0](https://docs.google.com/document/d/1wRFp3ccW5n_bPLZD3rvi_6JWFzY__D2YDD_fRpHgOsE/edit?tab=t.0). By measuring ID vs. VGS and ID vs. VDS, we should be able to get the four required parameters for level 1 simulation.

#### **Roadblocks:**

One roadblock our team had was that chip 613, the one with the best experimental result from last semester, disappeared from lab. We were planning on measuring more data with that chip for parameter extraction, but now we have to fabricate a new one, which could delay our progress by a long time.

#### **Plans for next week:**

Next week, we will collaborate with Gina and Sandra to acquire the masks for the chips and start fabricating. I will keep working on level 2 simulation documentation if I have time.



### **Weekly Update #4**

#### **What was accomplished:**

Our team revised the initial draft of two chip masks and the testing plan to better interface with Gina and Sandra's mask generation. I learned the requirements of hand-drawn masks, such as layers, dimensions, DRC rules, etc. I also researched the SPICE level 2 model (Grove-Frohman model) and tried to understand it (reference [https://km2000.us/franklinduan/articles/hspice/hspice\_2001\_2-155.html](https://km2000.us/franklinduan/articles/hspice/hspice_2001_2-155.html)).

#### **Roadblocks:**

One roadblock for drawing masks is that there are no existing DRC rules for this process. Since we want to derive parameters for device modeling, we want the chip to give consistent curves, so we followed the dimensions from previous successful chips. Another roadblock I encountered is the lack of detailed documentation for SPICE level 2 model.

#### **Plans for next week:**

Next week, we will prepare for the presentation on Thursday. I will mainly present on the SPICE simulation levels and focus on explaining the level 1 model.



### **Weekly Update #5**

#### **What was accomplished:**

Our team did the first demo/presentation on Thursday. I made the slides about SPICE parameters and testing procedures in the shared google slide. I also continued the research on SPICE level 2 model and updated the document with some additional parameters and calculations.

#### **Roadblocks:**

The main roadblock for our team is fabricating the designed chips. We need to coordinate with Gina and Sandra to generate the mask to give to the stepper team. One roadblock I'm having for the level 2 model is the complexity of the calculations. I need to decide whether it is needed to decode all the equations to figure out how to derive the required parameters.

#### **Plans for next week:**

Next week, we can start learning how to fabricate the designed chips while waiting for the mask generation.



### **Weekly Update #6**

#### **What was accomplished:**

Icey and I discussed the fabrication process for P+ doping for the NMOS body. We thought of two different methods, using photoresistance or using sacrificial glass, and decided to first proceed with photoresistance because it needs less steps. I then created the new process (link: [https://www.fabublox.com/process-editor/a551eacd-cafd-4e2c-a3ba-c0c9e2418fc1](https://www.fabublox.com/process-editor/a551eacd-cafd-4e2c-a3ba-c0c9e2418fc1)), adding steps of body diffusion after step 15 and before source/drain diffusion. I then changed some photoresistance mask patterns for the future steps to adapt the changes.

#### **Roadblocks:**

The main roadblock now is that I don't know what exact parameters to use for P+ doping processes, such as the heating temperature and time. I need to refer to CMOS process team since they are creating P+ doping process for PMOS.

#### **Plans for next week:**

Next week after sping break, I will add the parameter details for the body diffusion fabrication process referring to PMOS fabrication process. Hopefully they can add a session for HF safety training and we can start fabricating the chip.



### **Weekly Update #7**

#### **What was accomplished:**

Cesely, Icey, and I discussed the fabrication process for P+ doping for the NMOS body again, and revised the process (link: [https://www.fabublox.com/process-editor/b51bc6cb-1617-4a62-a48c-5fe91185c57d](https://www.fabublox.com/process-editor/b51bc6cb-1617-4a62-a48c-5fe91185c57d)). The process now starts with a 700B glass layer, then etch the pattern for body and dope with P+, next etch the pattern for source and drain and dope with N+. In this way, P+ is diffused twice (1h in total) while N+ is only diffused once (30 min), because the material needs at least 30 minutes to harden and we want the P+ doping to be deeper than the N+ doping.

Gongwei, Felicia, and I finished HF training and started fabricating our chips. We have 4 chips in total, 2 with packaging and 2 without. We finished doping N+ on the poly layer and etching it out (step 1-5).

#### **Roadblocks:**

One roadblock for developing the process is we do not have previous successful data to back up our thoughts, so we would have to rely on intuition and hope it works.

One roadblock for fabricating is the spin coater broke on the night we went to fabricate, and it was temporarily fixed with a workaround solution.

#### **Plans for next week:**

Next week we will continue to fabricate the chips. We should be able to patten the mosfet gates and finish etching it (step 6-15). If we have more time, we can continue to dope P+ and N+.



### **Weekly Update #8**

#### **What was accomplished:**

While waiting for the developer to be refilled, we discussed the potential of implementing LVS (layout versus schematic) check. We found an open-source tool called klayout, which has built-in LVS check, but we need to provide library files such as .lib, .lef, and qrcTechFile.

Gongwei, Felicia, and I continued fabricating our chips after the developer was refilled. We spinned on HMDS and photoresist for all four chips. We uploaded the chip masks for the MOSFET gates to stepper software and patterned two chips (step 6-11).

#### **Roadblocks:**

One roadblock was the lack of developer until Thursday, so we fabricated only after Thursday.

Another roadblock is the stepper not being able to focus well, especially when it switches to UV mode. So after the chip goes through the developer, we could only see the boundary of the pattern but not the detailed gates.

#### **Plans for next week:**

Next week we will continue to fabricate the chips. We need to figure out why stepper could not focus well and try to find a solution. We should continue patterning the MOSFET gates and finish etching them (step 6-15).



### **Weekly Update #9**

#### **What was accomplished:**

Gongwei, Felicia, and I continued fabricating our chips. We tried manual focus to solve the stepper issue from last week, and were able to pattern two chips successfully with several clear patterns for chip for packaging and for testing. We learned to use the plasma etcher but encountered some problems (explained in the roadblocks section). Most of our chips failed during fabrication, so we made four new ones, which are ready to be patterned.

<figure><img src="../../.gitbook/assets/EDA_nmos_wireBond_post_pattern (1).jpg" alt="" width="375"><figcaption></figcaption></figure>

**Roadblocks:**

One roadblock was we didn't know what parameters to use for plasma O2 clean. Despite finding the plasma time from the SOP, we were not familiar with the software so we entered the wrong time and caused two patterned chips to be cleaned more than they should be, which led to the pattern disappearing. Another roadblock was the plasma etcher did not etch uniformly for our third chip. I believe our main issue was being not familiar with the fabrication process and tool, and did not have much experience, so we had to do everything several times before succeeding.

<figure><img src="../../.gitbook/assets/EDA_o2_0005 (3).jpg" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/EDA_NMOS_post_plasma_PRstrip (2).jpg" alt="" width="375"><figcaption></figcaption></figure>

**Plans for next week:**

Next week we will continue to fabricate the new chips. With what we learned from the failed chips, hopefully we should be able to fabricate the gate of the new 4 chips smoothly and start developing source and drain.
