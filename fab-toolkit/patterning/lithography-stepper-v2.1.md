# Lithography Stepper V2.1

**This page is a work in progress!**

"Stepper V2.1" is planned to be an incremental improvement upon the existing [Stepper V2](lithography-stepper-v2-build-work-in-progress.md) to allow for mechanical improvements. As such, a lot of the content here will be the same as V2! The changes from V2 (and reasoning):

* Rotate the optics so that the objective points downward instead of sideways
  * This allows using the much-improved X and Y axes of the stage, instead of X and Z, which permits higher movement resolution and repeatability
  * This also means that we no longer need the vacuum chuck, which means reduced vibration (and less complexity)
  * Unlike Stepper V1, which was cantilevered, V2.1 is supported on all sides by rigid optical mounting posts, which should avoid V1's vibration issues
* Mount the optics and projector much more rigidly, using a plate offset by posts to secure the optics directly, rather than relying on the projector's case and rubber feet
  * This further reduces relative vibrations between the optics and stage
  * This also makes the DLP DMD plane and the chip plane more parallel == more consistent focus both across a single exposure and between exposures
  * This also decouples the structure of the stepper from the mechanical design of the projector (as Stepper V2 relies on the actual shape of the projector to work) which will allow us to change to a different projector in the future
*   Switch from a FLIR Blackfly camera to a Basler Ace camera, and reduce the sensor size from 1" to 1/1.2"

    * Not only is the Basler less expensive for an equivalent sensor, it also has a much, much nicer software suite that is distributable (a particular pain point with FLIR's)
    * Smaller sensor size means we're paying for less unused sensor (since any sensor area outside of the size of the projector's DMD is not used)



As a whole, these changes should improve the results we get out of Stepper V2.1 compared to Stepper V2, and the mechanical changes will set the stage for further patterning capabilities such as reliable automatic alignment. Furthermore, the decoupling of the projector from the rest of the design will in the future allow us to use different projector for further improvements.

## Bill of Materials

Total cost as currently specified: $2,965.30

<table><thead><tr><th width="337">Name</th><th width="64">Quantity</th><th width="128">Total</th><th>Link</th></tr></thead><tbody><tr><td>TI DLP Evaluation Module</td><td>1</td><td>$1198.80</td><td><a href="https://www.mouser.com/ProductDetail/Texas-Instruments/DLPDLCR471TPEVM">Mouser</a> (currently on backorder)</td></tr><tr><td>Assorted optics and optomechanics</td><td>1</td><td>$772.89</td><td><a href="https://www.thorlabs.com/uploadcart/">Thorlabs</a>*</td></tr><tr><td>10X Din Plan Objective</td><td>1</td><td>$42</td><td><a href="https://www.amazon.com/dp/B007LBE9JO">Amazon</a></td></tr><tr><td>Basler ace U acA1920-40uc</td><td>1</td><td>$609</td><td><a href="https://www.baslerweb.com/en-us/shop/aca1920-40uc/">Basler</a></td></tr><tr><td>USB Type A to Micro B locking cable</td><td>1</td><td>$3.99</td><td><a href="https://www.amazon.com/dp/B0CWN9YLSB">Amazon</a></td></tr><tr><td>19V 4.74A Projector Power Supply</td><td>1</td><td>$17.99</td><td><a href="https://www.amazon.com/Nobsound-Adapter-Universal-Charger-100-240V/dp/B074J81XRB/ref=sr_1_9?keywords=19v+power+supply&#x26;qid=1685981984&#x26;sr=8-9">Amazon</a></td></tr><tr><td>XYZ Stage 40mm</td><td>1</td><td>$125</td><td><a href="https://www.amazon.com/Pricision-40x40mm-Trimming-Bearing-Platform/dp/B07D7N9GT6/ref=sr_1_4?crid=32WSW494CE1YE&#x26;keywords=30mm+xyz+stage&#x26;qid=1706559232&#x26;sprefix=30mm+xyz+stage%2Caps%2C80&#x26;sr=8-4&#x26;ufe=app_do%3Aamzn1.fos.f5122f16-c3e8-4386-bf32-63e904010ad0">Amazon</a></td></tr><tr><td>NEMA 28 Steppers</td><td>3</td><td>$53.97</td><td><a href="https://www.amazon.com/gp/product/B07PNV7RBW/ref=ox_sc_act_title_1?smid=A3HCJ70Z0RHBT6&#x26;th=1">Amazon</a></td></tr><tr><td>Arduino Uno (Elegoo)</td><td>1</td><td>$16.99</td><td><a href="https://www.amazon.com/ELEGOO-Board-ATmega328P-ATMEGA16U2-Compliant/dp/B01EWOE0UU/ref=sr_1_6?crid=25HW74RSV1WUQ&#x26;keywords=arduino&#x26;qid=1706561234&#x26;sprefix=arduino%2Caps%2C115&#x26;sr=8-6">Amazon</a></td></tr><tr><td>CNC Shield for Arduino V3.0</td><td>1</td><td>$10.99</td><td><a href="https://www.amazon.com/Organizer-Expansion-Stepper-Heatsink-Arduino/dp/B07TT3C3HB/ref=sr_1_1?crid=3U63T1GH2IYGH&#x26;keywords=arduino+stepper+shield&#x26;qid=1706561169&#x26;sprefix=arduino+stepper+shield%2Caps%2C104&#x26;sr=8-1">Amazon</a></td></tr><tr><td>Stepper Motor Drivers</td><td>1</td><td>$22.99</td><td><a href="https://www.amazon.com/BIGTREETECH-Direct-TMC2208-TMC2209-TMC5160/dp/B07ZPYKL46?th=1">Amazon</a></td></tr><tr><td>Shield Power Supply 12V</td><td>2</td><td>$23.98</td><td><a href="https://www.amazon.com/ALITOVE-Adapter-Converter-100-240V-5-5x2-1mm/dp/B01GEA8PQA/ref=sr_1_4?keywords=12v+power+supply&#x26;qid=1706561572&#x26;sr=8-4">Amazon</a></td></tr><tr><td>M2.5 Screw Assortment</td><td>1</td><td>$16.99</td><td><a href="https://www.amazon.com/VIGRUE-Button-Washers-Assortment-Storage/dp/B08VHVB4H5/ref=sr_1_3?crid=24MVS2UJSXWC&#x26;keywords=m2.5&#x26;qid=1695828225&#x26;sprefix=m2.5%2Caps%2C112&#x26;sr=8-3">Amazon</a></td></tr><tr><td>410nm Lumiled LED</td><td>4</td><td>$27.96</td><td><a href="https://www.digikey.com/en/products/detail/lumileds/L1F3-U400200012000/7389568">Digikey</a></td></tr><tr><td>Pico-spox 10pos Vertical Connector</td><td>2</td><td>$1.86</td><td><a href="https://www.digikey.com/en/products/detail/molex/0874371043/717647">Digikey</a></td></tr><tr><td>Proximity sensors (4 pack)</td><td>1</td><td>$19.90</td><td><a href="https://www.amazon.com/Inductive-Proximity-Sensors-Anti-Interference-Unshielded/dp/B0DCMWDJ85/ref=asc_df_B0DCMWDJ85?mcid=4ec07ef204db32868c54b1f1f4eca62c&#x26;tag=hyprod-20&#x26;linkCode=df0&#x26;hvadid=693071814664&#x26;hvpos=&#x26;hvnetw=g&#x26;hvrand=5581199184906295329&#x26;hvpone=&#x26;hvptwo=&#x26;hvqmt=&#x26;hvdev=c&#x26;hvdvcmdl=&#x26;hvlocint=&#x26;hvlocphy=9005925&#x26;hvtargid=pla-2365125809402&#x26;th=1">Amazon</a></td></tr></tbody></table>

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

### Optics Assembly

TODO: Add when ready

### Motion Stage Assembly

Print all of the parts in the table below. Any PLA is fine. You may need to re-orient them so they print well. The stepper mounts will all need small supports in the motor flange. The X and Y axes need other supports as well.

<table><thead><tr><th width="315">File Name w/ link</th><th width="362">Description</th><th width="224">QTY</th></tr></thead><tbody><tr><td><a href="https://cad.onshape.com/documents/0649d732771a63bcb8e6be1d/w/408d85c155072764ebeaefad/e/4f403f0e1f7a684bfcd56e85?renderMode=0&#x26;uiState=67a53479587ffd763470073c">Motor and Sensor Mounts</a><br>(Folder "XYZ Platform")<br>"Base"<br>"X Motor Mount"<br>"Y Motor Mount"<br>"Z Motor Mount"<br>(Optional, for sensors:)<br>"Y Sensor Mount"<br>"Z Sensor Mount"</td><td>Three parts that connect stepper motors to the micropositioning stage x , y and z axes.</td><td>1</td></tr><tr><td><a href="https://cad.onshape.com/documents/0649d732771a63bcb8e6be1d/w/408d85c155072764ebeaefad/e/4f403f0e1f7a684bfcd56e85?renderMode=0&#x26;uiState=67a53479587ffd763470073c">Motor and Sensor Mounts</a><br>(Folder "XYZ Platform")<br>"Fixed Coupler"</td><td>Press fits onto micrometer and uses a grub screw to rigidly attach to motor D-shaft</td><td>2</td></tr><tr><td><a href="https://cad.onshape.com/documents/063eef6ab069a37e76b64c19/w/360bb32d9a47955784cca530/e/4050acd5b58cb3066cb89ced?renderMode=0&#x26;uiState=679ffdb2182b770fef09b329">Z Coupler</a><br>"Z Coupler"</td><td>Press fits onto micrometer and meshes with part press fit onto motor D-shaft</td><td>1</td></tr><tr><td>TODO: Upright chuck for the stage</td><td>Provides a platform for the chip</td><td>1</td></tr></tbody></table>

A detailed 3D model of the fully-assembled stage is available in the [CAD](https://cad.onshape.com/documents/0649d732771a63bcb8e6be1d/w/408d85c155072764ebeaefad/e/301b112b8d29652692865df3) under the "XYZ Platform > Fully Assembled" document.

The video below describes the necessary components and the assembly process.

{% embed url="https://youtu.be/qT-rWwVk_cM" %}
Build guide
{% endembed %}

### Electrical Assembly

To test the proximity switches, connect them to a 12V supply. The sensor output can be left unconnected. The red LED on the back of the switches should illuminate when the front of the sensor is held within \~4mm of a metal part of the stage, which will also pull the sensor output to ground.

**Note**: the limit switch pin block on the CNC shield has two rows of pins. One of the rows is connected only to ground; do not connect your limit switches to that row.

The sensors should be connected through a pull-up resistor to the Arduino's 5V supply. 12V should be supplied externally.

<figure><img src="../../.gitbook/assets/image (12).png" alt=""><figcaption><p>Wiring diagram for the sensors</p></figcaption></figure>

TODO: Add picture of CNC shield!

### Software Setup

Instructions for installing and preparing the software are available on the [stepper software repository](https://github.com/hacker-fab/stepper).

The video below descries the basic electronics setup and how to install GRBL and integrate the two. Make sure to cross reference this with the stepper instructions above.

{% embed url="https://youtu.be/28XVv-WYPlE" %}





