---
description: Hi I'm Felicia, I'm working on EDA - Device Modeling :)
---

# Felicia Liu

**Weekly Update #1**

Work done:

I drafted project proposal and set goals/timeline on what we plan to achieve this semester with two other teammates in the EDA device modeling subteam ([https://docs.google.com/document/d/1sCj4PGeCfQZ3DJODLZkjC7j2guPgpSJxxSDldw\_wTm8/edit?tab=t.0](https://docs.google.com/document/d/1sCj4PGeCfQZ3DJODLZkjC7j2guPgpSJxxSDldw_wTm8/edit?tab=t.0)).

I focused on figuring out what tool to use for the SPICE model simulation. We decided to go with KiCad's schematic tool which has an embedded open-sourced SPICE simulator Ngspice. It supports custom MOSFET SPICE model definition and can export SPICE netlist from schematics.

Roadblocks:

Had some confusion about which tool was the best to use but resolved.

Plan for next week:

Try simulating with the initial MOSFET model with process parameters calculated from last semester's chip. Figure out what parameter is still needed to build a higher precision MOSFET model and coordinate with other teams involved to develop a testing plan.

**Weekly Update #2**

Work done:

I worked on writing a dummy MOSFET SPICE model and developing an SOP for SPICE simulation in KiCad ([https://docs.google.com/document/d/1\_067-FJ9xRFWtv6PRrNWwk6ueBx2oNrUpBuWezrBQxI/edit?tab=t.0](https://docs.google.com/document/d/1_067-FJ9xRFWtv6PRrNWwk6ueBx2oNrUpBuWezrBQxI/edit?tab=t.0)). I have figured out how to run DC sweep, plot diagrams, and export SPICE netlist.

Roadblocks:

It is hard to find reliable SPICE documentation. We are having some issues finding the correct way to calculate all the necessary SPICE model parameters from the testing results we currently have. Chips from last semester are not ideal and we are considering fabricating some new chips.&#x20;

Plan for next week:

Explore more KiCad SPICE functionalities. Research how to calculate parameters, maybe read some textbooks in addition to SPICE documentation.

**Weekly Update #3**

Work done:

Our group is currently working on developing a test chip for NMOS characterization to collect process parameters and plug them into SPICE model. I worked on designing an initial test chip mask&#x20;

([https://drive.google.com/file/d/1xJqtZhwv6ymNPnZKm5X7mc3w4kSNG3Up/view](https://drive.google.com/file/d/1xJqtZhwv6ymNPnZKm5X7mc3w4kSNG3Up/view)).

and helped with coming up with the testing plan ([https://docs.google.com/document/d/1wRFp3ccW5n\_bPLZD3rvi\_6JWFzY\_\_D2YDD\_fRpHgOsE/edit?tab=t.0](https://docs.google.com/document/d/1wRFp3ccW5n_bPLZD3rvi_6JWFzY__D2YDD_fRpHgOsE/edit?tab=t.0)).

I also learned how to use the probe station to test the chip when it comes back.

Roadblocks:

Initially, our group thought we could use the chips from last semester to get the curves needed to calculate the device parameters. However, the working chips were missing so we had to design and refabrication our own chip.

Plan for next week:

The hand-drawn chip masks (one for NMOS characterization by me and one for packaging with I/O pads by Gongwei) need to be finalized with appropriate spacing between components and be transferred to real masks by the mask design group.

