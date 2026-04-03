# Nanopositioner - WIP

This project builds on previous work done at HackerFab, as well as concepts described in the [following paper](https://www.sciencedirect.com/science/article/pii/S2468067222000621).

Based on those designs, we decided to go with a similar mechanical approach, focusing on simplicity, compactness, and the ability to iterate quickly.

### **What it is**

This is a compact nanopositioner designed for precise motion control using a piezo actuator. The system is intended for applications like STM, optics alignment, and general nanometer-scale positioning tasks.

The mechanical design is based on linear guides using ceramic ball bearings (G5 Si₃N₄), which provide smoother and more stable motion over time compared to stainless steel balls (which tend to wear and degrade motion quality).

The current design uses:

* 2.778 mm ceramic balls
* stainless steel shafts (preferably hardened), Ø1.5 mm, length 24 mm
* thin positioning plates (\~0.25 mm) to constrain ball movement

The sliding interface is based on AlN (amorphous substrate) bonded to magnets and magnetic stainless steel (grade 430). Initially, motion is not perfectly smooth, but after a short “run-in” period (self-polishing), the system becomes significantly more stable.

<figure><img src="../.gitbook/assets/image (367).png" alt="" width="563"><figcaption></figcaption></figure>

### **Vacuum-first design**

From the beginning, this project is designed with **vacuum compatibility in mind**. That directly influences material and component choices.

We intentionally select materials that are:

* low outgassing
* mechanically stable under vacuum
* compatible with UHV-like environments (or at least not terrible in rough vacuum)

This is why we use:

* ceramic balls instead of lubricated bearings
* metal structural components instead of polymers where possible
* minimal use of adhesives (and only vacuum-compatible ones like Torr Seal where needed)
* materials like AlN for sliding interfaces

This constraint makes the design harder, but avoids having to redesign everything later for vacuum operation.

### **Piezo & Mechanics**

The actuator used is a PK2FMP2 piezo, mounted using end hemispheres and end cups. This mounting approach helps maintain alignment and reduces unwanted mechanical stress.

One critical aspect of this design is **maintaining strict axial alignment**, especially along the Z-axis.

Any deviation from the Z-axis introduces lateral forces, which:

* mechanically expand the structure
* couple motion into unwanted directions
* generate significant vibrations

This is one of the main limiting factors for stability and precision, and we are actively working on improving this.

<figure><img src="../.gitbook/assets/image (368).png" alt=""><figcaption></figcaption></figure>

### **Electronics (WIP)**

We are currently redesigning the electronics with a focus on reducing cost and simplifying the system.

The first version of the board used **Apex PA441 amplifiers**, which cost around $25 per unit. This was originally chosen to support a wide voltage range (+100V / -50V).

However, after initial testing and switching to a different piezo, such a large range is no longer necessary. The current piezo operates up to **+60V**, which allows us to:

* simplify the driver design
* reduce cost significantly
* improve overall efficiency

We have already designed a new power supply providing **+60V / -30V**, which better matches the requirements of the current setup. At the moment, we are waiting for components to complete the new amplifier stage.

The system is designed with **opto-isolation (optocouplers)** to separate control electronics from the high-voltage section, improving robustness and reducing noise coupling.

<figure><img src="../.gitbook/assets/image (369).png" alt="" width="563"><figcaption></figcaption></figure>

### **Current Status**

This is an early prototype, but the mechanical concept is already working and gives promising results in terms of stability and resolution.

We are currently working on:

* improving electronics (cost + design)
* refining mechanical alignment (especially Z-axis stability)
* integrating an encoder (MT6835) for feedback and control
