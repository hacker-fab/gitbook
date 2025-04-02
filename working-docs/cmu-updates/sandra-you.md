# Sandra You

**Weekly Update #9**&#x20;

1. **What was accomplished:**
   1. Tried to pattern alignment marks on chip + plasma etch, but plasma etching twice left no visible marks on the chip.
      1. When we tried again, the spin coater was down :(
   2. Created a resistor parametrized cell in KLayout and tried to create a transistor parametrized cell using Ruby ([https://drive.google.com/file/d/18690kAVgSaabBlJULtgOd2o3I7i-Q-fy/view?usp=sharing](https://drive.google.com/file/d/18690kAVgSaabBlJULtgOd2o3I7i-Q-fy/view?usp=sharing))
      1.

          <figure><img src="../../.gitbook/assets/image (198).png" alt=""><figcaption></figcaption></figure>

          <figure><img src="../../.gitbook/assets/image (195).png" alt=""><figcaption></figcaption></figure>



2. **Roadblocks:**
   1. Spin coater issues: was not spinning properly on Wednesday, vacuum wasn't strong enough on Thursday.
3. **Plans for next week:**
   1. Edit transistor PCell code for KLayout.
   2. Continue fabrication of Metrology resistor chip if possible.

**Weekly Update #6**&#x20;

1. **What was accomplished:**
   1. Worked with Felicia to improve component generation usability and added metal contacts/vias to MOSFET masks.
      1.

          <figure><img src="../../.gitbook/assets/image (155).png" alt=""><figcaption></figcaption></figure>


   2. Created a Fabublox process for Metrology Resistor test chip.
      1. [https://www.fabublox.com/process-editor/f1b8ffe9-878d-4551-b070-a26cd98f6f1a](https://www.fabublox.com/process-editor/f1b8ffe9-878d-4551-b070-a26cd98f6f1a)
   3. Went through KLayout Primer ([https://docs.google.com/document/d/1GanXvxod2aYAZPX2OrjSmS0aSQVmM4hP6QFkcA0LCBk/edit?usp=sharing](https://docs.google.com/document/d/1GanXvxod2aYAZPX2OrjSmS0aSQVmM4hP6QFkcA0LCBk/edit?usp=sharing)) and created the simple layout shown:
      1.

          <figure><img src="../../.gitbook/assets/image (156).png" alt=""><figcaption></figcaption></figure>


      2. Had a lot of trouble figuring out layers, and still wasn't able to include all the layers needed. When inputting the initial layers, several aren't translated to actual layers, and using "Edit" -> "Layers" -> "Add Layers" also doesn't add the layers to the sidebar. Will work on this later.
2. **Roadblocks:**
   1. Not having HF training bottlenecks our ability to fabricate the Metrology resistor testing chip.
3. **Plans for next week:**
   1. Begin fabrication of Metrology resistor testing chip.
   2. Look more into KLayout DRC and LVS capabilities.
   3. Determine possibility of importing already existing GDSII files into KLayout and editing those.&#x20;

**Weekly Update #5**&#x20;

1. **What was accomplished:**
   1. Added [parametrization ](https://colab.research.google.com/drive/1XhXm_uumourmU2MWrl_YJQnlEl-nG5eg?usp=sharing)for resistor generation and MOSFET generation
      1.

          <figure><img src="../../.gitbook/assets/image (140).png" alt=""><figcaption></figcaption></figure>

          ii. Looked into open-source layout tools and decided that KLayout is promising.

          1. Has built-in LVS and DRC support and good GUI for drawing layouts.&#x20;
2. **Roadblocks:**
   1. HF training session isn't until mid-March, which makes it difficult to fabricate full devices, e.g. MOSFETs for testing or the Metrology pad resistance chip.&#x20;
3. **Plans for next week:**
   1. Set up KLayout and create a mask with it to compare to PHIDL.&#x20;
   2. Maybe begin fabricating the Metrology resistor chip using the masks previously created.
   3. Devise a testing plan for DRC rule development.
      1. Which layers to test, which patterns to use, etc.&#x20;

**Weekly Update #4**&#x20;

1. **What was accomplished:**
   1.  Re-patterned chip with the mask created from Update #2.

       1. Re-measured using the calibrated microscope measurements, but noticed large discrepancy between the 10x and 20x measurements, as shown below.&#x20;
          1. Points at 45 units and 80 units were measured using the 10x magnification, while other points were measured using 20x magnification.&#x20;
          2. May need to re-calibrate then re-measure.&#x20;

       <figure><img src="../../.gitbook/assets/image (107).png" alt=""><figcaption></figcaption></figure>
   2.  Patterned chip to try and test alignment using the below mask:

       <figure><img src="../../.gitbook/assets/image (108).png" alt=""><figcaption></figcaption></figure>

       1.  When patterning, it was difficult to align the masks exactly.&#x20;

           <figure><img src="../../.gitbook/assets/image (109).png" alt=""><figcaption></figcaption></figure>
   3. Completed [mask generation](https://colab.research.google.com/drive/1bXM5GX_AE7WAsoSxQLe35XEuIYxSi_KF?usp=sharing) for pad resistance/Metrology team collaboration (pending their approval).&#x20;
      1.  Will be testing 4 different pad sizes with 4 different n-channel sizes. 250 um x 250 um pad size masks shown below.

          <figure><img src="../../.gitbook/assets/image (110).png" alt=""><figcaption></figcaption></figure>
   4. Explored Magic VLSI but Icey suggested [gdsCAD](https://pythonhosted.org/gdsCAD/) and [KLayout](https://www.klayout.de/intro.html) as more modern alternatives. Will summarize benefits and tradeoffs of each tool during demo.
2. **Roadblocks:**
   1. Alignment of masks for patterns that require multiple exposures is difficult: will discuss in demo.
      1. Would be nice to have a way to place markers on the stepper or have exact distance tracking, but that's probably difficult to implement.&#x20;
      2. Purpose of alignment tests is to discover whether overlap in exposures causes unexpected behavior when photoresist is developed, which would create the need for certain DRC rules.&#x20;
3. **Plans for next week:**
   1. Finalize and present demo slides on demo day.
   2. Incorporate feedback from demo day and collaborate with the Metrology and Stepper team to determine next steps.
   3. Select one tool from the explored options (gdsCAD, KLayout, etc.) to focus on and deepen understanding.
   4. Calibrate and re-measure the scale factor test to ensure proper calculation.

**Weekly Update #3**&#x20;

1. **What was accomplished:**
   1.  Patterned chip following the [Patterning SOP](https://docs.hackerfab.org/home/standard-operating-procedures/patterning-sop-stepper-v2) with mask created from Update #2 on Thursday work session.&#x20;

       1. Were not able to calibrate the microscope to take accurate measurements of sizing because calibration slider wasn't available.&#x20;
       2. Best fit line suggests 1 unit in phidl is equal to 1.21 um for the microscope, with 0.144 um as the y-intercept, but the microscope is not calibrated.

       <figure><img src="../../.gitbook/assets/Screenshot 2025-02-09 at 3.41.49 PM.png" alt=""><figcaption></figcaption></figure>
   2. Created functions that can generate the cross alignment pattern on a mask, and generate NMOS masks at different locations on the mask.
      1. [https://colab.research.google.com/drive/1bXM5GX\_AE7WAsoSxQLe35XEuIYxSi\_KF?usp=sharing](https://colab.research.google.com/drive/1bXM5GX_AE7WAsoSxQLe35XEuIYxSi_KF?usp=sharing)
   3. Created [notes](https://docs.google.com/document/d/1OxRwDAGWQshovCu0T7od8k_w8QDzJhXd8bczofuO1x4/edit?usp=sharing) on Magic VLSI Tool; Found promising information for possible integration with Hacker Fab processes.
2. **Roadblocks:**
   1. Calibration slider for microscope seems to have been lost, so we don't know the exact measurements of our masks on the chip and therefore cannot get the scale factor. For now, we will use the scale factor estimation from Kent and the measurements we've taken.&#x20;
3. **Plans for next week:**
   1. Will work with the Metrology/Packaging team to deliver Resistor lab pattern but with pads added on at the peripheral
   2. Look more into Magic VLSI, complete tutorials, and discuss with Icey to see if this is a promising path to go down.
   3. Determine a good method/formula to generate resistors (single segment vs. multiple), function to size NMOS differently, and learn the masks/patterns for a capacitor.

**Weekly Update #2**

1. **What was accomplished:**
   1. Created a mask with rectangles of various sizes to test scale factor of phidl grid units to micrometers. ![](<../../.gitbook/assets/rectangles (1) (1).png>)
   2. Learned how to use the stepper, and SOP for patterning.
   3. Talked to the stepper team and decided on a cross with 1 elongated side as the marker shape of choice for now.
   4. Generated code that turns GDSII files into a png.
2. **Roadblocks:**
   1. Gina and I went into lab Sunday night to learn how to pattern, but the spin coater was unusable due to the vacuum being too weak.&#x20;
      1. We were unable to actually pattern a chip and measure the scale factor of grid units to micrometers.
3. **Plans for next week:**
   1. Pattern a chip with the mask above, and measure the sides of each rectangle to determine the scale factor.&#x20;
   2. Research Magic VLSI tool.
   3. Learn more about phidl layers, and how to implement them for more complex masks.

**Weekly Update #1**&#x20;

1. **What was accomplished:**
   1. Determined that I would be working with Gina on mask automation and DRC rules.
   2. Planned out the semester week-by-week with action items for the Project Proposal. ([https://docs.google.com/document/d/1wVFeGedLbJkedMMWSoLg0EdzVot8mtU53Ke8EUfJB6Y/edit?usp=sharing](https://docs.google.com/document/d/1wVFeGedLbJkedMMWSoLg0EdzVot8mtU53Ke8EUfJB6Y/edit?usp=sharing))
   3. Looked over the current progress and code for mask generation and DRC rules in the HackerFab Git repo.
2. **Roadblocks:**
   1. Gina and I will need to begin fabrication of single layers to determine the aspect ratio of the current mask generation code, but we have not had a lab session yet.&#x20;
      1. With Lab 1 next week, we hopefully will learn how to create a single layer, and be able to test different unit lengths in the current mask generation code.
3. **Plans for next week:**
   1. Learn how to fabricate single layers.
   2. Look more into phidl, graphics packages that allow for users to input or drag and drop shapes, and some examples of DRC rules.
   3. Experiment with exporting jpg files from the current mask generation code.&#x20;

**Weekly Update #0:**

1. **What was accomplished:**
   1. Read over EDA primer and looked into the resources linked.
   2. Did some searching on adding pdk to Cadence.
2. **Roadblocks:**
   1. No roadblocks at the moment.
3. **Plans for next week:**
   1. Figure out how to help the EDA team this semester.
      1. Currently thinking of creating a template for Cadence pdk files.
