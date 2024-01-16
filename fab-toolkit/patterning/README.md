---
layout:
  title:
    visible: true
  description:
    visible: true
  tableOfContents:
    visible: true
  outline:
    visible: true
  pagination:
    visible: false
---

# 🎥 Patterning



concise explanation and context&#x20;

* Not to try and cover theory or industry standard, but to break the problem into first principles just enough to give context to the quantifiable parameters
* Also an opportunity to frame the problem wide enough to set the tone of thinking of these machines from the ground up (aligned with goal, don't think of industry as immutable)

exhaustive list of industry methods and examples

quantifiable end user parameters with descriptions + standardized tests



***

## Background

#### Overview

A photolithography stepper is a machine that exposes a pattern of light onto a layer of photoresist chemical on the wafer, then ‘steps’ over to the next pattern. Before each exposure, it must align with previous patterns on the wafer so that each layer of the device is in the correct position relative to the previous. The accuracy with which it can do this is called “alignment accuracy”. Alignment accuracy and optical resolution are the two most important metrics of a stepper’s performance.

There are 2 main components of our stepper: the light source and optics, and then the mechanical micropositioning stage that moves the chip itself. Alignment accuracy is a function of both the mechanical micropositioning stage and the reliability of the projector’s optomechanical components.

#### Masked vs. Maskless Lithography Systems

Commercial lithography machines use photomasks to create the image, typically made of chrome on glass. Instead, our Maskless Photolithography Stepper uses a DLP projector to create a pattern. This allows us to change patterns instantly, opening the option up for advanced techniques like tiling (making a circuit larger than one exposure field).



## Quantifiable Parameters

#### Functional Specifications: The End Product&#x20;

<details>

<summary>Developed Resolution</summary>

describe out standardized test: darkfield/brightfield, developed with AZ400K for 80s, measured pitch distance, used airforce test pattern

**Value**:&#x20;

**Tools Required for Verification**:&#x20;

**Method of Verification**:&#x20;

**Possible Variation**: Error during development (see [Patterning SOP](../../standard-operating-procedures/patterning-sop-stepper-v1/))

**References**: _pics/videos_

</details>

<details>

<summary>Automation Capabilities / Throughput</summary>

what human actions are required: manual loading/unloading, choose the pattern, align manually or automatically with software

approximate area exposed per second

how much time to do one exposure, how much of that is active work vs. waiting around

</details>

&#x20;**Patterning Machine Specifications:**&#x20;

<details>

<summary>Optical Resolution</summary>

**Tools Required for Verification**: Microscope + Calibrated Camera to convert pixels to μm

**Method of Verification**: _make another page for optical resolution test?_

**Possible Variation**: misalignment of optics during assembly

**References**: _pics/_[_videos_](#user-content-fn-1)[^1]

</details>

<details>

<summary>Developed Resolution</summary>

**Tools Required for Verification**:&#x20;

**Method of Verification**:&#x20;

**Possible Variation**: Error during development (see [Patterning SOP](../../standard-operating-procedures/patterning-sop-stepper-v1/))

**References**: _pics/videos_

</details>

<details>

<summary>Single Exposure Area</summary>



</details>

<details>

<summary>Approximate Exposure Time (for AZ P4210 photoresist)</summary>

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



[^1]: 
