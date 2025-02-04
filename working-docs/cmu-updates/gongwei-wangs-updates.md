# Gongwei Wang's updates

My name is Gongwei and I will be working on the EDA device modeling this semester

**Weekly Update #0**

Created GitBook page.



**Weekly Update #1**

1. &#x20;What was accomplished:&#x20;
   1. Did preliminary research into Skywater SKY130 PDK, OpenLane, SPICE modeling software.
   2. Collected and read documentation on Open-source tools available for EDA and PDKs
      1. SKY130: [https://skywater-pdk.readthedocs.io/en/main/rules/device-details.html](https://skywater-pdk.readthedocs.io/en/main/rules/device-details.html)
      2. SPICE parameter list: [https://www.seas.upenn.edu/\~jan/spice/spice.MOSparamlist.html](https://www.seas.upenn.edu/~jan/spice/spice.MOSparamlist.html)
      3. MOSFET modeling: [https://www.ece.mcgill.ca/\~grober4/SPICE/SPICE\_Decks/1st\_Edition/chapter5/Chapter%205%20MOSFETs%20web%20version.html](https://www.ece.mcgill.ca/~grober4/SPICE/SPICE_Decks/1st_Edition/chapter5/Chapter%205%20MOSFETs%20web%20version.html)
2. Roadblocks:&#x20;
   1. No roadblocks at the moment.
3. Plans for the week:
   1. Extracting various preliminary MOSFET parameters for SPICE simulation (such as g\_m, lambda, Vth) from some I-V, C-V graphs plotted in the previous semester from Icey.



**Weekly Update #2**

1. **What was accomplished:**
   1. Communicated with Wentao for his NMOS and SRAM I-V data from the previous semester.
   2. Plotted and analyzed preliminary MOSFET parameters for Vth.
      1. [docs.google.com/spreadsheets/d/1C\_Odhz8\_j3Gs2BDzav9Uem-xi8sEem3tuQcyWqPRRQA/edit?usp=sharing](https://docs.google.com/spreadsheets/d/1C_Odhz8_j3Gs2BDzav9Uem-xi8sEem3tuQcyWqPRRQA/edit?usp=sharing)
   3. Confirmed that we need to collect more data due to the limitations of the existing I-V data points.
   4. Wrote up a plan of equations and different methods of extracting Vth, and lambda.&#x20;
      1. [https://docs.google.com/document/d/1iD91FeDpwcOUBl5mRCegQmCtFu4HAtAGWHakf\_YnocE/edit?usp=sharing](https://docs.google.com/document/d/1iD91FeDpwcOUBl5mRCegQmCtFu4HAtAGWHakf_YnocE/edit?usp=sharing)
2. **Roadblocks:**
   1. No roadblocks at the moment.
3. **Plans for the week:**
   1. Collaborate with Ying to: classify accuracy levels for device parameter extraction and attempt extraction on existing chip 613
   2. Collect more data on Chip 613, most likely using the probe station under a larger range of Vds and Vgs
   3. Continue writeup on the parameter extraction doc of equations and different methods of extracting gm, lambda (Vth is ok).

