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
