---
description: Work still in progress, full system developed
---

# 2D Crystal Stacking Robot (WIP)

#### What it is?

Two-dimensional crystals such as graphene and hexagonal boron nitride are atomically thin materials held together in stacked layers by Van der Waals forces. Their electronic and mechanical properties can change significantly when the layers are aligned at specific twist angles, creating unique behaviors such as superconductivity or enhanced conductivity.

<figure><img src="../../../.gitbook/assets/Screenshot 2026-04-23 at 1.33.58 PM.png" alt=""><figcaption><p>Masubuchi, S., Morimoto, M., Morikawa, S. <em>et al.</em> Autonomous robotic searching and assembly of two-dimensional crystals to build van der Waals superlattices. <em>Nat Commun</em> 9, 1413 (2018). https://doi.org/10.1038/s41467-018-03723-w</p></figcaption></figure>

Many of the labs have either DIYed their own 2D crystal stacking machine for their research or purchased industrial level platform like the one showing below.

<figure><img src="../../../.gitbook/assets/Screenshot 2026-04-23 at 1.34.23 PM.png" alt=""><figcaption><p>Masubuchi, S., Morimoto, M., Morikawa, S. <em>et al.</em> Autonomous robotic searching and assembly of two-dimensional crystals to build van der Waals superlattices. <em>Nat Commun</em> 9, 1413 (2018). https://doi.org/10.1038/s41467-018-03723-w</p></figcaption></figure>

The goal of this document is to explain in detail of our progress in developing a standard instructions on assembly affordable yet with nanometer precision 2D crystal stacking platform.



## System Overview

<div data-full-width="true"><figure><img src="../../../.gitbook/assets/Screenshot 2026-04-23 at 1.49.47 PM.png" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/Screenshot 2026-04-23 at 1.50.51 PM.png" alt=""><figcaption></figcaption></figure></div>

The (WIP) 2D crystal stacking robot with all subsystems attached.&#x20;

### Submodules

{% hint style="info" %}
Each submodule has their own individual subpages. You will have to follow each individual submodule assembly instruction before starting to integrate.
{% endhint %}

#### Microscope Module

{% hint style="info" %}
Assembly and testing instructions for the Microscope Module is [here](microscope-camera-module.md)
{% endhint %}

<div><figure><img src="../../../.gitbook/assets/Screenshot 2026-04-23 at 2.17.45 PM.png" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/Screenshot 2026-04-23 at 2.17.22 PM.png" alt=""><figcaption></figcaption></figure></div>

The Microscope Module provides operators with a clear, real-time view of 2D crystals such as graphene and hexagonal boron nitride during the selection and stacking process. It utilizes reflective optics to ensure proper illumination of the specimen, improving image clarity and visibility for precise alignment and manipulation.

#### Microscope Autofocus Stage

{% hint style="info" %}
Assembly and testing instructions for the Microscope Autofocus Stage is [here](microscope-focus-module.md)
{% endhint %}

<figure><img src="../../../.gitbook/assets/Screenshot 2026-04-23 at 1.56.13 PM.png" alt=""><figcaption></figcaption></figure>

The microscope allows the user to have a look at the process and the stacked layers. However, this observation requires a focus on the object observed and so a system that changes the focal point is needed. This is the goal achieved by this module: it moves with little amplitude and high precision movements the microscope on the vertical absciss to obtain a clear observation of the process.

#### Frame

{% hint style="info" %}
Assembly and testing instructions for the Frame is [here](frame/)
{% endhint %}

The frame holds the robot assembly together while mitigating external vibrations during stacking operations. Designed to be easy to reproduce with laser cut acrylic, 3D prints, and milled aluminum extrusion.

<figure><img src="../../../.gitbook/assets/Microscope Mount Copy 1 Copy 1 (6).png" alt=""><figcaption></figcaption></figure>

#### Central Control Software

{% hint style="info" %}
Assembly and testing instructions for the Central Control Software is [here](central-control-software.md)
{% endhint %}

<figure><img src="../../../.gitbook/assets/Screenshot 2026-04-23 at 1.58.21 PM.png" alt=""><figcaption></figcaption></figure>

The central control Software is the gateway for operator to operate the 2D crystal stacking process. The software communicates with and control each individual sub-hardware components. The central control software contains GUI for user control dashboards and backend with router services for direct control with hardware protocols.&#x20;

#### Carousel

{% hint style="info" %}
Assembly and testing instructions for the Carousel is [here](carousel-module/)
{% endhint %}

<div><figure><img src="../../../.gitbook/assets/Screenshot 2026-04-23 at 2.03.46 PM.png" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/Screenshot 2026-04-23 at 2.03.21 PM.png" alt=""><figcaption></figcaption></figure></div>

{% hint style="info" %}
To feed chips back into the carousel, follow these instructions to create the [Chip Return Stage](carousel-module/chip-return-stage.md)
{% endhint %}

The carousel is a subsystem of the project that enable the system to store chips and distribute them on a plate so it can switch between different chip materials. The carousel is a turning platform composed at its extremity of 10 chip holders to store the chips. A stepper motor is rotating the carousel while a linear actuator pushes the chips on the plate, the part of the system where the chip is used.

#### Nanopositioner

{% hint style="info" %}
Assembly and testing instructions for the Nanopositioner is [here](../../../working-docs/nanopositioner-wip/)

The current 2D stacking robot is designed for version V3 of the Open Micro-manipulator, which is still compatible with all the custom designed add-ons from the Nanopositioning team
{% endhint %}

<figure><img src="../../../.gitbook/assets/Screenshot 2026-04-23 at 2.01.30 PM.png" alt=""><figcaption></figcaption></figure>

The Open Micro-manipulator in our mount for the 2D Crystal Stacking Robot responsible for X, Y, Z and theta movements during the stamping process. It also provides heating and vacuum to provide chip mounting stability and stamping required physics behavior.&#x20;

### Current Progress

<figure><img src="../../../.gitbook/assets/B2F3CDCF-BAD2-420D-BE6B-99A2F4806A49_1_102_o.jpeg" alt="" width="375"><figcaption></figcaption></figure>

All parts have been developed and tested individually. The entire system has been put together yet without complete stamping validation.

What has been validated includes:

* Frame structure integration (all parts fit precisely within the required precision)
* Carousel rotation and chip transfer&#x20;
* Camera video feed quality&#x20;
* Camera Module integrity&#x20;
* Central software control with the entire nano-positioner stage
* Central software with individual controls
