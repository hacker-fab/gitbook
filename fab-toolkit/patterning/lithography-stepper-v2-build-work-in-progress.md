# Lithography Stepper V2 Build

**If you already have a stepper built and you're looking for information on how to operate the tool, check out our** [**SOP**](../../standard-operating-procedures/patterning-sop-stepper-v2/)**!**

## Hardware Specs

<table><thead><tr><th width="279">Cost</th><th>$3,015.44</th></tr></thead><tbody><tr><td>Approximate Build Time</td><td>6 hours</td></tr><tr><td>Optical Resolution</td><td>2 µm</td></tr><tr><td>Developed Resolution</td><td>2 µm</td></tr><tr><td>Tiling Alignment Accuracy</td><td>5 µm</td></tr><tr><td>Overlay Alignment Accuracy</td><td>5 µm</td></tr><tr><td>Reticle (Exposure) Dimensions </td><td>1.04mm by 0.58mm</td></tr><tr><td>Exposure Time</td><td>8 seconds</td></tr><tr><td>Mechanical Step Size</td><td>1.5 µm</td></tr><tr><td>Mechanical Repeatability</td><td>5 µm (to verify)</td></tr><tr><td>Maximum Wafer Size</td><td>2 cm by 2 cm</td></tr><tr><td>Tool Size</td><td>30 cm x 36 cm x 20 cm</td></tr></tbody></table>

## Hardware Description

Our design was based on [Sam Zeloof](http://sam.zeloof.xyz/maskless-photolithography/) and [Huygens Optics](https://www.youtube.com/watch?v=_w0Z2Y5vaAQ)’ versions of this tool, which is essentially a projector connected to a microscope. We use a 10x objective for demagnification and a mechanical XYZ stage for positioning.

Stepper version 2 has greatly improved optical and mechanical performance over V1 while using the same DLP chip from Texas Instruments. Several factors led to this improvement:

1. Instead of an off the shelf projector with a flimsy plastic housing, we switched to the [TI DLPDLCR471TPEVM evaluation board](https://www.ti.com/tool/DLPDLCR471TPEVM). This allows for a more robust physical connection to the projector housing, thus eliminating vibrations. It also has much better documentation.
2. By swapping to a finite conjugate microscope objective, the optical path length is reduced from \~250 to 160 mm. This reduces the moment of inertia of the optics subassembly, therefore also reducing vibration.
3. Swapping to LEDs instead of the broad spectrum mercury lamp removes the need to constantly swap filters, which introduced random perturbations from touching the optics. We replaced the stock blue LED with a 410 nm LED mounted on a custom PCB. The PCB design files can be found [here](https://drive.google.com/drive/u/1/folders/1DK4DBdWB0b6NKSaRz9XtcY19dkCHzusb).
4. Mounting the projector horizontally means less structure is needed.

![](<../../.gitbook/assets/image (2) (2).png>)

## Tools Required

* M3 and M4 taps
* 3D printer
* Solder paste (preferably a syringe)
* Tweezers or pick and place machine
* Reflow oven
* Calipers

## Bill of Materials

Total Cost: $3,015.44 or\*\* $3106.44 (excluding computer & peripherals) (last updated March 16, 2025)

<table><thead><tr><th width="337">Name</th><th width="64">Qty</th><th width="128">Total</th><th>Link</th></tr></thead><tbody><tr><td>TI DLP Evaluation Module</td><td>1</td><td>$999</td><td><a href="https://www.ti.com/tool/DLPDLCR471TPEVM">TI</a></td></tr><tr><td>Assorted Optics</td><td>1</td><td>$736.52</td><td><a href="https://www.thorlabs.com/uploadcart/">Thorlabs</a>*</td></tr><tr><td>10X Din Plan Objective</td><td>1</td><td>$159</td><td><a href="https://www.edmundoptics.com/p/10x-din-plan-commercial-grade-objective/5386/">Edmunds</a></td></tr><tr><td>Basler acA1920-40uc w/ Sony IMX249 <br>(recommended), or**<br>FLIR Blackfly S Camera w/ Sony IMX183</td><td>1</td><td>$609.00<br>or**<br>$700.00</td><td><a href="https://www.baslerweb.com/en-us/shop/aca1920-40uc/">Basler</a><br>or**<br><a href="https://www.edmundoptics.com/p/bfs-u3-200s6c-c-usb3-blackflyreg-s-color-camera/40178/">Edmunds</a></td></tr><tr><td>USB Type A to Micro B locking cable</td><td>1</td><td>$25</td><td><a href="https://www.edmundoptics.com/p/usb-30-locking-cable-3m-length/29172/">Edmunds</a></td></tr><tr><td>19V 4.74A Projector Power Supply</td><td>1</td><td>$17.99</td><td><a href="https://www.amazon.com/Nobsound-Adapter-Universal-Charger-100-240V/dp/B074J81XRB/ref=sr_1_9?keywords=19v+power+supply&#x26;qid=1685981984&#x26;sr=8-9">Amazon</a></td></tr><tr><td>XYZ Stage 40mm</td><td>1</td><td>$125</td><td><a href="https://www.amazon.com/Pricision-40x40mm-Trimming-Bearing-Platform/dp/B07D7N9GT6/ref=sr_1_4?crid=32WSW494CE1YE&#x26;keywords=30mm+xyz+stage&#x26;qid=1706559232&#x26;sprefix=30mm+xyz+stage%2Caps%2C80&#x26;sr=8-4&#x26;ufe=app_do%3Aamzn1.fos.f5122f16-c3e8-4386-bf32-63e904010ad0">Amazon</a></td></tr><tr><td>Rotation Stage</td><td>1</td><td>$69.34</td><td><a href="https://www.amazon.com/Displacement-Platform-FineTuning-Production-Machinery/dp/B0972XB4NW/ref=sr_1_3?crid=2M0YGWAA27LQA&#x26;keywords=60mm+rotation+stage&#x26;qid=1706559352&#x26;sprefix=60mm+rotation+stage%2Caps%2C112&#x26;sr=8-3">Amazon</a></td></tr><tr><td>NEMA 28 Steppers</td><td>4</td><td>$71.96</td><td><a href="https://www.amazon.com/gp/product/B07PNV7RBW/ref=ox_sc_act_title_1?smid=A3HCJ70Z0RHBT6&#x26;th=1">Amazon</a></td></tr><tr><td>Arduino Uno (Elegoo)</td><td>1</td><td>$16.99</td><td><a href="https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU/ref=sr_1_6?crid=25HW74RSV1WUQ&#x26;keywords=arduino&#x26;qid=1706561234&#x26;sprefix=arduino%2Caps%2C115&#x26;sr=8-6">Amazon</a></td></tr><tr><td>CNC Shield for Arduino V3.0</td><td>1</td><td>$9.99</td><td><a href="https://www.amazon.com/Organizer-Expansion-Stepper-Heatsink-Arduino/dp/B07TT3C3HB/ref=sr_1_1?crid=3U63T1GH2IYGH&#x26;keywords=arduino+stepper+shield&#x26;qid=1706561169&#x26;sprefix=arduino+stepper+shield%2Caps%2C104&#x26;sr=8-1">Amazon</a></td></tr><tr><td>Stepper Motor Drivers</td><td>1</td><td>$22.99</td><td><a href="https://www.amazon.com/BIGTREETECH-Direct-TMC2208-TMC2209-TMC5160/dp/B07ZPYKL46?th=1">Amazon</a></td></tr><tr><td>Shield Power Supply 12V</td><td>2</td><td>$23.98</td><td><a href="https://www.amazon.com/ALITOVE-Adapter-Converter-100-240V-5-5x2-1mm/dp/B01GEA8PQA/ref=sr_1_4?keywords=12v+power+supply&#x26;qid=1706561572&#x26;sr=8-4">Amazon</a></td></tr><tr><td>2.5mm Barrel Connector</td><td>1</td><td>$7.99</td><td><a href="https://www.amazon.com/Fancasee-Replacement-Degree-Pigtail-Supply/dp/B081TXY6ML/ref=sr_1_3?crid=1LPRM16V3EL0T&#x26;keywords=2.5mm+dc+plug+pigtail&#x26;qid=1706561706&#x26;sprefix=2.5mm+dc+plug+pigtail%2Caps%2C94&#x26;sr=8-3">Amazon</a></td></tr><tr><td>Vacuum pump for chuck</td><td>1</td><td>$26.52</td><td><a href="https://www.amazon.com/Vacuum-diaphragm-compressor-75KPA-vacuum/dp/B08RCRJH9M">Amazon</a></td></tr><tr><td>M2.5 Screw Assortment</td><td>1</td><td>$30.56</td><td><a href="https://www.amazon.com/VIGRUE-Button-Washers-Assortment-Storage/dp/B08VHVB4H5/ref=sr_1_3?crid=24MVS2UJSXWC&#x26;keywords=m2.5&#x26;qid=1695828225&#x26;sprefix=m2.5%2Caps%2C112&#x26;sr=8-3">Amazon</a></td></tr><tr><td>Collapsible Magnetic Tray for Vibration</td><td>1</td><td>$21.99</td><td><a href="https://www.amazon.com/Collapsible-Magnetic-Foldable-Silicone-Organizes/dp/B0B7JBHK2N">Amazon</a></td></tr><tr><td>410nm Lumiled LED</td><td>4</td><td>$40.20</td><td><a href="https://www.digikey.com/en/products/detail/lumileds/L1F3-U400200012000/7389568">Digikey</a></td></tr><tr><td>Pico-spox 10pos Vertical Connector</td><td>2</td><td>$1.42</td><td><a href="https://www.digikey.com/en/products/detail/molex/0874371043/717647">Digikey</a></td></tr></tbody></table>

\*Upload this CSV file to Thorlabs for all the optomechanical parts + beamsplitter.

{% file src="../../.gitbook/assets/StepperV2_Thorlabs_BOM.csv" %}

\*\*The Basler camera and FLIR camera are mechanically interchangeable, but our software implementation for the Basler camera is more reliable and freely accessible (FLIR code distribution is restricted). For software installation simplicity, we recommend using the Basler camera.

## Design File Summary

Note: the OnShape folder is organized poorly because it was our first time using it. Won't happen again, we promise!

<table><thead><tr><th width="216">File Name w/ link</th><th width="315">Description</th><th width="69">QTY</th><th>Tools Used</th></tr></thead><tbody><tr><td><a href="https://cad.onshape.com/documents/64016e74334e9df7f3829a37/w/da5b11336b83f611c84f6d9f/e/345550da08271685cbf13c97">Stepper V2 Assembly</a></td><td>Reference for assembling optical components</td><td>1</td><td>Driver kit</td></tr><tr><td><a href="https://cad.onshape.com/documents/64016e74334e9df7f3829a37/v/b7cf6897006e1bbfe46b354b/e/0e8c1f104c4c4708545e72bb">Adapter plate</a></td><td>Connects the optics to the projector. Matches hole pattern on DLP housing and <a href="https://www.thorlabs.com/thorproduct.cfm?partnumber=SM1A53">Thorlabs flange</a>.</td><td>1</td><td>Water jet/<br>Online CNC shop/<br>3D print</td></tr><tr><td><a href="https://cad.onshape.com/documents/052936cc5219e79ce8b1d191/w/decf2990870bd6e2bca78fa2/e/bd3bd601a477f0977cdc93cc">Base Plate</a></td><td>Structural base for aligning the micropositioning stage to the projector and optics.</td><td>1</td><td>Manual mill/<br>Online CNC shop/<br>Water jet</td></tr><tr><td><a href="https://cad.onshape.com/documents/7046af5f6b7e48bd4bd933bb/w/60cbad214f94f1caf8b51a12/e/e2e1e76eaab599d9a1c4501e">40mm Stepper Mount</a> (link to <a href="https://drive.google.com/drive/u/1/folders/179fKzkOVRPVE_OXGE6WHWXImXfUCj_XX">SW</a>)</td><td>Three parts that connect stepper motors to the micropositioning stage x , y and z axes.</td><td>1</td><td>3D printed</td></tr><tr><td><a href="https://cad.onshape.com/documents/3f7d616dea69d10f46394ab8/w/89eaec6dabe956215608e0d5/e/7d51357363ef098a886662ee">Sliding Shaft Coupler</a></td><td>Press fits onto micrometer and slides on motor D-shaft.</td><td>3</td><td>3D printed</td></tr><tr><td><a href="https://cad.onshape.com/documents/7046af5f6b7e48bd4bd933bb/w/60cbad214f94f1caf8b51a12/e/fa5e024aa8cfe72d30af884d">Spacer</a></td><td>Tiny part for offsetting micrometer stop on Y axis</td><td>1</td><td>3D printed</td></tr><tr><td><a href="https://cad.onshape.com/documents/64016e74334e9df7f3829a37/w/da5b11336b83f611c84f6d9f/e/ffd5f395bec2204af40685e2">60mm Theta to 40mm XYZ Bracket</a></td><td>Mounts the theta stage at a right angle to the rest of the stage.</td><td>1</td><td>3D printed</td></tr><tr><td><a href="https://cad.onshape.com/documents/f6235112d9655ce90371982d/w/a0efdc80157be57df12af66d/e/fe48a0682c07d2cebc332aac">Vacuum Chuck</a></td><td>Connects to a vacuum hose to hold the chip. Corner jig aids alignment.</td><td>1</td><td>3D printed</td></tr><tr><td><a href="https://github.com/hacker-fab/stepper">Stepper Software</a></td><td>Python script for controlling the projector. Check for recent version.</td><td></td><td>Laptop</td></tr><tr><td><a href="https://github.com/gnea/grbl">GRBL Arduino CNC firmware</a></td><td>Firmware for stage microcontroller.</td><td></td><td>Arduino Uno, IDE, Laptop</td></tr></tbody></table>

## Build Instructions

Building the Stepper V2 requires some simple CNC machining, PCB soldering, 3D printing, and other assembly steps, followed by software installation.

### Get the Metal Parts Made

<figure><img src="../../.gitbook/assets/image (29).png" alt="" width="375"><figcaption><p>Base Plate</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (31).png" alt="" width="188"><figcaption><p>Adapter Plate</p></figcaption></figure>

There are several options for fabricating these two parts: the Base Plate and Adapter Plate. If you have access to a water jet, you may cut these parts from 1/4" aluminum plate, available on [McMaster](https://www.mcmaster.com/8975K437-8975K846/). Otherwise you can order the parts from [SendCutSend](https://sendcutsend.com/services/waterjet-cutting/), [Xometry ](https://www.xometry.com/capabilities/sheet-cutting/waterjet-cutting/)or another online CNC shop.

#### Option 1: Water Jet

The Base Plate is 15" long, so double check that your water jet is large enough.

When downloading the Adapter Plate DXF for water jetting, go to Config > Water jet to get the hole sizes right for tapping. The 2.2mm holes are clearance for M2, and the 2.5mm holes are M3 tapped and countersunk.

#### Option 2: CNC Shop

[Click here for a SendCutSend](https://cart.sendcutsend.com/c2ynz1un076a) shopping cart with the parts already uploaded and configured. This has not been tested yet.

#### Option 3: Manual Machining

Base Plate: [Click here](https://cad.onshape.com/documents/052936cc5219e79ce8b1d191/w/decf2990870bd6e2bca78fa2/e/bd3bd601a477f0977cdc93cc) for a drawing to have open while drilling all the holes. Start with a center drill then use an appropriately sized drill bit for M4 and M6 holes. You may also switch to 8-32 and 1/4-20 if you already have the taps for those, and no other parts will change if you do so.

Adapter plate: This should be manually machinable but we haven't tried.

### Solder the UV LED PCB

The PCB Gerber files for our UV LED can be found [here](https://drive.google.com/drive/u/1/folders/1X3nmuruO58prPQBm8DrWUhfM-LNq0qWm). We provide a screenshot of the layout in Altium and a 3D render of the PCB below.

![](<../../.gitbook/assets/image (3) (2).png>)

![](<../../.gitbook/assets/image (6) (1) (1) (1).png>)

You can order it through your PCB manufacturer of choice (we used JLCPCB). However, note that the PCB is [**copper core**](https://jlcpcb.com/blog/62-JLCPCB-Direct-Heatsink-Copper-Cored-PCBs-Available-Now!). This is because the LEDs draw several amps of current in operation. To ensure that the PCB doesn't melt, you should use copper core to facilitate better heat flow.\
\
When ordering the PCB, the manufacturer might send you an email asking about a missing heatsink file. In this case, please respond that this project does not include a direct heatsink, as the copper core PCB itself is designed to handle the thermal management.

We used 410 nm UV LEDs on this PCB. We found that two LEDs in series is sufficient to produce enough UV light for patterning. We also found connectors that are compatible with the cable in the TI DLP dev kit.

When assembling the UV LED PCB, it is easiest to use a solder syringe to carefully deposit the paste onto the LED pads and connector pads. If you try to use a stencil mask, it is very easy to smear the paste, so this is not recommended.&#x20;

Once the paste is applied, align the components with their pads (i.e. using tweezers or a pick and place machine). Keep in mind that you need to use a nozzle that is small enough to pick up the LEDs. Finally, you can put the PCB into a reflow oven to solder the components to the board.

Below is a completed version of the PCB - **note the polarity!** This image shows the correct orientation of the LEDs (credit to University of Utah for the photo). If you have it flipped, then the projector will project an image briefly before shutting itself off:\
![](<../../.gitbook/assets/image (1) (1) (1) (1) (1).png>)

You can test by applying 6V (limit to 1A) across the LED leads, but **be sure to wear UV-protective glasses**, as the LEDs will be bright! Once you are confident that the PCB works, you can now replace the blue LED PCB in the TI DLP dev kit with our new UV LED PCB. To see the UV light, simply look at the leds through your phone's camera, as the sensors see it as purple light.

### Disassemble the TI DLP dev kit

Taking pictures after every step is key to ensuring you can put it back together properly.

<figure><img src="../../.gitbook/assets/image (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1).png" alt="" width="355"><figcaption><p>it works!</p></figcaption></figure>

1. Test the projector before we completely take it apart :)

<figure><img src="../../.gitbook/assets/image (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1).png" alt="" width="355"><figcaption></figcaption></figure>

2. Unplug all the connectors and remove the top PCB by unscrewing the standoffs.

<figure><img src="../../.gitbook/assets/image (32).png" alt="" width="178"><figcaption></figcaption></figure>

3. Remove the side PCB.

<figure><img src="../../.gitbook/assets/image (34).png" alt="" width="375"><figcaption></figcaption></figure>

4. Unscrew and remove the shroud by sliding it away from the rest of the optics.

<figure><img src="../../.gitbook/assets/image (35).png" alt="" width="355"><figcaption></figcaption></figure>

5. Unscrew and remove the heatsink for the front-most LED, which should be the blue one.

t![](<../../.gitbook/assets/image (37).png>)![](<../../.gitbook/assets/image (38).png>)

6. Disconnect the LED PCB from the cable. Heat it slightly on a hot plate or with a hot air gun to soften the adhesive and remove the black plastic housing.
7. Glue the black plastic piece to the DIY UV LED PCB, connect it to the blue cable, and reattach it to the optics housing. Put the heatsink back as well.

<figure><img src="../../.gitbook/assets/image (41).png" alt="" width="355"><figcaption></figcaption></figure>

8. Unscrew the projection lens. That one makes things bigger, but we're trying to make things smaller. It's got to go.

<figure><img src="../../.gitbook/assets/image (42).png" alt="" width="375"><figcaption></figcaption></figure>

9. Screw on the adapter plate with four countersunk M2 screws.

<figure><img src="../../.gitbook/assets/image (43).png" alt="" width="355"><figcaption></figcaption></figure>

10. Reassemble the rest of the projector, including the shroud and the PCBs.

### Assemble the Optics

See [CAD](https://cad.onshape.com/documents/64016e74334e9df7f3829a37/w/da5b11336b83f611c84f6d9f/e/345550da08271685cbf13c97) for interactive assembly help (select option 3)

<figure><img src="../../.gitbook/assets/image (23).png" alt=""><figcaption><p>All the tubes!</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (44).png" alt="" width="375"><figcaption></figcaption></figure>

1. Start with the beamsplitter cube. Unscrew the set screws, remove the holder, and clip in the beamsplitter. The text ("Thorlabs") should be facing the microscope objective and camera when the holder is reinserted. Keep track of this during assembly and fix it later if necessary.

<figure><img src="../../.gitbook/assets/image (46).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (45).png" alt="" width="375"><figcaption></figcaption></figure>

2. Assemble the DLP tube. From left to right, the parts in the first picture are 0.3" lens tube (SM1L03), 0.5" lens tube coupler (SM1CPL05), 0.5" adjustable lens tube (SM1V05), and 0.5" lens tube (SM1L05). You may want to remove any internal lens rings. The adjustable lens tube allows axial length adjustment and the coupler allows rotation about the optical axis.

<figure><img src="../../.gitbook/assets/image (48).png" alt="" width="375"><figcaption></figcaption></figure>

3. Screw the DLP tube into the beamsplitter cube. The correct orientation is shown above, and the arrow points to the side of the beamsplitter with the text (and optical coating).
4. Assemble the camera tube, which similarly constructed. The parts are 1" lens tube (SM1L10), 1" lens tube coupler (SM1CPL10), 1" adjustable lens tube (SM1V10), another 1" lens tube (SM1L10), and C-mount SM1 adapter (SM1A9) (last two shown below).

<figure><img src="../../.gitbook/assets/image (54).png" alt="" width="375"><figcaption></figcaption></figure>

5. Make sure this camera tube is 82.3 mm long. We calculate this number by subtracting the various component lengths from the standard microscope objective back focal length of 160mm: 160 - 17.5 (c-mount camera) - 22.1 (objective tube) - 38.1 (beamsplitter cube).

<figure><img src="../../.gitbook/assets/image (3) (1) (1) (1).png" alt="" width="375"><figcaption><p>Camera and beamsplitter cube should be parallel.</p></figcaption></figure>

6. Screw on the C-mount SM1 adapter (SM1A9) to the camera and the 1" lens tube. Adjust the lens tube coupler to align the camera with the beamsplitter cube.

<figure><img src="../../.gitbook/assets/image (53).png" alt="" width="375"><figcaption></figcaption></figure>

7. Assemble the objective tube, which consists of a 0.5" lens tube (SM1L05), a 0.3" lens tube (SM1L03) an SM1 to RMS adapter (SM1A3), and the microscope objective.

<figure><img src="../../.gitbook/assets/image (21).png" alt="" width="375"><figcaption></figcaption></figure>

8. Temporarily loosen the top lens tube coupler in order to finally screw the entire assembly into the projector.

### 3D Print and Assemble the Stage

Print all of the parts in the table below. Black PLA is fine. You may need to re-orient them so they print well. The stepper mounts will all need small supports in the motor flange. The X and Y axes need other supports as well.

<table><thead><tr><th width="315">File Name w/ link</th><th width="362">Description</th><th width="224">QTY</th></tr></thead><tbody><tr><td><a href="https://cad.onshape.com/documents/7046af5f6b7e48bd4bd933bb/w/60cbad214f94f1caf8b51a12/e/e2e1e76eaab599d9a1c4501e">40mm Stepper Mount</a> (link to <a href="https://drive.google.com/drive/u/1/folders/179fKzkOVRPVE_OXGE6WHWXImXfUCj_XX">SW</a>)</td><td>Three parts that connect stepper motors to the micropositioning stage x , y and z axes.</td><td>1</td></tr><tr><td><a href="https://cad.onshape.com/documents/3f7d616dea69d10f46394ab8/w/89eaec6dabe956215608e0d5/e/7d51357363ef098a886662ee">Sliding Shaft Coupler</a></td><td>Press fits onto micrometer and slides on motor D-shaft.</td><td>3</td></tr><tr><td><a href="https://cad.onshape.com/documents/7046af5f6b7e48bd4bd933bb/w/60cbad214f94f1caf8b51a12/e/fa5e024aa8cfe72d30af884d">Spacer</a></td><td>Tiny part for offsetting micrometer stop on Y axis</td><td>1</td></tr><tr><td><a href="https://cad.onshape.com/documents/64016e74334e9df7f3829a37/w/da5b11336b83f611c84f6d9f/e/ffd5f395bec2204af40685e2">60mm Theta to 40mm XYZ Bracket</a></td><td>Mounts the theta stage at a right angle to the rest of the stage.</td><td>1</td></tr><tr><td><a href="https://cad.onshape.com/documents/f6235112d9655ce90371982d/w/a0efdc80157be57df12af66d/e/fe48a0682c07d2cebc332aac">Vacuum Chuck</a></td><td>Connects to a vacuum hose to hold the chip. Corner jig aids alignment.</td><td>1</td></tr></tbody></table>

1. Unscrew all the, micrometers, L-stops and stage locks from the micrometer stage. Separate the X, Y and Z axes. Throughout the assembly process we will be replacing the stock screws with \~4mm longer ones as we reattach the various components to the stage. All 3d printed mounts are 4mm thick at the screw holes. Have your M2.5 screw kit handy!

<figure><img src="../../.gitbook/assets/image (3) (1) (1).png" alt="" width="338"><figcaption></figcaption></figure>

2. Press fit the three sliding shaft couplers onto the three micrometer handles until the knurled surface is fully covered. They should fit with significant force and maybe gentle hammering. Be careful - the micrometer handles may have different diameters so you may need to modify the CAD and reprint to get a correct fit.

<figure><img src="../../.gitbook/assets/image (1) (1) (1) (1) (1) (1) (1) (1) (1) (1).png" alt="" width="375"><figcaption></figcaption></figure>

3. The shaft couplers should slide on the motor shafts with zero slop. Modify dimensions and re-print if this is not the case. Graphite lubricant may help decrease sliding friction, and the fit will get looser after repeated axial movement as the steel deforms and smooths the plastic.

<figure><img src="../../.gitbook/assets/image (2) (1) (1) (1) (1).png" alt="" width="375"><figcaption></figcaption></figure>

4. Screw the motor, coupler, and micrometer into the X axis motor mount as shown. Doing this step before attaching to the rest of the stage takes advantage of the slop in the micrometer mounting screws and aids alignment.

<figure><img src="../../.gitbook/assets/image (5) (1).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (4) (1) (1).png" alt="" width="375"><figcaption></figcaption></figure>

5. Slide the Y axis motor mount onto the Y axis. You will need to remove some screws and push the stage to allow it to slide on.

<figure><img src="../../.gitbook/assets/image (7) (1).png" alt="" width="375"><figcaption></figcaption></figure>

6. Attach the motor. Don't screw down the micrometer mount yet.

<figure><img src="../../.gitbook/assets/image (6) (1).png" alt="" width="355"><figcaption></figcaption></figure>

7. While pushing the stage so the micrometer isn't touching the stop, fasten the micrometer mount. This avoids preloading the micrometer/motor assembly and improves shaft alignment.

<figure><img src="../../.gitbook/assets/image (8) (1).png" alt="" width="355"><figcaption></figcaption></figure>

7. Reattach the X axis micrometer stop as well. You may need to adjust the screw length to get it to fit.

<figure><img src="../../.gitbook/assets/image (10) (1).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (13).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (12) (1).png" alt="" width="375"><figcaption></figcaption></figure>

8. Insert the Z axis motor mount to the Z axis. The easiest way to do this is to insert it upside down from the opposite side, then flip it while pushing the stage up, then slide it back so the holes line up. Basically it takes some fiddling.

<figure><img src="../../.gitbook/assets/image (9) (1).png" alt="" width="355"><figcaption></figcaption></figure>

9. As with the other stages, attach the motor first, then secure the mounts. Tighten the set screw at the green arrow. Make sure the micrometer is flush with the mount at the yellow arrow. Again pushing upwards at the red arrow eliminates prelaod from the spring inside the stage and helps alignment.

<figure><img src="../../.gitbook/assets/image (14).png" alt="" width="355"><figcaption></figcaption></figure>

10. Tighten down the Z axis mount.

<figure><img src="../../.gitbook/assets/image (15).png" alt="" width="375"><figcaption></figcaption></figure>

11. Attach the X axis motor mount to the stage with the screws at the red arrows.

<figure><img src="../../.gitbook/assets/image (16).png" alt="" width="375"><figcaption></figcaption></figure>

12. Add additional screws on the X and Y axes to make sure the mounts are solidly attached. Ignore the spring in the above image.

<figure><img src="../../.gitbook/assets/image (17).png" alt="" width="355"><figcaption></figcaption></figure>

13. Attach the right angle bracket to the theta stage and the top of the Z stage.

<figure><img src="../../.gitbook/assets/image (18).png" alt="" width="355"><figcaption></figcaption></figure>

14. Screw the chip vacuum chuck onto the theta stage. The stage is finished.

### Mechanical Integration

<figure><img src="../../.gitbook/assets/image (55).png" alt=""><figcaption></figcaption></figure>

1. Bolt the XYZ stage to the base plate using short screws so they don't protrude out the bottom. Ensure the stage is aligned with the tapped holes by pushing it forward while screwing it down.
2. Screw in the four alignment screws for the projector. They don't need to go in all the way.

<figure><img src="../../.gitbook/assets/image (19).png" alt=""><figcaption></figcaption></figure>

3. Push the projector and optics against the four screws to ensure alignment.

<figure><img src="../../.gitbook/assets/image (22).png" alt=""><figcaption></figcaption></figure>

4. Plug in everything: power for the projector, locking USB cable for the camera, USB cable for the stage, power for the stage, HDMI for the projector, power for the pump, and vacuum tube for the chuck. Do not power the stage arduino shield without the motors connected, or you will burn out the drivers.

### Install Software and Flash Firmware (WIP)

To install and run the software, you will need a Windows system that has two USB ports. The rest of this section describes how to install the following dependencies:

1. Arduino GRBL firmware
2. Python version 3.10 and Python libraries
3. Basler camera _or_ FLIR Blackfly S Camera Drivers & Viewer

After these are installed, you may clone and instantiate the stepper repository on your device. Our GUI supports a live camera preview of the stage when using the Basler camera. Optionally, you can develop your own driver for using the FLIR camera instead. Instructions for such are included below as well.

#### Arduino GRBL Installation

1. Install Arduino IDE.
2. Flash the Arduino with GRBL following the instructions in the [Link ](https://github.com/gnea/grbl/wiki/Compiling-Grbl)below (it may display as "Not found", but we have found that the link works anyway). For more info about the CNC shield, see the original designer's page below.

{% @github-files/github-code-block url="https://github.com/gnea/grbl/wiki/Compiling-Grbl" %}

{% embed url="https://blog.protoneer.co.nz/arduino-cnc-shield/" %}

3. To test that the installation was successful, open Arduino IDE and open the serial monitor. You should see text indicating that a version of GRBL is running on your Arduino.

#### Python Version 3.10 (if using FLIR camera)

If you are using the FLIR camera, you must install Python version 3.10. This is because at the time of development, the latest Python version the Flir Spinnaker SDK supports is version 3.10. As such, you must install libraries and run the software for/from this version. If you are using the Basler camera, later versions of Python should be compatible with the GUI software.

1. We highly recommend using a Linux-based terminal on your Windows system for installation. One option is the [official git terminal](https://gitforwindows.org/). The following instructions assume you are using this terminal environment.
2. Open git terminal. Check if you have Python 3.10 already installed on your system by running `py -3.10 -V`. If no installation is present, download and install Python 3.10 from the [official download link](https://www.python.org/downloads/release/python-3100/).
3. Install necessary software dependencies. Follow the instructions on the [GitHub repository](https://github.com/hacker-fab/stepper) for instructions on how to set up a Python virtual environment for this purpose.

#### Basler Camera Drivers & Viewer Installation (WIP)

If you are using the Basler camera, install its necessary drivers and its GUI for live camera output.&#x20;

#### FLIR Blackfly S Drivers & Viewer Installation (WIP)

If you are using the FLIR camera, install FLIR camera drivers. Also install the FLIR Spinview GUI to view camera output. For integrating this within the GUI, follow the instructions in [Optional: FLIR Spinnaker SDK (for software developers)](lithography-stepper-v2-build-work-in-progress.md#optional-flir-spinnaker-sdk-for-software-developers)

#### Stepper GUI Installation

{% @github-files/github-code-block url="https://github.com/hacker-fab/stepper" %}

Follow the steps outlined in the linked repository (recommended). Alternatively, follow the steps below.

1. pen git terminal to the location where you want the Stepper GUI software to be downloaded. Then, run the following commands:

* `git clone https://github.com/hacker-fab/stepper .`
* `cd stepper`

2. Install software dependencies listed in the `requirements.txt` file
3. If you are using the FLIR camera and have access to the private FLIR camera submodule repository, then also enter the following commands:

* `git submodule init`
*   `git submodule update`



    Otherwise, go to the stepper/config.toml file and toggle the necessary flags to select your camera (or disable it).

3. Configure `config.toml` with the settings most appropriate for your Stepper build and camera configuration.
4. Run gui.py with Python 3.10:
   * `py -3.10 ./src/gui.py`
5. For instructions on how to use the Stepper GUI software (including troubleshooting), please see the [Standard Operating Procedures](../../standard-operating-procedures/patterning-sop-stepper-v2/).

#### Optional: FLIR Spinnaker SDK (for software developers)

The Stepper V2 build uses a Teledyne Flir camera and custom software written for it. The Stepper software uses the Flir Spinnaker SDK to integrate a live camera preview of the stepper's stage. Since the SDK and its derivative software are closed-source components, we currently do not possess the legal authority to grant access to our custom Flir camera driver to third parties. The following steps describe how to install the Flir Spinnaker SDK and how to develop your own driver. Please carefully review all terms, agreements, and licensing requirements. Follow the steps below.

1. Create an account on the Flir website ([https://www.flir.com/](https://www.flir.com/)), or, if you already have one, sign in.&#x20;
2. Download the Flir Spinnaker SDK ([https://www.flir.com/products/spinnaker-sdk/](https://www.flir.com/products/spinnaker-sdk/)) for Windows.
3. Decompress your download if necessary. Open the README.txt file in the (decompressed) download and follow the installation instructions inside.&#x20;
4. Test that the installation was successful by running an example program. To do this, first make sure your Flir camera is connected. Then, open git terminal in the "Examples" folder. Then, choose any example .py script and run it by entering `py -3.10 NameOfYourScript.py`. Ensure that the program output reports connection and communication with your FLIR camera.
5.  To write a Flir camera driver compatible with the rest of the software, you must conform to the stepper's [CameraModule API](https://github.com/hacker-fab/stepper/blob/main/src/camera/camera_module.py). Within your custom "FlirCamera" class, which should be defined as a subclass of CameraModule and a Flir event handler, we recommend implementing the following functions:

    * def \_\_init\_\_(self)
    * def setStreamCaptureCallback(self, callback)
    * def streamImageReady(self); returns True if live image is available
    * def getStreamCaptureImage(self); returns a tuple of (numpy ND image array, shape of that array, and an image format string ("rgb888" or "mono8")), or False if the image is invalid
    * def isOpen(self); returns True if the camera is active
    * def open(self); returns True on success
    * def close(self); returns True on success
    * def startStreamCapture(self); returns True on success
    * def stopStreamCapture(self); returns True on success
    * a Flir image event handler

    We also suggest optimizing live preview performance by selecting a low-overhead color processing scheme and by displaying only the most recently acquired image (i.e. newest first). The Flir SDK code examples show how you might do this.
6. In config.toml, select the FLIR camera. to an instance of your FlirCamera class.

### Final Alignment (WIP)

Once the stepper is connected to a computer and the live camera feed is visible, proceed with final alignment. The goal is to adjust the tube length between the DLP housing and the beamsplitter cube such that both the projected image and the chip are in focus.&#x20;

1. Place a chip with a visible pattern on it. Cracked glass or extremely dirty chips are good options.
2. Project a mostly red image with some fine marks for determining focus.
3. Using the Z axis (focus) of the stage, focus onto the chip surface. Disregard the projected pattern for now.

![](<../../.gitbook/assets/image (57).png>)

4. Loosen the clamp that connects the two parts of the DLP-beamsplitter tube so that they freely rotate. (update picture)
5. Loosen the locking ring on the adjustable lens tube.
6. Screw the adjustable lens tube in/out while periodically checking to see if the projected image gets more or less in focus. You may need to push the optics into the coupler to ensure planarity.
7. Once both images are in focus at the same time, tighten the locking ring on the adjustable lens tune as well as the coupler. (insert image)

## Safety

Wear [UV-blocking glasses](https://www.amazon.com/Tool-Klean-Safety-Glasses-Protection/dp/B081BHTJT8/ref=sr_1_5?crid=38LVX5C7MIN2M\&keywords=uv+protection+glasses\&qid=1674228429\&sprefix=uv+protection+%2Caps%2C96\&sr=8-5) whenever light leakage from the projector is possible.

## Appendix
