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

