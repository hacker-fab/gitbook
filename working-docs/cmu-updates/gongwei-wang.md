# Gongwei Wang

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



**Weekly Update #3**

1. **What was accomplished:**&#x20;
   1. Learned during Tuesday's extra training session details on how to use the probe station and parametric analyzer equipment to prepare for later work measuring and extracting parameters from our fabricated NMOS chips.
   2. Added details to parameter extraction document to have plan of analysis for our necessary SPICE Level 1 MOSFET parameters for simulation.&#x20;
   3. Designed and hand-drafted a mask for our 16 I/O pad chip that we have planned, with 5 MOSFETs and 1 PSUB body connection. [https://drive.google.com/file/d/163fGV8PKwP8sKIzO7hwD44xELJJviuWa/view?usp=sharing](https://drive.google.com/file/d/163fGV8PKwP8sKIzO7hwD44xELJJviuWa/view?usp=sharing)
2. **Roadblocks:**
   1. A significant unexpected roadblock was that Chip 613 which we had high hopes of using for performing parameter extraction and further testing with higher V\_GS values was nowhere to be found in the lab.
   2. Unfortunately, Chip 516 and 588/587 from Wentao last semester are also missing, which is a major setback where we must now take a step back and perform re-fabrication to have a functional chip to work with.
3. **Plans for next week:**
   1. Collaborate with Sandra and Gina to finalize the mask I drew for our test chip with 16 I/O pads, make appropriate adjustments to the Length and Width parameters, and settle on a final mask/layout.
   2. Finalize on testing plans and work with Ying and Felicia to decide on some reasonable DRC estimates for the spacing distances between the MOSFETs on the test chip and the minimum gate extension.

\
**Weekly Update 4**&#x20;

1. **What was accomplished:**
   1. &#x20;Redrew a new layout for our 16 I/O pad test chip with exact to-scale dimensions for each layer and updated pad component requirements from the Metrology team. (Pads now 300 x 300 um, Stepper frame 1920by1080 pixels) [https://drive.google.com/file/d/163fGV8PKwP8sKIzO7hwD44xELJJviuWa/view?usp=sharing](https://drive.google.com/file/d/163fGV8PKwP8sKIzO7hwD44xELJJviuWa/view?usp=sharing)
   2. Probe tested Chip 493 to get data for Id-Vds and Id-Vgs (at many different Vd bias voltages of 1V, 1.5V, 2V, 3V, 4V, 5V, 6V, 7V, 8V) to use in our parameter extraction flow. [https://drive.google.com/drive/folders/1MjFysxUzDzQmJ1Hy9QC1mP7D4bGZa5St?usp=drive\_link](https://drive.google.com/drive/folders/1MjFysxUzDzQmJ1Hy9QC1mP7D4bGZa5St?usp=drive_link)
2. **Roadblocks:**&#x20;
   1. Chip 493 exhibits large deviations from the theoretical MOSFET behaviors of Id-Vds curves expected. This is likely due to manufacturing defects in chip 493, for example, having a significant source/drain resistance (i.e. high resistance between Al pad and source/drain doped region, or insufficient doping at source/drain to reach Ohmic connection)&#x20;
   2. The threshold voltage derived from Id-Vgs curves varies at different bias voltages, which has multiple possible causes such as S/D resistance, or inconsistent doping.
3. **Plans for next week:**
   1. Begin manufacturing of a higher quality NMOS using the test mask that Felicia drew with 2 rows of MOSFETs for further testing and do probe station data extraction instead of using the old Chip 493.
   2. Continue analysis of non-ideal data collected from Chip 493 testing and research potential causes.
   3. Present on current project progress in Demo 1

\
\
**Weekly Update 5**

1. **What was accomplished:**
   1. Presented to the class on Thursday our current progress and I demonstrated the testing plan and preliminary test results I gathered from chip 493 using the probe station. I also showed the 16-pad test chip to-scale layout I created for our wire bonding and packaging collab with Metrology. Also, performed further analysis of the unusual data I had collected from Chip 493 to figure out possible reasons for the non-ideal behavior, and presented them (e.g. S/D doping, body effect, Schottky contact) to the class on Demo day for feedback.&#x20;
2. **Roadblocks:**
   1. The main bottleneck for our whole team is having chips to test and obtain data, thus we need masks generated to use in the stepper for fabricating the new test chip. Currently, Gina and Sandra are re-measuring their scale factor mask so that our final MOSFET dimensions (length/width) are accurate for the mask generation.
3.  Plans for next week:

    1. Work on learning and mastering the chip fabrication flow to produce high-quality chips while waiting for the mask generation scale-factor to be resolved. Possibly get hands-on safety training in the lab, for example HF handling procedures.\
       \




**Weekly Update 6**

**What was accomplished:**

Further refined my hand-drawn mask for our 16-pad test chip and finalized on alignment metal patch sizing and width of wires. [https://app.diagrams.net/#G163fGV8PKwP8sKIzO7hwD44xELJJviuWa#%7B%22pageId%22%3A%22GMjX7zHhpJls\_Crg95KZ%22%7D](https://app.diagrams.net/#G163fGV8PKwP8sKIzO7hwD44xELJJviuWa#%7B%22pageId%22%3A%22GMjX7zHhpJls_Crg95KZ%22%7D)

Learned how to use Gina and Sandra's mask generation Python tool on Google Colab, and then coded it to generate masks for our 16-pad test chip with metal pads of 300um x 300um and metal\_psub contact, to be well-prepared for starting manufacturing.\
[https://colab.research.google.com/drive/1Mg7M8bjttieN\_uWDLnfcpidyplpPdlc9#scrollTo=\_IbcqxEdlzUq](https://colab.research.google.com/drive/1Mg7M8bjttieN_uWDLnfcpidyplpPdlc9#scrollTo=_IbcqxEdlzUq)

<figure><img src="../../.gitbook/assets/image (153).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (154).png" alt="" width="375"><figcaption></figcaption></figure>

**Roadblocks:**

None currently

**Plans for new week:**

\~ Mon - Thurs: Work on fabricating the chip, and most likely will need to debug issues with alignment with multiple exposures and stepper frames. Possibly iterate on design based on practical results and create new masks.

\~ Fri - Sun: Probe-station testing the fabricated chip to confirm quality of manufacturing and collect data for validation (Id-Vds, Id-Vgs curves).

