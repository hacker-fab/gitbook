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

## Parameters

|               |       |
| ------------- | ----- |
| Vds range     | 0-10V |
| Vds step size | .1V   |
| Vgs range     | 0-5V  |
| Vgs step size | 1V    |
| Vb range      | 0     |
| Vb step size  | n/a   |

***

## Purpose

To extract data about the electrical characteristics of a device we conduct a controlled experiment:&#x20;

* Sharp probes make contact with the device
* Precise voltage is applied to the gate, source, and drain through those probes
* These voltages are swept through a range of values, and current is measured by the semiconductor parameter analyzer

## Tools

1. Probe Station with 4 manipulators and probes
2. Keithley 4200-SCS Semiconductor Parameter Analyzer
3. Keithley 2636a Sourcemeter

## Materials

1. Chip with transistors

## Procedure

### Setup

###

1. Use the knobs to move the probe station stage towards you. Place your chip in the center of the stage and turn on the vacuum using the switch on the right side of the tool.
2. Turn on the light source. You should see a spot of light on the stage.
3. Slowly move the chip into the spot of light, being careful to avoid collisions with the probe tips.
4. Plug a computer into the microscope camera and open the AmScope app. Pull up the live view from the camera and focus if necessary. The top ring is for zoom, bottom is for focus.
5. Center the device you want to probe in the field of view.
6. Look at the probe tips as you carefully turn the X/Y knobs on the manipulators to bring them close to the target area. Adjust X/Y/Z until they are all visible in the microscope. They will be out of focus because they’re above the surface of the chip.
7. Adjust the manipulators until the correct probe tips are above each pad you want to probe. Then slowly lower them until you see the probe tip come into focus. Keep lowering until the probe tip makes contact and slides horizontally.
8. Turn on the semiconductor parameter analyzer.
9. Select the MOSFET Ids Vgs test.
10. Run your experiment by pressing the green arrow. Wait for it to complete.
11. Verify your data in the graph tab. If there are sharp discontinuities you can try re-contacting the pads and running the test again.
12. Save your data by going to the data tab. Use the chip number and date in the file name.
13. When finished, move the probes vertically and horizontally away from the chip by about 5mm.

\
\
\


## Safety

## Appendix

\
\
\
\
\


***

\
