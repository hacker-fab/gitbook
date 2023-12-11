# Lithography Stepper V2 Build (work-in-progress)

## Background

In building V2 of the stepper, there were a number of improvements to make upon V1:\


* The optics stack needed to be more stable, as the optics stack for V1 was very sensitive to vibrations. The optics were redesigned to be more compact and structurally sound.
* We wanted a more robust optical engine. We used a ViewSonic projector for stepper V1. While this worked for basic patterning, these projectors are only intended for commercial use, and thus have little documentation. We sought out a platform with thorough technical documentation, which led us to the [TI DLPDLCR471TPEVM evaluation board](https://www.ti.com/tool/DLPDLCR471TPEVM).
* On a similar note, we also wanted to create our own UV light source, rather than having to use a makeshift light source from the projector. Thus, we sourced the appropriate UV LEDs and created our own PCB that can be used inside of the stepper, with the assistance of Andrew Park. The PCB design files can be found [here](https://github.com/hacker-fab/lithography-stepper/blob/main/LED%20PCB/UV\_LED/UV\_LED\_v2.zip).

With these improvements, we were able to create V2 of our photolithography stepper. Read on to see how we built it.

## Hardware Specs



| Cost                  | >$1,000   |
| --------------------- | --------- |
| Approximate Work Time | 3 hours\* |
| Optical Resolution    | \~2 µm    |
| Alignment Accuracy    | ?         |

\*This depends on a number of factors. There is some assembly required for the UV LED PCB, as detailed below, which should take less than an hour. Then there is mechanical assembly required; depending on the type of positioning stage used, this will take at least 2 hours but possibly many more. We will update this once we've finalized the stage to be used.

![](<../../.gitbook/assets/image (2).png>)

## Tools Required for Manufacturing

* (Mechanical tools?)
* Pick-and-place machine
* Reflow oven
* Solder paste (preferably a syringe)

## Assembling the UV LED PCB

The PCB Gerber files for our UV LED can be found [here](https://github.com/hacker-fab/lithography-stepper/blob/main/LED%20PCB/UV\_LED/UV\_LED\_v2.zip). We provide a screenshot of the layout in Altium and a 3D render of the PCB below.

![](<../../.gitbook/assets/image (3).png>)

![](<../../.gitbook/assets/image (6).png>)

You can order it through your PCB manufacturer of choice (we used JLCPCB). However, note that the PCB is [**copper core**](https://jlcpcb.com/blog/62-JLCPCB-Direct-Heatsink-Copper-Cored-PCBs-Available-Now!). This is because the LEDs draw several amps of current in operation. To ensure that the PCB doesn't melt, you should use copper core to facilitate better heat flow.

We used 400 nm UV LEDs on this PCB. We found that two LEDs in series is sufficient to produce enough UV light for patterning. We also found connectors that are compatible with the cable in the TI DLP dev kit. (To do: insert links to parts for purchase.)

When assembling the UV LED PCB, it is easiest to use a solder syringe to carefully deposit the paste onto the LED pads and connector pads. If you try to use a stencil mask, it is very easy to smear the paste, so this is not recommended.

Once the paste is applied, you can use a pick and place machine to align the components with their pads. Keep in mind that you need to use a nozzle that is small enough to pick up the LEDs (to do: insert nozzle size). Finally, you can put the PCB into a reflow oven to solder the components to the board. (to do: insert oven parameters).

(Video showing PCB assembly in TechSpark yellow lab.)

Below is a completed version of the PCB - note the polarity:

![](<../../.gitbook/assets/image (7).png>)\
You can test by applying 6V (limit to 1A) across the LED leads, but **be sure to wear UV-protective glasses**, as the LEDs will be bright! Once you are confident that the PCB works, you can now replace the blue LED PCB in the TI DLP dev kit with our new UV LED PCB.

## Assembling the TI DLP dev kit

(To do - need to disassemble to take more photos of each step...)

<figure><img src="../../.gitbook/assets/image (8).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (9).png" alt=""><figcaption><p>First V2 patterning - 10 second exposure with unfocused 410 nm UV light.</p></figcaption></figure>

## Safety

Wear [UV-blocking glasses](https://www.amazon.com/Tool-Klean-Safety-Glasses-Protection/dp/B081BHTJT8/ref=sr\_1\_5?crid=38LVX5C7MIN2M\&keywords=uv+protection+glasses\&qid=1674228429\&sprefix=uv+protection+%2Caps%2C96\&sr=8-5) whenever light leakage from the projector is possible.

## Quantifiable Parameters

#### **Machine Specifications - Functional**

<details>

<summary>Optical Resolution</summary>

**Value**: 1.7μm

**Tools Required for Verification**: Microscope + Calibrated Camera to convert pixels to μm

**Method of Verification**: _make another page for optical resolution test?_

**Possible Variation**: misalignment of optics during assembly

**References**: _pics/_[_videos_](#user-content-fn-1)[^1]

</details>

<details>

<summary>Developed Resolution</summary>

**Value**:&#x20;

**Tools Required for Verification**:&#x20;

**Method of Verification**:&#x20;

**Possible Variation**: Error during development (see [Patterning SOP](../../standard-operating-procedures/patterning-sop-stepper-v1/))

**References**: _pics/videos_

</details>

<details>

<summary>Single Exposure Area</summary>

**Value**: 1.5mm Diagonal

</details>

<details>

<summary>Approximate Exposure Time (for AZ P4210 photoresist)</summary>

**Value**: 4 Seconds

**Tools Required for Verification**: AZ400K Developer Solution + Microscope

**Method of Verification**:&#x20;

**Possible Variation**: Can vary UV LED power and beam splitter ratio to decrease/increase exposure time





**References**: _pics/videos_

</details>

<details>

<summary>Mechanical Resolution - Step Size</summary>



</details>

<details>

<summary>Mechanical Resolution - Repeatability</summary>



</details>

<details>

<summary>Maximum Wafer Size</summary>



</details>

## Background

Our design was based on [Sam Zeloof](http://sam.zeloof.xyz/maskless-photolithography/) and [Huygens Optics](https://www.youtube.com/watch?v=\_w0Z2Y5vaAQ)’ versions of this tool, which is essentially a projector connected to a microscope. We use a 10x objective for demagnification and a mechanical XYZ stage for positioning.

Stepper version 2 has greatly improved mechanical performance over V1 while using the same DLP chip from Texas Instruments. Several factors led to this improvement:

1. Instead of an off the shelf projector with a flimsy plastic housing, we switched to a bare bones DLP evaluation module made directly by TI. This allows for a more robust physical connection to the projector housing.
2. By swapping to a finite conjugate microscope objective, the optical path length is reduced from \~250 to 160 mm. This reduces the moment of inertia of the optics subassembly, therefore also reducing vibration.
3. Swapping to LEDs instead of the broad spectrum mercury lamp removes the need to constantly swap filters, which introduced random perturbations from touching the optics.
4. Mounting the projector horizontally means less structure is needed.

####

####

#### Machine Specifications - Build

Cost

Footprint

Weight

Automation capabilities









[^1]: 
