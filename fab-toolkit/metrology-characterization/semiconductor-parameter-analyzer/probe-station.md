---
description: A step-by-step guide on working with the Probe Station
---

# Probe Station

To learn more about the hardware and software involved, refer:

{% content-ref url="smu-analog-discoveries.md" %}
[smu-analog-discoveries.md](smu-analog-discoveries.md)
{% endcontent-ref %}

***

## May 2025 CMU Update

## Motivation

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXccLul166RugVAWYGwdR28I36OxlL-iAsZ_cwCfoybPK5ESgpue7RbtdSbPmhDMg9_8iTcqqwa5a7qrBYhppl7XSopUI2lpquM0zah6ZhwFNfzx5PzOVHRGX0GhSetY3_oj3nQugQ?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption><p><a href="https://www.ossila.com/pages/what-is-a-probe-station">Off-the-shelf probe station.</a></p></figcaption></figure>

A probe station is a “fancy, nanoscale multimeter” for testing a chip after fabrication. It has probe needles to physically touch pads on the chip and measure electrical characteristics, such as an I-V curve. The device is essential to check if the fabricated chip is working properly. Given one of our goals for Hacker Fab to make a DIY version of every nanofabrication tool, it is necessary to develop a DIY probe station.

We are motivated to do so also because probe stations on the market cost \~$10K to \~$100K usually. Considering that we can purchase \~$125 XYZ stage on [Amazon](https://www.amazon.com/Pricision-40x40mm-Trimming-Bearing-Platform/dp/B07D7N9GT6), \~$355 [microscope camera](https://amscope.com/products/mu1603), and \~$380 [measurement device](https://digilent.com/shop/analog-discovery-3/), it should not be hard to make the device a lot cheaper.  Additionally, the relatively [inexpensive ($700) probe positioners](https://www.quater-research.com/all-products/XYZ-300-TEST-Micro-Positioners-p132789603) purchased as a replacement for broken ones of the probe station we currently have do not move as expected, which makes manipulation difficult. When we rotate the X-axis or Y-axis handle, the needle tip does not move in alignment with the respective axis. We are trying to make a better and cheaper alternative.

Another motivation behind this project is to implement a function to detect a probe touch. The Z-axis adjustment of the probe is hard because we see the chip from above using the microscope. Currently, we check if it touches the surface by seeing the slight horizontal shift of the needle (it shifts horizontally when you try to move it down further when it already touches the surface), which means it is inevitable that the needle scratches the pad. If you move it down even further, there is a possibility that it actually breaks the chip. We are trying to make this process easier by automating the Z-axis adjustment, or by making a buzzer sound when the probe makes contact.

## Overview

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXcquq_Cm3aFfW92_PJtBtkjEO-DirPFesUfbYuuHnoIZb_zywcIjwtpIvfmFwSpe65MkFyR9yyEoBiDUue0ACtDWQhlBPnzEG3Wkk3V38ITEgCNiDwp1zBH_riEpA5Rht48cr4p?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (318).png" alt=""><figcaption><p>Our DIY probe station design as of April 23, 2025.</p></figcaption></figure>

Our probe station consists of a stage positioner and microscope unit, probe positioners, and a magnetic board. The stage positioner is the stage you put your chip on, and is integrated with the microscope component. The probe positioner has probe needles and you manipulate it to touch pattern pads on the chip. These positioners are equipped with magnets and securely attach to the magnetic board. Otherwise they will shift during manipulation.

The CAD model has four probe positioners, but you can decide how many you prepare depending on your needs. For example, if you want to measure resistance between two pads, you need two of them.

## Notes

The current prototype requires design modifications. We removed the Z stage from the off-the-shelf XYZR stage used for the stage positioner. This design decision was based on our initial assumption that Z-axis manipulation would not be necessary for the stage positioner if each probe positioner has a Z stage. This assumption holds true when manipulating the probe needle to contact a pad. However, Z-axis movement is still needed for the stage positioner when adjusting the microscope focus. The microscope camera is mounted to the aluminum extrusion using screws, which is not suitable for Z-axis adjustment. It would be much easier to include Z-axis adjustment in the stage positioner using the Z stage, rather than the microscope side. If we choose not to remove the Z stage from the XYZR stage, the height of the stage positioner increases, which requires us to modify the designs of the microscope component and the probe positioner to match the height.

## Specifications

The specifications for our probe station are shown below:

1. The probe positioner is capable of movement along the X, Y, and Z axes.&#x20;
2. The stage positioner is capable of movement along the X, Y, and R axes (the Z axis should be added, as discussed in the Notes).
3. The positioners are attachable to and detachable from the base using magnets
4. X and Y axes of the positioner are easily manually controllable for pads of 100 μm length and width \*
5. The microscope is suitable for \~1 mm width / height pattern
6. The stage positioner has a piezo vibration sensor for probe touch detection (work in progress)

\
![](<../../../.gitbook/assets/image (319).png>)

Note on specification 4: The width and the height of pads of chips made in Hacker Fab are usually larger than 100 μm.

## Bill of Materials

As discussed in the Notes, the current prototype requires design modifications. However, this section describes how to build the current version. Parts that need modification are annotated accordingly.

Entire BOM

(1x stage positioner and microscope unit, 4x probe positioners, 1x magnetic board)

| Name                                                       | QTY         | Cost per unit - USD | Total cost - USD | Purchasing Link                                                                                                                 | CAD Link                                                                                                                                                              | Need modification? |
| ---------------------------------------------------------- | ----------- | ------------------- | ---------------- | ------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------ |
| XYZ stage 40 mm                                            | 4           | 125.00              | 500.00           | [Amazon](https://a.co/d/9sP1poa)                                                                                                | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| XYZR stage 60 mm                                           | 1           | 239.99              | 239.99           | [Amazon](https://a.co/d/hI5K2zE)                                                                                                | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| <p>test arm holder</p><p>20240</p>                         | 4           | 80.00               | 320.00           | [Quater Research](https://www.quater-research.com/all-products/20240-Test-Arm-Holder-p136536825)                                | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| <p>needle and test arm</p><p>20235</p>                     | 4           | 66.00               | 264.00           | [Quater Research](https://www.quater-research.com/all-products/20235-Needle-and-Test-Arm-p136536804)                            | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| magnet                                                     | 22          | 0.67                | 14.74            | [Amazon](https://www.amazon.com/dp/B0DBTXSNSD)                                                                                  | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| piezo vibration sensor module                              | 1           | 1.50                | 1.50             | [Amazon](https://a.co/d/7i02qCL)                                                                                                | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| Arduino Nano Every                                         | 1           | 19.90               | 19.90            | [Amazon](https://a.co/d/afdaF9Z)                                                                                                | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| camera MU1603                                              | 1           | 354.99              | 354.99           | [AmScope](https://amscope.com/products/mu1603)                                                                                  | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| objective lens                                             | 1           | 50.00               | 50.00            | [Microscope Marketplace](https://microscopemarketplace.com/products/olympus-microscope-objective-e-a4-4x-160)                   | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| magnetic board                                             | 1           | 74.94               | 74.94            | [SendCutSend](https://invoice.sendcutsend.com/mkatvxsid3ut)                                                                     | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| <p>aluminum extrusion</p><p>HFS5-2020-300</p>              | 1           | 4.71                | 4.71             | [Misumi](https://us.misumi-ec.com/vona2/detail/110302683830/?ProductCode=HFS5-2020-300)                                         | <p><br></p>                                                                                                                                                           | ✔️                 |
| <p>aluminum extrusion frame end cap</p><p>HFCL5-2020-S</p> | 1           | 2.21                | 2.21             | [Misumi](https://us.misumi-ec.com/vona2/detail/110300440510/?ProductCode=HFCL5-2020-S)                                          | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| socket head cap screw M3x8                                 | 41          | 0.04                | 1.64             | [Misumi](https://us.misumi-ec.com/vona2/detail/110300239250/?HissuCode=SCB3-8\&compact=M3301110000_hex-socket-head-cap-screws)  | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| socket head cap screw M4x10                                | 10          | 0.10                | 1.00             | [Misumi](https://us.misumi-ec.com/vona2/detail/110300239250/?HissuCode=SCB4-10\&compact=M3301110000_hex-socket-head-cap-screws) | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| socket head cap screw M6x10                                | 1           | 0.11                | 0.11             | [Misumi](https://us.misumi-ec.com/vona2/detail/110300239250/?ProductCode=SCB6-10)                                               | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| M3 hex nut                                                 | 6           | 0.79                | 4.74             | [Misumi](https://us.misumi-ec.com/vona2/detail/110300250540/?ProductCode=SLBNR3)                                                | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| M4 hex nut                                                 | 4           | 0.79                | 3.16             | [Misumi](https://us.misumi-ec.com/vona2/detail/110300250540/?ProductCode=SLBNR4)                                                | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| aluminum extrusion post-assembly insertion spring nut      | 6           | 0.78                | 4.68             | [Misumi](https://us.misumi-ec.com/vona2/detail/110302247640/?ProductCode=HNTP5-4)                                               | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| double-sided tape                                          | 1           | 14.01               | 14.01            | [Misumi](https://us.misumi-ec.com/vona2/detail/223004973639/?ProductCode=5000NS-20)                                             | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| copper conductive tape                                     | 1           | 3.00                | 3.00             | [Amazon](https://a.co/d/gTiaVFc)                                                                                                | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| cable zip tie                                              | 1           | 0.03                | 0.03             | [Misumi](https://us.misumi-ec.com/vona2/detail/110400387670/?ProductCode=CV-075W-100PW)                                         | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| (3D printed) probe positioner - test arm holder attachment | 4           | -                   | -                | -                                                                                                                               | [🔗](https://cad.onshape.com/documents/fee12d8a7495391c1cc1a75e/w/288c070f2db1c77a6048584a/e/d02a0f75f580f5597ad43ec4?renderMode=0\&uiState=6816d0e60822ba35e02f9373) | ✔️                 |
| (3D printed) probe positioner - base                       | 4           | -                   | -                | -                                                                                                                               | [🔗](https://cad.onshape.com/documents/fee12d8a7495391c1cc1a75e/w/288c070f2db1c77a6048584a/e/21886c47b0fd5b8021ad8991?renderMode=0\&uiState=6816d1590822ba35e02f9381) | <p><br></p>        |
| (3D printed) stage positioner - chip stage                 | 1           | -                   | -                | -                                                                                                                               | [🔗](https://cad.onshape.com/documents/c0b5a3eb5eb0059801d7da4d/w/57682c497502562ccab84428/e/1b915a4cebadf86352b6b5cb?renderMode=0\&uiState=6816d1da0822ba35e02f9697) | <p><br></p>        |
| (3D printed) stage positioner - base                       | 1           | -                   | -                | -                                                                                                                               | [🔗](https://cad.onshape.com/documents/c0b5a3eb5eb0059801d7da4d/w/57682c497502562ccab84428/e/d8316fd3408790946c91e94b?renderMode=0\&uiState=6816d1c40822ba35e02f93d7) | ✔️                 |
| (3D printed) stage positioner - camera mount               | 1           | -                   | -                | -                                                                                                                               | [🔗](https://cad.onshape.com/documents/c0b5a3eb5eb0059801d7da4d/w/57682c497502562ccab84428/e/995136cb06016595073ec147?renderMode=0\&uiState=6816d1f70822ba35e02f96aa) | ✔️                 |
| (3D printed) stage positioner - camera and objective tube  | 1           | -                   | -                | -                                                                                                                               | [🔗](https://cad.onshape.com/documents/3180b48aed4026e6f50f044d/w/b588188e57a5d6bc01f8ec77/e/08116197ddcb62dfedf0f246?renderMode=0\&uiState=68182fe5a7f63730d2a745d6) | <p><br></p>        |
| total                                                      | <p><br></p> | <p><br></p>         | 1879.35          | <p><br></p>                                                                                                                     | <p><br></p>                                                                                                                                                           | <p><br></p>        |

If you don’t need all the components listed above (e.g., you need only two probe positioners, instead of four), refer to the BOMs below.

1x probe positioner

| Name                                                       | QTY         | Cost per unit - USD | Total cost - USD | Purchasing Link                                                                                                                | CAD Link                                                                                                                                                              | Need modification? |
| ---------------------------------------------------------- | ----------- | ------------------- | ---------------- | ------------------------------------------------------------------------------------------------------------------------------ | --------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------ |
| XYZ stage 40 mm                                            | 1           | 125.00              | 125.00           | [Amazon](https://a.co/d/9sP1poa)                                                                                               | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| <p>test arm holder</p><p>20240</p>                         | 1           | 80.00               | 80.00            | [Quater Research](https://www.quater-research.com/all-products/20240-Test-Arm-Holder-p136536825)                               | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| <p>needle and test arm</p><p>20235</p>                     | 1           | 66.00               | 66.00            | [Quater Research](https://www.quater-research.com/all-products/20235-Needle-and-Test-Arm-p136536804)                           | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| magnet                                                     | 4           | 0.67                | 2.68             | [Amazon](https://www.amazon.com/dp/B0DBTXSNSD)                                                                                 | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| socket head cap screw M3x8                                 | 9           | 0.04                | 0.36             | [Misumi](https://us.misumi-ec.com/vona2/detail/110300239250/?HissuCode=SCB3-8\&compact=M3301110000_hex-socket-head-cap-screws) | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| M3 hex nut                                                 | 6           | 0.79                | 4.74             | [Misumi](https://us.misumi-ec.com/vona2/detail/110300250540/?ProductCode=SLBNR3)                                               | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| (3D printed) probe positioner - test arm holder attachment | 4           | -                   | -                | -                                                                                                                              | [🔗](https://cad.onshape.com/documents/fee12d8a7495391c1cc1a75e/w/288c070f2db1c77a6048584a/e/d02a0f75f580f5597ad43ec4?renderMode=0\&uiState=6816d0e60822ba35e02f9373) | ✔️                 |
| (3D printed) probe positioner - base                       | 4           | -                   | -                | -                                                                                                                              | [🔗](https://cad.onshape.com/documents/fee12d8a7495391c1cc1a75e/w/288c070f2db1c77a6048584a/e/21886c47b0fd5b8021ad8991?renderMode=0\&uiState=6816d1590822ba35e02f9381) | <p><br></p>        |
| total                                                      | <p><br></p> | <p><br></p>         | 278.78           | <p><br></p>                                                                                                                    | <p><br></p>                                                                                                                                                           | <p><br></p>        |

1x stage positioner and microscope unit

| Name                                                       | QTY         | Cost per unit - USD | Total cost - USD | Purchasing Link                                                                                                                 | CAD Link                                                                                                                                                              | Need modification? |
| ---------------------------------------------------------- | ----------- | ------------------- | ---------------- | ------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------ |
| XYZR stage 60 mm                                           | 1           | 239.99              | 239.99           | [Amazon](https://a.co/d/hI5K2zE)                                                                                                | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| magnet                                                     | 6           | 0.67                | 4.02             | [Amazon](https://www.amazon.com/dp/B0DBTXSNSD)                                                                                  | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| piezo vibration sensor module                              | 1           | 1.50                | 1.50             | [Amazon](https://a.co/d/7i02qCL)                                                                                                | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| Arduino Nano Every                                         | 1           | 19.90               | 19.90            | [Amazon](https://a.co/d/afdaF9Z)                                                                                                | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| camera MU1603                                              | 1           | 354.99              | 354.99           | [AmScope](https://amscope.com/products/mu1603)                                                                                  | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| objective lens                                             | 1           | 50.00               | 50.00            | [Microscope Marketplace](https://microscopemarketplace.com/products/olympus-microscope-objective-e-a4-4x-160)                   | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| <p>aluminum extrusion</p><p>HFS5-2020-300</p>              | 1           | 4.71                | 4.71             | [Misumi](https://us.misumi-ec.com/vona2/detail/110302683830/?ProductCode=HFS5-2020-300)                                         | <p><br></p>                                                                                                                                                           | ✔️                 |
| <p>aluminum extrusion frame end cap</p><p>HFCL5-2020-S</p> | 1           | 2.21                | 2.21             | [Misumi](https://us.misumi-ec.com/vona2/detail/110300440510/?ProductCode=HFCL5-2020-S)                                          | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| socket head cap screw M3x8                                 | 5           | 0.04                | 0.20             | [Misumi](https://us.misumi-ec.com/vona2/detail/110300239250/?HissuCode=SCB3-8\&compact=M3301110000_hex-socket-head-cap-screws)  | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| socket head cap screw M4x10                                | 10          | 0.10                | 1.00             | [Misumi](https://us.misumi-ec.com/vona2/detail/110300239250/?HissuCode=SCB4-10\&compact=M3301110000_hex-socket-head-cap-screws) | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| socket head cap screw M6x10                                | 1           | 0.11                | 0.11             | [Misumi](https://us.misumi-ec.com/vona2/detail/110300239250/?ProductCode=SCB6-10)                                               | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| M4 hex nut                                                 | 4           | 0.79                | 3.16             | [Misumi](https://us.misumi-ec.com/vona2/detail/110300250540/?ProductCode=SLBNR4)                                                | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| aluminum extrusion post-assembly insertion spring nut      | 6           | 0.78                | 4.68             | [Misumi](https://us.misumi-ec.com/vona2/detail/110302247640/?ProductCode=HNTP5-4)                                               | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| double-sided tape                                          | 1           | 14.01               | 14.01            | [Misumi](https://us.misumi-ec.com/vona2/detail/223004973639/?ProductCode=5000NS-20)                                             | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| copper conductive tape                                     | 1           | 3.00                | 3.00             | [Amazon](https://a.co/d/gTiaVFc)                                                                                                | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| cable zip tie                                              | 1           | 0.03                | 0.03             | [Misumi](https://us.misumi-ec.com/vona2/detail/110400387670/?ProductCode=CV-075W-100PW)                                         | <p><br></p>                                                                                                                                                           | <p><br></p>        |
| (3D printed) stage positioner - chip stage                 | 1           | -                   | -                | -                                                                                                                               | [🔗](https://cad.onshape.com/documents/c0b5a3eb5eb0059801d7da4d/w/57682c497502562ccab84428/e/1b915a4cebadf86352b6b5cb?renderMode=0\&uiState=6816d1da0822ba35e02f9697) | <p><br></p>        |
| (3D printed) stage positioner - base                       | 1           | -                   | -                | -                                                                                                                               | [🔗](https://cad.onshape.com/documents/c0b5a3eb5eb0059801d7da4d/w/57682c497502562ccab84428/e/d8316fd3408790946c91e94b?renderMode=0\&uiState=6816d1c40822ba35e02f93d7) | ✔️                 |
| (3D printed) stage positioner - camera mount               | 1           | -                   | -                | -                                                                                                                               | [🔗](https://cad.onshape.com/documents/c0b5a3eb5eb0059801d7da4d/w/57682c497502562ccab84428/e/995136cb06016595073ec147?renderMode=0\&uiState=6816d1f70822ba35e02f96aa) | ✔️                 |
| (3D printed) stage positioner - camera and objective tube  | 1           | -                   | -                | -                                                                                                                               | [🔗](https://cad.onshape.com/documents/3180b48aed4026e6f50f044d/w/b588188e57a5d6bc01f8ec77/e/08116197ddcb62dfedf0f246?renderMode=0\&uiState=68182fe5a7f63730d2a745d6) | <p><br></p>        |
| total                                                      | <p><br></p> | <p><br></p>         | 703.51           | <p><br></p>                                                                                                                     | <p><br></p>                                                                                                                                                           | <p><br></p>        |

1x magnetic board

| Name           | QTY         | Cost per unit - USD | Total cost - USD | Purchasing Link                                             | CAD Link                                                                                                                                                              | Need modification? |
| -------------- | ----------- | ------------------- | ---------------- | ----------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------ |
| magnetic board | 1           | 74.94               | 74.94            | [SendCutSend](https://invoice.sendcutsend.com/mkatvxsid3ut) | [🔗](https://cad.onshape.com/documents/a002531e6665c5bf716ae689/w/43c5516d731e60e988139bfb/e/18027d437f6d8ef53afb0ea0?renderMode=0\&uiState=6816d407a7f63730d2a51b84) | <p><br></p>        |
| total          | <p><br></p> | <p><br></p>         | 74.94            | <p><br></p>                                                 | <p><br></p>                                                                                                                                                           | <p><br></p>        |

## How To Make

### **Open onshape link for the probe station**

OnShape Directory: HackerFab > CMU > Probe Station > [Probe Station V2 Assembly File](https://cad.onshape.com/documents/7922ba2770896532f434b805/w/bb75d43632d86655307c9b7a/e/d7f63c42f58da9c808aaf7c0?renderMode=0\&uiState=68182d41a7f63730d2a7404c)

(It seems like it is sharable only within the team currently.)

Use the tab “probe station v2”.

Note: Some of the images below are from a previous version, but they do not affect the assembly process.

### **Download parts**

Click the part you want to download.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXd41KqOFizzKj1yCDOikuJPc_GWa5euw95x-AjLL7mNh3KPdfadGECcf_nF_SXMnlOZMaDvqGUuQK9ShxrDOgOIAfrTQj7W7gdOSt9mropo0rPCsGNOUNXm3WmT4vwagGWBbG4cRQ?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

Expand the indicated directory and right click on the lowest-level part file, not the assembly file, then click Export…. Note: Test arm holder of the probe positioner requires design modification to increase its height.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXenTw9FergbrhE87IIw-yV2WOhqZytBIzbUw1eiUtxaUhgwF6VYfG_di7A4r1Tm3oVOMdz-3Jv8wWOvhzGBTpbXboTTjupWt-F59kp2puwNPjTUg_6JpFJgdPT5tbdaf3rVTOaBJw?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

Choose STL for Format, then click Export. Save the file wherever you want.

If File name in this Export window shows the assembly name, not the part name you are trying to export, you probably have clicked more than one part. In this case, Cancel the window, then click Space key to clear all selections, and repeat the previous step (OnShape has a different selecting method from other CAD tools. You keep selecting multiple objects even if you don’t hold Shift or Control).

### Print parts

<figure><img src="../../../.gitbook/assets/image (320).png" alt=""><figcaption></figcaption></figure>

Any 3D printer can be used. I used the Bambu X1 Carbon in the lab, with the Textured PEI Plate and a Bambu PLA-CF filament. Enable support (because the parts have overhangs) and make sure that the settings the arrows indicate in the figure above are correct.&#x20;

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXe9HM4RSq1GQVncZKmdLNlxDpK7Yz90VT5ffoY3DxbENFg5Y9VfpJ-0a_0PFJaPNqc-VdXTi0PGD9IR24mtQltalR8BIM63WyVsL2uZjQD-5QFEzCxw6LtmIWTmyr7qqUYMTZKB1w?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

For the chip stage, we recommend printing upside down so it doesn’t need a lot of supports.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXdfcWbIGEGjlJK3PQkcRcGrImgZobbadzGSYN0wOdzMekoh5xIJ-qCbNvV27_w4iqkS_binCshbKrAEjdJml3ASMr8yUyvKOwTAQbItxiCT89Go0CE8mHg0EXZDz9VWEdW5jHce?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

Click Export plate sliced file on the top right and save the file in the micro SD inserted in the 3D printer front panel. If BambuStudio, the application software for Bambu 3D printers, says The save file operation failed., which happened in my macbook, you can try using the computer connected to the litho-stepper in the lab. BambuStudio has been installed.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXc_KtK1NWifj9LHXqFbzuO282vPXbzNf9p7Q2H10iEAjH2W44f2v3GM0OkCCsueeFnpExKurcnXssYVHm8ryYLOOR9anaAA-hlSzUP_wB4-8fpVkIhIU6WGL4MCvfxu3OOI0PJszA?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

Start printing. You might need to apply [glue](https://us.store.bambulab.com/products/liquid-glue-for-build-plate) on the plate before printing. It failed without it. You should wait and check if the first layer sticks to the plate for a while. The glue should be placed next to the 3D printer. Remove supports after printing (wear safety glasses when doing so).

### **Assemble probe positioner**

<figure><img src="../../../.gitbook/assets/image (321).png" alt=""><figcaption></figcaption></figure>

Place the XYZ stage on base\_probe positioner and align against the protrusions.

<figure><img src="../../../.gitbook/assets/image (322).png" alt=""><figcaption></figcaption></figure>

Rotate the X-axis handle (micrometer) to move the X-axis stage so you can see the counterbores. Place M3 nuts on the bottom and fix M3x8 screws. Or, instead of rotating the micrometer, you can just push the stage along the X-axis. The stage is simply being pulled against the micrometer edge using a spring, so you can push it away from it.

<figure><img src="../../../.gitbook/assets/image (323).png" alt=""><figcaption></figcaption></figure>

Same for the other two counterbores. In this step, the pushing-away-from-micrometer method doesn’t work since you need to push the stage towards the micrometer.

<figure><img src="../../../.gitbook/assets/image (324).png" alt=""><figcaption></figcaption></figure>

Align test arm holder attachment\_probe positioner against the edge of the XYZ stage, and fix M3x8 screws.

<figure><img src="../../../.gitbook/assets/image (325).png" alt=""><figcaption></figcaption></figure>

Align the bottom of the test arm holder and the edge of test arm holder attachment\_probe positioner.

<figure><img src="../../../.gitbook/assets/image (326).png" alt=""><figcaption></figcaption></figure>

Fix the test arm holder using M3x8 and M3 nuts. The screws included with the holder would be too short so they are not recommended.

<figure><img src="../../../.gitbook/assets/image (327).png" alt=""><figcaption></figcaption></figure>

Assemble the test arm and the probe needle. Rotate the screws so you can see the holes, then insert the test arm and the needle.

<figure><img src="../../../.gitbook/assets/image (328).png" alt=""><figcaption></figcaption></figure>

Press-fit the four magnets.

### Assemble stage positioner and microscope unit

<figure><img src="../../../.gitbook/assets/image (329).png" alt=""><figcaption></figcaption></figure>

Insert the aluminum extrusion into the base and fix it using M4x10 screws and the aluminum extrusion nuts. We made holes on the front and the back as well, but you don’t have to use them (the extrusion would be fixed securely enough with two screws from the sides). Note: The extrusion needs to be longer for the design modification to match the height of the XYZR stage without the Z stage removed.

<figure><img src="../../../.gitbook/assets/image (330).png" alt=""><figcaption></figcaption></figure>

Mark the aluminum extrusion at 188.2 mm from the top of the base. As we need the Z-axis adjustment for microscope focus, it does not have to be exact. Note: This length needs to be longer for the design modification to match the height of the XYZR stage without the Z stage removed.

<figure><img src="../../../.gitbook/assets/image (331).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (332).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (333).png" alt=""><figcaption></figcaption></figure>

The XYZR stage consists of the X, Y, Z, and R stage from the bottom. Remove the Z stage from the top of the Y stage. Then remove the R stage from the top of the Z stage. Align the R stage to the Y stage and fix it using four of the screws you just removed from the stage. Note: As discussed in the Notes, we should not remove the Z stage. We will not need this step eventually.

<figure><img src="../../../.gitbook/assets/image (334).png" alt=""><figcaption></figcaption></figure>

Similarly to the probe positioner, fix the XYR stage to the base using four M4x10 screws and four M4 nuts. You need to use a ball-point hex key.

<figure><img src="../../../.gitbook/assets/image (335).png" alt=""><figcaption></figcaption></figure>

When you’re inserting the screws on the counterbores on the right side, it doesn’t go all the way even if the micrometer is rotated to the end. You need to manually push the stage.

<figure><img src="../../../.gitbook/assets/image (336).png" alt=""><figcaption></figcaption></figure>

Align the 3D printed chip stage so the slits are placed on the top right. Fix it using four M3x8 screws.

<figure><img src="../../../.gitbook/assets/image (337).png" alt=""><figcaption></figcaption></figure>

Align the camera mount to the mark and fix it using four M4x10 screws and four aluminum extrusion nuts.

<figure><img src="../../../.gitbook/assets/image (338).png" alt=""><figcaption></figcaption></figure>

Attach the 3D printed tube to the camera and the objective lens. If you need, you can secure the connection to the lens using M3x8 screws and M3 nuts (we did not have to, so these screws and nuts are not included in the BOM).

<figure><img src="../../../.gitbook/assets/image (339).png" alt=""><figcaption></figcaption></figure>

Note: Our initial plan was to fix the camera to the mount using a screw and the thread on the back of the camera. However, we found that if we install the camera in this direction, the X and Y axis are switched (e.g., when you manipulate the X-axis, the image on your computer moves along the Y-axis). We need to modify this design. Currently, we rotated the camera so the USB socket faces the front, and simply taped it to the mount.

<figure><img src="../../../.gitbook/assets/image (340).png" alt=""><figcaption></figcaption></figure>

### **Attach the tape and the piezo vibration sensor (optional)**

To fix the chip on the stage positioner, we use the adhesive side of a conductive tape. We sometimes want to measure electrical characteristics between the bottom of the chip and somewhere, so we need to have some electrical access to the bottom. Placing the chip on the tape and clamping it with an alligator clip, or similar, allows the probes to establish electrical contact with the bottom of the chip.

Note: However, around the end of the semester, we found that the adhesive side of the tape is not as conductive as the opposite side. We need to test some chips to determine if the conductivity is sufficient (we haven’t had time to do so yet).

The piezo vibration sensor is for probe touch detection, which is still in progress of development. If you don’t need this function, you don’t need the sensor. You can just place the tape on top of the chip stage directly.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXcX8vkivzoOXk086impCbcM1jfiYwujr960GT_-EUQfMGLCXU-46YXVVN5nY_Yaks5ZwKtss8Iw17Wn8kED_Waep_HRoD0upgoiVExHe-Q7FzeMO-s-YYUXKkUtohvCpd7ojKxW?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXfg359PXgHrGsW7c6IUkue0uTQcA2Z16PMRV4JAujaxr8IDrPsH79WcW0SEIsOtbeEEojkHyPo1SvIoHNkKzoZDZT5WmE471F0sDUpYlaTHPnqMcUEbIP6OjlUJAs7O_AAFV7sapA?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXfp7qtO3NPWQiCaCOM5t_vXeY-_AsZPtvmHjBOUEcts5pPqJ5F6BAPT4t_apAXGX3YJm2AldBSJEbkeK5fS32cl3CGxKvfh17mPC1P8BRsUEszaIGwJ5IZagHuF96v5IJBzlS4mkg?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXeK87n4H8ZanoO8_6tu2gvBNdVYTzrWoB3Jt-qKUCNwCXLZIHmr8gSe6antfA5z_viFgVeQhwXpa9kpuy6PpFoL4mViTvUKP-xvb4R5adQgI1KBrgchfQA79bOXxbwuf2iFe8A5tA?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXfgKGiC5oFm4HIOegzXk0fdb9w9utbnTQm7qADx234hRaU6ezkp4I-_5z_xTELQk6sytRNo39QAJg22QQDiBE95MsmNLvyLbUsizVfUGzZ4ddh-IbQ6bZLhXrcv3rtlN2BVQUMlNw?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

Attach double-sided tape to the back of the piezo vibration sensor. Trim off the excess part of the tape. Don’t cut the sensor! Attach the piezo vibration sensor board to the base, using a M3x8 screw.

Note: We currently use self-threading here, but it didn’t work (when we were inserting the screw, it broke the 3D printed extrusion). We need to use the screw-and-nut method or thicken the extrusion.\


<figure><img src="../../../.gitbook/assets/image (341).png" alt=""><figcaption></figcaption></figure>

Place the sensor in the center of the chip stage so the wires are placed around the slits.

After checking the position, tape it to the chip stage.

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXejS5Wm5CDZ4C4DpaVs9o62RelExdQyRPycoZdxuijn13CU9XsMBVUeU1Y-eaCISUr0SAvIiaLX37pBJ_jEBhbmAgV-LcRUhozQP8nZU-QMeyw3qoDkA2Cd2NyJavaumQE_r6IH_A?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ)![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXdnMxpt983iD_haTpu92p1ay6qvQoUZJBIpCXludXghAlYSlla2YSRpuiXRSMXEldKmhXvxWdIIZcd4vE7YGZ4CEXYGTd_F8p2VFmyrPB7F-CXOSoRMnI1DxLCzuK8zG1QAYjg0?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ)

Fix the wires using cable ties. The soldered parts are fragile and once a wire broke off. This is to prevent that.

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXf2u1cpzTReO2mpA7JrVkbaMduh7sGxo_E7iyU2wc5WbiGwdKT2hqZZB_TXNNNW6uQfuMIxIcneCCKQP6W7XjnbHi4lFlRHQTnYTNyytG_Qu7gQjPPkKwUi0c09gniK3J1U5dJeUQ?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ)![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXfC-BpSqsu4OrnIy67ajUamsHH_H1rC4K-IpGNBnS9nDPFw5F0EWNND9zyLmYjbWLPRibISLR3rJ82MvMbn83hOsKM8LBU7tWQTRSH8BTO2Kfp_P6BdQ4e8G7h1x0P1pLsX4vjKRw?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ)

Attach the non-adhesive side of the conductive tape to the double-sided tape. Trim off the excess part of the tape.

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXdBjhbQK8zIR07At8Nv7htaSdGy-JUNQo62VG5XdMj8SfVMEV-z5PlNbl-Wa1VTE6drMJ0wEsiJyV-uW47lZtuTd8hVBKb9iso4z_mXUMLiDczVuHeEE6VC5YE439jkUMuoNdWQ?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ)![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXfT_3manrNXUz-swSFzIUBOpb1Lruwr56ftpRVMSkD_bmQmLEDFg7My_DqJVhHuDJuRTxyvro7S88ptRzY7xj6Sje-mhhf_rVb2FdGBRV6invjmbZjbPhm0v-_iGH9BXw0fgH6Y?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ)

Attach it to the chip stage.

## How To Use

### **Microscope camera setup**

Download the AmScope software called AmLite.

[https://amscope.com/pages/software-downloads](https://amscope.com/pages/software-downloads)

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXeLIjnYe_ZdiryEo6G44g0FkSz-GEVcedSU4iZeNQuARbfVEZ-K0vaCw94Qut2_kJhw3c-wsvIvltSFJv5LMe3-B83fNUBreeJUxMCCxwmtSd-py7A6k2Y_NGgwW9NoGzzpq1yFsA?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

Search MU1603.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXcOip5RysUUa5NlpUW_NxPgJC1PuCH2eyWUNL0rFC6SsLHUw0oe_0qZYpNgWa8UD6tEdW_Ieh8gaARrZ8tPwPF83EZmZk5tjpOkcVHVoqMm6g5KKQ9NuMP8u5Y1HvH6V98gQxd5?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

Download a Windows/Mac/Linux version, and install.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXftAIifHZw8EvUyvDoWAncZ3cEBM7_SJZ6yLoFcJ30Zbps8dcXaGZ15JkBH2ou7MvaaeM2yseUF1-Y3KrbcAZynM2RZpeJxY8PaYP9I663uXyfFJhDenugGI1kv0_oPzcWdzyIgBw?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

Connect the USB cable to your computer and open AmLite. If you can’t open AmLite by double clicking, right click on the AmLite icon > Open, or open it on terminal.

<figure><img src="../../../.gitbook/assets/image (343).png" alt=""><figcaption></figcaption></figure>

Manipulate the stage chip micrometers and check if the movement aligns what you expect. You can change the orientation by clicking the vertical and horizontal flip.

### **Measurement setup**

Loosen the screws of the camera mount, and adjust the height for focus (This Z-axis adjustment should be done on the stage positioner side in the future).

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXfSJjXnj52OJya6QSavA5d0vPzvBjDr-veisdm4Jp9L7FZAacNbom5KpBFDqm4AYzrte7skMKC3Ev9ZhkMRay-fXN13kYHcVM_-1Y302yDd2Gvr-Q6OfX2mITTertjhJPMQSSKtDw?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

Clamp it with alligator clips and connect them to your measuring device such as Analog Discovery 3 or a multimeter.

### **Arduino setup**

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeXX5Xec5F2p4f74FkVXUp8uZ0UFkD6LlvpNb8jtBN8B94yKJRkZzPTi6VzlU6rnVaCP9kGxxi6vkNzMKHJzKeKf3Jl4uzt_hXJTOmXPBv3bi245x4DBk1nfOJyIAhOTi3H4Ahx5A?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ)![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXd2CNqyqSm6I9lgkbGTl20Z59XdYva3DIm4osCtD6srFEXEkJpMF49ByldhdJCHP8D8vneto6qJgXBnUvXvg6IRfBtYJ0xeCcbN_-zcittLRyLBNLOBkZn9ZnsviBrEOfr78lKk?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ)

To detect the piezo vibration sensor value, connect Arduino to the sensor board.&#x20;

| Sensor board | Arduino Nano Every            |
| ------------ | ----------------------------- |
| S            | analog input pin (We used A0) |
| +            | +5V                           |
| -            | GND                           |

If you haven’t used Arduino Nano Every before, you probably need to install the board package for it (if you have another Arduino board, you can use it. It doesn’t have to be this particular board).

In Arduino IDE, Tools > Board: “...” > Boards Manager…

Search “nano every” and install the board package.

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXfi-EeSg9wBOXWuKxjDHT_OpWfjnsGE0RlEzzKOAxlbEAuXTJssEWEL5iX6Ac4BcmxrOiWa8DkSEhSLLw0PmyEoWHZiQYD1vzm7eEaKJ7twqCslysB1Fc0sSRMhW0jNknfZdU4hPg?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ)

\


Code:

\


<pre><code><strong>// C/C++
</strong><strong>const int analogPin = A0; // Analog pin to read from
</strong>int threshold = 50;       // Modify this value to set your threshold

void setup() {
  Serial.begin(115200);   // Initialize serial communication at 115200 bps
}

void loop() {
  int sensorValue = analogRead(analogPin); // Read the analog value
  Serial.print("Analog reading: ");
  Serial.println(sensorValue);

  // Check if the value exceeds the threshold
  if (sensorValue > threshold) {
    Serial.print("Spike detected! Value: ");
    Serial.println(sensorValue);
  }

  delay(100); // Delay between readings (adjust as needed)
}

</code></pre>

## Results

I measured the long, medium, and short spacings of a pattern on the chip made in the resistor lab session. Because the pattern we measured in the lab session was heavily scratched, I decided to use a new pattern next to it, which has no already measured values.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXdDCmVDi7oVGtBetoobwjrWyvV0HQf5J5ZU3e-ab5XiNvPT5O23W6ZcG8AJA7CHsgFVl19qbEX55CyeBQrlBHEEWW-oaR0UfNhJMO5NVQjoDELerR5sWpgJJHVmS2IDYKeRsd8l8Q?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

First, I compared the values on the top row and the bottom row (blue and pink). They are significantly different, but I am not sure if this is because of the chip or because of the measurement.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXftZrDyCxvur2vBRWg1IXRQm26Prdya8ay7cHJyhpRJk0ViZUOaQgTe9zTFerRIirIsn3no24JZYg0czpEiH0KMtTf3y4p_XpzscYITr-yuWoPQLydNK8jDFRHZYF7Idw0mXSBWGQ?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

Next, I measured the long+medium spacing and the medium+short spacing on the top row (green) and compared them to the blue values. They are not very different from each other. My assumption is that our probe station is working well, and the gap between the blue and the pink values is because of the chip, but we need some more tests.

## Design Choices

The initial design is shown below.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXckgL9JQd1eQOxVgtyGCjaBwyPbTN5Ftz49lo0-rMebrMLrOHy7D7WtheCwwTckbENnaj9QSyN_JJhgIS2hiFNOEOtF8W1_2Kt8zlFLSQ2xvmFolSvhGElWXM0Bj9Qr6BZ38gKXSw?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

We tried [a \~$42 USB microscope](https://amscope.com/products/utp200x003mp), but the resolution was too low and it didn’t work.\


<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXc1-LGxcBiAkwKUjgxHJUJEYfrXPF_7TvIHFSfpTvZTW7rU3L6Ns8eyUOIvNO_ZGpbr5JKGYZWSHDqPmBj4VgTER7keA1DIZPwn4d3ta6UxI_OlrL6Nx_IomAxX_q4iHN_f6GIAXA?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

We also tried [a magnetic bulletin board](https://www.amazon.com/dp/B007UHG7KI), but it was too flimsy and didn't work.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXeu_ygDuZOBkBUk5_ZIFnckr5J4o-C7QA1BR_e_JsEvYT7qtrQBLCvAqVkJzfU2dd1iZis5nOc-g1COUxYxQxiRr7PrEcUjG2WsaXI1-rLTeV_wbWfaJp11HJarEyOAdD00FXZ8XA?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

For fixing the chip, we tried vacuum chucking instead of the tape method. We drilled a hole in the center of the piezo vibration sensor. This didn’t work because the airflow significantly affected the sensor value. Also, because the sensor surface was not very flat, the chip couldn’t be placed stably.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXcQ_wlqc6GmrgQEf0HyM5qONrJb3MzANMih3Ua1ReesvSIxuzaiABIMA_wAuvnvS9OHKkn2_D7bPNjnvpwhM27zDsIZ2_WBEUnLIdX7NsPu5h2g6xyyFbOJUXJF-KYHLyo9xto98Q?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

## Design Assessment

### **XYZ stage**

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXeAr8WS2WQB622CzVp4ER9cmM-0yG3Ni3AQUMOUkCgKifH3O9NEABnz5nITKaZD4_t3EgLYnentmtyBttNI5LSSowixAJB4wH0pVzYuZ0oiQkzg8jClQbTQaha9WgGIJyk2vELZxg?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

Pads width or height we make at HackerFab are usually \~100 μm. For example, the pad from the resistor lab session is 181.48 μm × 76.25 μm. If we can adjust the probe position in a 10 μm resolution, that should be sufficient. The XYZ stage has a micrometer for each axis, which moves 500 μm per revolution. If you want to adjust the position in a 10 μm resolution, you need to rotate 7.2° (Δ10 μm / 500 μm \* 360°). This should not be difficult, so the XYZ stage we use is sufficient for our purpose.

As discussed in the Notes, the stage positioner requires design modifications so it has the Z stage so we can adjust the Z-axis position for the microscope focus.

### **Chip fixture**

As discussed in “Attach the tape and the piezo vibration sensor.” of the How to Make section, we found that the adhesive side of the conductive tape is not as conductive as the opposite side of the tape. We need to test some chips to determine if it’s working sufficiently or not. If not, we need to come up with a different method, probably going back to vacuum chucking. In this case, we can’t use the piezo vibration sensor because the airflow affects the sensor value, so we need to consider other ideas for probe touch detection. We also tried [the double-sided adhesive and conductive tape](https://a.co/d/9edwk8L), but it was not conductive enough on both sides.

### **Microscope**

Although the color and brightness adjustment on the software is still necessary, the current setup of the camera and the objective lens works well. However, the camera, AmScope MU1603 is no longer available. If you try to have a different setup, you should select a camera and an objective lens following the steps below. You need to consider if the resolution of the camera is sufficient, and if the field of view is large enough.&#x20;

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXdjDxRdNhIypFCQ2BbkoVDe_vFTTtIwQqXI6SrLs3oJNgdW3UpwkasTyrgWBQKDl2xKGc0fC2eIfLq8Rgaib4ldJlp-VvjCublfm0Ya_yrjFV4Ol1CdS5lZl94odWmJdy1TI62X3g?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

* \- of "160 / -" written on the objective lens indicates that it is the lens used without a cover glass. If it says 0.17, it needs to be used with 0.17 mm thick cover glass. For our purpose, we don’t have to care about this value.
* 0.10 written on the objective lens is a numerical aperture. It affects the brightness and the resolution (the higher value, the brighter and higher resolution), and it's usually around 0.1 to 1.6. For our purpose, we don’t have to care about this value.
* AmScope 1603 has the 16MP resolution, which means \~16M pixels, e.g., 4608 × 3456 (aspect ratio 4:3), 4928 × 3264 (3:2), or 5120 × 2880 pixels (16:9).&#x20;

Because the sensor size of the camera is 6.18 x 4.66 mm, and the pixel size is 1.335 \[μm], so it should be 4629 × 3490 pixels.

* (magnification) = (sensor size) / (field of view)

⇔ (field of view ) = (sensor size) / (magnification)

If we use the camera, which does not magnify, and the 4x lens, the field of view is:

Width: 6.18 mm / 4 = 1.545 mm = 1,545 μm

Height: 4.55 mm / 4 = 1.138 mm = 1,138 μm

And we will have the 4629 × 3490 pixels resolution in this field of view, which sounds very high.

This is an example of the chip we want to observe:

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXeAr8WS2WQB622CzVp4ER9cmM-0yG3Ni3AQUMOUkCgKifH3O9NEABnz5nITKaZD4_t3EgLYnentmtyBttNI5LSSowixAJB4wH0pVzYuZ0oiQkzg8jClQbTQaha9WgGIJyk2vELZxg?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

The entire chip looks like \~900 × 450 μm. The 1,545 μm × 1,138 μm field of view is large enough.

For example, if we use a 10x lens, the field of view will be 618 × 455 μm, which is too small.

Selection of a different camera and objective lens does not affect the entire design, as long as the camera is the same series (AmScope MU Series), and the objective is in the same standard (RMS).

This is because the requirements are that the tube length needs to be 132.5 mm and that the distance between the seating surface of the objective and the chip surface needs to be 45 mm. Even if you use a different objective, that does not change anything.

The seating surface of an objective needs to be 150 mm away from the image sensor of the camera. The image sensor is located 17.5 mm away from the seating surface of the camera for AmScope MU Series cameras (to my understanding). That is why the tube length is 132.5 mm. Apparently, this 17.5 mm is a common dimension, as [an off-the-shelf tube](https://www.edmundoptics.com/p/din-objective-to-c-mount-tube-assembly/11599/), not sold by AmScope, is also 132.5 mm. Of course, it would be safer to carefully check the dimension of your camera.

<figure><img src="../../../.gitbook/assets/image (344).png" alt=""><figcaption></figcaption></figure>

Additionally, the current tube has a slit. This is because we couldn’t get the objective in without it. We tried 3D printing the RMS thread, but objectives didn’t go all the way. This means that some particles could get inside the tube through the slit. I would like to know how careful we need to be about this. If this is a problem, we need to cover the slit in some way.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXdaMh9uwP4NjsBxFBqpjHLUS93ZNl_MFsDiu3VVdGVGT6ZOuATUSZlvC9u_JBtlSRXOkcFAk-lCKh9KQ97m_HQx0LdhEoCNs5RtmRCpHLrbulo3FG2pyWVrFfzNK2eFLbVjmjSo?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

## TODOs and Future Work

* Cover tube slit
* Microscope color and brightness settings
* Add Z stage to the stage positioner and redesign other components to match the height
* Modify the design of the camera mount
* Check if back side of conductive tape is conductive enough for testing
* Connect to Analog Discovery 3
* Test several chips to confirm it is working

A big next step would be the probe touch detection. Although there are some noises in the piezo vibration sensor values because the sensor is very sensitive, it is working well for the first probe touch. While one probe needle is already in contact, manipulation of the other probes causes vibration and it significantly affects the sensor value, even if the second probe is not in contact yet ([video](https://drive.google.com/file/d/1T8m3pUBWN8qpC3j7XGJGMP3b4qI5sGdF/view?usp=sharing) The first probe on the left is in contact and the second one on the right is moving above the chip surface, not in contact). Therefore, it is possible to detect only the first probe touch, but it is difficult to detect the second and later probe touches. However, because we are measuring some electric characteristics between two pads, the measuring device begins to display something only when the second probe touches the pad. For example, if we are measuring resistance using a multimeter, it keeps showing 0 ohm at first, and it doesn’t change with the first probe touch. It starts to show some values only when the second probe touches. Hence, we can’t detect the second probe touch by checking only the piezo sensor value, but we can detect it by checking the measuring device value, too.

To extract the sensor value change from the probe touch out of noises (there are sometimes small noises before the first touch as well, which are usually 1 to 3 in analog input of Arduino), I made a simple tool, which makes beep sounds with sensor value changes, and changes the frequency of the sound according to the intensity of the value. The more intense the value is, the higher frequency the sound has. This tool is intended for the situation where users manually rotate the Z-axis handle. Noise values are usually small, so this type of tool could give users a hint on which value changes are by the probe touches and which changes are just noises.

[code](https://github.com/yuichirose/probe-station-beep.git) [video](https://drive.google.com/file/d/1TB2n8P2ByO1f2fhkQAx7Tq8b276fuzqO/view?usp=sharing)

If the piezo sensor doesn’t work, a computer vision approach would be another option. [This CMU HCII research](https://www.figlab.com/research/2024/egotouch) is to detect fingertip touches on a palm. This work uses the camera of the VR headset and detects shadows, using training data. This type of approach might be possible, although it would still be difficult to collect data for training, because we still need some way to detect whether the probe is in contact or not, before training. Another thought is that, since the probe shadow looks more distinctive compared to the fingertip shadow in the research, we probably don’t have to use the training approach. It might be possible to detect touches by some algorithm (e.g., detecting that the shadow gets sharp and clear when the probe needle touches the chip surface).\
In any case, based on how I feel about it now, it seems best to proceed with the piezo sensor approach first.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXckFdCTkzZecFtZAdLh6gUHIR7U7J0AbB3wQ8Z8a5IZkkvCTLx66sZ4KVOvyK5tA1ajdjRltJSXcCcDv7GXXlvXiKQs7WPjPQynZc2vBFP6eidMkAHVsmZo-WDLCUfR_HDtD6CdUQ?key=l9Hl_NBKff9Bf_PYNQ7jlDuQ" alt=""><figcaption></figcaption></figure>

If we successfully find a good way of probe touch detection, we can start considering the auto Z-axis zeroing function (Although I also think that manual Z-axis manipulation, probe touch, and a touch detection alert (e.g., beep sound) could already be sufficient). I briefly considered the design. The motor could be the same stepper motor as the litho stepper. As described above, the micrometer moves 500 μm per revolution. Because the stepper motor’s resolution is 200 steps per revolution, the system’s resolution is Δ2.5 μm. For the X and Y axes, it is sufficiently high given the pads width and height are usually \~100 μm in HackerFab.

For the Z axis, the chip thickness is obviously larger than 2.5 μm (it’s usually \~1 mm), but the aluminum deposited on the chip of our group in the resistor lab was 0.55 μm (5.468 kÅ). I am currently not sure if this resolution is sufficient.

Another thing to consider for the function is that the Z-axis micrometer handle moves back and forth when rotated. If we attach the motor to it and completely fix the motor, the handle cannot move. Now I am thinking of using a linear slider, so the motor can slide along with the handle.

## Probing the Chip

#### Connections

1. If not using the tester adapter, connect W2 to the Gate probe and W1 to the Drain probe.&#x20;
2. The Source and Body probes must be connected to GND.
3. The +1 & -1 connections should be connected around the drain resistor.&#x20;
4.  +2 should be connected to the Drain terminal.&#x20;

    \


    <figure><img src="https://lh7-us.googleusercontent.com/RVLy73TuwDT9tbta7JIvf5rEiP-TORkkIragPhurHYfslcNDSV-4C60WChCPl45eIKaZN0s17kRqv0q0qx1-EXlomTFoZFzObAOAsUEncwBJyFFgY3VF418jJJvnbRPWXohWKTfKOEFh" alt="" width="375"><figcaption></figcaption></figure>

