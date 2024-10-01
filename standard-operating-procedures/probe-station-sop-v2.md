---
description: Version 2 of the probe station using analog discovery 3s
---

# Probe Station SOP - V2

## Purpose

After fabrication, the chip must be tested to demonstrate the functionality of the design. Additionally, variations and errors in fabrication may result in differences in device characteristics which are useful to document when these variations cause the device to fail.

To enable precisely controlled experiments on microscopic chips, we currently use a probe station to contact the device using sharp probes which supply and measure voltages for calculation of various device characteristics such as I-V curves, which are explained in this SOP.



## Tools

* Probe station setup
  * Probe station - Karl Suss PM5
  * At least 4 probes, manipulators, and coaxial to split jumper wires with hooks at the end
* Microscope setup
  * Camera - AmScope MU1000-HS and AmScope viewing software
  * Light – MI-150 Fiber Optic Illuminator
* Semiconductor analyzer system
  * 2 Analog Discovery 3s
  * Laptop with ability to connect to camera and analog discovery 3s as well as run a python program

## Materials

* Devices under test – typically a finished chip with pads for probing
* Computer running [AmScope viewer software](https://amscope.com/pages/software-downloads) and Python program



## Procedure

### Setup

![image](https://github.com/hacker-fab/gitbook/assets/75640543/eaf38832-009c-45ca-a4bf-147ad14f70a8)

1. Place the chip in the center of the stage and turn on the vacuum.
2. Turn on the microscope light, which appears as a spot of light on the stage.
3. Connect the microscope camera to your computer and select the camera MU-1000HS on the AmScope viewer software, which should summon the camera view.&#x20;
4. Open the analyzing software on a laptop
5. Raise the stage using the lever. Focus the stage and center the pattern of interest under the light source using the knobs below the stage.
6. If the probe tips are not illuminated by the microscope light, carefully move the magnetically-attached manipulators such that the range of motion of the probe tips is within the spot of light.
7. Using the knobs on each probe’s manipulator, lower the probes so that the tips are focused yet not touching the chip, then position the probe tips above their corresponding probing pads.
8. Carefully lower the probe tips to touch the pads, which is generally indicated by resistance to movement when attempting to lower the tip further. The manual nature of this process means that the sharp probes can scratch the chip and damage the device beyond future usage, such as scratching the pads off.
9. Using coaxial cables connected to the jumper wires with hooks, connect each probe to the ground, source, and drain on the Keithley and connect the corresponding red hooks to the equivalent ground, source, and drain pins on the circuit board as well as all the black hooks to the drain pin on the circuit board like in the below picture

<figure><img src="../.gitbook/assets/IMG_5899 (1).JPG" alt=""><figcaption></figcaption></figure>

### Run Program

<figure><img src="../.gitbook/assets/image (56) (1).png" alt=""><figcaption><p>Program from Vscode view + terminal</p></figcaption></figure>

<figure><img src="../.gitbook/assets/Screenshot 2024-04-01 at 16.57.48.png" alt=""><figcaption><p>New window with plot of IV curves for ideal mosfet</p></figcaption></figure>

1. Run the command python3 smu.py in terminal to run the program
2. This will open up a new window with a plot of the IV Curve that looks something the below picture under MOSFET I-V Curve
3. In order to close this window and continue with the program, either hit the red exit button on the image window or go to terminal and type Ctrl-C
4. If the graph had errors, repeat the experiment as necessary
5. If the data looks good, enter the title for the current and image csv files

### Cleanup

1. Remove the probes from the chip and continue to the next device, either by lifting the probes or lowering the stage.
2. Raise the probes using the manipulator knobs.
3. Lower the stage by turning the lever.
4. Disconnect the microscope from your computer and turn off the microscope light.
5. Turn off the vacuum and remove the chip.

### MOSFET I-V Curve

The outputs currently look something like this:

<figure><img src="../.gitbook/assets/Screenshot 2024-03-26 at 17.35.38.png" alt=""><figcaption><p>IV Curves for Chip 234 with Gate Voltages of 1, 2, 3, 4, and 5 Volts</p></figcaption></figure>

The I-V relationship between the two probes and resistance estimated from Ohm’s law should be plotted. An ideal resistor should have a linear relationship and constant resistance.
