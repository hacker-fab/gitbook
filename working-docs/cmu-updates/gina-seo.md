---
description: Hey! I'm Gina, and I will be working on EDA/PDK this semester.
---

# Gina Seo

## Update #9&#x20;

**What was accomplished:**&#x20;

* Conducted research and drafted a comprehensive [write-up on DRC methodology](https://docs.google.com/document/d/1DSXHdX0mfx_WKs53cKCCmKlRsX-9ngoYAvcdYDIZioQ/edit?usp=sharing), using PMOS fabrication blocks to identify process limitations and inform rule definitions.
* Edited our MOSFET on KLayout to be accurate orientation; Pictured below is NMOS and PMOS with adjustable parameters (high level and detailed view)![Image](https://media.discordapp.net/attachments/1339041637803884594/1358624222565371995/image.png?ex=67f484e8\&is=67f33368\&hm=8113b59306b65dc89fadcb6946eb89b68f4cc4af1e84103d54b2df929f87a4e9&=\&format=webp\&quality=lossless\&width=1296\&height=942)![Image](https://media.discordapp.net/attachments/1339041637803884594/1358624139912413355/image.png?ex=67f484d4\&is=67f33354\&hm=2379b1bb6ad44ea352924abde7e80bd72052f2a9aaca38929e3ee62b48aa870d&=\&format=webp\&quality=lossless\&width=1296\&height=970)

**Roadblocks:**

* Time conflicts got in the way of syncing about DRC guidelines and methodology in detail with Icey and Sandra over Carnival.&#x20;

**Plans for this week:**

* Complete Demo slides and send to Icey for feedback Monday night.&#x20;
* Figure out exporting masks as files, ideally before demo day.&#x20;
* Create mask instance for cross alignment marks.
* Create sample DRC script in KLayout.
* Determine detailed methodology with theory + math for some DRC experiments.&#x20;





## Update #8

**What was accomplished:**

*   Created instances in KLayout for resistor and mosfet with adjustable parameters (i.e. segments). Code using Ruby.&#x20;

    * User can call the instances onto their layout like you would on Cadence.\
      &#x20;![](<../../.gitbook/assets/Screenshot 2025-03-29 at 8.24.30 PM.png>)

    <figure><img src="../../.gitbook/assets/Screenshot 2025-03-29 at 8.24.34 PM (1).png" alt="" width="375"><figcaption></figcaption></figure>


* Uploaded code to [github](https://github.com/hacker-fab/Layout-tool-dev/blob/main/pcell_klayout), template can be used to extend with more instances like capacitors, etc.&#x20;
* Researched general DRC parameters and how the script format is written when inputting into [KLayout](https://www.klayout.de/doc/manual/drc_basic.html#h2-44).&#x20;

**Roadblocks**

* Our first attempt after etching with plasma etch wasn't successful; no pattern showed up. So we had to erase and restart.&#x20;
* When we started to fabricate again, the spinner stopped working due to a malfunction, which stopped us from restarting our fab progress.&#x20;
  * Instead, we turned to looking at KLayout and spending more time there to create instances and start preparing a user manual for getting around KLayout tools.&#x20;

**Plans for this week:**

* Fabricate resistors, if possible.
* If not, develop a mask from KLayout for the resistor and try exporting as GDSII ->convert to png.&#x20;
* Create a list of parameters (industry-known + Hacker Fab specific) for DRC rules and create action items on how we can start collecting the data for parameters to integrate into DRC scripts as shown below for KLayout.

<figure><img src="../../.gitbook/assets/Screenshot 2025-03-29 at 8.42.15 PM.png" alt=""><figcaption></figcaption></figure>

## Update#7

**What was accomplished:**

* Edited and re-did [Fabublox](https://www.fabublox.com/process-editor/d5b2b494-f6bb-4923-b171-58ff32c34690) for resistor fabrication after Icey's review
* Completed HF training in class!! (finally)&#x20;
* Wrote the [mid-semester documentation ](https://docs.google.com/document/d/1suNQFwdelT2aFOMVPs0k_rZuyxtQMbGNVL8z_3UOaV4/edit?usp=sharing)with Sandra, updating our progress on our goals.&#x20;
* Supported Device Modelling team on debugging code issue for exporting files
* Attempted to fabricate resistors but ran into multiple issues in the fab. &#x20;

**Roadblocks:**

* Sandra and I tried to fabricate resistors last Thursday and Sunday but wasn't able to because 1. stepper broke down on Thursday and 2. no developer on Sunday.&#x20;
  * Delayed with our expected timeline for completing fabrication

**Plans for this week:**

* Fabrication with Sandra and Icey: Wait for developer to be restocked to do resistor fabrication
  * Take stepper pictures for alignment mark prints for Justin while patterning
* Look forward to HF tutorial/walkthrough on Tuesday to be able to use HF properly and safely
* Explore KLayout and play around with tool's functionality more
* Look through our Fabublox again to make sure each step aligns with SOP standards (i.e. [HMDS](../../standard-operating-procedures/patterning-sop-stepper-v2/) steps require pre-baking as well)

## Update #6

**What was accomplished:**&#x20;

*   Sandra and I collaborated with Felicia to enhance component generation usability and integrated metal contacts/vias into MOSFET masks.&#x20;

    <figure><img src="../../.gitbook/assets/Screenshot 2025-03-02 at 11.33.06 PM.png" alt="" width="250"><figcaption></figcaption></figure>
* Remeasured scale factor, and we were slightly off as expected because microscope was not calibrated last time. These are the following measurements:&#x20;

<figure><img src="../../.gitbook/assets/Screenshot 2025-03-02 at 11.50.43 PM.png" alt="" width="375"><figcaption></figcaption></figure>

* Discussed collaboration 2 sub-projects with Stepper team of training new alignment marks on Justin's deep learning algorithm.
  * We are able to modify existing alignment mark detector model with new data instead of creating a new model entirely.&#x20;
  * Deliverable: EDA team will collect 25-30 images of the new alignment mark under the microscope for sufficient training&#x20;
  * 2nd Deliverable: Do as many attempts of alignment on stepper by changing angle of stepper to be leveled within tool and shift in x direction only and take note of the number of stepper units it took to get to close alignment. Report to Stepper team.&#x20;
* Created [Fabublox](https://www.fabublox.com/process-editor/f1b8ffe9-878d-4551-b070-a26cd98f6f1a) process for the Metrology Resistor test chip; This will be used for next week's fabrication deliverables for Metrology team.&#x20;

<figure><img src="../../.gitbook/assets/Screenshot 2025-03-02 at 11.38.06 PM.png" alt="" width="375"><figcaption></figcaption></figure>

* Downloaded KLayout and followed tutorials on Youtube to learn the shortcuts and tools faster.&#x20;
  *   A particular video that helped a lot was this [one](https://www.youtube.com/watch?v=5wvRE4HFbuw) on Cell Hierarchy and alignment of masks.&#x20;

      <figure><img src="../../.gitbook/assets/Screenshot 2025-03-02 at 11.45.18 PM.png" alt=""><figcaption><p>High-level cell view</p></figcaption></figure>

      <figure><img src="../../.gitbook/assets/Screenshot 2025-03-02 at 11.46.24 PM.png" alt=""><figcaption><p>Can now create many layers </p></figcaption></figure>

**Roadblocks:**

* Fabricating chips for Metrology will be slow as Sandra and I need someone to do HF process for us.&#x20;

**Plans for Next Week:**

* Do as many attempts of alignment on stepper by changing angle of stepper to be leveled within tool and shift in x direction only and take note of the number of stepper units it took to get to close alignment. Report to Stepper team.&#x20;
* Collect 25-30 images of the new alignment mark under the microscope for sufficient training&#x20;
* Continue practicing and creating masks on KLayout during break.&#x20;
* Begin fabrication for Metrology resistors with Icey and Sandra.&#x20;

## Update #5

**What was accomplished:**&#x20;

* Sandra and I completed our demo slides and presented them on Thursday. It went very well as we were able to explain in detail our sub-projects, progress, and justification on decisions we made (i.e. new alignment mark design).&#x20;
* Sandra and I also prepared a separate demo on Google Colab that included new features of [code](https://colab.research.google.com/drive/1Ihz8MFp59NgdUhTNkJPlqDkgh7zhsC7x?usp=sharing):&#x20;
  * Can generate resistor with parametrized number of segments and size of segments
  * Can export all pngs of multi-mask device into each layer for ease
* We started collaborating with the Device Modeling team to help them translate the hand-drawn draft to actual masks using our code base. The new adjustments are made [here](https://colab.research.google.com/drive/1XhXm_uumourmU2MWrl_YJQnlEl-nG5eg?usp=sharing).
  * Edited our scale in the code so units to um ratio is now 1 to 1 based on our scale factor measurements
  * Added diffusion width and gate size adjustments&#x20;
  * Finalized dictionary for layers&#x20;
* Sandra and I selected one tool: [KLayout](https://www.klayout.de/intro.html) and we determined this by creating a comparison table (also featured in our demo presentation)
  *   It will help with future DRC/LVS implementation and is GUI-based.&#x20;

      <figure><img src="../../.gitbook/assets/Screenshot 2025-02-23 at 10.38.06 PM.png" alt=""><figcaption></figcaption></figure>

**Roadblocks:**

* Wasn't able to hold a discussion with stepper team this week on alignment, but will follow up with them on this next week; We also didn't really receive a lot of suggestions for alignment during demo day.&#x20;
* HF training is not available, so cannot fabricate full devices to test. Will need Icey or another TA who is HF certified to help fab for Metrology resistors in near future.&#x20;

**Plans for Next Week:**

* Remeasure scale factor under microscope (was off from last time) and fix in code and definition.
* Fabricate more attempts of resistor pattern on stepper to present to Metrology.
* Download KLayout, create playbook, and experiment with designing a simple mask & exporting files.&#x20;
* Create plan for moving forward for DRC rule setting

## Update #4

**What** **was** **accomplished**:

* Sandra and I patterned again and remeasured the mask design from last week to get the scale factor and graphed with [best line of fit](https://docs.google.com/spreadsheets/d/1S0PKdll-URsYSo6UDCH_Mvkxb_JvEbNxG_ppyP4zowQ/edit?usp=sharing).&#x20;
*   Completed the mask design for the resistor lab pattern for the metrology team ([code](https://colab.research.google.com/drive/1bXM5GX_AE7WAsoSxQLe35XEuIYxSi_KF?usp=sharing)).&#x20;

    *

        <figure><img src="../../.gitbook/assets/Screenshot 2025-02-16 at 8.34.04 PM.png" alt=""><figcaption></figcaption></figure>
    * Sandra and I fabricated a trial to test alignment between two masks, but the alignment was not very successful. Further trials or a method to precisely locate and overlap previous alignment marks with the next mask's alignment are needed.

    <figure><img src="../../.gitbook/assets/Screenshot 2025-02-16 at 8.39.23 PM.png" alt=""><figcaption></figcaption></figure>


* Started [outlining](https://docs.google.com/document/d/1ms_NNO3NvQOPkmE-wFOXnD66nyvhvo0O9vYwE2OGiyo/edit?usp=sharing) the demo and preparing slides, aiming to complete them early next week.
* Explored Magic VLSI but found it too outdated; also looked into [gdsCAD](https://pythonhosted.org/gdsCAD/) and [KLayout](https://www.klayout.de/intro.html) as potential alternatives. Will summarize benefits and tradeoffs of each tool during demo.&#x20;

**Roadblocks:**

* Will bring up alignment issues during the demo—currently uncertain about the necessary overlap between masks or whether a patch should be used to connect two diffused areas. Exploring different approaches to solve this issue.

**Plans for Next Week:**

* Finalize and present demo slides on demo day.
* Incorporate feedback from demo day and collaborate with the Metrology and Stepper team to determine next steps.
* Select one tool from the explored options (gdsCAD, KLayout, etc.) to focus on and deepen understanding.



## Update #3&#x20;

**What was accomplished:**

1.  Patterned chip following the [Patterning SOP](https://docs.hackerfab.org/home/standard-operating-procedures/patterning-sop-stepper-v2) with mask created from Update #2 on Thursday work session.&#x20;

    1. Spinner got fixed, so Sandra and I were able to fully work on end-to-end of this mini project. We got to project our mask onto the chip and observe it under the microscope.&#x20;
    2. However, we were not able to calibrate the microscope to take accurate measurements of sizing because calibration slider wasn't available. Therefore, we've just took measurements using a ruler tool under the 10x microscope as shown below. Given the estimated aspect ratio, we see that it is pretty close.&#x20;



    <figure><img src="../../.gitbook/assets/Screenshot 2025-02-09 at 3.41.49 PM.png" alt=""><figcaption></figcaption></figure>
2.  Learned functions/scripts for creating layers with phidl & created dictionary framework for organizing diff. layers (multi-layer for metal, poly, oxide, etc.)

    1. Progress of examples is in [Colab Notebook](https://colab.research.google.com/drive/1Ails5DASIdUd1btmyHOf2_QSz4EHi1vM?usp=sharing) in Section "Layers - Learning"
    2. Section "Layers - Organization" contains a structured layer set



    <figure><img src="../../.gitbook/assets/Screenshot 2025-02-09 at 5.50.25 PM.png" alt="" width="375"><figcaption></figcaption></figure>
3. Creates [notes](https://docs.google.com/document/d/1OxRwDAGWQshovCu0T7od8k_w8QDzJhXd8bczofuO1x4/edit?usp=sharing) on Magic VLSI Tool; Found promising information for possible integration with Hacker Fab processes&#x20;

**Roadblocks**

1. Because we couldn't find the calibrating slider to use to get measurements on our masks on the chip, we weren't able to execute our plan of using it to get the scale factor. We will wait until the new order comes in and confirm the scale factor. For now, we will use the scale factor estimation from Kent and the measurements we've taken.&#x20;
2. I wasn't able to actually walk through the tutorials for Magic VLSI because I don't have a Linux/Windows. A work around may be to run this on ECE computers only, which is fine for the exploration phase.&#x20;

**Plans for Next Week:**

1. Sandra and I will focus on working with the Metrology/Packaging team to deliver Resistor lab pattern but with pads added on at the peripheral
2. Look more into Magic VLSI and discuss with Icey to see if this is a promising path to go down.
3. Work with Sandra to talk about how we plan on creating an initial Python framework for NMOS masks that adhere to design guidelines.

## Update #2

**What was accomplished:**

1. Researched design constraints and rules for layout (e.g., spacing, layers). Created [notes](https://docs.google.com/document/d/16lfnap98lBZeHyBsATZmRs21-E8JmfMBYN84W-XPA0I/edit?usp=sharing) for future reference.&#x20;
2. Figured out aspect ratio that reflects Stepper GUI (16:9)
3. Sandra and I recreated the current code as well as the new implementation of critical functions using phidl package tutorial. &#x20;
4. Sandra and I created masks on [Google Colab](https://colab.research.google.com/drive/1Ails5DASIdUd1btmyHOf2_QSz4EHi1vM?usp=sharing) with rectangles of various sizes to test the scale factor of phidl grid units to micrometers.

&#x20;![](<../../.gitbook/assets/rectangles (1) (1).png>)

4. Went to lab for scale factor on Sunday 1/3, followed SOP for patterning with Kent and learned how to use the stepper.
5. Discussed to the stepper team and Icey, decided to use cross with 1 elongated side as the marker shape of choice for now.&#x20;
   1. This is because team only cares about rotating 90 degrees.&#x20;
6. Successfully generated script that turns gds files into a png files.

<figure><img src="../../.gitbook/assets/Screenshot 2025-02-03 at 12.09.02 AM.png" alt=""><figcaption></figcaption></figure>

**Roadblocks:**

1. Sandra and I were not able to complete patterning to find the scale factor because the spin coater didn't work (the vacuum was too weak so the chip kept falling off during spin).&#x20;
   1. But, we understood the process of SOP so we believe we can do it once the spin coater is fixed!

**Plans for next week:**

1. Attempt to pattern a chip with the mask above; take measurements of different rectangles to decide the scale factor.&#x20;
2. Research Magic VLSI tool.
3. Learn more about the phidl package section: [Layers](https://phidl.readthedocs.io/en/latest/tutorials/layers.html), and how to implement them for more complex masks.

## Update #1&#x20;

#### **What was accomplished:**

This week, Icey, Sandra, and I finalized our sub-project for the EDA team to be on mask automation and integrated DRC rules.&#x20;

a. Sandra and I met on Wednesday, January 22nd to break down our objectives and goals for the project this semester. We established [a semester-long plan](https://docs.google.com/document/d/1wVFeGedLbJkedMMWSoLg0EdzVot8mtU53Ke8EUfJB6Y/edit?tab=t.0) outlining actionable tasks for each week. We also delved deeper into the background research on mask design and discussed the importance of building DRC rules to better understand the project’s purpose within the scope of HackerFab. We also set up weekly syncs to touch-base on each other's progress.&#x20;

b. On Thursday, January 23rd, Icey helped refine our project timeline in-class to align with the objectives and deadlines of other teams, ensuring our work can support theirs as well. We planned ahead to allow for buffer time in case we encounter friction with more complicated tasks, which made me feel more comfortable with the final project timeline we decided on.

* _Phase 1 (Week 2-6): Allow users to create “instances” of different components with automated mask generation._
* _Phase 2 (Week 7-11): Allow instances to have tailorable dimensions and parameters, and start developing a set of DRC rules_
* _Phase 3 (Week 12-14): Allow users to check masks with DRC rules, and raise warnings when rules are violated._

c. Then, I reviewed the existing codebase and documentation for mask generation in the [HackerFab Git repository](https://github.com/hacker-fab/Layout-tool-dev). I also followed the tutorial to learn the [PHIDL package](https://phidl.readthedocs.io/en/latest/tutorials/quickstart.html), which the HackerFab Mask Design Program is built on to familiarize myself of what PHIDL can do. I also explored the possibility of building GUIs on PHIDL backends to create a drag-and-drop interface using Tkinter, focusing on how users can dynamically position and parameterize shapes in the layout.&#x20;

**Roadblocks:**

a. Sandra and I need to learn how to fabricate single layers to analyze the aspect ratios used in the current mask generation code. Since we haven't started our labs, it holds us back from kickstarting this portion of our project. However, we anticipate learning the required fabrication knowledge starting with Lab 1 this upcoming Thursday.&#x20;

**Plans for next week:**

* Continue familiarizing with Python package (PHIDL), [current progress,](https://docs.google.com/document/d/1Bfz6vBBlyirQBS_YzBEREnBkKtnkmnvk2JEufnBeHYo/edit?tab=t.r42bnfjey4yn) and layer sizing for different devices in the current process. -> Create a Playbook to keep note of important features that will come to use in near future.&#x20;
* Research design constraints and rules for layout (e.g., spacing, layers) and how to applies to DRC. Look at examples of DRC rules to develop robust checks (especially parameters required). &#x20;
* Experiment and export GDSII files with Sandra.&#x20;
* Look forward to resistor fabrication lab to form better idea of how to fabricate single layers on our own.&#x20;



