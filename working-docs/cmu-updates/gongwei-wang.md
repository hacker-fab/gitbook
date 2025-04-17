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





**Weekly Update 7**

**What work was done:**

* Completed HF training and started chip fabrication of 4 chips (2 nmos test chips designed by Felicia and 2 i/o pad test chips for my collab with James) and finished HF etching of all 4 chips following the doping step.
*   Adjusted design of 16pad i/o test chip's mask to have greater redundancy for manufacturing process variations, especially in the drc of metal wires. Regenerated all 8 stepper frame masks (with alignment marks) to prepare for next manufacturing step of lithography for the 16 i/o pad test chip. The masks can be found here: [https://drive.google.com/drive/folders/1xMaYTnNSwelVHWlhKzDsOBqmKMoU9ssm?usp=drive\_link](https://drive.google.com/drive/folders/1xMaYTnNSwelVHWlhKzDsOBqmKMoU9ssm?usp=drive_link)



    <figure><img src="../../.gitbook/assets/image (167) (1).png" alt=""><figcaption></figcaption></figure>

**Roadblocks:**&#x20;

* Spin coater was found to be broken on Friday, and we were eventually able to fix it with a workaround.
* The dopant was expired, but a new batch has already been ordered. Went ahead with the barely expired dopant. Slightly concerned about side effects of the expired chemical on our diffusion quality.

**Next Steps:**

* Continue with the fabrication process of the 4 chips, with patterning, etch, deposition. If we don't run into other unexpected roadblocks, will aim to start probe testing and verifying the manufacturing quality, and consider refab with unexpired dopant.





**Weekly Update 8**

**What work was done:**

While waiting for the developer from Nanofab, we explored implementing an LVS operating procedure for our HackerFab process and found K-Layout which has native LVS support. To run LVS, we'd need concrete process parameters for our MOSFET devices in order to create the .lib and .lef files for our manufacturing process, similar to technology libraries provided by foundries like TSMC. After further research, I believe the .lef files are especially important since they contain the physical layout and abstract information of standard cells, macros, or other physical components, while .lib files contain the logical and timing characteristics of those cells, crucial for synthesis and static timing analysis.

After developer was available, immediately continued fabrication of our NMOS characterization chip and I/O pad test chip, applying HMDS and photoresist for all 4 chips, and also patterning for the NMOS chip.&#x20;

For patterning, we exposed the mask below and then developed it, but the NMOSes gate's features were not resolvable, even under the microscope. This is likely due to issues with the autofocus on the new stepper software and camera setup, so when UV exposing the mask it was out of focus and blurred. I think doing manual focus by adjusting the z-axis can a possible workaround to try next.

&#x20;![](<../../.gitbook/assets/image (240).png>)

After develop:

&#x20;![](<../../.gitbook/assets/image (241).png>)![](<../../.gitbook/assets/image (242).png>)



**Roadblocks**:

Our lab ran out of developer so we could not fabricate until Thursday.&#x20;

Initially there was an error in the Fabublox process instructions for HDMS bake time which stated a bake time of 20s, but this turned out to not be enough because after lithography and developing the photoresist no change was visible. Then I checked the SOP for patterning and found it listed a 60s bake time for HMDS and that worked.&#x20;

The autofocus on the stepper seems to be not working well with the new camera and software setup with the image on-screen being blurry after an autofocus run and needing manual z-axis adjustment. But manual focus is challenging, especially in UV mode where the color contrast is very low and the mask pattern is barely visible.



**Next steps:**

Retry lithography by doing manual focus on the stepper and continue fabrication of the NMOS characterization chip. I believe we can debug the resolution and image focus issues by exposing a resolution test pattern like this: ![](<../../.gitbook/assets/image (243).png>)





**Weekly Update 9**

**Work done:**

Doped and HF etched three more chips on Tuesday afternoon and evening, and then on Wednesday, I proceeded to the next steps of patterning with the Mask 1 and Mask 2 of the wire bonding / packaging test chip, and tested out different methods of aligning the  two masks vertically and horizontally. Ran into quite a few issues with stepper GUI and the old developer solution, but was eventually able to overcome them. \
\
On Thursday, tried to re-expose and develop Mask 3 and Mask 4 onto the packaging test chip, but that accidentally washed away all my previous masks on the chip, and then tried to recoat HMDS and PR to repattern new masks but spin coater vacuum seal was found to be broken. On advice from Discord, went back to lab again to use sticky tape to adhere the chip to the spinner and was able to repattern new masks. However, without the spin coater vacuum, the sticky tape method is much more contamination-prone. \
![](<../../.gitbook/assets/GW_mask1_2_after develop (1).png>)![](<../../.gitbook/assets/GW_mask1_2_after develop_pkg_chip.png>)\
\
During the weekend, went back to lab to continue with next step of our NMOS process with plasma etching and HF etch and Spin-on-glass. Ran into several setbacks with the plasma machine. Initially plasma etch was uneven, and it was likely due to the SF6 pressure regulator which was malfunctioning. Then with another 2 chips, the plasma descum process/sequence's plasma time was set too long which removed too much material and had to be scrapped. \
Then we learned from this experience and refabricated several new chips, which are now currently at various steps of the process (step 22, step 17, step 12) so that we can continue fabricate and minimize potential setbacks in later steps.\
\
![](<../../.gitbook/assets/image (238).png>)![](<../../.gitbook/assets/image (239).png>)\
\
\
\
**Roadblocks:**\
\
One major issue we experienced was unclear documentation of the stepper GUI, which meant that we were not aware of a rotation setting that was none-zero and was distorting our mask, and the functioning of the many different buttons of "same as pattern" and confusions with whether it automatically converted red to blue for UV exposure.&#x20;

Stepper auto-focus is also broken on the UV mode and we later realized it cannot be relied on, and we actually have to do manual focus. \
\
Another is the vacuum system on the spin coater being broken and having to manually stick chips on with tape, which is introducing a lot of contamination. \
\
The plasma etcher GUI was also unclear with documentation and the meanings of how its various settings and how it represented set plasma time. It was erroneously displaying a set time of 30 seconds as a "1", which led to a serious confusion where we believe 4 would be 4\*30 = 120seconds, and this destroyed two of our chips.

\
**Next steps:**

Learn from this experience and continue with steps 23+ of the fabrication process. And also begin lithography for the p+ body contacts after fixing the masks for those. \
\
&#x20;\


**Weekly Update 10**

**Work done:**\
\
Ying, Felicia and I continued fabrication with the knowledge and experience we gained from last week, and this time it went much more smoothly. We were able to do HF etch, then plasma etch (making sure that the SF6 gas output gauge had good pressure \~5 psi), and got clear NMOS characterisation chip patterns done.\
\
![](<../../.gitbook/assets/image (245).png>)

\
Over Spring Carnival, I went ahead and fabricated more steps in the Wire Bonding chip with I/O pads.\
\
700B Non-resist post-bake:![](<../../.gitbook/assets/image (249).png>)\
\
PR & Developed P+ body diffusion zone:\
![](<../../.gitbook/assets/image (246).png>)\
HF-etched:\
![](<../../.gitbook/assets/image (247).png>)\
PR-stripped:\
![](<../../.gitbook/assets/image (248).png>)\
\
Unfortunately the stepper Y-axis calibration was not accurate, and the masks did not overlap, but this will likely not be an issue, as we can have our Metal 1 (Al) deposition bridge the gap anyway on the top layer.\
\
I was able to advance the fabrication ahead until the step right ahead of P+ spin-on dopant before discovering a roadblock where the HF etch time is missing in Step 33 of our Fabublox process, which will need to be resolved in our next meeting.

**Roadblocks:**

Stepper x-axis micrometer snapped, and the replacement micrometer did not have motor-driven control through the stepper software, so we had to manually control the x-axis movements, which led to overlaps in masks. \
\
The spin-coater's vacuum is still broken, forcing us to resort to using double-sided tape. This makes it challenging to remove the chip after a coat and more prone to contamination. \
\
Steps 33, 38, 47, and later Wet-etch stages in the Fabublox process are missing Etch Times for all of them, so it was unclear what times I should use. Some experimentation and process development will need to be done.\
\
We observed some strange, colorful banding on our chip after plasma etch, which meant we had to scrap it and start over with a new chip. This is perhaps due to insufficient HF etch in the earlier step. \
![](<../../.gitbook/assets/image (244).png>)

\
**Next steps:**\
\
Continue quick advancement in the fabrication process now that I am increasingly experienced with the tools and process. During the next meeting, will work with Ying and Icey to figure out the missing HF Etch times for the next steps in Fabublox. Also continue exploring standard cell development and pdk creation. \
\
\
**Week 11 Update**\
\
**Work done:** \
\
&#x20;We continued fabrication on our pipeline of different chips at various stages of the fabrication process. The packaging chip was completed: Spin-on P+ dopant, Dopant diffusion via tube furnace at 1100 °C for 35 minutes, Spin-on photoresist, and N+ region patterning (where a roadblock was encountered).  Currently, our packaging chip is at the furthest stage in the Fabublox process, before we hit a roadblock with the stepper's alignment of overlapping masks, and our NMOS characterization chips have been plasma-etched, HF-etched, survived O2 plasma clean, 700B spun-on & baked for 30 minutes, and are ready for P+ patterning. \
\
Post-plasma-O2:\
![](<../../.gitbook/assets/image (277).png>)\
\
Post-non-resist:\
![](<../../.gitbook/assets/image (279).png>)\
\
\
**Roadblocks:**\
\
The stepper was updated to a new version, and the new version has a resulting pattern size that is approx. 7% larger, so the alignment marks do not exactly line up with the previous exposures I already did on the lower layers (e.g. the poly mask). \
\
We also ran into an issue where upon a mode switch the stepper moves it's x and y axis, even though all the checkboxes for autofocus and align stuff are deselected. So when we carefully aligned our n+ mask to overlap with the poly gate in red mode, as soon as switching to UV mode it would throw off the x/y position of the n+ diffusion regions, which made us unable to do the next step of n+ lithography and subsequent doping.  \
![](<../../.gitbook/assets/image (275).png>)![](<../../.gitbook/assets/image (276).png>)

\
**Next steps:**\
\
Test out possible ways to adapt to the new stepper 7% size increase by either shrinking the mask in a photo editor, or calculating and then creating some borders using the stepper GUI.

Continue with the few remaining steps in the fabrication, calculating multi-layer HF-etch times for the B154 and 700B based on their estimated thickness from spincoat RPM and time. Then just N+ doping and Aluminium evaporation, after which we can carry out probe station testing, but likely with the body contact tied to source, since our Probe station only has 3 voltage/current drivers.\
