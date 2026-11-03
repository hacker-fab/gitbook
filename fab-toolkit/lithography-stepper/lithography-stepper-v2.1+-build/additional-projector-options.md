---
description: >-
  This page contains alternative options for the light projection system in the
  stepper.
---

# Additional Projector Options

## Option 1: $1300

As of October 2025, the [DLPDLCR471TPEVM projector](https://www.mouser.com/ProductDetail/Texas-Instruments/DLPDLCR471TPEVM?qs=DRkmTr78QAQsT6dpWa8zKg%3D%3D) is out of stock. However, [Hunter Guthrie](https://icbiolab.org/lab-member/hunter-n-guthrie/), an ECE Ph.D. student at Carnegie Mellon, figured out a way to make another project work. The model he used was the  [DLP4710EVM-LC](https://www.ti.com/tool/DLP4710EVM-LC).

<figure><img src="../../../.gitbook/assets/image (349).png" alt=""><figcaption></figcaption></figure>

Here is how he adapted it to work for the Stepper V2.1 build:

"The GUI and control seems to be identical to the recommended one, but the optics assembly was slightly different. The 3D printed adapter for the lens tube does not work with this model, so instead I machined an adapter out of 3/8" aluminum and tapped holes to screw in the lens tube adapter. I can send pictures and design files if you'd like.

Also, the LED PCB wiring is a bit different on this one, though the boards you gave me do actually fit pretty well. I've been using it with the stock blue LEDs because I was having trouble getting it to turn on the UV LEDs. I think the forward voltage might not be high enough on this model or something, but I need to debug that. I was reading that some people had success with the standard blue ones though, so I will give them a try before tearing the projector down again.\
\
Here's a photo of my adapter and the [design file](https://drive.google.com/file/d/1x0eyXnsHauO3VgQ_aGPtDOXjgl_YrOAo/view).\
![](<../../../.gitbook/assets/image (350).png>)![](<../../../.gitbook/assets/image (351).png>)

The first photo is the original plastic part that came with the projector. It had a lens tube that stuck out a few inches from the plastic plate that you see. I cut that tube off with a saw and attempted to modify the plastic plate to fit the Thorlabs mount. However, the plastic was too soft to reliably tap threads. So, I measured it with calipers and made the attached DXF file.

I used a water jet to cut out the part, then marked the screw holes through the Thorlabs mount with a punch, drilled them out, and then tapped them. For the holes which connect it to the projector, I just drilled them out and used a M2 bolt + nut to fasten it to the projector. I also had to gouge out some areas on the adapter with a dremel because there are indexing nubs on the metal facet to align the original part with the optical path. I expected there to be some alignment issues but the camera and projector seem to align perfectly with this adapter.

<figure><img src="../../../.gitbook/assets/image (352).png" alt=""><figcaption></figcaption></figure>

Here's what it looks like assembled on the beamsplitter."

Thank you Hunter for sharing your alternative build with the Hacker Fab!

## Option 2: $250

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

<figure><img src="../../../.gitbook/assets/image (355).png" alt=""><figcaption></figcaption></figure>
