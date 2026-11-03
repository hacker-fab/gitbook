---
icon: arrow-up-right-dots
---

# Lithography Stepper V2.1+ Build

Stepper V2.1 is an incremental improvement upon the existing [Stepper V2](../lithography-stepper-v2-build-work-in-progress.md) with mechanical improvements. As such, a lot of the content here will be the same as V2! The changes from V2 (and reasoning):

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

**NOTE (Oct. 2026): A new nanopositioning system with closed-loop controls has been recently developed and integrated into the stepper, and is recommended over the open-loop micropositioning system described below. You can find more information including the BOM and build instructions** [**here**](../../nanopositioner/)**!**

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

{% file src="../../../.gitbook/assets/v2.1-thorlabs.csv" %}

## Design Files

Currently the CAD for Stepper 2.1 is all in FreeCAD, with the files stored in [this repo](https://github.com/hacker-fab/stepper_cad), but will be ported to Onshape soon for consistency.

<figure><img src="../../../.gitbook/assets/image (157).png" alt=""><figcaption><p>Stepper V2.1</p></figcaption></figure>

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

This step is the same as for V2, see the instructions [here](../lithography-stepper-v2-build-work-in-progress.md#solder-the-uv-led-pcb).

### Projector Modification

These steps are heavily based on the steps done for V2, but some have changed.

<figure><img src="../../../.gitbook/assets/image (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1).png" alt="" width="355"><figcaption><p>it works!</p></figcaption></figure>

1. Test the projector before we completely take it apart :)

<figure><img src="../../../.gitbook/assets/IMG20250325152348.jpg" alt="" width="375"><figcaption><p>LED current settings in the software</p></figcaption></figure>

2. Plug in the projector over USB and use the [LightCrafter GUI software](https://www.ti.com/tool/download/DLPDLC-GUI) to set the LED current drive level to 150. Note 150 is NOT the output current, that can be calculated like so: `OutputCurrent = ((DriveLevel + 1)/1024)*((0.15/0.036))`  - [Table 19-91](https://www.ti.com/lit/ug/dlpu110b/dlpu110b.pdf) . (The projector defaults to 1023 ⇒ 4A, which is its maximum output - our UV LEDs are not able to handle that much current, so reducing the current makes sure they don't burn out!)

<figure><img src="../../../.gitbook/assets/image (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1).png" alt="" width="355"><figcaption></figcaption></figure>

3. Unplug all the connectors and remove the top PCB by unscrewing the standoffs.

<figure><img src="../../../.gitbook/assets/image (32) (1).png" alt="" width="178"><figcaption></figcaption></figure>

4. Remove the side PCB.

<figure><img src="../../../.gitbook/assets/image (34) (1).png" alt="" width="375"><figcaption></figcaption></figure>

5. Unscrew and remove the shroud by sliding it away from the rest of the optics.

<figure><img src="../../../.gitbook/assets/image (5) (1).png" alt="" width="375"><figcaption></figcaption></figure>

6. _**NEW FOR 2.1:**_ Remove the bolts and standoffs that hold the main projector assembly to the bottom plate. This should free the bottom assembly.

<figure><img src="../../../.gitbook/assets/image (35) (1).png" alt="" width="355"><figcaption></figcaption></figure>

7. Unscrew and remove the heatsink for the front-most LED, which should be the blue one.

![](<../../../.gitbook/assets/image (37) (1).png>)![](<../../../.gitbook/assets/image (38) (1).png>)

8. Disconnect the LED PCB from the cable. Heat it slightly on a hot plate or with a hot air gun to soften the adhesive and remove the black plastic housing.
9. Glue the black plastic piece to the DIY UV LED PCB, connect it to the blue cable, and reattach it to the optics housing. Reattaching the black piece is recommended as it acts as a spacer between the UV LEDs and the collimating lens; it is easy to damage the LEDs without such a piece in the middle. Put the heatsink back as well.

<figure><img src="../../../.gitbook/assets/image (41) (1).png" alt="" width="355"><figcaption></figcaption></figure>

10. Unscrew the projection lens. That one makes things bigger, but we're trying to make things smaller. It's got to go.

<figure><img src="../../../.gitbook/assets/image (42) (1).png" alt="" width="375"><figcaption></figcaption></figure>

11. Screw on the adapter plate with four countersunk M2 screws.

<figure><img src="../../../.gitbook/assets/image (43) (1).png" alt="" width="355"><figcaption></figcaption></figure>

12. Use four M2.5 screws to screw on the Thorlabs SM1A53 adapter flange
13. _**NEW FOR 2.1:**_ Do not reassemble the projector case - we will use it as-is.

### Optics + Mechanics Assembly

These steps are heavily based on the same steps for V2, but slightly modified.

<figure><img src="../../../.gitbook/assets/image (44) (1).png" alt="" width="375"><figcaption></figcaption></figure>

1. Start with the beamsplitter cube. Unscrew the set screws, remove the holder, and clip in the beamsplitter. The text ("Thorlabs") should be facing the microscope objective and camera when the holder is reinserted. Keep track of this during assembly and fix it later if necessary.

<figure><img src="../../../.gitbook/assets/image (46) (1).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (45) (1).png" alt="" width="375"><figcaption></figcaption></figure>

2. Assemble the DLP tube. From left to right, the parts in the first picture are 0.3" lens tube (SM1L03), 0.5" lens tube coupler (SM1CPL05), 0.5" adjustable lens tube (SM1V05), and 0.5" lens tube (SM1L05). You may want to remove any internal lens rings. The adjustable lens tube allows axial length adjustment and the coupler allows rotation about the optical axis.

<figure><img src="../../../.gitbook/assets/image (48) (1).png" alt="" width="375"><figcaption></figcaption></figure>

3. Screw the DLP tube into the beamsplitter cube. The correct orientation is shown above, and the arrow points to the side of the beamsplitter with the text (and optical coating).
4. Assemble the camera tube, which similarly constructed. The parts are 1" lens tube (SM1L10), 1" lens tube coupler (SM1CPL10), 1" adjustable lens tube (SM1V10), another 1" lens tube (SM1L10), and C-mount SM1 adapter (SM1A9) (last two shown below).

<figure><img src="../../../.gitbook/assets/badcalipers.jpg" alt="" width="375"><figcaption></figcaption></figure>

5. Make sure this camera tube is 86.8 mm long. We calculate this number by subtracting the various component lengths from the standard microscope objective back focal length of 150mm: 150 - 17.5 (c-mount camera) - 7.6 (objective tube) - 38.1 (beamsplitter cube) = 86.8mm\
   \
   **(NOTE:** Our objective is rated for a 160mm optical tube length, but this is NOT the same as the back focal length, which is 150mm... this is a very confusing specification, see [this page](https://www.edmundoptics.com/knowledge-center/application-notes/microscopy/understanding-microscopes-and-objectives/) for what lengths are what)

<figure><img src="../../../.gitbook/assets/image (3) (1) (1) (1) (1) (1) (1).png" alt="" width="375"><figcaption><p>Camera and beamsplitter cube should be parallel.</p></figcaption></figure>

6. Screw on the C-mount SM1 adapter (SM1A9) to the camera and the 1" lens tube. Adjust the lens tube coupler to align the camera with the beamsplitter cube.

<figure><img src="../../../.gitbook/assets/badtube.jpg" alt="" width="375"><figcaption><p>(Photo has 1 tube piece that shouldn't be there)</p></figcaption></figure>

7. Assemble the objective tube, which consists of a 0.3" lens tube (SM1L03), an SM1 to RMS adapter (SM1A3), and the microscope objective.

<figure><img src="../../../.gitbook/assets/IMG20250317192059.jpg" alt="" width="375"><figcaption></figcaption></figure>

8. Use four #4-32 bolts to mount the beamsplitter cube to the top plate.

<figure><img src="../../../.gitbook/assets/IMG20250311191211.jpg" alt="" width="375"><figcaption><p>You should have the optics attached to the top of this by this point</p></figcaption></figure>

9. Mount the top plate to either your optical table (if you have one) or the bottom plate. First, mount the posts to the bottom plate/table using four 1/4-20 bolts (if you're using a bottom plate) or four 1/4-20 grub screws (if you're using the table). Then, mount the top plate on top with four #8-32 bolts.

<figure><img src="../../../.gitbook/assets/IMG20250428180057.jpg" alt="" width="375"><figcaption></figcaption></figure>

10. Temporarily loosen the top lens tube coupler in order to screw that tube into the projector, and finally tighten it again with the projector mounted.

<figure><img src="../../../.gitbook/assets/20250321_115232.jpg" alt="" width="375"><figcaption></figcaption></figure>

11. Mount the main PCB with the power connector facing downward using the 3D printed PCB holder part. Reconnect the ribbon cables and LED power cables.
12. (Optional) You can 3D print this [PCB holder](https://cad.onshape.com/documents/a9705bf97b42bc9c6a92e208/w/4e2ca3e30047193608e7a9c8/e/e3030417e3a582f729c57309?renderMode=0\&uiState=6a444239ef38c7be8f6f5598) (thanks to Kashvi Verma and Italia Grant from Fall 2025 for this!) to help hold the PCB upright and keep things a bit more organized. Also note that in the image below, the optical posts and stage are mounted into a piece of acrylic, which has a 1" grid of .25" holes cut out. This makes it easy to transport the stepper and secure it into an optical table, if available.

<figure><img src="../../../.gitbook/assets/image (461).png" alt=""><figcaption></figcaption></figure>

### Motion Stage Assembly

Print all of the parts in the table below. Any PLA is fine. You may need to re-orient them so they print well. The stepper mounts will all need small supports in the motor flange. The X and Y axes need other supports as well.

All 3D printed parts for the motion stage can be found at the [XYZ Stage Onshape](https://cad.onshape.com/documents/063eef6ab069a37e76b64c19/w/360bb32d9a47955784cca530/e/fcf33b779ad27577b4ad1dc7?renderMode=0\&uiState=6a22427d9b3d595de11bce1b). Note that the Coupler part requires 2, one for the X axis and one for the Y axis.&#x20;

Parts are colored according to the following:

X AXIS: GREEN\
Y AXIS: BLUE\
Z AXIS: ORANGE\
COUPLERS: DARK GREY\
TOP/BOTTOM: LIGHT GREY

<figure><img src="../../../.gitbook/assets/image (451).png" alt=""><figcaption></figcaption></figure>

Each part can be exported by right clicking it in the Instances list and selecting "export."

The video below describes the necessary components and the assembly process.

{% embed url="https://youtu.be/qT-rWwVk_cM" %}
Build guide
{% endembed %}

### Electrical Assembly

To test the proximity switches, connect them to a 12V supply. The sensor output can be left unconnected. The red LED on the back of the switches should illuminate when the front of the sensor is held within \~4mm of a metal part of the stage, which will also pull the sensor output to ground.

**Internals of the proximity switch:**

The proximity switch internally pulls up the signal line (BK) to 12V; BK is asserted LOW when the switch is active (<4mm).

<figure><img src="../../../.gitbook/assets/image (453).png" alt=""><figcaption></figcaption></figure>

We use a Zener diode with Zener voltage = 5.1V to clamp the voltage going into the Arduino. A series resistor before the diode is not included since the internal resistance of the proximity switch already limits current.

<figure><img src="../../../.gitbook/assets/image (459).png" alt=""><figcaption></figcaption></figure>

<mark style="color:$warning;">**It’s very important that you unplug the power before debugging the sensor circuit!**</mark>

<figure><img src="../../../.gitbook/assets/image (455).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (456).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (457).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (460).png" alt=""><figcaption></figcaption></figure>

**Note**: the limit switch pin block on the CNC shield has two rows of pins. One of the rows is connected only to ground (the black row); do not connect your limit switches to that row.

### Software Setup

Instructions for installing and preparing the software are available on the [stepper software repository](https://github.com/hacker-fab/stepper).

The video below descries the basic electronics setup and how to install GRBL and integrate the two. Make sure to cross reference this with the stepper instructions above.

{% embed url="https://youtu.be/28XVv-WYPlE" %}

## Final Focusing

Once the software is set up, the final focus alignment can be done. These steps will align the two focus planes within the stepper (the projector and the camera) to ensure that images that appear in focus on the camera are actually in focus on the surface of the chip. This is done by adjusting the tube length between the projector housing and the beamsplitter cube (the length in the image below) such that both the projected image and the chip's surface are in focus in the camera view.

<figure><img src="../../../.gitbook/assets/adjustment (1).jpg" alt="" width="375"><figcaption></figcaption></figure>

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

<figure><img src="../../../.gitbook/assets/preview.png" alt="" width="375"><figcaption></figcaption></figure>

3. Use ImageMagick to threshold the frames: `magick '*.tiff' -channel G -threshold 75% -separate threshold.png` (this is a bulk operation on all frames).\
   Here is an example of a single frame:

<figure><img src="../../../.gitbook/assets/threshold-0.png" alt="" width="375"><figcaption></figcaption></figure>

4. Using an image editor, find a specific feature on the chip to focus on, and crop all of the frames to it: `magick 'threshold*.png' -crop 300x300+1000+800 crop.png` \
   Here is an example of a single frame, plus a GIF of the frames playing in real time:

<figure><img src="../../../.gitbook/assets/crop-0.png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/anim.gif" alt=""><figcaption><p>GIF of playing in real time</p></figcaption></figure>

5. Multiply the thresholded frames together to produce a footprint of where the feature moved throughout the duration: `magick 'crop*.png' -compose multiply -layers merge product.png`&#x20;

<figure><img src="../../../.gitbook/assets/product.png" alt=""><figcaption></figcaption></figure>

6. Subtract a frame from the footprint to produce an image that shows how much the feature meandered from its starting point: `magick product.png crop-0.png -compose subtract -composite diff.png`&#x20;

<figure><img src="../../../.gitbook/assets/diffsm.png" alt=""><figcaption></figcaption></figure>

In this final image, all of the white pixels are deviations from the starting image. This allows us to count a maximum deviation: in this image (which is from when we were testing the effect of someone resting their hands on the table) there is a maximum 3 pixel deviation.

From this, we can calculate the maximum peak-to-peak vibration amplitude: each pixel on the camera sensor is 5.86 μm square, which after the 10x reduction of our objective, means each pixel in this image is 586 nm on the chip. 3 pixels then is 3 \* 586nm = 1.8 µm.

We also ran another test of "ideal" conditions, in which there was no external vibration added to the stepper table, which had 2px deviation. This leads to the result being 1.2 µm.

**Please refer to the subpages of this page for more information on various features, options, and issues for the stepper design!**
