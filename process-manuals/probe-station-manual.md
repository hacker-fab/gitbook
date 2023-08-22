# Probe Station Manual

| Probe Station Manual |
| -------------------- |

\


Parameters\



1. Vds range
2. Vds step size
3. Vgs range
4. Vgs step size
5. Vb range
6. Vb step size\


## Purpose

To extract data about the electrical characteristics of a device we conduct a controlled experiment:&#x20;

* Sharp probes make contact with the device
* Precise voltage is applied to the gate, source, and drain through those probes
* These voltages are swept through a range of values, and precise current is measured by the semiconductor parameter analyzer

Probe stations are traditionally heavy desktop machines that hold probe manipulators. The purpose of the probe station itself is to precisely move the tungsten probe in order to make contact with the contacts of the device. This typically means moving 3 individual probes to the gate, source, and drain contacts, and another to contact bulk.&#x20;

![](https://lh6.googleusercontent.com/tKsmi9ZKnm3XqztAIWaqwQDPJ0OAE6pehZmr2hGwpXW62-tJdnIz1cleXGTlhbo-0ayx7cWypwUhZEvsNfrvYyfqE9272x3VC9\_7D127NvE8KMA9XyJTSEffFAmgxy82zWvElDWdr2mTCrenl-dicmo)

Probe Station + simple diagram of contact locations

These probes are attached to the back of the Semiconductor Parameter Analyzer - precision instruments consisting of multiple SMUs (Source Measure Units) and a built-in computer to control them and store readings. Source Measure Units are glorified power supplies with built-in voltmeters and ammeters - they are very precise instruments that are able to supply voltage or current through the probes, and simultaneously read voltage or current.&#x20;

![](https://lh4.googleusercontent.com/Zbhzx4-IdzGv0wSauBI8PMjhUACRciYpn-VanipWloQzlokGKkhdOkRRD75bOI72J\_EXdUPT14ZOUjQOfdi4ErdwxH9S4HbTOisT\_I\_g0CViWonTXsRMoy2\_PjxniZFhZWhaKA5-JJmiXJKVygpak6M)

Semiconductor Parameter Analyzer

Not all transistors are created equal. There is an immense amount of information within the electrical characteristics of the device that helps with optimizing the manufacturing process (Read Peter Van Zant Chapter 14). Below is an example of an ideal IV curve from a textbook, and the first IV curves taken in the Hacker Fab. While our curves aren’t perfect, they do exhibit transistor-like-characteristics 🙂.

![](https://lh4.googleusercontent.com/TO-BNkJJrjvdKB81Rwn1\_xciK493V9YEacXnu233gGPBRo0boN5hlCqTW3QrC1b4sVYBqAI5k\_g-tpAhlbb94SStjW1EKimAC7r7o6CADYy-jtLWYjK\_INqA4Q9U8nau4uFKk6CgbtdA1XFBl2wU9co)![](https://lh5.googleusercontent.com/hfNnyOIjDT\_qX2SRvKOAAlnj2z13ZJuWdWe\_hWqJ1k8NLQdQcfC1KZ9a1LXTfdH-ZqTiP04G-bXyLuzI3xtXitrboDJHBnfZrNlwrl\_k2BLZM9k-5Qvfd3Bi\_sA7nQretKOu7pVyvPZIW6S02gK367c)

IV curves are not the only tests that can be done with a parameter analyzer. With enough data, trends in these different curves can be directly associated with process parameters.

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
9. Run your experiment by pressing the green arrow. Wait for it to complete.
10. Verify your data in the graph tab. If there are sharp discontinuities you can try re-contacting the pads and running the test again.
11. Save your data by going to the data tab. Use the chip number and date in the file name.
12. When finished, move the probes vertically and horizontally away from the chip by about 5mm.

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
