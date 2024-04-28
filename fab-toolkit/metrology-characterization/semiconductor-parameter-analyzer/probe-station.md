---
description: A step-by-step guide on working with the Probe Station
---

# Probe Station

To learn more about the hardware and software involved, refer:

{% content-ref url="smu-analog-discoveries.md" %}
[smu-analog-discoveries.md](smu-analog-discoveries.md)
{% endcontent-ref %}

***

## Python UI

![image](https://github.com/hacker-fab/gitbook/assets/75909808/23034761-3d7e-4193-9aec-8a1a7fa75bc1)

There is a work in progress UI for the probe station that was never linked to hardware. 

Code is located within [code/probe-station](https://github.com/hacker-fab/code/tree/main/probe-station).

While it lacks hardware integration, it does work and currently supports a few noteworthy features:

### Multi-probe selection

The UI allows the user to select as many, or few, probes as desired and coduct batch actions. Most notably, allows moving multiple probes together.

### Software motor calibration

The UI also allows calibration of each probe. Once calibrated, the user can simply click on the camera preview and the probes will move accordingly. 

This does not use CV, and is designed to be lightweight for use on a low-spec machine like a RPi.

### probe locking

Once a prob makes contact with the chip, it would be catastrophic for it to move. As such, the software allows the user to select and lock probes as necessary. 

### manual stepping

In case click-to-move isn't desired, basic steps can also be used. 

## Probing the Chip

#### Connections

1. If not using the tester adapter, connect W2 to the Gate probe and W1 to the Drain probe.&#x20;
2. The Source and Body probes must be connected to GND.
3. The +1 & -1 connections should be connected around the drain resistor.&#x20;
4.  \+2 should be connected to the Drain terminal.&#x20;

    \


    <figure><img src="https://lh7-us.googleusercontent.com/RVLy73TuwDT9tbta7JIvf5rEiP-TORkkIragPhurHYfslcNDSV-4C60WChCPl45eIKaZN0s17kRqv0q0qx1-EXlomTFoZFzObAOAsUEncwBJyFFgY3VF418jJJvnbRPWXohWKTfKOEFh" alt="" width="375"><figcaption></figcaption></figure>

### To-do:

Add images with the connections, more specifics.

* simple mechanical probe manipulator
* needs 4 probes (show where each of them are used)

