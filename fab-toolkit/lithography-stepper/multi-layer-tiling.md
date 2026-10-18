---
description: >-
  This page describes approaches and experiments for single and multi-layered
  tiling for lithography
icon: puzzle
---

# Multi-Layer Tiling

Repository for tiling related resources: [https://github.com/hacker-fab/stepper\_attachments](https://github.com/hacker-fab/stepper_attachments)

## Abstract

<figure><img src="../../.gitbook/assets/4-250007.png" alt=""><figcaption></figcaption></figure>

The existing photolithography stepper (version 2.1) is capable of patterning within a 1.2mm diagonal exposure at a single time. However, due to the limited patterning resolution, it is difficult to fit larger pattern designs onto a single chip with only one single exposure. In addition to size limitations, the stepper is also limited by alignment precision during multi-layer patterning processes, which are used to fabricate more complex designs such as NMOS. As a result, tiling was introduced as a feature to the stepper in the previous years to enable multi-layer patterning alignment, as well as multi-tile patterning.&#x20;

For those unfamiliar with the concept, Tiling is a patterning technique used in maskless photolithography where a circuit or design too large to fit within a single exposure field is subdivided into a grid of smaller sub-patterns ("tiles"), each of which is exposed sequentially by repositioning the stage between exposures. The individual tile exposures are stitched together to form a single continuous pattern across the substrate.&#x20;

Accurate tiling requires precise stage positioning and alignment at each tile location to ensure that adjacent tiles connect seamlessly at their boundaries without gaps, overlaps, or feature misalignment. However, the existing stage lacks the precision needed to move the exact strides it needs to for each tile. Additionally, the stage movements are open-loop, which means that stage movements cannot be validated accurately without any other form of feedback. Therefore, tiling must require an extra layer of feedback to enable successful execution on the existing V2.1 stepper.&#x20;

## Baseline

We performed a baseline test for tiling performance using existing capabilities.&#x20;

Left image is the baseline tiling result. The smallest lines on the edge are 10 microns thick. To the right is the original mask, that will be split into tiles during the segmentation phase

Previous attempts at tiling have been made by various teams. The strategy used by the latest team is to split a pattern into tiles that fit the size requirements of a single exposure, add a 200px overlay between the alignment markers in each tile, and use the existing YOLO model (an alignment marker detection machine learning model) inside of the stepper repository to self-align the stage to the projection. In a snake-like pattern, each exposure will align with the previous exposure via detecting the alignment markers in the overlay portion.

The baseline performance reveals the instability that can come with xyz-stage movement. It also demonstrated the weakness of the existing YOLO model that should have detected the alignment markers and moved the stage to the correct location for tiling. Overall, there are two main issues that need to be addressed:

1. Detection algorithm: the existing detection algorithm can only detect developed alignment markers, and not “latent” ones.&#x20;
2. Stage movement: the stage moves unreliably due to a multitude of reasons ranging from an un-even chip platform (z-axis), to mechanical slips from the stepper motors, to the lack of feedback and validation for stage movement accuracy.

{% columns %}
{% column %}
<figure><img src="../../.gitbook/assets/unknown (12).jpeg" alt=""><figcaption><p>Tiling Baseline</p></figcaption></figure>
{% endcolumn %}

{% column %}
<figure><img src="../../.gitbook/assets/unknown (149).png" alt=""><figcaption><p>2x2 Digital Pattern with 200px alignment marker overlay</p></figcaption></figure>
{% endcolumn %}
{% endcolumns %}

## Proposed Solution

The new multi-layer tiling algorithm will build off of the existing work by adding 4 main capabilities that will improve both precision and reliability of tiling with the photolithography stepper. These include:

1. Training a new alignment marker detection model
2. Creating a fail-safe tiling algorithm (compatible with all layer levels)
3. Enabling a faster, more reliable autofocus algorithm
4. Enabling reliable absolute coordinates that are sourced from GRBL’s interface

Together, these features create the new multi-layer tiling feature, allowing for 10 microns-wide patterns or above (we've only validated as low as 10 microns, but based on testing results, we can likely surpass this limit).

## RF-DETR Detection Model

[Existing documentation](https://docs.hackerfab.org/home/working-docs/cmu-updates/justin-wang) on training a YOLO model to detect alignment markers has been done by the previous stepper teams on Hacker Fab’s GitBook. Because the model was trained on limited images and variations of images (ie: it hasn't included latent images or digital patterns), we decided to follow the same pipeline and annotate and train our new model to strengthen detection for all image types. Upon inspecting the different models we can use to train our data, we landed on the latest, strongest one known as [RF-DETR](https://github.com/roboflow/rf-detr).&#x20;

Our workflow follows these steps:

1. Collect data: we upload a variety of images: latent images, developed images, original digital pattern images, offset-ed images, rotated images, tiled images, etc.&#x20;
2. Manually annotate the data on [Roboflow](https://app.roboflow.com/), or use [cvat.ai](http://cvat.ai/) to annotate elsewhere (for free)
3. Train parameters with the augmentations specified by the [original documentation](https://github.com/hacker-fab/stepper/blob/main/docs/model.md)
4. Follow [integration workflow](https://inference.roboflow.com/quickstart/explore_models/)
5. Pray to the Hacker Fab gods this works

Post-training, we were able to get great results from the model statistics.&#x20;

Metrics include:

* mAP@50: 89.4%, Precision: 91.7%, Recall: 84.6%, F1: 88.0%
* Test accuracy 96% on Train, 94% on Test

<figure><img src="../../.gitbook/assets/unknown (150).png" alt=""><figcaption><p>Model Performance</p></figcaption></figure>

### Model Download

Roboflow no longer lets you download weights in either free or free-trial versions of the tool. Therefore, in order to run the weights locally, we found a work-around to fetching the weights: fetching them from cache after a single inference using Python.

The file format of the weights are suffixed with “onnx” and if we were to make an inference on the model using Roboflow’s custom API interface, the weights file actually gets temporarily cached in our /tmp/ directory. We can quickly copy over that file onto our local directory for free, and be able to use it forever without having to pay a cent!

Link to free weights script: [click me](https://github.com/hacker-fab/stepper_attachments/blob/main/model/free_weights_hack.py)

Link to weights to download: [click me](https://github.com/hacker-fab/stepper_attachments/blob/main/model/weights.onnx)

Link to training data: [click me](https://github.com/hacker-fab/stepper_attachments/tree/main/model/data)

Weights are also available in the Github repository, but it is stored in Git LFS, which u can pull from the command line on the main branch.&#x20;

After running the free weights script once, we can switch to Python’s onnxruntime library to extract the weights and make inferences on images we feed it.

With the new model, we also created a new and standardized error calculation algorithm that can use the detected markers in two images and correct the movement of the stage by adding in the error offsets.&#x20;

## Integration with Stepper Software

### Error Correction Feedback Loop

Currently, there are hard-coded configuration values for each edge x and y value for top, bottom, left and right centroids for 4 total alignment markers in the .toml config file in the stepper GUI. Given that alignment markers may appear anywhere (especially with our new “upload markers” feature), it does not make sense to use those same values to help us calculate stage movement errors.&#x20;

#### **Part 1: Store a copy of the markers projected onto the chip in Red Pattern Mode**

Due to the way the camera and the projector are placed, the camera has a limited area of the chip and the projection. As a result, the mapping between digital pattern marks and how they are projected on the actual chip in the camera view are drastically different. For ease of implementation, we first ensure that the images we compare are in the same coordinate space. Thus, we first run a “Same as Pattern” over a blank chip and use that as our alignment image for the rest of the tiling instance.&#x20;

#### Part 2: Store a copy of the current camera view in Solid Red Mode

This will serve as the camera state. And we will pre-process this image such that any patterned alignment markers will be visible and detectable to our RF-DETR model.&#x20;

#### &#x20;Part 3: Mapping markers between Camera feed and Digital image

Detect markers → calculate offset and rotation → move stage. With our direct mapping, we can easily use any scipy or opencv algorithm to match the markers based on any nearest-neighbors algorithm and use those matches to calculate the transform between one set to the other.&#x20;

#### Part 4: Error Calculation and Error Correction Algorithm

Taking into account the fact that there are multiple alignment makers of the same shape and form in a single exposure, it’s important that we are matching the correct markers to each other, even in the event that a shifted stage reveals a marker that is located in the space where a different marker was before the shift. We don’t want to mismatch any markers, even when the stage movement between the two captures are large. Thus, we always feed in a stride offset when detecting alignment errors, so that we can add this offset to the detected markers of the source image and then do matching between the shifted markers and the other set of markers.&#x20;

Upon doing a large test run, we’re able to successfully map and calculate the transform between the alignment image and the camera view image.

{% columns %}
{% column %}
![](<../../.gitbook/assets/unknown (151).png>)
{% endcolumn %}

{% column %}
![](<../../.gitbook/assets/unknown (152).png>)
{% endcolumn %}

{% column %}
![](<../../.gitbook/assets/unknown (153).png>)
{% endcolumn %}
{% endcolumns %}

{% columns %}
{% column %}
![](<../../.gitbook/assets/unknown (154).png>)
{% endcolumn %}

{% column %}
![](<../../.gitbook/assets/unknown (155).png>)
{% endcolumn %}

{% column %}
![](<../../.gitbook/assets/unknown (156).png>)
{% endcolumn %}
{% endcolumns %}

{% columns %}
{% column %}
![](<../../.gitbook/assets/unknown (157).png>)
{% endcolumn %}

{% column %}
![](<../../.gitbook/assets/unknown (158).png>)
{% endcolumn %}

{% column %}
![](<../../.gitbook/assets/unknown (160).png>)
{% endcolumn %}
{% endcolumns %}

<p align="center"><em>All 9 snapshots within a 250-step offset range per axis (x, y only)</em></p>

We can also run this algorithm over latent images, as shown below. This validates our detection algorithm for mutli-layer tiling and will be a reusable component for all layers of tiling.

<figure><img src="../../.gitbook/assets/unknown (162).png" alt=""><figcaption><p>Latent Image Test: RF-DETR is able to detect raw latent images</p></figcaption></figure>

#### Demo

We recorded a demo for Layer 1 and Layer 2 tiling. This was our first successful test,  however our algorithm ran quite slowly (therefore the video is quite long). But we have since optimized the algorithm and it runs much faster now.

**Layer 1: Tile 2x2 with overlapping alignment marks**

In reality, the pattern will only consist of alignment markers, but in order to benchmark the algorithm, we decided to also pattern the actual chip to measure its precision.

{% embed url="https://youtu.be/lxj7fiZOWqg" %}

**Layer 2: Assumes image aligned after capture and stitch**

{% embed url="https://www.google.com/url?q=https://youtu.be/fUpr-DdHlgw&sa=D&source=docs&usg=AOvVaw2f59p38MIylXhOxU0GGX3c&ust=1777668323135583" %}

### Layer 1: Latent Image Tiling

[Latent image](https://en.wikipedia.org/wiki/Latent_image) is a phenomenon that occurs as a result of an exposure to light over photosensitive material, such as photoresist. It can also be seen in photographic film, in which an initial burst of exposure results in a faint glowing image of the scene that was captured. Upon developing the chip or film, the image becomes more visible. The chemistry behind this is fascinating, however we’ll mainly be focusing on how we can use this to align the stepper stage well enough for a successful first-layer tiling.&#x20;

<figure><img src="../../.gitbook/assets/unknown (163).png" alt=""><figcaption><p>Source: <a href="https://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&#x26;arnumber=10121143">https://ieeexplore.ieee.org/stamp/stamp.jsp?tp=&#x26;arnumber=10121143</a></p></figcaption></figure>

The main inspiration for what we’re about to do comes from this [IEEE article](https://ieeexplore.ieee.org/stamp/stamp.jsp?tp=\&arnumber=10121143), in which the authors created a pipeline for detecting fiducial markers from latent images on a chip.

Currently, the only source of feedback we can get from a moving stage is through the camera view in the stepper GUI. This provides an optimal opportunity to take advantage of the latent image generated during patterning, by capturing a snapshot of the camera view immediately after exposure, and pre-processing the image using OpenCV’s Contrast Limited Adaptive Histogram Equalization (CLAHE) algorithm, which can enhance local contrast of an image based on a tile size and a contrast limit.

Using CLAHE, we can pre-process the latent image we take, and feed it into our new RF-DETR model that will detect the crosshairs on the image, and provide us a set of coordinates on the image that tie to our alignment markers.&#x20;

<figure><img src="../../.gitbook/assets/unknown (164).png" alt=""><figcaption><p>Latent image capture: Raw (Left), Pre-process 1 (Middle, but no longer used), Pre-process 2 (Right)</p></figcaption></figure>

Upon doing some quick scaling between pixels to stage steps, we can then translate the coordinate locations (from the snapshot) to its expected absolute coordinates (tracked by the stepper’s GRBL state) to determine the offset needed to align the stage with the alignment markers detected by the RF-DETR model.

#### Alternative Approaches We’ve Tried

**1. Feature-matching with SIFT**

We initially attempted to use feature-matching between different camera view snapshots to determine how far the stage moved. This required using OpenCV’s SIFT and RANSAC algorithm to detect and match keypoints between two different images (often offset-ed versions of each other).&#x20;

However, we soon realized that the patterns that were used for chips contained lots of repetitive features, that the algorithm would not be able to easily match different keypoints to the ones on a separate image. Additionally, the feature-matcher would often focus on the outer edge of the camera view, which doesn’t contain any features of the chip at all, making it difficult to calculate stage offset. Also, the preprocessed image was not good enough in quality for us to rely on traditional computer vision methods.

<figure><img src="../../.gitbook/assets/unknown (167).png" alt=""><figcaption></figcaption></figure>

**2. Template Matching**

A step up from feature matching is template matching. Instead of using SIFT to detect keypoints for potential matching with RANSAC, we manually fed a template image to OpenCV's template matching algorithm (`matchTemplate()`) so it could find areas on the snapshots that match with the template we fed it. While the algorithm was able to match a few alignment markers, it did so unreliably due to the variation in hues, intensities, and noise from the image itself that made it virtually impossible to account for all cases.

<figure><img src="../../.gitbook/assets/image (445).png" alt=""><figcaption><p>Left to Right: The same image getting pre-processed and fed to a template matcher</p></figcaption></figure>

Through our experimentation results, we’ve decided that training a better model to detect alignment markers was our answer. Therefore, we used Roboflow to train a large, RF-DETR (open-sourced) model that would detect the alignment markers for us.

### Layer 1

#### Workflow

While the RF-DETR model was able to reliably detect latent image markers, we wanted to make it easier for the model to recognize our alignment markers regardless. One noticeable observation we had during the experimentation phase was the correlation between exposure time and the visibility of the latent image to the human eye.&#x20;

Upon further experimentation, we’ve created an estimated optimal workflow for patterning the first layer (which only consists of alignment marks)

#### Current optimal chip preparation

1. Splash with Acetone
2. Isopropanol (make sure to coat the entire chip with this so no acetone is left)
3. 100 degree heat for 30 seconds
4. AZ4210 photoresist: coat the entire chip well enough
5. Spin Coating:
   1. Spin Coater V2, 25 seconds, 4000 RPM
   2. Spin Coater V1, 30 seconds, Level 10 speed
6. 100 degree heat for 90 seconds
7. For each exposure: pattern for 16-20 seconds in UV mode (don’t load markers before patterning, just offset the current focused region by -60 steps on the z-axis, and begin patterning from there)
8. 25 seconds develop

In order to ensure that we are allowed to customize the preparation workflow for Layer 1 without ruining the actual chip pattern, Layer 1 should be a pattern of only alignment marks, and nothing else. This allows us to overlay and overexpose without breaking any parts of the actual chip pattern, which will be patterned in Layer 2+.

**Demonstration (2x2 Tiling for Layer 1)**

{% columns %}
{% column %}
![](<../../.gitbook/assets/unknown (168).png>)
{% endcolumn %}

{% column %}
<figure><img src="../../.gitbook/assets/image (446).png" alt=""><figcaption></figcaption></figure>
{% endcolumn %}
{% endcolumns %}

### Layer 2+

_<mark style="color:$danger;">Important: this part of the project is still a work in progress and documentation and code is subject to changes, optimizations, and fixes. We will try to update the documentation accordingly.</mark>_

For layer 2+, there will already be underlying layers on the chip (which includes alignment marks).&#x20;

Since we will be manually removing the chip and putting it back on between different layers of patterning, we will want to do re-registration between our digital pattern and what is already on the chip.

How we are planning on doing this is by registering the existing pattern on the chip with the digital pattern of the previous layer. Since alignment markers will exist on both, we can then feed them into the detection model and get 2 point sets of where the alignment markers are on each.

Then, we do point set registration to find the mapping between the two. Since we sort the alignment markers detected on the digital pattern by position (row major order), we can then get the row major order of the markers on the stitched chip image as well after finding the mapping.

With the mapping information, we can then find the starting position of tiling, adjust for rotation and do layer 2 tiling. Since layer 1 and layer 2 will use the same error correction algorithm, this finding the starting position and rotation will get us to a valid state to begin tiling.

#### Capture and Stitch

&#x20;`ImageStitchingFrame` under `src/gui.py`

It would be very time consuming to search the entire area of the chip so we will assume that the user has placed the chip in view of the camera before starting the scan.

Next, the stage will scan an area based on the pattern size. It will increment by half tile widths and half tile heights before taking another snapshot. So for a pattern that is 2x2 tiles large, it will take 4x4 snapshots in total before stitching them up to get the full pattern.

The procedure for the algorithm:

1.  Extract the projection area from the camera view by using `extract_rectangle` function

    1. This is a small but very important detail since we can’t keep the camera margins if we want to get a clean stitched image, but we also can’t just crop off arbitrary margins since that will affect our ability to infer the absolute position of the alignment marker from the stitched image. Below is an example of the result

    <figure><img src="../../.gitbook/assets/unknown (171).png" alt=""><figcaption><p>Example of extracting projection rectangle</p></figcaption></figure>
2. Used SIFT and RANSAC for image alignment and applied the translation portion of the transform to stitch together the images. We ignore the rotation portion here since we only move along the x and y axis and there should be no rotation. In the case where there are no obvious features and image alignment fails, we then use default values for image stitching based on stage movement.
3. Display the stitched image in the GUI.

**Examples of capture and stitch algorithm (4x4 stitched tiles)**

{% columns %}
{% column %}
![](<../../.gitbook/assets/unknown (173).png>)
{% endcolumn %}

{% column %}
![](<../../.gitbook/assets/unknown (174).png>)
{% endcolumn %}
{% endcolumns %}

**Demo**

{% embed url="https://youtu.be/fjIviMMboZ4" %}

#### Digital Pattern and Stitched Image Re-registration

`MultiLayerAlignFrame` under `src/gui.py`

After we get the stitched image, with the entire previous layer pattern, we then feed both the stitched image and digital pattern into our model to get the coordinates of alignment markers in both images.&#x20;

Since the alignment markers in the digital image are along the x and y axis, we can order the positions of the detected markers by row-major order.

Now that we have two point sets from both the stitched image and digital pattern. We then use mapping between the two point sets using [Coherent Point Drift](https://arxiv.org/abs/0905.2635) (CPD) algorithm for point set registration. Because we previously ordered the markers in the digital pattern, we now have the alignment markers in the stitched image sorted too.

With the registration information, we are able to know how much the projected pattern for the next layer must rotate.

Since we also know the position of the marker at row 0, col 0 in the stitched image, we can then infer how much we need to move to get to the starting position of tiling the new layer.

<figure><img src="../../.gitbook/assets/unknown (175).png" alt=""><figcaption><p>example result of aligning a digital pattern of alignment marks onto a stitched image using CPD</p></figcaption></figure>

### Limitations and Future Work

The current stepper has no rotational stage, which limits the stepper capabilities since it forces changes to the image projection instead of the stepper stage, which bottlenecks precision to precision of the digital image projection (which is composed of pixels). With the incorporation of the MicroManipulator stage that was built for [CMU's Stepper V2.2](https://docs.hackerfab.org/home/working-docs/nanopositioner-wip/micromanipulator) (or MiMa as we like to call it), rotational motion can be added to gain better precision of rotational errors, while also creating flexibility for stage movement capabilities.&#x20;

Another limitation to the existing design is the massive vibration and jerk caused by slip between the chip and the stage as it moves along each axis. A chip stabilizer slider would be tremendously beneficial for the stepper to get more accurate patterning locations.&#x20;

Last noteable limitation is off-stepper processes for multi-layer patterning, specifically the longevity of visible first-layer alignment markers. As the layers grow, not only does the autofocus need to adapt to the new ideal z-stage position, but also retain visibility and detection success of the lower-layer alignment markers. We have yet to test out the layer at which we're at the brink of no longer being able to detect the markers due to the chip thickness and type of deposited materials present in the camera frame, but future work needs to be done to determine whether alignment markers need to be patterned again after a certain thickness level for multi-layer chip patterning.&#x20;
