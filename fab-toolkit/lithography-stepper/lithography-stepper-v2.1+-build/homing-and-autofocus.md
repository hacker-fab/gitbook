---
description: >-
  This page contains information on the homing (establishing the system's frame
  of reference) and autofocus (adjusting to the correct z-height for sample
  focus) capabilities of the stepper.
---

# Homing and Autofocus

Authors: Rachel Jiang (rachelji@andrew.cmu.edu), Peiyu Lin (peiyul@andrew.cmu.edu)

## Homing <a href="#docs-internal-guid-f8b79d13-7fff-4e92-aef9-2b8e0a14d318" id="docs-internal-guid-f8b79d13-7fff-4e92-aef9-2b8e0a14d318"></a>

_There’s no place like home \~_

However, homing is an essential capability that needs to be on the stepper for both mutli-layer tiling features, as well as for common-use and precision.&#x20;

1. Absolute coordinates: we can pattern precisely where we need to pattern, as well as detect and correct for alignment errors
2. Ability to check for out-of-bounds searches: preserving the stepper motors means preventing the stage from moving too far out or too close in or too far up where it hits the lens). With homing, we can set limits for travel, and protect the hardware and our chip from breaking due to stress or accidents

Fast and accurate autofocus: We can preconfigure a z-position that gets us close enough to focus, then fine-focus from there with a smaller search range.

### **How GRBL does Homing**

By default GRBL homes each stage by travelling to the negative direction. At first, it does a fast, large-step search. Once each stage reaches the limit sensors, it pulls back and makes fine-grain steps in the negative direction to determine a finer limit. The location when each stage hits the red light is known as the "absolute" home → (0,0,0). Depending on what you set the pull-off distance ($27) to, the stage will move by that amount away from “home” in order to preserve a safe stage position, and then it returns with an “OK” response.

### **Getting Started with GRBL**

The first thing we did was download a GUI that lets us interface with GRBL directly. We opted for the Universal G-Code Sender: UGS: [https://winder.github.io/ugs\_website/](https://winder.github.io/ugs_website/)

This allows us to peek into GRBL configuration and setup resolution, speed, etc. <br>

<figure><img src="../../../.gitbook/assets/unknown (13).jpeg" alt=""><figcaption><p>GRBL configurations are seen here (u may need to zoom in)</p></figcaption></figure>

Now that we had the interface setup, the next step was to look into configurations. The first issue we noticed when we enabled homing, was the fact that the GRBL stages per axis were “homing” in the wrong direction: AWAY FROM the sensors instead of TOWARDS the sensors. This is wrong because only by moving towards the sensors, would the red light eventually trigger a ‘limit’ breach to the GRBL runtime (because sensor can only sense from one direction, not both)

**Sidenote:** to enable homing, ensure that $22=1 in the GRBL configurations. ALSO, when this is enabled, the GRBL config file (in firmware) automatically sets off an alarm since it doesn’t know its current location state. Solve this by (1) sending a “$X” at startup, which unlocks the alarm, or (2) changing the firmware config file to disable this alarm-on-startup mechanism and reboot the firmware to the Arduino

### GRBL Configurations

**Configure** [**GRBL**](https://www.diyengineers.com/2023/01/05/grbl-with-arduino-cnc-shield-complete-guide/) **configurations**

Configurations will be different depending on how your sensors, motor drivers, and stage controllers are set up. For us, playing around with the homing direction settings ($23), the step direction invert ($3), and the homing switch pull-off distance ($27) helped us configure an optimal way to home our stages.

<figure><img src="../../../.gitbook/assets/image (448).png" alt=""><figcaption><p>In our setup, the limit switches trigger when z-stage does down, x-stage moves right, and y-stage moves forward. $23 and $3 are configured based on setting the bits for each axis. Bits “ABC” → A = x-axis, B = y-axis, C = z-axis. Setting a bit means inverting the default direction.</p></figcaption></figure>

### Working vs Machine Position

Depending on how your configurations for status report are ($10), GRBL may be sending you machine (MPos) or working (WPos) positions. The MPos is set at home, and will never change throughout the session. On the other hand, WPos can be set many times in a single session. Our stepper code seems to be using WPos, so we’ll be using that as our default.

<figure><img src="../../../.gitbook/assets/unknown (14).jpeg" alt="" width="375"><figcaption></figcaption></figure>

### **(Optional) Hard Limits and Soft Limits**

This is completely optional, and we actually don’t enable these configurations in our stepper, but it can be an extra padding for the case when the software bugs out and fails to read a message from GRBL that an alarm or error as occurred.&#x20;

If hard limits are enabled ($21=0), then GRBL will send an ALARM to the stepper interface when the stage reaches absolute 0 on an axis. It will then lock the controls of the GRBL stage, and the stage is now un-moveable until we send an unlock command (which we currently can’t through the GUI software)

Unfortunately, enabling this configuration can cause quite a pain for users because moving past the 0 position (in the negative direction) can completely block the user from using the software, and force them to restart the application.&#x20;

Soft limits are configured by setting $20=1, which is a configuration that requires homing to be enabled too. Soft limits are like the opposite of hard limits, in which it’ll send an error (instead of an alarm) when the maximum distance each stage can travel away from its “home” value is reached or exceeded. These maximum travel distances are configured through setting the $130, $131, and $132 configurations. This enforces a maximum position limit (as opposed to a minimum position limit).&#x20;

For our stepper neither of these configurations had to be set in firmware. We simply updated the stepper GUI such that the application software could handle boundaries post-homing. This was not only easier to handle (fewer errors and alarms to unlock), but also more intuitive for the users of the software (we now pop open a warning window if the user wishes to move the stage to an out-of-bounds position)

{% embed url="https://youtu.be/UEmYf5DZbcw" %}

## Autofocus

_If only it were that simple…_

### Original Autofocus

The original autofocus algorithm samples 3 different points on the z-stage coordinates, and takes a fixed number of large steps to probe for an optimal range, then takes a fixed number of small steps to probe for a finer optimal position. This algorithm took up to 30 seconds to finish, and sometimes, took even longer. Additionally, there are times in which autofocus doesn’t fully autofocus correctly, which can hinder on tiling qualities given that the algorithm heavily relies on autofocus as a step to ensure quality patterning per tile.&#x20;

A bigger issue with implementing autofocus on stepper v2.1 is the fact that the focus score is not an accurate reflection of the true focus of a chip in the camera view. When the chip gets too close to the lens, one might begin to see vertical dark lines that begin to form, and this phenomenon actually boosts the focus score (when calculated using OpenCV’s Laplacian function) due to the existence of higher contrast in the image captured. Similar things can happen when the chip is too out of focus: the blurred image reaches a level in which the focus score computation function can no longer distinguish which image has more contrast compared to the other out of focus images.&#x20;

### New Approach

_Note: If homing isn't enabled, we will resort to the original autofocus algorithm._

Taking advantage of the enablement of homing, we decided to create a more flexible, faster autofocus function that can only be used when homing is enabled. Although it is not 100% fool-proof, it has a higher success rate at reaching true autofocus despite its somewhat hard-coded foundation.&#x20;

With homing enabled, the stepper will re-home the stages each time the software boots up. The homed stages are predictable in the sense that each axis can home at the same level of steps it did during a previous homing, which means the chip platform’s height during a previous homing cycle (z-stage controlled) will be similar, if not equal to the chip platform’s height on the next homing cycle.&#x20;

The new autofocus algorithm now takes in a value from the configuration file whose default is 0. When this value is set, and homing is enabled, the stage will move to that value (absolute position) and do a small search around that coordinate value. This not only guarantees that we don’t hit the two extreme cases (too far from chip, too near chip), but also speeds up our search cycle by omitting searches that are guaranteed to be wrong. Now, autofocus only takes at most 10 seconds, and it’s often quite successful at doing so.&#x20;

The one limitation to the new autofocus algorithm is that it must be pre-configured before use. We cannot assume that all chips we pattern will be of the same thickness, and we cannot assume that multi-layer patterns will always be focused within the range we search from that configuration offset.&#x20;

As a result, we decided to make autofocus more customizable for tiling, by adding a search range argument, as well as a starting position that becomes the center of our search range. This will allow developers to use the function creatively, whether it’s using a previously stored z-position from layer 3 to kick off autofocus on layer 4, or using it with a smaller search range for layer 1 patterning.&#x20;

{% embed url="https://youtu.be/rwvteCiHG8A" %}

source code: [autofocus](https://github.com/hacker-fab/stepper/blob/e31db3285824dbcc428262eb0848cbd4f3113a41/src/gui.py#L725)

_They say the best solutions are not always the most complex. Nor the brightest. Nor the smartest. Nor the most well-thought out. But if it can perform well, perhaps it isn’t too bad at all…_
