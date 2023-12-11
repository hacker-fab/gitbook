# Lithography Stepper V2 Build (to do)

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
