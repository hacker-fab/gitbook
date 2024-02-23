# Lithography Stepper V2 Build (work-in-progress)

## Hardware Specs

<table><thead><tr><th width="279">Cost</th><th>$3,708.03</th></tr></thead><tbody><tr><td>Approximate Build Time</td><td>6 hours</td></tr><tr><td>Optical Resolution</td><td>2 µm</td></tr><tr><td>Developed Resolution</td><td>2 µm</td></tr><tr><td>Tiling Alignment Accuracy</td><td>5 µm</td></tr><tr><td>Overlay Alignment Accuracy</td><td>5 µm</td></tr><tr><td>Exposure Size (Diagonal)</td><td>1.2 mm</td></tr><tr><td>Exposure Time</td><td>9 seconds</td></tr><tr><td>Mechanical Step Size</td><td>1.5 µm</td></tr><tr><td>Mechanical Repeatability</td><td>5 µm (to verify)</td></tr><tr><td>Maximum Wafer Size</td><td>2 cm by 2 cm</td></tr><tr><td>Tool Size</td><td>30 cm x 36 cm x 20 cm</td></tr></tbody></table>

## Hardware Description

Our design was based on [Sam Zeloof](http://sam.zeloof.xyz/maskless-photolithography/) and [Huygens Optics](https://www.youtube.com/watch?v=\_w0Z2Y5vaAQ)’ versions of this tool, which is essentially a projector connected to a microscope. We use a 10x objective for demagnification and a mechanical XYZ stage for positioning.

Stepper version 2 has greatly improved mechanical performance over V1 while using the same DLP chip from Texas Instruments. Several factors led to this improvement:

1. Instead of an off the shelf projector with a flimsy plastic housing, we switched to the [TI DLPDLCR471TPEVM evaluation board](https://www.ti.com/tool/DLPDLCR471TPEVM). This allows for a more robust physical connection to the projector housing, thus eliminating vibrations. It also has much better documentation.
2. By swapping to a finite conjugate microscope objective, the optical path length is reduced from \~250 to 160 mm. This reduces the moment of inertia of the optics subassembly, therefore also reducing vibration.
3. Swapping to LEDs instead of the broad spectrum mercury lamp removes the need to constantly swap filters, which introduced random perturbations from touching the optics. We replaced the stock blue LED with a 410 nm LED mounted on a custom PCB. The PCB design files can be found [here](https://github.com/hacker-fab/lithography-stepper/blob/main/LED%20PCB/UV\_LED/UV\_LED\_v2.zip).
4. Mounting the projector horizontally means less structure is needed.

![](<../../.gitbook/assets/image (2) (2).png>)

## Tools Required

* M3 and M4 taps
* 3D printer
* Pick-and-place machine
* Reflow oven
* Solder paste (preferably a syringe)

## Bill of Materials

Total Cost: $3,708.03

<table><thead><tr><th width="337">Name</th><th width="64">Qty</th><th width="128">Total</th><th>Link</th></tr></thead><tbody><tr><td>TI DLP Evaluation Module</td><td>1</td><td>$999</td><td><a href="https://www.ti.com/tool/DLPDLCR471TPEVM">TI</a></td></tr><tr><td>Assorted Optics</td><td>1</td><td>$1,497.04</td><td><a href="https://www.thorlabs.com/uploadcart/">Thorlabs</a>*</td></tr><tr><td>10X Din Plan Objective</td><td>1</td><td>$150</td><td><a href="https://www.edmundoptics.com/p/10x-din-plan-commercial-grade-objective/5386/">Edmunds</a></td></tr><tr><td>FLIR Blackfly S Camera w/ Sony IMX183</td><td>1</td><td>$699</td><td><a href="https://www.edmundoptics.com/p/bfs-u3-200s6c-c-usb3-blackflyreg-s-color-camera/40178/">Edmunds</a></td></tr><tr><td>USB Type A to Micro B locking cable</td><td>1</td><td>$24.6</td><td><a href="https://www.edmundoptics.com/p/usb-30-locking-cable-3m-length/29172/">Edmunds</a></td></tr><tr><td>XYZ Stage 40mm</td><td>1</td><td>$125</td><td><a href="https://www.amazon.com/Pricision-40x40mm-Trimming-Bearing-Platform/dp/B07D7N9GT6/ref=sr_1_4?crid=32WSW494CE1YE&#x26;keywords=30mm+xyz+stage&#x26;qid=1706559232&#x26;sprefix=30mm+xyz+stage%2Caps%2C80&#x26;sr=8-4&#x26;ufe=app_do%3Aamzn1.fos.f5122f16-c3e8-4386-bf32-63e904010ad0">Amazon</a></td></tr><tr><td>Rotation Stage </td><td>1</td><td>$58.99</td><td><a href="https://www.amazon.com/Displacement-Platform-FineTuning-Production-Machinery/dp/B0972XB4NW/ref=sr_1_3?crid=2M0YGWAA27LQA&#x26;keywords=60mm+rotation+stage&#x26;qid=1706559352&#x26;sprefix=60mm+rotation+stage%2Caps%2C112&#x26;sr=8-3">Amazon</a></td></tr><tr><td>NEMA 28 Steppers</td><td>4</td><td>$71.96</td><td><a href="https://www.amazon.com/gp/product/B07PNV7RBW/ref=ox_sc_act_title_1?smid=A3HCJ70Z0RHBT6&#x26;th=1">Amazon</a></td></tr><tr><td>Arduino Uno (Elegoo)</td><td>1</td><td>$16.99</td><td><a href="https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU/ref=sr_1_6?crid=25HW74RSV1WUQ&#x26;keywords=arduino&#x26;qid=1706561234&#x26;sprefix=arduino%2Caps%2C115&#x26;sr=8-6">Amazon</a></td></tr><tr><td>CNC Shield for Arduino V3.0</td><td>1</td><td>$10.99</td><td><a href="https://www.amazon.com/Organizer-Expansion-Stepper-Heatsink-Arduino/dp/B07TT3C3HB/ref=sr_1_1?crid=3U63T1GH2IYGH&#x26;keywords=arduino+stepper+shield&#x26;qid=1706561169&#x26;sprefix=arduino+stepper+shield%2Caps%2C104&#x26;sr=8-1">Amazon</a></td></tr><tr><td>Flexible Shaft 1/8"</td><td>1</td><td>$6.49</td><td><a href="https://www.amazon.com/uxcell-Flexible-Attachment-Grinder-Extension/dp/B07PLCKQMQ/ref=sr_1_2?crid=3BUQUGXE0CYTJ&#x26;keywords=Flexible+Shaft+Inner+Core&#x26;qid=1699635781&#x26;sprefix=flexible+shaft+inner+core%2Caps%2C176&#x26;sr=8-2">Amazon</a></td></tr><tr><td>Shield Power Supply 12V</td><td>1</td><td>$11.99</td><td><a href="https://www.amazon.com/ALITOVE-Adapter-Converter-100-240V-5-5x2-1mm/dp/B01GEA8PQA/ref=sr_1_4?keywords=12v+power+supply&#x26;qid=1706561572&#x26;sr=8-4">Amazon</a></td></tr><tr><td>2.5mm Barrel Connector</td><td>1</td><td>$8.99</td><td><a href="https://www.amazon.com/Fancasee-Replacement-Degree-Pigtail-Supply/dp/B081TXY6ML/ref=sr_1_3?crid=1LPRM16V3EL0T&#x26;keywords=2.5mm+dc+plug+pigtail&#x26;qid=1706561706&#x26;sprefix=2.5mm+dc+plug+pigtail%2Caps%2C94&#x26;sr=8-3">Amazon</a></td></tr><tr><td>Vacuum pump for chuck</td><td>1</td><td>$26.99</td><td><a href="https://www.amazon.com/Vacuum-Pump-Diaphragm-Compressor-Silicone/dp/B071GL3XXQ/ref=pd_day0fbt_vft_none_img_sccl_1/144-6072015-7453507?pd_rd_w=PBVUD&#x26;content-id=amzn1.sym.740603ef-5416-4c6c-8609-ceb99d2a0eaf&#x26;pf_rd_p=740603ef-5416-4c6c-8609-ceb99d2a0eaf&#x26;pf_rd_r=9VDFX53S60MBXC13MG3J&#x26;pd_rd_wg=Nw0MD&#x26;pd_rd_r=886a99a9-24db-410f-b398-69cd16cf50f2&#x26;pd_rd_i=B071GL3XXQ&#x26;psc=1">Amazon</a></td></tr><tr><td>410nm Lumiled LED</td><td>4</td><td>$27.96</td><td><a href="https://www.digikey.com/en/products/detail/lumileds/L1F3-U400200012000/7389568">Digikey</a></td></tr><tr><td>Pico-spox 10pos Vertical Connector</td><td>2</td><td>$1.86</td><td><a href="https://www.digikey.com/en/products/detail/molex/0874371043/717647">Digikey</a></td></tr></tbody></table>

\*Upload this CSV file to Thorlabs for all the optomechanical parts + beamsplitter.

{% file src="../../.gitbook/assets/StepperV2_Thorlabs_BOM.csv" %}

## Design File Summary

[Link to GitHub repository](https://github.com/orgs/hacker-fab/repositories)

<table><thead><tr><th>File Name w/ link</th><th width="267">Description</th><th width="82">QTY</th><th>Tools Used</th></tr></thead><tbody><tr><td><a href="https://cad.onshape.com/documents/64016e74334e9df7f3829a37/v/b7cf6897006e1bbfe46b354b/e/0e8c1f104c4c4708545e72bb">Adapter plate</a></td><td>Connects the optics to the projector. Matches hole pattern on DLP housing and <a href="https://www.thorlabs.com/thorproduct.cfm?partnumber=SM1A53">Thorlabs flange</a>. Can be waterjet or 3D printed.</td><td>1</td><td>Water jet/<br>Online CNC shop</td></tr><tr><td><a href="https://cad.onshape.com/documents/052936cc5219e79ce8b1d191/w/decf2990870bd6e2bca78fa2/e/bd3bd601a477f0977cdc93cc">Base Plate</a></td><td>Structural base for aligning the micropositioning stage to the projector and optics.</td><td>1</td><td>Manual mill/<br>Online CNC shop/<br>Water jet</td></tr><tr><td><a href="https://cad.onshape.com/documents/64016e74334e9df7f3829a37/w/da5b11336b83f611c84f6d9f/e/345550da08271685cbf13c97">Stepper V2 Assembly</a></td><td>Referance for assembling optical components</td><td>1</td><td>Driver kit</td></tr><tr><td><a href="https://github.com/hacker-fab/lithography-stepper/blob/main/scripts/Lithographer.py">Lithographer.py</a></td><td>Python script for controlling the projector. Check for recent version.</td><td></td><td>Laptop</td></tr><tr><td><a href="https://github.com/gnea/grbl">GRBL Arduino CNC firmware</a></td><td>Firmware for stage microcontroller.</td><td></td><td>Arduino Uno, IDE, Laptop</td></tr></tbody></table>

## Build Instructions

Provide detailed, step-by-step construction instructions for the submitted hardware:

* Include all necessary information for reproducing it.
* Explain and (when possible) characterize design decisions. Include any design alternatives you created.
* Use visual instructions such as schematics, images and videos.
* Clearly reference design files and component parts described in the Design file summary and the Bill of materials summary
* Highlight any potential safety concerns.
* Tips and tricks to simplify the assembly process
* Possible errors that might occur during assembly and how to rectify them

### Get the Metal Parts Made



<figure><img src="../../.gitbook/assets/image (29).png" alt="" width="375"><figcaption><p>Base Plate</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (31).png" alt="" width="188"><figcaption><p>Adapter Plate</p></figcaption></figure>

There are several options for fabricating these two parts: the Base Plate and Adapter Plate. If you have access to a water jet, you may cut these parts from 1/4" aluminum plate, available on [McMaster](https://www.mcmaster.com/8975K437-8975K846/). Otherwise you can order the parts from [SendCutSend](https://sendcutsend.com/services/waterjet-cutting/), [Xometry ](https://www.xometry.com/capabilities/sheet-cutting/waterjet-cutting/)or another online CNC shop.&#x20;

#### Option 1: Water Jet

The Base Plate is 15" long, so double check that your water jet is large enough.

When downloading the Adapter Plate DXF for water jetting, go to Config > Water jet to get the hole sizes right for tapping. The 2.2mm holes are clearance for M2, and the 2.5mm holes are M3 tapped and countersunk.

#### Option 2: CNC Shop

Click here for a SendCutSend shopping cart with the parts already uploaded and configured. This has not been tested yet.

#### Option 3: Manual Machining

Base Plate: [Click here](https://cad.onshape.com/documents/052936cc5219e79ce8b1d191/w/decf2990870bd6e2bca78fa2/e/bd3bd601a477f0977cdc93cc) for a drawing to have open while drilling all the holes. Start with a center drill then use an appropriately sized drill bit for M4 and M6 holes. You may also switch to 8-32 and 1/4-20 if you already have the taps for those, and no other parts will change if you do so.

Adapter plate: This should be manually machineable but we haven't tried.

### Assemble the UV LED PCB

The PCB Gerber files for our UV LED can be found [here](https://github.com/hacker-fab/lithography-stepper/blob/main/LED%20PCB/UV\_LED/UV\_LED\_v2.zip). We provide a screenshot of the layout in Altium and a 3D render of the PCB below.

![](<../../.gitbook/assets/image (3) (2).png>)

![](<../../.gitbook/assets/image (6) (1).png>)

You can order it through your PCB manufacturer of choice (we used JLCPCB). However, note that the PCB is [**copper core**](https://jlcpcb.com/blog/62-JLCPCB-Direct-Heatsink-Copper-Cored-PCBs-Available-Now!). This is because the LEDs draw several amps of current in operation. To ensure that the PCB doesn't melt, you should use copper core to facilitate better heat flow.

We used 410 nm UV LEDs on this PCB. We found that two LEDs in series is sufficient to produce enough UV light for patterning. We also found connectors that are compatible with the cable in the TI DLP dev kit. (To do: insert links to parts for purchase.)

When assembling the UV LED PCB, it is easiest to use a solder syringe to carefully deposit the paste onto the LED pads and connector pads. If you try to use a stencil mask, it is very easy to smear the paste, so this is not recommended.

Once the paste is applied, you can use a pick and place machine to align the components with their pads. Keep in mind that you need to use a nozzle that is small enough to pick up the LEDs (to do: insert nozzle size). Finally, you can put the PCB into a reflow oven to solder the components to the board. (to do: insert oven parameters).

(Video showing PCB assembly in TechSpark yellow lab.)

Below is a completed version of the PCB - note the polarity:

![](<../../.gitbook/assets/image (7) (1).png>)\
You can test by applying 6V (limit to 1A) across the LED leads, but **be sure to wear UV-protective glasses**, as the LEDs will be bright! Once you are confident that the PCB works, you can now replace the blue LED PCB in the TI DLP dev kit with our new UV LED PCB.

### Disassemble the TI DLP dev kit

Taking pictures after every step is key to ensuring you can put it back together properly.

<figure><img src="../../.gitbook/assets/image (1).png" alt="" width="355"><figcaption><p>it works!</p></figcaption></figure>

1. Test the projector before we completely take it apart :)

<figure><img src="../../.gitbook/assets/image (1) (1).png" alt="" width="355"><figcaption></figcaption></figure>

2. Unplug all the connectors and remove the top PCB by unscrewing the standoffs.

<figure><img src="../../.gitbook/assets/image (32).png" alt="" width="178"><figcaption></figcaption></figure>

3. Remove the side PCB.

<figure><img src="../../.gitbook/assets/image (34).png" alt="" width="375"><figcaption></figcaption></figure>

4. Unscrew and remove the shroud by sliding it away from the rest of the optics.

<figure><img src="../../.gitbook/assets/image (35).png" alt="" width="355"><figcaption></figcaption></figure>

5. Unscrew and remove the heatsink for the front-most LED, which should be the blue one.

t![](<../../.gitbook/assets/image (37).png>)![](<../../.gitbook/assets/image (38).png>)

6. Disconnect the LED PCB from the cable. Heat it slightly on a hot plate or with a hot air gun to soften the adhesive and remove the black plastic housing.&#x20;
7. Glue the black plastic piece to the UV LED PCB, connect it to the blue cable, and reattach it to the optics housing. Put the heatsink back as well.

<figure><img src="../../.gitbook/assets/image (41).png" alt="" width="355"><figcaption></figcaption></figure>

8. Unscrew the projection lens. That one makes things bigger, but we're trying to make things smaller.

<figure><img src="../../.gitbook/assets/image (42).png" alt="" width="375"><figcaption></figcaption></figure>

9. Screw on the adapter plate with four countersunk M2 screws.

<figure><img src="../../.gitbook/assets/image (43).png" alt="" width="355"><figcaption></figcaption></figure>

10. Reassemble the rest of the projector, including the shroud and the PCBs.

### Assemble the Optics

<figure><img src="../../.gitbook/assets/image.png" alt=""><figcaption><p>All the tubes</p></figcaption></figure>

### Assemble the Micropositioning Stage

For more info about the CNC shield see the original designer's page here:

{% embed url="https://blog.protoneer.co.nz/arduino-cnc-shield/" %}

### Mechanical Integration

### Install Software and Flash Firmware

[https://github.com/gnea/grbl/wiki/Compiling-Grbl](https://github.com/gnea/grbl/wiki/Compiling-Grbl)

{% @github-files/github-code-block url="https://github.com/gnea/grbl/wiki/Compiling-Grbl" %}

[https://www.flir.com/products/spinnaker-sdk/?vertical=machine+vision\&segment=iis](https://www.flir.com/products/spinnaker-sdk/?vertical=machine+vision\&segment=iis)

### Final Alignment

## Safety

Wear [UV-blocking glasses](https://www.amazon.com/Tool-Klean-Safety-Glasses-Protection/dp/B081BHTJT8/ref=sr\_1\_5?crid=38LVX5C7MIN2M\&keywords=uv+protection+glasses\&qid=1674228429\&sprefix=uv+protection+%2Caps%2C96\&sr=8-5) whenever light leakage from the projector is possible.

## Validation and Characterization

Demonstrate the operation of the hardware and characterize its performance for a specific application.

* Highlight a relevant use case.
* If possible, characterize performance of the hardware over operational parameters.
* Create a bulleted list describing the capabilities (and limitations) of the hardware.  For example, load and operation time, spin speed, coefficient of variation, accuracy, precision, etc

## Appendix



