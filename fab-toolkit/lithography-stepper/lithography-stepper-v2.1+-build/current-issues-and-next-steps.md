---
description: >-
  This page contains a running list of issues with the stepper design, along
  with next steps.
---

# Current Issues and Next Steps

Author: Rachel Jiang (rachelji@andrew.cmu.edu)

## Undesired Stage Movement “Backlash” and “Clanking”

{% embed url="https://youtu.be/GWVZzB_7I6g" %}

When the stepper motors are creating what can best be described as a “clanking” noise, or when a stage movement causes visible slip between the chip and the stage platform, this typically indicates an issue with one or both of the settings:

1. GRBL configurations
2. Motor Driver Current

#### GRBL Configurations

Below is the image of the correct configurations for our stepper. When we used very different values for travel resolution, maximum rate, and acceleration (settings $100-$122) it lead to stage step inconsistencies and backlash.

A good range for estimate:

* Rate: x-axis (15-25), y-axis (15-25), z-axis (1-5) mm/min
* Acceleration: x-axis (3-5), y-axis (3-5), z-axis(1) mm/sec2
* Travel Resolution: 3200 for all axes

<figure><img src="../../../.gitbook/assets/unknown (177).png" alt="" width="375"><figcaption><p>Our expected configurations</p></figcaption></figure>

#### Motor Driver Current

We found a website that dug into the [electronics ](https://blog.protoneer.co.nz/arduino-cnc-shield-v3-00-assembly-guide/)assembly of the stage controller and found that tuning the potentiometer of each driver was essential for driving enough current. According to this forum: [here](https://forum.arduino.cc/t/drivers-on-cnc-shield-heating-up-fast/1182255), not providing enough current can make it overheat, and providing too much can also cause issues such as failure to move the stage successfully.

<figure><img src="../../../.gitbook/assets/unknown (178).png" alt="" width="364"><figcaption><p>Potentiometer</p></figcaption></figure>

Steps: [Vref calculator](https://www.circuitist.com/how-to-set-driver-current-a4988-drv8825-tmc2208-tmc2209/) to figure out what we should set our current limit to be. Or you could tune it. We recommend adjusting it with a screwdriver and making very small rotations, then leaving it as is for a while, checking back to make sure nothing is overheating.&#x20;

We set ours to around 0.9-1.1 V range. You can measure this by using a multimeter.&#x20;

## Out-Of-Frame Projection

{% columns %}
{% column %}
![](<../../../.gitbook/assets/unknown (179).png>)

Out of frame projection
{% endcolumn %}

{% column %}
![](<../../../.gitbook/assets/unknown (180).png>)

Adjusted projection
{% endcolumn %}
{% endcolumns %}

The fix is highlighted below. It’s a simple adjustment that often works. We also found replugging the camera USB connection to work as well.

<figure><img src="../../../.gitbook/assets/image (449).png" alt="" width="341"><figcaption></figcaption></figure>

## Fixing Projection Rotation

[CAD Link](https://github.com/hacker-fab/stepper_attachments/blob/main/cad/projector_stabalizer_mount.step)

The projector is easy to rotate. So the only way to prevent it from rotating (which will rotate the projection that we capture in the software GUI frame), is to create a stabilizer that we can tape or drill into the acrylic that mounts the projector (or tape it).

<figure><img src="../../../.gitbook/assets/unknown (20).jpeg" alt="" width="375"><figcaption><p>The new stabilizer wraps around the heat sink in the back</p></figcaption></figure>

## Assessment and Future Work

This section is a reflection by Sky Bailey (gbailey@andrew.cmu.edu).

"The core design goal of V2.1 was pretty much a mixture of "make it less susceptible to vibration" and "make it less janky". I think I mostly succeeded in this department: although I lack proper numbers on V2's vibration issues, I am confident in asserting that V2.1 fixes them (mainly because you could visually see the vibration occurring on V2's camera, and you can't anymore on V2.1), and now that we have a rigidly mounted frame, the slop from the projector moving around on the table is gone.

However, there's still definitely some improvements to be made. For one, I think that the projector should probably be more directly supported - I didn't end up adding a direct support for the projector this semester because it didn't appear to be necessary, but I think this could further reduce vibration issues. This shouldn't be particularly hard because the disassembled projector has very convenient standoff mounting points directly on it.

Another improvement to make is to fix up the centering of the image on the camera: currently, the hole on the adapter plate is perfectly centered to the part's center, but it appears that the projector's actual image is slightly off to one side. This wasn't really an issue when the camera had a larger sensor, but now that it's smaller it very slightly cuts off part of the image. This only require a small change to the adapter plate to correct.

Finally, one of the biggest issues that remains with the stepper is that the whole projector situation is not ideal: specifically, the fact that all of our existing litho setups have used projectors that hook up to a computer monitor output leads to a bunch of undesirable effects from the OS taking over (like unexpected popups showing up and getting imaged onto the chip). Another issue with the projector is that it's really not ideal to UV-mod a color projector: the projector is designed to _always_ be emitting all 3 color channels, which means that we're outputting a small but noticeable amount of UV even when not actively imaging. Also- the DLPDLCR471TPEVM projector used on V2 and V2.1 is currently (May 2025) out of stock everywhere in the world, which is very bad for reproducibility. One thing we could do to solve all of these issues is to create a custom projector design which gives us more control over UV emissions and the image pipeline. I have written up an essay on the design process and ideation behind a custom projector [here](https://docs.google.com/document/d/1_BkaYH9mCQQRQLMjm69QgOG-tz-MBY6FusZlHGJ0aoE/edit)."
