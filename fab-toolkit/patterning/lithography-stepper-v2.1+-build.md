---
icon: arrow-up-right-dots
---

# Lithography Stepper V2.1+ Build

Stepper V2.1 is an incremental improvement upon the existing [Stepper V2](lithography-stepper-v2-build-work-in-progress.md) with mechanical improvements. As such, a lot of the content here will be the same as V2! The changes from V2 (and reasoning):

* Rotate the optics so that the objective points downward instead of sideways
  * This allows using the much-improved X and Y axes of the stage, instead of X and Z, which permits higher movement resolution and repeatability
  * This also means that we no longer need the vacuum chuck, which means reduced vibration (and less complexity)
  * Unlike Stepper V1, which was cantilevered, V2.1 is supported on all sides by rigid optical mounting posts, which should avoid V1's vibration issues
* Mount the optics and projector much more rigidly, using a plate offset by posts to secure the optics directly, rather than relying on the projector's case and rubber feet
  * This further reduces relative vibrations between the optics and stage
  * This also makes the DLP DMD plane and the chip plane more parallel == more consistent focus both across a single exposure and between exposures
  * This also decouples the structure of the stepper from the mechanical design of the projector (as Stepper V2 relies on the actual shape of the projector to work) which will allow us to change to a different projector in the future
* Switch from a FLIR Blackfly camera to a Basler Ace camera, and reduce the sensor size from 1" to 1/1.2"
  * Not only is the Basler less expensive for an equivalent sensor, it also has a much, much nicer software suite that is distributable (a particular pain point with FLIR's)
  * Smaller sensor size means we're paying for less unused sensor (since any sensor area outside of the size of the projector's DMD is not used)

As a whole, these changes should improve the results we get out of Stepper V2.1 compared to Stepper V2, and the mechanical changes will set the stage for further patterning capabilities such as reliable automatic alignment. Furthermore, the decoupling of the projector from the rest of the design will in the future allow us to use different projector for further improvements.

## Specifications&#x20;

| Spec                           | Value                                  |
| ------------------------------ | -------------------------------------- |
| Cost                           | $3,012.13                              |
| Build Time                     | 6 hours                                |
| Optical Resolution             | 1 µm                                   |
| Vibration susceptibility       | 1.2 µm (when built onto optical table) |
| Reticle (Exposure) Dimensions  | 1.04mm by 0.58mm                       |
| Exposure Time                  | 8 seconds                              |
| Mechanical Step Size           | 1.5 µm                                 |
| Maximum Wafer Size             | 1 cm x 1 cm                            |
| Size                           | 20 cm x 20 cm x 50 cm                  |

These remaining specs are from Stepper V2's documentation and have not been verified. The optical performance of both systems should be the same.

<table><thead><tr><th width="279">Spec</th><th>Value</th></tr></thead><tbody><tr><td>Developed Resolution</td><td>2 µm</td></tr><tr><td>Tiling Alignment Accuracy</td><td>5 µm</td></tr><tr><td>Overlay Alignment Accuracy</td><td>5 µm</td></tr><tr><td>Mechanical Repeatability</td><td>5 µm (to verify)</td></tr></tbody></table>

## Bill of Materials

Total cost as currently specified: $3,012.13

<table><thead><tr><th width="337">Name</th><th width="64">Quantity</th><th width="128">Total</th><th>Link</th></tr></thead><tbody><tr><td>TI DLP Evaluation Module</td><td>1</td><td>$1328.63</td><td><a href="https://www.mouser.com/ProductDetail/Texas-Instruments/DLPDLCR471TPEVM?qs=DRkmTr78QAQsT6dpWa8zKg%3D%3D">Mouser</a> (on backorder as of May 2025)</td></tr><tr><td>Assorted optics and optomechanics</td><td>1</td><td>$772.89</td><td><a href="https://www.thorlabs.com/uploadcart/">Thorlabs</a>*</td></tr><tr><td>10X Din Plan Objective</td><td>1</td><td>$159.00</td><td><a href="https://www.edmundoptics.com/p/10x-din-plan-commercial-grade-objective/5386/">Edmund Optics</a></td></tr><tr><td>Basler ace U acA1920-40uc</td><td>1</td><td>$609</td><td><a href="https://www.baslerweb.com/en-us/shop/aca1920-40uc/">Basler</a></td></tr><tr><td>USB Type A to Micro B locking cable</td><td>1</td><td>$3.99</td><td><a href="https://www.amazon.com/dp/B0CWN9YLSB">Amazon</a></td></tr><tr><td>19V 4.74A Projector Power Supply</td><td>1</td><td>$17.99</td><td><a href="https://www.amazon.com/Nobsound-Adapter-Universal-Charger-100-240V/dp/B074J81XRB/ref=sr_1_9?keywords=19v+power+supply&#x26;qid=1685981984&#x26;sr=8-9">Amazon</a></td></tr><tr><td>XYZ Stage 40mm</td><td>1</td><td>$125</td><td><a href="https://www.amazon.com/Pricision-40x40mm-Trimming-Bearing-Platform/dp/B07D7N9GT6/ref=sr_1_4?crid=32WSW494CE1YE&#x26;keywords=30mm+xyz+stage&#x26;qid=1706559232&#x26;sprefix=30mm+xyz+stage%2Caps%2C80&#x26;sr=8-4&#x26;ufe=app_do%3Aamzn1.fos.f5122f16-c3e8-4386-bf32-63e904010ad0">Amazon</a></td></tr><tr><td>NEMA 28 Steppers</td><td>3</td><td>$53.97</td><td><a href="https://www.amazon.com/gp/product/B07PNV7RBW/ref=ox_sc_act_title_1?smid=A3HCJ70Z0RHBT6&#x26;th=1">Amazon</a></td></tr><tr><td>Arduino Uno (Elegoo)</td><td>1</td><td>$16.99</td><td><a href="https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU/ref=sr_1_6?crid=25HW74RSV1WUQ&#x26;keywords=arduino&#x26;qid=1706561234&#x26;sprefix=arduino%2Caps%2C115&#x26;sr=8-6">Amazon</a></td></tr><tr><td>CNC Shield for Arduino V3.0</td><td>1</td><td>$10.99</td><td><a href="https://www.amazon.com/Organizer-Expansion-Stepper-Heatsink-Arduino/dp/B07TT3C3HB/ref=sr_1_1?crid=3U63T1GH2IYGH&#x26;keywords=arduino+stepper+shield&#x26;qid=1706561169&#x26;sprefix=arduino+stepper+shield%2Caps%2C104&#x26;sr=8-1">Amazon</a></td></tr><tr><td>Stepper Motor Drivers</td><td>1</td><td>$22.99</td><td><a href="https://www.amazon.com/BIGTREETECH-Direct-TMC2208-TMC2209-TMC5160/dp/B07ZPYKL46?th=1">Amazon</a></td></tr><tr><td>Shield Power Supply 12V</td><td>2</td><td>$23.98</td><td><a href="https://www.amazon.com/ALITOVE-Adapter-Converter-100-240V-5-5x2-1mm/dp/B01GEA8PQA/ref=sr_1_4?keywords=12v+power+supply&#x26;qid=1706561572&#x26;sr=8-4">Amazon</a></td></tr><tr><td>M2.5 Screw Assortment</td><td>1</td><td>$16.99</td><td><a href="https://www.amazon.com/VIGRUE-Button-Washers-Assortment-Storage/dp/B08VHVB4H5/ref=sr_1_3?crid=24MVS2UJSXWC&#x26;keywords=m2.5&#x26;qid=1695828225&#x26;sprefix=m2.5%2Caps%2C112&#x26;sr=8-3">Amazon</a></td></tr><tr><td>410nm Lumiled LED</td><td>4</td><td>$27.96</td><td><a href="https://www.digikey.com/en/products/detail/lumileds/L1F3-U400200012000/7389568">Digikey</a></td></tr><tr><td>Pico-spox 10pos Vertical Connector</td><td>2</td><td>$1.86</td><td><a href="https://www.digikey.com/en/products/detail/molex/0874371043/717647">Digikey</a></td></tr><tr><td>Proximity sensors (4 pack)</td><td>1</td><td>$19.90</td><td><a href="https://www.amazon.com/Inductive-Proximity-Sensors-Anti-Interference-Unshielded/dp/B0DCMWDJ85/ref=asc_df_B0DCMWDJ85?mcid=4ec07ef204db32868c54b1f1f4eca62c&#x26;tag=hyprod-20&#x26;linkCode=df0&#x26;hvadid=693071814664&#x26;hvpos=&#x26;hvnetw=g&#x26;hvrand=5581199184906295329&#x26;hvpone=&#x26;hvptwo=&#x26;hvqmt=&#x26;hvdev=c&#x26;hvdvcmdl=&#x26;hvlocint=&#x26;hvlocphy=9005925&#x26;hvtargid=pla-2365125809402&#x26;th=1">Amazon</a></td></tr></tbody></table>

Note: the Basler ace U camera ($609) may be replaced with a cheaper camera with a smaller image size, by adding a reduction lens to increase the effective FOV. This has been tested at UCI. An example of a reduction lens ($50) can be found at this Amazon link: [https://a.co/d/89BmLey](https://a.co/d/89BmLey) &#x20;

The assembly instructions is the same except for the addition of an optics adaptor, an example of which can be found here: [https://cad.onshape.com/documents/82547ea16092756ad287bef8/w/ffd54e7348f87739e6c73d60/e/ee7820655a57d93e3ef43caf?renderMode=0\&uiState=6920ed2f97a10905a77876af](https://cad.onshape.com/documents/82547ea16092756ad287bef8/w/ffd54e7348f87739e6c73d60/e/ee7820655a57d93e3ef43caf?renderMode=0\&uiState=6920ed2f97a10905a77876af)

(Not included in BOM: misc. bolts)

\*For Thorlabs order: upload the file below to [Rapid Order](https://www.thorlabs.com/uploadcart/) to retrieve the cart:

{% file src="../../.gitbook/assets/v2.1-thorlabs.csv" %}

## Design Files

Currently the CAD for Stepper 2.1 is all in FreeCAD, with the files stored in [this repo](https://github.com/hacker-fab/stepper_cad), but will be ported to Onshape soon for consistency.

<figure><img src="../../.gitbook/assets/image (157).png" alt=""><figcaption><p>Stepper V2.1</p></figcaption></figure>

Several parts from Stepper V2's CAD are used on 2.1:

* [Adapter plate](https://cad.onshape.com/documents/64016e74334e9df7f3829a37/v/b7cf6897006e1bbfe46b354b/e/0e8c1f104c4c4708545e72bb)
* [Stage](https://cad.onshape.com/documents/0649d732771a63bcb8e6be1d/w/408d85c155072764ebeaefad/e/301b112b8d29652692865df3)

The software ([custom](https://github.com/hacker-fab/stepper) and [GRBL](https://github.com/grbl/grbl)) are the same as Stepper V2.

## Build Instructions

### Tools required

* 3D Printer
* SMD soldering tools (solder paste, reflow oven, tweezers)
* Calipers
* Metric and imperial allen wrench sets

### Fabricate the mechanical parts

There are several mechanical parts that will need to be fabricated:

* top plate x1: laser cut from acrylic or machined, from [V2.1 CAD](https://github.com/hacker-fab/stepper_cad) (`assembly.FCStd`, part `top_plate`)
* adapter plate x1: 3D printed or machined, from modified [V2 CAD](https://cad.onshape.com/documents/9a26802ff74766ab4a3300db/w/c38cc8ce466d94f1188a02dc/e/dc1e5fa1658c924bae41ec8a) (part `adapter-DLP471EVM` for the machined version, `adapter plate 3d print alt` for the 3d print version)
* PCB holder x1: 3D printed, CAD [here](https://cad.onshape.com/documents/10531a6d720ba41d9b6b0029/w/6ee9eb44d264029fe6767e9a/e/68128b59d67d22dde591e088). I can't make this one shared publicly due to weird permissions problems, this is a HackerFab admin issue.
* for builds that are not making use of an existing optical table: bottom plate. laser cut or machined, 1 inch grid of ¼ inch holes at least 6x6 inches

### UV LED PCB Assembly

This step is the same as for V2, see the instructions [here](lithography-stepper-v2-build-work-in-progress.md#solder-the-uv-led-pcb).

### Projector Modification

These steps are heavily based on the steps done for V2, but some have changed.

<figure><img src="../../.gitbook/assets/image (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1).png" alt="" width="355"><figcaption><p>it works!</p></figcaption></figure>

1. Test the projector before we completely take it apart :)

<figure><img src="../../.gitbook/assets/IMG20250325152348.jpg" alt="" width="375"><figcaption><p>LED current settings in the software</p></figcaption></figure>

2. Plug in the projector over USB and use the [LightCrafter GUI software](https://www.ti.com/tool/download/DLPDLC-GUI) to set the LED current drive level to 150. Note 150 is NOT the output current, that can be calculated like so: `OutputCurrent = ((DriveLevel + 1)/1024)*((0.15/0.036))`  - [Table 19-91](https://www.ti.com/lit/ug/dlpu110b/dlpu110b.pdf) . (The projector defaults to 1023 ⇒ 4A, which is its maximum output - our UV LEDs are not able to handle that much current, so reducing the current makes sure they don't burn out!)

<figure><img src="../../.gitbook/assets/image (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1).png" alt="" width="355"><figcaption></figcaption></figure>

3. Unplug all the connectors and remove the top PCB by unscrewing the standoffs.

<figure><img src="../../.gitbook/assets/image (32) (1).png" alt="" width="178"><figcaption></figcaption></figure>

4. Remove the side PCB.

<figure><img src="../../.gitbook/assets/image (34) (1).png" alt="" width="375"><figcaption></figcaption></figure>

5. Unscrew and remove the shroud by sliding it away from the rest of the optics.

<figure><img src="../../.gitbook/assets/image (5) (1).png" alt="" width="375"><figcaption></figcaption></figure>

6. _**NEW FOR 2.1:**_ Remove the bolts and standoffs that hold the main projector assembly to the bottom plate. This should free the bottom assembly.

<figure><img src="../../.gitbook/assets/image (35) (1).png" alt="" width="355"><figcaption></figcaption></figure>

7. Unscrew and remove the heatsink for the front-most LED, which should be the blue one.

![](<../../.gitbook/assets/image (37) (1).png>)![](<../../.gitbook/assets/image (38) (1).png>)

8. Disconnect the LED PCB from the cable. Heat it slightly on a hot plate or with a hot air gun to soften the adhesive and remove the black plastic housing.
9. Glue the black plastic piece to the DIY UV LED PCB, connect it to the blue cable, and reattach it to the optics housing. Reattaching the black piece is recommended as it acts as a spacer between the UV LEDs and the collimating lens; it is easy to damage the LEDs without such a piece in the middle. Put the heatsink back as well.

<figure><img src="../../.gitbook/assets/image (41) (1).png" alt="" width="355"><figcaption></figcaption></figure>

10. Unscrew the projection lens. That one makes things bigger, but we're trying to make things smaller. It's got to go.

<figure><img src="../../.gitbook/assets/image (42) (1).png" alt="" width="375"><figcaption></figcaption></figure>

11. Screw on the adapter plate with four countersunk M2 screws.

<figure><img src="../../.gitbook/assets/image (43) (1).png" alt="" width="355"><figcaption></figcaption></figure>

12. Use four M2.5 screws to screw on the Thorlabs SM1A53 adapter flange
13. _**NEW FOR 2.1:**_ Do not reassemble the projector case - we will use it as-is.

### Optics + Mechanics Assembly

These steps are heavily based on the same steps for V2, but slightly modified.

<figure><img src="../../.gitbook/assets/image (44) (1).png" alt="" width="375"><figcaption></figcaption></figure>

1. Start with the beamsplitter cube. Unscrew the set screws, remove the holder, and clip in the beamsplitter. The text ("Thorlabs") should be facing the microscope objective and camera when the holder is reinserted. Keep track of this during assembly and fix it later if necessary.

<figure><img src="../../.gitbook/assets/image (46) (1).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (45) (1).png" alt="" width="375"><figcaption></figcaption></figure>

2. Assemble the DLP tube. From left to right, the parts in the first picture are 0.3" lens tube (SM1L03), 0.5" lens tube coupler (SM1CPL05), 0.5" adjustable lens tube (SM1V05), and 0.5" lens tube (SM1L05). You may want to remove any internal lens rings. The adjustable lens tube allows axial length adjustment and the coupler allows rotation about the optical axis.

<figure><img src="../../.gitbook/assets/image (48) (1).png" alt="" width="375"><figcaption></figcaption></figure>

3. Screw the DLP tube into the beamsplitter cube. The correct orientation is shown above, and the arrow points to the side of the beamsplitter with the text (and optical coating).
4. Assemble the camera tube, which similarly constructed. The parts are 1" lens tube (SM1L10), 1" lens tube coupler (SM1CPL10), 1" adjustable lens tube (SM1V10), another 1" lens tube (SM1L10), and C-mount SM1 adapter (SM1A9) (last two shown below).

<figure><img src="../../.gitbook/assets/badcalipers.jpg" alt="" width="375"><figcaption></figcaption></figure>

5. Make sure this camera tube is 86.8 mm long. We calculate this number by subtracting the various component lengths from the standard microscope objective back focal length of 150mm: 150 - 17.5 (c-mount camera) - 7.6 (objective tube) - 38.1 (beamsplitter cube) = 86.8mm\
   \
   &#xNAN;**(NOTE:** Our objective is rated for a 160mm optical tube length, but this is NOT the same as the back focal length, which is 150mm... this is a very confusing specification, see [this page](https://www.edmundoptics.com/knowledge-center/application-notes/microscopy/understanding-microscopes-and-objectives/) for what lengths are what)

<figure><img src="../../.gitbook/assets/image (3) (1) (1) (1) (1) (1) (1).png" alt="" width="375"><figcaption><p>Camera and beamsplitter cube should be parallel.</p></figcaption></figure>

6. Screw on the C-mount SM1 adapter (SM1A9) to the camera and the 1" lens tube. Adjust the lens tube coupler to align the camera with the beamsplitter cube.

<figure><img src="../../.gitbook/assets/badtube.jpg" alt="" width="375"><figcaption><p>(Photo has 1 tube piece that shouldn't be there)</p></figcaption></figure>

7. Assemble the objective tube, which consists of a 0.3" lens tube (SM1L03), an SM1 to RMS adapter (SM1A3), and the microscope objective.

<figure><img src="../../.gitbook/assets/IMG20250317192059.jpg" alt="" width="375"><figcaption></figcaption></figure>

8. Use four #4-32 bolts to mount the beamsplitter cube to the top plate.

<figure><img src="../../.gitbook/assets/IMG20250311191211.jpg" alt="" width="375"><figcaption><p>You should have the optics attached to the top of this by this point</p></figcaption></figure>

9. Mount the top plate to either your optical table (if you have one) or the bottom plate. First, mount the posts to the bottom plate/table using four 1/4-20 bolts (if you're using a bottom plate) or four 1/4-20 grub screws (if you're using the table). Then, mount the top plate on top with four #8-32 bolts.

<figure><img src="../../.gitbook/assets/IMG20250428180057.jpg" alt="" width="375"><figcaption></figcaption></figure>

10. Temporarily loosen the top lens tube coupler in order to screw that tube into the projector, and finally tighten it again with the projector mounted.

<figure><img src="../../.gitbook/assets/20250321_115232.jpg" alt="" width="375"><figcaption></figcaption></figure>

11. Mount the main PCB with the power connector facing downward using the 3D printed PCB holder part. Reconnect the ribbon cables and LED power cables.
12. (Optional) You can 3D print this [PCB holder](https://cad.onshape.com/documents/a9705bf97b42bc9c6a92e208/w/4e2ca3e30047193608e7a9c8/e/e3030417e3a582f729c57309?renderMode=0\&uiState=6a444239ef38c7be8f6f5598) (thanks to Kashvi Verma and Italia Grant from Fall 2025 for this!) to help hold the PCB upright and keep things a bit more organized.

<figure><img src="../../.gitbook/assets/image (461).png" alt=""><figcaption></figcaption></figure>

### Motion Stage Assembly

Print all of the parts in the table below. Any PLA is fine. You may need to re-orient them so they print well. The stepper mounts will all need small supports in the motor flange. The X and Y axes need other supports as well.

All 3D printed parts for the motion stage can be found at the [XYZ Stage Onshape](https://cad.onshape.com/documents/063eef6ab069a37e76b64c19/w/360bb32d9a47955784cca530/e/fcf33b779ad27577b4ad1dc7?renderMode=0\&uiState=6a22427d9b3d595de11bce1b). Note that the Coupler part requires 2, one for the X axis and one for the Y axis.&#x20;

Parts are colored according to the following:

X AXIS: GREEN\
Y AXIS: BLUE\
Z AXIS: ORANGE\
COUPLERS: DARK GREY\
TOP/BOTTOM: LIGHT GREY

<figure><img src="../../.gitbook/assets/image (451).png" alt=""><figcaption></figcaption></figure>

Each part can be exported by right clicking it in the Instances list and selecting "export."

The video below describes the necessary components and the assembly process.

{% embed url="https://youtu.be/qT-rWwVk_cM" %}
Build guide
{% endembed %}

### Electrical Assembly

To test the proximity switches, connect them to a 12V supply. The sensor output can be left unconnected. The red LED on the back of the switches should illuminate when the front of the sensor is held within \~4mm of a metal part of the stage, which will also pull the sensor output to ground.

**Internals of the proximity switch:**

The proximity switch internally pulls up the signal line (BK) to 12V; BK is asserted LOW when the switch is active (<4mm).

<figure><img src="../../.gitbook/assets/image (453).png" alt=""><figcaption></figcaption></figure>

We use a Zener diode with Zener voltage = 5.1V to clamp the voltage going into the Arduino. A series resistor before the diode is not included since the internal resistance of the proximity switch already limits current.

<figure><img src="../../.gitbook/assets/image (459).png" alt=""><figcaption></figcaption></figure>

<mark style="color:$warning;">**It’s very important that you unplug the power before debugging the sensor circuit!**</mark>

<figure><img src="../../.gitbook/assets/image (455).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (456).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (457).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (460).png" alt=""><figcaption></figcaption></figure>

**Note**: the limit switch pin block on the CNC shield has two rows of pins. One of the rows is connected only to ground (the black row); do not connect your limit switches to that row.

### Software Setup

Instructions for installing and preparing the software are available on the [stepper software repository](https://github.com/hacker-fab/stepper).

The video below descries the basic electronics setup and how to install GRBL and integrate the two. Make sure to cross reference this with the stepper instructions above.

{% embed url="https://youtu.be/28XVv-WYPlE" %}

## Final Focusing

Once the software is set up, the final focus alignment can be done. These steps will align the two focus planes within the stepper (the projector and the camera) to ensure that images that appear in focus on the camera are actually in focus on the surface of the chip. This is done by adjusting the tube length between the projector housing and the beamsplitter cube (the length in the image below) such that both the projected image and the chip's surface are in focus in the camera view.

<figure><img src="../../.gitbook/assets/adjustment (1).jpg" alt="" width="375"><figcaption></figcaption></figure>

1. Load a chip with recognizable features into the stepper (a dirty chip is a good option).
2. Project a red-focus pattern with recognizable features that can be used to determine projector focus.
3. Adjust the Z position to focus onto the surface of the chip. This means that you should ensure that the features of the _chip_ (the dirt, most likely) is sharp, but the projected focus pattern most likely is not.
4. Loosen the clamp that connects the two parts of the DLP-beamsplitter tube so that they freely rotate. (the bottom circle in the image)
5. Loosen the locking ring on the adjustable lens tube. (the top circle in the image)
6. Screw the adjustable lens tube in/out while periodically checking to see if the projected image gets more or less in focus. You may need to push the optics into the coupler to ensure that the surfaces of the lens tubes are coplanar.
7. Once both images are in focus at the same time, tighten the locking ring on the adjustable lens tune as well as the coupler.

## Characterization

One of the core goals of Stepper V2.1 as compared to Stepper V2 is reduction of vibration through a more rigid frame. In order to test this, we characterized the amount of vibration that affects V2.1 using the following procedure:

1. Load a chip with recognizable features into the stepper and focus on it (in our testing, we just used a dirty chip)
2. Using the Basler Pylon Viewer software, collect a 10 second video clip of the surface of the chip. Pylon Viewer gives the video clip as a collection of `.tiff` frame images.\
   Here is an example of a single frame:

<figure><img src="../../.gitbook/assets/preview.png" alt="" width="375"><figcaption></figcaption></figure>

3. Use ImageMagick to threshold the frames: `magick '*.tiff' -channel G -threshold 75% -separate threshold.png` (this is a bulk operation on all frames).\
   Here is an example of a single frame:

<figure><img src="../../.gitbook/assets/threshold-0.png" alt="" width="375"><figcaption></figcaption></figure>

4. Using an image editor, find a specific feature on the chip to focus on, and crop all of the frames to it: `magick 'threshold*.png' -crop 300x300+1000+800 crop.png` \
   Here is an example of a single frame, plus a GIF of the frames playing in real time:

<figure><img src="../../.gitbook/assets/crop-0.png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/anim.gif" alt=""><figcaption><p>GIF of playing in real time</p></figcaption></figure>

5. Multiply the thresholded frames together to produce a footprint of where the feature moved throughout the duration: `magick 'crop*.png' -compose multiply -layers merge product.png`&#x20;

<figure><img src="../../.gitbook/assets/product.png" alt=""><figcaption></figcaption></figure>

6. Subtract a frame from the footprint to produce an image that shows how much the feature meandered from its starting point: `magick product.png crop-0.png -compose subtract -composite diff.png`&#x20;

<figure><img src="../../.gitbook/assets/diffsm.png" alt=""><figcaption></figcaption></figure>

In this final image, all of the white pixels are deviations from the starting image. This allows us to count a maximum deviation: in this image (which is from when we were testing the effect of someone resting their hands on the table) there is a maximum 3 pixel deviation.

From this, we can calculate the maximum peak-to-peak vibration amplitude: each pixel on the camera sensor is 5.86 μm square, which after the 10x reduction of our objective, means each pixel in this image is 586 nm on the chip. 3 pixels then is 3 \* 586nm = 1.8 µm.

We also ran another test of "ideal" conditions, in which there was no external vibration added to the stepper table, which had 2px deviation. This leads to the result being 1.2 µm.

## Additional Projector Option 1: $1300

As of October 2025, the [DLPDLCR471TPEVM projector](https://www.mouser.com/ProductDetail/Texas-Instruments/DLPDLCR471TPEVM?qs=DRkmTr78QAQsT6dpWa8zKg%3D%3D) is out of stock. However, Hunter G., an ECE Ph.D. student at Carnegie Mellon, figured out a way to make another project work. The model he used was the  [DLP4710EVM-LC](https://www.ti.com/tool/DLP4710EVM-LC).

<figure><img src="../../.gitbook/assets/image (349).png" alt=""><figcaption></figcaption></figure>

Here is how he adapted it to work for the Stepper V2.1 build:

"The GUI and control seems to be identical to the recommended one, but the optics assembly was slightly different. The 3D printed adapter for the lens tube does not work with this model, so instead I machined an adapter out of 3/8" aluminum and tapped holes to screw in the lens tube adapter. I can send pictures and design files if you'd like.

Also, the LED PCB wiring is a bit different on this one, though the boards you gave me do actually fit pretty well. I've been using it with the stock blue LEDs because I was having trouble getting it to turn on the UV LEDs. I think the forward voltage might not be high enough on this model or something, but I need to debug that. I was reading that some people had success with the standard blue ones though, so I will give them a try before tearing the projector down again.\
\
Here's a photo of my adapter and the [design file](https://drive.google.com/file/d/1x0eyXnsHauO3VgQ_aGPtDOXjgl_YrOAo/view).\
![](<../../.gitbook/assets/image (350).png>)![](<../../.gitbook/assets/image (351).png>)

The first photo is the original plastic part that came with the projector. It had a lens tube that stuck out a few inches from the plastic plate that you see. I cut that tube off with a saw and attempted to modify the plastic plate to fit the Thorlabs mount. However, the plastic was too soft to reliably tap threads. So, I measured it with calipers and made the attached DXF file.

I used a water jet to cut out the part, then marked the screw holes through the Thorlabs mount with a punch, drilled them out, and then tapped them. For the holes which connect it to the projector, I just drilled them out and used a M2 bolt + nut to fasten it to the projector. I also had to gouge out some areas on the adapter with a dremel because there are indexing nubs on the metal facet to align the original part with the optical path. I expected there to be some alignment issues but the camera and projector seem to align perfectly with this adapter.

<figure><img src="../../.gitbook/assets/image (352).png" alt=""><figcaption></figcaption></figure>

Here's what it looks like assembled on the beamsplitter."

Thank you Hunter for sharing your alternative build with the Hacker Fab!

## Additional Projector Option 2: $250

The Elegoo Mars 4 DLP resin printer contains a small 0.3" DMD projector. The entire optics stack from LithoStepper V2.1 can be used alongside this projector, as shown in the image below.\
\
However, there are 2 major tradeoffs.

1. There is only a 405 nm LED. Inspection requires another light source, which can be done by replacing the LED PCB on the projector.
2. The default projector controller PCB uses a resin printer file type (.goo) for projection. Thus, instead of sending images via HDMI, the user will have to slice a 1-layer pattern to generate the appropriate .goo file. Elegoo provides the slicer software Voxeldance Tango for free along the projector. This .goo file limitation means the current GUI script is not compatible, so patterning becomes a manual process.

These two major tradeoffs can be resolved by 1) developing a new optics stack to include an inspection light source and 2) designing a custom projector controller board. The OpenMLA community has developed the projector controller board here: [https://github.com/openMLA/elegoo-mars-4-dlp-controller](https://github.com/openMLA/elegoo-mars-4-dlp-controller). However, the modified optics stack is currently still a work in progress.\
\
Surprisingly, the .goo file brings a couple benefits. 1) 254 bit greyscale adjustment 2) custom LED output power via PWM. This is useful for future projectors on computational lithography technques such as ILT.

Additionally, one minor tradeoff:

1. The 0.3" DMD is smaller, so the total patterning size is smaller.

An adaptor plate is required to connect to this projector. It can be 3D printed (recommend 0.12mm setting). The file can be found at this OnShape: [https://cad.onshape.com/documents/7ab8f6e115c70871535a96bd/w/eccf77af3a3bcacf844e8bb4/e/cfb6b4cd12b22dd36105984d?renderMode=0\&uiState=6920f21464436a45cffaf156](https://cad.onshape.com/documents/7ab8f6e115c70871535a96bd/w/eccf77af3a3bcacf844e8bb4/e/cfb6b4cd12b22dd36105984d?renderMode=0\&uiState=6920f21464436a45cffaf156)

<figure><img src="../../.gitbook/assets/image (355).png" alt=""><figcaption></figcaption></figure>

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

<figure><img src="../../.gitbook/assets/unknown (13).jpeg" alt=""><figcaption><p>GRBL configurations are seen here (u may need to zoom in)</p></figcaption></figure>

Now that we had the interface setup, the next step was to look into configurations. The first issue we noticed when we enabled homing, was the fact that the GRBL stages per axis were “homing” in the wrong direction: AWAY FROM the sensors instead of TOWARDS the sensors. This is wrong because only by moving towards the sensors, would the red light eventually trigger a ‘limit’ breach to the GRBL runtime (because sensor can only sense from one direction, not both)

**Sidenote:** to enable homing, ensure that $22=1 in the GRBL configurations. ALSO, when this is enabled, the GRBL config file (in firmware) automatically sets off an alarm since it doesn’t know its current location state. Solve this by (1) sending a “$X” at startup, which unlocks the alarm, or (2) changing the firmware config file to disable this alarm-on-startup mechanism and reboot the firmware to the Arduino

### GRBL Configurations

**Configure** [**GRBL**](https://www.diyengineers.com/2023/01/05/grbl-with-arduino-cnc-shield-complete-guide/) **configurations**

Configurations will be different depending on how your sensors, motor drivers, and stage controllers are set up. For us, playing around with the homing direction settings ($23), the step direction invert ($3), and the homing switch pull-off distance ($27) helped us configure an optimal way to home our stages.

<figure><img src="../../.gitbook/assets/image (448).png" alt=""><figcaption><p>In our setup, the limit switches trigger when z-stage does down, x-stage moves right, and y-stage moves forward. $23 and $3 are configured based on setting the bits for each axis. Bits “ABC” → A = x-axis, B = y-axis, C = z-axis. Setting a bit means inverting the default direction.</p></figcaption></figure>

### Working vs Machine Position

Depending on how your configurations for status report are ($10), GRBL may be sending you machine (MPos) or working (WPos) positions. The MPos is set at home, and will never change throughout the session. On the other hand, WPos can be set many times in a single session. Our stepper code seems to be using WPos, so we’ll be using that as our default.

<figure><img src="../../.gitbook/assets/unknown (14).jpeg" alt="" width="375"><figcaption></figcaption></figure>

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

## Pesky Issues

### Undesired Stage Movement “Backlash” and “Clanking”

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

<figure><img src="../../.gitbook/assets/unknown (177).png" alt="" width="375"><figcaption><p>Our expected configurations</p></figcaption></figure>

#### Motor Driver Current

We found a website that dug into the [electronics ](https://blog.protoneer.co.nz/arduino-cnc-shield-v3-00-assembly-guide/)assembly of the stage controller and found that tuning the potentiometer of each driver was essential for driving enough current. According to this forum: [here](https://forum.arduino.cc/t/drivers-on-cnc-shield-heating-up-fast/1182255), not providing enough current can make it overheat, and providing too much can also cause issues such as failure to move the stage successfully.

<figure><img src="../../.gitbook/assets/unknown (178).png" alt="" width="364"><figcaption><p>Potentiometer</p></figcaption></figure>

Steps: [Vref calculator](https://www.circuitist.com/how-to-set-driver-current-a4988-drv8825-tmc2208-tmc2209/) to figure out what we should set our current limit to be. Or you could tune it. We recommend adjusting it with a screwdriver and making very small rotations, then leaving it as is for a while, checking back to make sure nothing is overheating.&#x20;

We set ours to around 0.9-1.1 V range. You can measure this by using a multimeter.&#x20;

### Out-Of-Frame Projection

{% columns %}
{% column %}
![](<../../.gitbook/assets/unknown (179).png>)

Out of frame projection
{% endcolumn %}

{% column %}
![](<../../.gitbook/assets/unknown (180).png>)

Adjusted projection
{% endcolumn %}
{% endcolumns %}

The fix is highlighted below. It’s a simple adjustment that often works. We also found replugging the camera USB connection to work as well.

<figure><img src="../../.gitbook/assets/image (449).png" alt="" width="341"><figcaption></figcaption></figure>

### Fixing Projection Rotation

[CAD Link](https://github.com/hacker-fab/stepper_attachments/blob/main/cad/projector_stabalizer_mount.step)

The projector is easy to rotate. So the only way to prevent it from rotating (which will rotate the projection that we capture in the software GUI frame), is to create a stabilizer that we can tape or drill into the acrylic that mounts the projector (or tape it).

<figure><img src="../../.gitbook/assets/unknown (20).jpeg" alt="" width="375"><figcaption><p>The new stabilizer wraps around the heat sink in the back</p></figcaption></figure>

## Assessment and Future Work

This section is a reflection by me, Sky.

The core design goal of V2.1 was pretty much a mixture of "make it less susceptible to vibration" and "make it less janky". I think I mostly succeeded in this department: although I lack proper numbers on V2's vibration issues, I am confident in asserting that V2.1 fixes them (mainly because you could visually see the vibration occurring on V2's camera, and you can't anymore on V2.1), and now that we have a rigidly mounted frame, the slop from the projector moving around on the table is gone.

However, there's still definitely some improvements to be made. For one, I think that the projector should probably be more directly supported - I didn't end up adding a direct support for the projector this semester because it didn't appear to be necessary, but I think this could further reduce vibration issues. This shouldn't be particularly hard because the disassembled projector has very convenient standoff mounting points directly on it.

Another improvement to make is to fix up the centering of the image on the camera: currently, the hole on the adapter plate is perfectly centered to the part's center, but it appears that the projector's actual image is slightly off to one side. This wasn't really an issue when the camera had a larger sensor, but now that it's smaller it very slightly cuts off part of the image. This only require a small change to the adapter plate to correct.

Finally, one of the biggest issues that remains with the stepper is that the whole projector situation is not ideal: specifically, the fact that all of our existing litho setups have used projectors that hook up to a computer monitor output leads to a bunch of undesirable effects from the OS taking over (like unexpected popups showing up and getting imaged onto the chip). Another issue with the projector is that it's really not ideal to UV-mod a color projector: the projector is designed to _always_ be emitting all 3 color channels, which means that we're outputting a small but noticeable amount of UV even when not actively imaging. Also- the DLPDLCR471TPEVM projector used on V2 and V2.1 is currently (May 2025) out of stock everywhere in the world, which is very bad for reproducibility. One thing we could do to solve all of these issues is to create a custom projector design which gives us more control over UV emissions and the image pipeline. I have written up an essay on the design process and ideation behind a custom projector [here](https://docs.google.com/document/d/1_BkaYH9mCQQRQLMjm69QgOG-tz-MBY6FusZlHGJ0aoE/edit).
