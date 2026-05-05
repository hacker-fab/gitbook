---
description: 2D Crystal Stacking Bot Submodule
---

# Microscope Camera Module

{% hint style="info" %}
#### Assembly:  This Microscope Camera Module is heavily adopted from the  Openflexure Microscope project with necessary adjustment to the 2D Crystal Stacking Bot. When following the Openflexure assembly steps, please pay attention to the changes mentioned in this document.
{% endhint %}

The Microscope Camera Module provides a video feed to the operator for the stacking process. The Camera module is adapted from and uses the assembly instructions here by the [openflexure](https://build.openflexure.org/openflexure-delta-stage/v1.2.3/pages/reflection_illumination.html) microscope project. However, there are a few adjustments for improvements from the original openflexure project.

### Assembly for Microscope Camera

**Bill of Parts**

Camera holder module 3D printed STL Parts

{% hint style="info" %}
The camera holder parts are completely redesign to better suit our project, use below stl files instead.
{% endhint %}

{% file src="../../../.gitbook/assets/optics_picamera2_rms_f50d13_beamsplitter_delta - Part 1.stl" %}

{% file src="../../../.gitbook/assets/reflection_illuminator_LED_star - Part 1.stl" %}

{% file src="../../../.gitbook/assets/reflection_illuminator_LED_star - Part 2.stl" %}

{% file src="../../../.gitbook/assets/picamera_2_cover.stl" %}

3D printing instructions:

To withstand the heat from the illumination module, all parts above will need to be printed with PA filament instead of regular PLA.



Optics&#x20;

{% hint style="info" %}
We removed the [emission filter](https://build.openflexure.org/openflexure-delta-stage/v1.2.3/components/glass_filters.html#emission) and [excitation filter](https://build.openflexure.org/openflexure-delta-stage/v1.2.3/components/glass_filters.html#excitation) requirement from the Openflexure project because it does not provide significant impact for our use.
{% endhint %}

* 1 [beamsplitter filter](https://build.openflexure.org/openflexure-delta-stage/v1.2.3/components/glass_filters.html#beamsplitter)
* 1 [condenser lens](https://build.openflexure.org/openflexure-delta-stage/v1.2.3/components/condenser_lens.html)
* 1 [tube lens](https://build.openflexure.org/openflexure-delta-stage/v1.2.3/components/tube_lens.html)
* 1 [objective lens](https://build.openflexure.org/openflexure-delta-stage/v1.2.3/components/objective_lens.html) (10x for 2D crystal stacking use case)
* 1 [star led](https://www.digikey.com/en/products/detail/marktech-optoelectronics/MTG7-001I-XTE00-CW-0G51/3131371)

Screws

* 2 [M2.5 nut](https://build.openflexure.org/openflexure-delta-stage/v1.2.3/missing)
* 2 [M2.5 washer](https://build.openflexure.org/openflexure-delta-stage/v1.2.3/missing)
* 4 [M2.5x8mm screw](https://build.openflexure.org/openflexure-delta-stage/v1.2.3/missing)
* 2 [M2x6mm screw](https://build.openflexure.org/openflexure-delta-stage/v1.2.3/missing)
* 1 [M3 nut](https://build.openflexure.org/openflexure-delta-stage/v1.2.3/missing)
* 3 [M3x8mm screw](https://build.openflexure.org/openflexure-delta-stage/v1.2.3/missing)

Sensor&#x20;

* 1 [Raspberry Pi camera v2](https://build.openflexure.org/openflexure-delta-stage/v1.2.3/components/raspberry_pi_camera_v2.html)



**Assembly Steps**

{% hint style="info" %}
**Assembly steps are adpoted from the Openflexure Project including images and descriptions with necessary alternations.**&#x20;
{% endhint %}

1.  Solder power supply wire to the star LED, following the manufacturer's instructions for which pad to solder to, using a soldering iron and some solder. Be careful to keep the solder joint as small as possible. At the other end, attach connectors for connecting to your power supply.&#x20;

    <figure><img src="../../../.gitbook/assets/image (419).png" alt=""><figcaption></figcaption></figure>
2.  Push the reflection illumination condenser down onto the lens. Check it is pushed all the way in and it is flat.

    <figure><img src="../../../.gitbook/assets/image (420).png" alt=""><figcaption></figcaption></figure>
3.  Attach the star LED to the back of the reflection illumination condenser with two M3x8mm screw using a 2.5mm hex screwdriver. Make sure the wires come out from near the bottom.

    <figure><img src="../../../.gitbook/assets/image (421).png" alt=""><figcaption></figcaption></figure>
4.  Insert the slip plate screws Push the M2.5 nut into the slots on the top of the reflection illumination condenser.

    <figure><img src="../../../.gitbook/assets/image (422).png" alt=""><figcaption></figcaption></figure>
5.  Slot the filters into the filter cube. Push the beamsplitter filter into the 45° slot. Again it might be tight, and you might need to use a file to ensure you can fit it in.

    <figure><img src="../../../.gitbook/assets/image (423).png" alt=""><figcaption></figcaption></figure>
6.  Attach the objective screw Slide a M3 nut into the slot at the top of the reflection optics module casing and screw a M3x8mm screw into it using a 2.5mm hex screwdriver.

    <figure><img src="../../../.gitbook/assets/image (424).png" alt=""><figcaption></figcaption></figure>
7.  Insert the tube lens. Push the reflection optics module casing down on top of the lens until it is flat and secure.

    <figure><img src="../../../.gitbook/assets/image (425).png" alt=""><figcaption></figcaption></figure>
8.  Attach the objective lens Screw the objective lens into the top of the reflection optics module casing. Be careful to screw it in straight, to avoid cross-threading.

    <figure><img src="../../../.gitbook/assets/image (426).png" alt=""><figcaption></figcaption></figure>
9.  Attach the filter cube to the reflection illumination holder Slide the filter cube into the dovetail of the reflection illumination holder.

    <figure><img src="../../../.gitbook/assets/image (427).png" alt=""><figcaption></figcaption></figure>
10. Attach the reflection illumination holder to the optics module Slide the filter cube into the slot in the side of the reflection optics module casing.

    <figure><img src="../../../.gitbook/assets/image (428).png" alt=""><figcaption></figcaption></figure>
11. Screw the reflection illumination holder to the reflection optics module casing using two M2.5x8mm screws.

    <figure><img src="../../../.gitbook/assets/image (429).png" alt=""><figcaption></figcaption></figure>
12. Attach the reflection illumination holder Put two M2.5 washers onto two M2.5x8mm screws. Screw through the slip plate on the reflection illumination holder into the M2.5 nut in the reflection illumination condenser using a 2mm hex screwdriver.

    <figure><img src="../../../.gitbook/assets/image (430).png" alt=""><figcaption></figcaption></figure>
13. Remove the camera lens Remove the plastic film from the lens of the Raspberry Pi camera v2.

    <figure><img src="../../../.gitbook/assets/image (431).png" alt=""><figcaption></figcaption></figure>
14. Attach the camera to the optics tube Attach the Raspberry Pi camera v2 to the bottom of the reflection optics module casing. Put the camera cover over the top. Secure everything in place with two M2x6mm screws using a 1.5mm hex screwdriver.

    <div><figure><img src="../../../.gitbook/assets/image (432).png" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/image (433).png" alt=""><figcaption></figcaption></figure></div>



### Testing For Microscope Camera Video Feed

Directly follow the steps in [central control software](/broken/pages/ADZR1bqs7GRQuNhbGuQk) doc to set up the camera streaming feed along with other hardware components. All the necessary settings has been set to default for the best viewing experience for stamping. If you are experience any flashing, color distortion issue consider adjusting directly from the camera feed tuning panel.

<figure><img src="../../../.gitbook/assets/image (434).png" alt="" width="375"><figcaption></figcaption></figure>

To validate the setup, the correct deposition of the 2D crystal onto the wafer should produce a clear visual result under the microscope camera, similar to the images shown below.

<figure><img src="../../../.gitbook/assets/Screenshot 2026-04-24 at 9.32.25 AM.png" alt=""><figcaption></figcaption></figure>



**Known Issue**

* Image of color distortion &#x20;

<figure><img src="../../../.gitbook/assets/Screenshot 2026-04-24 at 9.22.37 AM.png" alt="" width="164"><figcaption></figcaption></figure>

Following the exact instructions from the openflexure project will result in color distortion of the view in the raw video feed due to the absence of picam sensor cap. The above picture is an example of the color distortion which significantly affect the ability for user to capture meaningful 2D crystal structure.&#x20;

To prevent this issue, please directly use the [central control software](/broken/pages/ADZR1bqs7GRQuNhbGuQk). If for some reason you need to redevelop the camera model from ground up, here is a tuning file directly from openflexure where you can apply directly to your video feed to avoid the color distortion using the sample code below.&#x20;

{% file src="../../../.gitbook/assets/imx219.json" %}

{% file src="../../../.gitbook/assets/imx477.json" %}

```
from picamera2 import Picamera2
import numpy as np
import time

TUNING_PATH = "camera/tuning_files/vc4/imx219.json"

# Load tuning JSON and pass it into Picamera2 at construction time
tuning = Picamera2.load_tuning_file(TUNING_PATH)
picam2 = Picamera2(tuning=tuning)

# Configure a stream that includes RAW
config = picam2.create_still_configuration(
    main={"size": (1640, 1232)},   # optional preview/processed stream
    raw={"size": (1640, 1232)}     # RAW Bayer stream
)
picam2.configure(config)
picam2.start()
```
