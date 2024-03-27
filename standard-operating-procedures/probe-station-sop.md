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

# Probe Station SOP

## Purpose
After fabrication, the chip must be tested to demonstrate the functionality of the design. Additionally, variations and errors in fabrication may result in differences in device characteristics which are useful to document when these variations cause the device to fail. 

To enable precisely controlled experiments on microscopic chips, we currently use a probe station to contact the device using sharp probes which supply and measure voltages for calculation of various device characteristics such as I-V curves, which are explained in this SOP. 

## Tools
*	Probe station setup
    *	Probe station - Karl Suss PM5
    *	At least 4 probes, manipulators, and coaxial cables
*	Microscope setup
    *	Camera - AmScope MU1000-HS and AmScope viewing software
    *	Light – MI-150 Fiber Optic Illuminator
*	Keithley semiconductor analyzer system
    *	Keithley 4200-SCS Semiconductor Parameter Analyzer
    *	Keithley 2636a Sourcemeter
    *	Keyboard and mouse

## Materials
*	Devices under test – typically a finished chip with pads for probing
*	Computer running [AmScope viewer software](https://amscope.com/pages/software-downloads)
*	Flash drive for data transfer

## Procedure

### General setup and cleanup
<img width="404" alt="image" src="https://github.com/hacker-fab/gitbook/assets/75640543/eaf38832-009c-45ca-a4bf-147ad14f70a8">

1.	Place the chip in the center of the stage and turn on the vacuum.  
2.	Turn on the microscope light, which appears as a spot of light on the stage.  
3.	Connect the microscope camera to your computer and select the camera MU-1000HS on the AmScope viewer software, which should summon the camera view. The Keithley semiconductor analyzer has only two USB ports, which are currently occupied by a keyboard and mouse. Without WiFi or a USB hub, the camera view and data transfer are handled by another computer.  
4.	Turn on the Keithley semiconductor parameter analyzer.  
5.	Open the **KITE software** and the experiment of interest (see below sections).  
6.	Using coaxial cables and connectors, connect each probe to the corresponding port on the Keithley semiconductor parameter analyzer.  
7.	Raise the stage using the lever. Focus the stage and center the pattern of interest under the light source using the knobs below the stage.  
8.	If the probe tips are not illuminated by the microscope light, carefully move the magnetically-attached manipulators such that the range of motion of the probe tips is within the spot of light.  
9.	Using the knobs on each probe’s manipulator, lower the probes so that the tips are focused yet not touching the chip, then position the probe tips above their corresponding probing pads.  
10.	Carefully lower the probe tips to touch the pads, which is generally indicated by resistance to movement when attempting to lower the tip further. The manual nature of this process means that the sharp probes can scratch the chip and damage the device beyond future usage, such as scratching the pads off.   
11.	Press the green triangle in the KITE software to run the experiment.  
12.	Once the experiment finishes, check the data for errors and repeat the experiment as necessary.

![image](https://github.com/hacker-fab/gitbook/assets/75640543/1dd07061-955a-4faa-90a7-75e53c04d45e)
![image](https://github.com/hacker-fab/gitbook/assets/75640543/d46ea96a-56f0-4fb2-ba68-9aebd506cc9e)

13.	Scale the graph such as by right clicking the graph and clicking `Autoscale` and save the data in a folder named `chip###` where `###` is the chip number. To save the graph and data with a common name, type the name and click `Populate`, `Save All`, then `Exit`.  
14.	Remove the probes from the chip and continue to the next device, either by lifting the probes or lowering the stage.   
15.	After all experiments are finished, transfer the data to a flash drive and upload the data (such as to Google Drive).  
16.	Raise the probes using the manipulator knobs.  
17.	Lower the stage by turning the lever.  
18.	Turn off the Keithley parameter analyzer.  
19.	Disconnect the microscope from your computer and turn off the microscope light.  
20.	Turn off the vacuum and remove the chip.

### MOSFET I-V Curve
![image](https://github.com/hacker-fab/gitbook/assets/75640543/5fb70f43-e752-4e9c-8b3c-65810849f23d)

1.	Upon opening the KITE software, choose the `vds-id test` from under the section `4terminal-n-fet`.  
2.	Configure the probes and measurements using the following parameters. Make sure that the correct coaxial cable (SMU1, SMU2, GNDU) is connected to the correct probe.  

| Parameter     | Value |
| ------------- | ----- |
| Vds range     | 0-10V |
| Vds step size | .1V   |
| Vgs range     | 0-5V  |
| Vgs step size | 1V    |
| Vb range      | 0     |
| Vb step size  | n/a   |

3.	The I-V curve of the MOSFET and the gate leakage current should be plotted. Note the magnitude of the voltage and current measurements. Very low current in the range of nano-amperes or below can indicate an open circuit, and linear behavior can indicate a short circuit, which can arise from a fault in the device or improper probe placement.

### Gate & Contact Resistance
![image](https://github.com/hacker-fab/gitbook/assets/75640543/c6389fcd-6067-4517-ac12-427ac2d37507)

1.	Upon opening the KITE software, chose the `res2t` test froom under the section `2-wireresistor`.  
2.	Configure the probes and measurements using the following parameters.  Make sure that the correct coaxial cable (SMU1, SMU2) is connected to the correct probe.  

| Parameter     | Value |
| ------------- | ----- |
| V range       | +-5V  |
| V step size   | <=1V  |
| Vgs range     | 0-5V  |

3.	The I-V relationship between the two probes and resistance estimated from Ohm’s law should be plotted. An ideal resistor should have a linear relationship and constant resistance.   

***

