---
description: Hey! I'm Gina, and I will be working on EDA/PDK this semester.
---

# Gina Seo



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



