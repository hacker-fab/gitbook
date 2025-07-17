---
description: >-
  Details are for Version 1 of the sensor head design. Discussion of design
  choices and build instructions can be found in the documentation document.
---

# QCM for RF Sputtering

<figure><img src="../../../.gitbook/assets/IMG_2708.jpg" alt=""><figcaption></figcaption></figure>

## Preface

The Quartz Crystal Microbalance (QCM) project was designed for the RF sputtering chamber to measure thickness of deposition. This sensor utilizes the piezoelectric properties of quartz as explained by [nanoScience Instruments](https://www.nanoscience.com/techniques/quartz-crystal-microbalance/).

In this design the frequency is sent to a 6 MHz quartz crystal in an aluminum casing. The signal travels from the coaxial cable through the SMA connector to the wire fed through the spring to the electrode which the crystal disc sits on. The signal travels through the crystal then returns through the aluminum casing. The sensor head sits on the substrate plate near the center of the plate so that the crystal receives similar sputtering conditions to the substrate. The coaxial cable is fed into the chamber to the sensor head through one of the chamber’s KF16 flanges.&#x20;

One of the biggest challenges of this design was that the ground of the sensor head must be isolated from the ground of the chamber to avoid signal interference. This includes the substrate plate. To achieve this isolation, a layer of PTFE was placed between the substrate plate and the sensor head and fastened with PEEK screws.

The main components of this project are the sensor head, oscillator, and sensing software. As of now, a prototype of the sensor head has been fabricated and tested outside of the chamber using an existing oscillator and software. Even though the sensor has not yet been tested in the vacuum chamber, all materials are ultra high vacuum compatible. In the future, the goal is that the oscillator and software will also be built and the sensor head will not be reliant on existing systems.

## Concept Diagram

<figure><img src="../../../.gitbook/assets/concept diagram.png" alt=""><figcaption></figcaption></figure>

The oscillating signal travels from the coaxial cable through the SMA connector pin and the wire to the electrode. The aluminum base and lid serve as the ground. The signal returns through the casing. The target material adheres to the surface of the exposed quartz crystal disc causing a change in frequency of the signal.

## CAD Renderings

{% embed url="https://cad.onshape.com/documents/00ad04aa1ca9e07438f669ed/w/cb7a0b43c10a04aaa84349a7/e/a22660c3f0f0fd7da1413321?renderMode=0&uiState=68754cbc211c116538487575" %}

Note: The CAD rendering does not include the wire that connects the SMA connector pin to the electrode. See [#concept-diagram](qcm-for-rf-sputtering.md#concept-diagram "mention") for an example.

## Sensor Head Bill of Materials

<table data-header-hidden><thead><tr><th width="247.33331298828125">Part</th><th width="52.6666259765625">#</th><th width="296.66668701171875">Link</th><th width="108.666748046875">Price ($)</th><th>Role</th></tr></thead><tbody><tr><td>6 MHz AT-Cut Quartz Crystals (14 mm diameter)</td><td>1</td><td><a href="https://www.philliptech.com/product/inficon-style-6-mhz-quartz-crystals/">https://www.philliptech.com/product/inficon-style-6-mhz-quartz-crystals/</a></td><td>35.00</td><td>Sensing crystal</td></tr><tr><td>3” long aluminum bar (½” thick, 1” wide)</td><td>1</td><td><a href="https://www.mcmaster.com/products/aluminum/aluminum-2~/multipurpose-6061-aluminum-sheets-and-bars-7/thickness~1-2-1/thickness~0-500/width~1/">https://www.mcmaster.com/products/aluminum/aluminum-2~/multipurpose-6061-aluminum-sheets-and-bars-7/thickness~1-2-1/thickness~0-500/width~1/</a></td><td>2.71</td><td>Sensor head base</td></tr><tr><td>3” long aluminum bar (1/4” thick, 1” wide)</td><td>1</td><td><a href="https://www.mcmaster.com/products/aluminum/aluminum-2~/multipurpose-6061-aluminum-sheets-and-bars-7/width~1/thickness~1-4/thickness~0-250/thickness~0-25/">https://www.mcmaster.com/products/aluminum/aluminum-2~/multipurpose-6061-aluminum-sheets-and-bars-7/width~1/thickness~1-4/thickness~0-250/thickness~0-25/</a></td><td>1.62</td><td>Sensor head lid</td></tr><tr><td>SMA Connector Jack, Female Socket 50 Ohms Panel Mount Solder</td><td>1</td><td><a href="https://www.digikey.com/en/products/detail/te-connectivity-amp-connectors/2492483-1/25802167">https://www.digikey.com/en/products/detail/te-connectivity-amp-connectors/2492483-1/25802167</a></td><td>11.39</td><td>Connection from coaxial cable to spring</td></tr><tr><td>OFHC copper (0.025" thick)</td><td>1</td><td><a href="https://www.onlinemetals.com/en/buy/copper/0-025-copper-sheet-110-h02/pid/19856?variant=19856_12_12&#x26;gad_source=1&#x26;gad_campaignid=17413646334&#x26;gbraid=0AAAAADs4Iv3vufGvJKS9GgBd8BoNCfHM7&#x26;gclid=CjwKCAjw1dLDBhBoEiwAQNRiQX2-0SWe8PQwAjiZzuM6oRz-JzZSOnPB1vm2wm1DOpmjM5s9GCA8DBoCUhEQAvD_BwE">https://www.onlinemetals.com/en/buy/copper/0-025-copper-sheet-110-h02/pid/19856?variant=19856_12_12&#x26;gad_source=1&#x26;gad_campaignid=17413646334&#x26;gbraid=0AAAAADs4Iv3vufGvJKS9GgBd8BoNCfHM7&#x26;gclid=CjwKCAjw1dLDBhBoEiwAQNRiQX2-0SWe8PQwAjiZzuM6oRz-JzZSOnPB1vm2wm1DOpmjM5s9GCA8DBoCUhEQAvD_BwE</a></td><td>31.28</td><td>Electrode</td></tr><tr><td>Pure copper springs (16 mm)</td><td>1</td><td><a href="https://www.amazon.com/dp/B089JZG5D6?_encoding=UTF8&#x26;psc=1&#x26;ref=cm_sw_r_cp_ud_dp_PYBG89C7MXH2Y93JKBR4&#x26;ref_=cm_sw_r_cp_ud_dp_PYBG89C7MXH2Y93JKBR4&#x26;social_share=cm_sw_r_cp_ud_dp_PYBG89C7MXH2Y93JKBR4&#x26;previewDohEventScheduleTesting=C&#x26;csmig=1">https://www.amazon.com/dp/B089JZG5D6?_encoding=UTF8&#x26;psc=1&#x26;ref=cm_sw_r_cp_ud_dp_PYBG89C7MXH2Y93JKBR4&#x26;ref_=cm_sw_r_cp_ud_dp_PYBG89C7MXH2Y93JKBR4&#x26;social_share=cm_sw_r_cp_ud_dp_PYBG89C7MXH2Y93JKBR4&#x26;previewDohEventScheduleTesting=C&#x26;csmig=1</a></td><td>6.41</td><td><br></td></tr><tr><td>Braided copper wire (3mm braided, 0.8mm thick strands)</td><td>1</td><td><a href="https://www.amazon.com/dp/B0BGWZ5DGV?_encoding=UTF8&#x26;ref=cm_sw_r_cp_ud_dp_PH6EDMF5VYBTWPWGZJYF&#x26;ref_=cm_sw_r_cp_ud_dp_PH6EDMF5VYBTWPWGZJYF&#x26;social_share=cm_sw_r_cp_ud_dp_PH6EDMF5VYBTWPWGZJYF&#x26;previewDohEventScheduleTesting=C&#x26;csmig=1&#x26;th=1">https://www.amazon.com/dp/B0BGWZ5DGV?_encoding=UTF8&#x26;ref=cm_sw_r_cp_ud_dp_PH6EDMF5VYBTWPWGZJYF&#x26;ref_=cm_sw_r_cp_ud_dp_PH6EDMF5VYBTWPWGZJYF&#x26;social_share=cm_sw_r_cp_ud_dp_PH6EDMF5VYBTWPWGZJYF&#x26;previewDohEventScheduleTesting=C&#x26;csmig=1&#x26;th=1</a></td><td>9.99</td><td>Connection from SMA connector signal pin to electrode</td></tr><tr><td>PTFE sheet (1/32” thick)</td><td>1</td><td><a href="https://buyplastic.com/ptfe-plastic-sheet/?searchid=131281&#x26;search_query=teflon+ptfe">https://buyplastic.com/ptfe-plastic-sheet/?searchid=131281&#x26;search_query=teflon+ptfe</a></td><td>2.22</td><td>Barrier between sensor head body and substrate plate</td></tr><tr><td>Silver conductive epoxy</td><td>1</td><td><a href="https://www.digikey.com/en/products/detail/mg-chemicals/8330S-21G/4040841?gad_source=1&#x26;gad_campaignid=20232005509&#x26;gbraid=0AAAAADrbLliAEw8UMZ7NuWunXsJNOvkZJ&#x26;gclid=CjwKCAjw1dLDBhBoEiwAQNRiQSdIsdEh5NNn9y9fMbN0SMfhByLqgSbXl0STD9x_eVc8niJcScEjzBoCwX4QAvD_BwE&#x26;gclsrc=aw.ds">https://www.digikey.com/en/products/detail/mg-chemicals/8330S-21G/4040841?gad_source=1&#x26;gad_campaignid=20232005509&#x26;gbraid=0AAAAADrbLliAEw8UMZ7NuWunXsJNOvkZJ&#x26;gclid=CjwKCAjw1dLDBhBoEiwAQNRiQSdIsdEh5NNn9y9fMbN0SMfhByLqgSbXl0STD9x_eVc8niJcScEjzBoCwX4QAvD_BwE&#x26;gclsrc=aw.ds</a></td><td>157.49</td><td>Electrical connection between SMA connector signal pin and wire, electrical connection between wire and electrode</td></tr><tr><td>PEEK screws (M2.5, 8mm long)</td><td>4</td><td><a href="https://www.mcmaster.com/products/screws/material~peek-1/thread-size~m2-5/">https://www.mcmaster.com/products/screws/material~peek-1/thread-size~m2-5/</a></td><td>12.60</td><td>Substrate plate connection</td></tr><tr><td>Steel hex nuts (M2.5)</td><td>4</td><td><a href="https://www.mcmaster.com/products/nuts/hex-nuts-3~/hex-nuts-3~hex-nut-profile~standard/?s=m2.5+nuts">https://www.mcmaster.com/products/nuts/hex-nuts-3~/hex-nuts-3~hex-nut-profile~standard/?s=m2.5+nuts</a></td><td>4.19</td><td>Substrate plate connection</td></tr><tr><td>Stainless steel flathead screws (2-56, 7/8” long)</td><td>4</td><td><a href="https://www.mcmaster.com/products/flat-head-screws/flat-head-screws-2~/drive-style~phillips/18-8-stainless-steel-phillips-flat-head-screws-11/thread-size~2-56/length~7-8-2/">https://www.mcmaster.com/products/flat-head-screws/flat-head-screws-2~/drive-style~phillips/18-8-stainless-steel-phillips-flat-head-screws-11/thread-size~2-56/length~7-8-2/</a></td><td>4.34</td><td>Connection between base and lid</td></tr><tr><td>Stainless steel hex nuts (2-56)</td><td>4</td><td><a href="https://www.mcmaster.com/products/nuts/hex-nuts-3~/hex-nuts-2~~/thread-size~2-56/material~stainless-steel-2/">https://www.mcmaster.com/products/nuts/hex-nuts-3~/hex-nuts-2~~/thread-size~2-56/material~stainless-steel-2/</a></td><td>3.90</td><td>Connection between base and lid</td></tr><tr><td>Stainless steel washers (M2.5)</td><td>3</td><td><a href="https://www.mcmaster.com/products/nuts/hex-nuts-3~/hex-nuts-3~hex-nut-profile~standard/nut-type~hex/thread-size~m2-5/?s=m2.5+nuts">https://www.mcmaster.com/products/nuts/hex-nuts-3~/hex-nuts-3~hex-nut-profile~standard/nut-type~hex/thread-size~m2-5/?s=m2.5+nuts</a></td><td>4.64</td><td>Support for silver epoxy</td></tr><tr><td>Total</td><td><br></td><td><br></td><td>287.78</td><td><br></td></tr></tbody></table>

\


Note: Not all materials listed are an exact match for those used in Version 1. Some materials were already available in the lab. Additionally, some of the materials used were not vacuum compatible due to zinc coatings so those materials have been substituted for vacuum compatible alternatives in the bill of materials.

## Future Work

* Design a Version 2 that eliminates the need for expensive silver epoxy.
* Complete more sensor head testing.
* Build the oscillator.
* Write the code to sense the change in frequency and calculate the change in thickness.
* Create a low-cost flange feedthrough into the chamber.

## Image Gallery

<div><figure><img src="../../../.gitbook/assets/IMG_2704 (1).jpg" alt="" width="188"><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_2699 (1).jpg" alt="" width="188"><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_2911.jpg" alt="" width="188"><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_2914.jpg" alt="" width="188"><figcaption></figcaption></figure></div>

## Documentation Document

[https://docs.google.com/document/d/15uXQ0jKiw-uUwXZg3vHdAT-oS-NZu3LUEBUPLZNrHng/edit?usp=sharing](https://docs.google.com/document/d/15uXQ0jKiw-uUwXZg3vHdAT-oS-NZu3LUEBUPLZNrHng/edit?usp=sharing)

## Contact

Hannah Chinn

Email: hchinn@andrew.cmu.edu



