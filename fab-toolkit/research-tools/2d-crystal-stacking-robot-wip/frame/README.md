---
description: 2D Crystal Stacking Bot Submodule
---

# Frame

The frame houses all the subsystems of the robot. This iteration of the structure is constructed with 2020 aluminum T-slot extrusion, laser cut 3/16" acrylic, and PLA 3d prints. It currently supports the [microscope module](../microscope-camera-module.md), [carousel](../carousel-module/), and hardware version 3 of the [Open Micro-Manipulator](https://github.com/0x23/MicroManipulatorStepper).

_This page is best viewed in **light** mode_

{% hint style="info" %}
The files and assembly instructions for the mounts of the Open Micro-Manipulator and glass slide can be separately found [here](mounts.md).
{% endhint %}

## Assembly Instructions

### BOM

{% hint style="info" %}
Note that all .dxf files are given in **millimeters**, feel free to reference the files below or export them yourself through [this Onshape document](https://cad.onshape.com/documents/213930b67b04143c1c1a308d/w/406d1807662c0ce72d6a172c/e/1d344634cceeae2377c13b26)
{% endhint %}

<table><thead><tr><th width="257.6666259765625">Part</th><th width="107">Quantity</th><th width="494.9998779296875">File</th><th width="348">Link to Order</th></tr></thead><tbody><tr><td>Top Plate<br>(3/16" acrylic)</td><td>1</td><td><div data-gb-custom-block data-tag="file" data-src="../../../../.gitbook/assets/Structure - Top Plate.dxf"></div></td><td><a href="https://www.amazon.com/AZM-Displays-Plexiglass-Replacement-Calligraphy/dp/B0BQ126MYN/ref=sr_1_3?crid=8N3I3X5VNP99&#x26;dib=eyJ2IjoiMSJ9.4yF4C1tRktrMbrlKh3k_jHgLnYcMRGWuY_ewiXAamS2uBmJyjLI4AIdXOtO26WVLJNxke6iwnafNLhi0wFD7WAjLcNeJJog4ynKX_skF7JiSqDUgLlN9X-G50tlU7dFqWkNBwLnwH2q7jn7L84oxc--EKLJdTqrAtgpt29IGoT3mHbSzamWhtdFwSAh9yKuoEhE4YV9KM0McrnuEjaZiQx7lKZf0Bp61yWjDwVngWYQ.aaDoSEr0UTiLgd5nw9QWxI1mcH4vwuRsXb_suOrhO5w&#x26;dib_tag=se&#x26;keywords=acrylic%2B5mm&#x26;qid=1774121067&#x26;sprefix=acrylic%2B5m%2Caps%2C131&#x26;sr=8-3&#x26;th=1">12"x24", 3/16" (5mm) Clear Acrylic Sheet</a><br><em>Note that each plate (~</em>14.6" x ~11.6"<em>) needs one of these whole sheets</em></td></tr><tr><td>Base Plate<br>(3/16" acrylic)</td><td>1</td><td><div data-gb-custom-block data-tag="file" data-src="../../../../.gitbook/assets/Structure - Base Plate.dxf"></div></td><td><a href="https://www.amazon.com/AZM-Displays-Plexiglass-Replacement-Calligraphy/dp/B0BQ126MYN/ref=sr_1_3?crid=8N3I3X5VNP99&#x26;dib=eyJ2IjoiMSJ9.4yF4C1tRktrMbrlKh3k_jHgLnYcMRGWuY_ewiXAamS2uBmJyjLI4AIdXOtO26WVLJNxke6iwnafNLhi0wFD7WAjLcNeJJog4ynKX_skF7JiSqDUgLlN9X-G50tlU7dFqWkNBwLnwH2q7jn7L84oxc--EKLJdTqrAtgpt29IGoT3mHbSzamWhtdFwSAh9yKuoEhE4YV9KM0McrnuEjaZiQx7lKZf0Bp61yWjDwVngWYQ.aaDoSEr0UTiLgd5nw9QWxI1mcH4vwuRsXb_suOrhO5w&#x26;dib_tag=se&#x26;keywords=acrylic%2B5mm&#x26;qid=1774121067&#x26;sprefix=acrylic%2B5m%2Caps%2C131&#x26;sr=8-3&#x26;th=1">12"x24", 3/16" (5mm) Clear Acrylic Sheet</a><br><em>Note that each plate (~</em>14.6" x ~11.6"<em>) needs one of these whole sheets</em></td></tr><tr><td>Gussets<br>(3/16" acrylic)</td><td>20</td><td><div data-gb-custom-block data-tag="file" data-src="../../../../.gitbook/assets/Structure - Gusset.dxf"></div></td><td><a href="https://www.amazon.com/AZM-Displays-Plexiglass-Replacement-Calligraphy/dp/B0BQ126MYN/ref=sr_1_3?crid=8N3I3X5VNP99&#x26;dib=eyJ2IjoiMSJ9.4yF4C1tRktrMbrlKh3k_jHgLnYcMRGWuY_ewiXAamS2uBmJyjLI4AIdXOtO26WVLJNxke6iwnafNLhi0wFD7WAjLcNeJJog4ynKX_skF7JiSqDUgLlN9X-G50tlU7dFqWkNBwLnwH2q7jn7L84oxc--EKLJdTqrAtgpt29IGoT3mHbSzamWhtdFwSAh9yKuoEhE4YV9KM0McrnuEjaZiQx7lKZf0Bp61yWjDwVngWYQ.aaDoSEr0UTiLgd5nw9QWxI1mcH4vwuRsXb_suOrhO5w&#x26;dib_tag=se&#x26;keywords=acrylic%2B5mm&#x26;qid=1774121067&#x26;sprefix=acrylic%2B5m%2Caps%2C131&#x26;sr=8-3&#x26;th=1">12"x24", 3/16" (5mm) Clear Acrylic Sheet</a><br><em>Gussets can be cut from excess acrylic left from the above plates</em></td></tr><tr><td>2020 T-slot Aluminum Extrusion (M5 Hardware)<br><strong>7.068"</strong> Length</td><td>4</td><td><div data-gb-custom-block data-tag="file" data-src="../../../../.gitbook/assets/Extrusion Drawing.pdf"></div></td><td><a href="https://us.misumi-ec.com/vona2/detail/110302683830/?list=PageCategory&#x26;seriesCode=110302683830&#x26;tab=drawingAndSpecifications&#x26;CategorySpec=00000042737%3A%3Ab&#x26;Page=1">20x20 Aluminum Extrusion (Black Anodized)</a><br><em>Note that Misumi offers lengths on intervals of 0.5mm, these will need to be machined to size</em></td></tr><tr><td>2020 T-slot Aluminum Extrusion (M5 Hardware)<br><strong>14.598"</strong> Length</td><td>4</td><td><div data-gb-custom-block data-tag="file" data-src="../../../../.gitbook/assets/Extrusion Drawing.pdf"></div></td><td><a href="https://us.misumi-ec.com/vona2/detail/110302683830/?list=PageCategory&#x26;seriesCode=110302683830&#x26;tab=drawingAndSpecifications&#x26;CategorySpec=00000042737%3A%3Ab&#x26;Page=1">20x20 Aluminum Extrusion (Black Anodized)</a><br><em>Note that Misumi offers lengths on intervals of 0.5mm, these will need to be machined to size</em></td></tr><tr><td>2020 T-slot Aluminum Extrusion (M5 Hardware)<br><strong>10.000"</strong> Length</td><td>5</td><td><div data-gb-custom-block data-tag="file" data-src="../../../../.gitbook/assets/Extrusion Drawing.pdf"></div></td><td><a href="https://us.misumi-ec.com/vona2/detail/110302683830/?list=PageCategory&#x26;seriesCode=110302683830&#x26;tab=drawingAndSpecifications&#x26;CategorySpec=00000042737%3A%3Ab&#x26;Page=1">20x20 Aluminum Extrusion (Black Anodized)</a><br><em>Note that Misumi offers lengths on intervals of 0.5mm, these will need to be machined to size</em></td></tr><tr><td>Microscope Extrusion Bracket</td><td>2</td><td><div data-gb-custom-block data-tag="file" data-src="../../../../.gitbook/assets/Mounts - Microscope Ext. Bracket.stl"></div><p>Please print with <strong>100% infill</strong>, with the closed end of the bracket on the bed, more details on printing below</p></td><td><a href="https://us.store.bambulab.com/products/pla-basic-filament?srsltid=AfmBOor62Y9yq01Udvoips_7ZRlmeJDTskJ2BYkv3fGlqZtrtdB2T1To&#x26;id=40988815556744">Bambu Lab PLA Basic</a></td></tr><tr><td>M5x0.8 Socket Head Bolts 10mm</td><td>138</td><td>N/A</td><td><a href="https://www.grainger.com/product/Socket-Head-Cap-Screw-M5x0-26LG25?opr=Compare">Grainger Industrial Supply M5x0.8 10mm Black Oxide Bolts (100 count)</a><br><em>Note that the screws are bought in counts of 100, two sets will need to be ordered</em></td></tr><tr><td>M5 Washers</td><td>138</td><td>N/A</td><td><a href="https://www.grainger.com/product/Flat-Washer-Grade-2-895Y51">Grainger Industrial Supply M5 Black Oxide Washers (100 count)</a><br><em>Note that the washers are bought in counts of 100, two sets will need to be ordered</em></td></tr><tr><td>M5 2020 Extrusion Hammer T-Nuts</td><td>132</td><td>N/A</td><td><a href="https://www.amazon.com/JCSPBYL-Sliding-Hammer-Aluminum-Profiles/dp/B0BK75LJNF/ref=sr_1_3?crid=HKX28EBK92R4&#x26;dib=eyJ2IjoiMSJ9.5NeYXyPmJTY7BxHwCu1NzOLehLoduySUXE2ZG_k5JnFXSKsFX3hMXMpMjEdWPh4L37PQ53vWpOX8BaCNNHJbHY6r9QqS0kqAcnXSF3UHjzGTHaGPiYu4ttB6VfSs2NHD6D7JfzDa-IQYSv8ANyrdLIglbWIiJ938MCKdsfy48TbQgD8R9xy68WeYCOVXWUfJAoftDysqQrPuDMHNQxkxyxogkXWaH8-rsehPD8Wo2jMuV1nitKRn6y04DuVcLIA_IpwgDGVTFwX-OQ6N3QYp-JHOaK7no3NRl-FY4qjvHQQ.Z3VHpZglGmCkis-N8dMbJh5fcOL1y_9fHxH4FVFjq50&#x26;dib_tag=se&#x26;keywords=m5%2Bt%2Bnut%2B2020&#x26;qid=1774120925&#x26;s=hi&#x26;sprefix=m5%2Bt%2Bnut%2B2020%2Ctools%2C77&#x26;sr=1-3&#x26;th=1">2020 Extrusion M5 Hammer Head Nuts (100 count)</a><br><em>Note that the nuts are bought in counts of 100, two sets will need to be ordered</em></td></tr></tbody></table>

#### Additional Hardware for Mounting Subassemblies

<table><thead><tr><th width="257.6666259765625">Part</th><th width="107">Quantity</th><th width="494.9998779296875">File</th><th width="348">Link to Order</th></tr></thead><tbody><tr><td>M5x0.8 Socket Head Bolts 10mm</td><td>8</td><td>N/A</td><td><a href="https://www.grainger.com/product/Socket-Head-Cap-Screw-M5x0-26LG25?opr=Compare">Grainger Industrial Supply M5x0.8 10mm Black Oxide Bolts (100 count)</a><br><em>Note that the screws are bought in counts of 100, two sets will need to be ordered</em></td></tr><tr><td>M5 Washers</td><td>16</td><td>N/A</td><td><a href="https://www.grainger.com/product/Flat-Washer-Grade-2-895Y51">Grainger Industrial Supply M5 Black Oxide Washers (100 count)</a><br><em>Note that the washers are bought in counts of 100, two sets will need to be ordered</em></td></tr><tr><td>M5x0.8 Hex Nuts</td><td>8</td><td>N/A</td><td><a href="https://www.grainger.com/product/Hex-Nut-Std-Hex-394RE0">Grainger Industrial Supply M5x0.8 Nuts (100 count)</a></td></tr><tr><td>M3 Socket Head Bolts <br>12mm</td><td>2</td><td>N/A</td><td><a href="https://www.amazon.com/Mywish-Assortment-Stainless-Washers-Wrenche/dp/B0CQQS6STL/ref=sr_1_2_sspa?crid=2OQB0568S6327&#x26;dib=eyJ2IjoiMSJ9.jL3ugWYKcdL85URTqPY1UYYFtRYaztdNMgvlNSz-i1lOoquvllbt4uGewG7KJRhPK7mpgybhj_uuyHdhvz3Cjip-uO5cQFY-GKTG4OXFY2vqgm1QNLj8j48_vC9mf6O9iNmJuDppJ-l1aFHlNgoWxCpWYbf_hQpRX4dn1eFx9ahnjyq03blic905kjPK1yBHXGDAZMjTDTrO2FCSSAtKAK1YEZYXpAS31aJjPu52CQM.juN69DzFwu87sx1mTJ2MeOIQeasDcUimlYhSGXHG0xI&#x26;dib_tag=se&#x26;keywords=m3%2Bbolt%2Bset%2Block&#x26;qid=1774120731&#x26;sprefix=m3%2Bbolt%2Bset%2Block%2Caps%2C106&#x26;sr=8-2-spons&#x26;sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&#x26;th=1">550Pcs M3 Screw Metric Screw Assortment</a><br><em>Note that this set contains washers, nuts, 12mm and 16mm bolts</em></td></tr><tr><td>M3 Socket Head Bolts <br>16mm</td><td>3</td><td>N/A</td><td><a href="https://www.amazon.com/Mywish-Assortment-Stainless-Washers-Wrenche/dp/B0CQQS6STL/ref=sr_1_2_sspa?crid=2OQB0568S6327&#x26;dib=eyJ2IjoiMSJ9.jL3ugWYKcdL85URTqPY1UYYFtRYaztdNMgvlNSz-i1lOoquvllbt4uGewG7KJRhPK7mpgybhj_uuyHdhvz3Cjip-uO5cQFY-GKTG4OXFY2vqgm1QNLj8j48_vC9mf6O9iNmJuDppJ-l1aFHlNgoWxCpWYbf_hQpRX4dn1eFx9ahnjyq03blic905kjPK1yBHXGDAZMjTDTrO2FCSSAtKAK1YEZYXpAS31aJjPu52CQM.juN69DzFwu87sx1mTJ2MeOIQeasDcUimlYhSGXHG0xI&#x26;dib_tag=se&#x26;keywords=m3%2Bbolt%2Bset%2Block&#x26;qid=1774120731&#x26;sprefix=m3%2Bbolt%2Bset%2Block%2Caps%2C106&#x26;sr=8-2-spons&#x26;sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&#x26;th=1">550Pcs M3 Screw Metric Screw Assortment</a><br><em>Note that this set contains washers, nuts, 12mm and 16mm bolts</em></td></tr><tr><td>M3 Washers</td><td>5</td><td>N/A</td><td><a href="https://www.amazon.com/Mywish-Assortment-Stainless-Washers-Wrenche/dp/B0CQQS6STL/ref=sr_1_2_sspa?crid=2OQB0568S6327&#x26;dib=eyJ2IjoiMSJ9.jL3ugWYKcdL85URTqPY1UYYFtRYaztdNMgvlNSz-i1lOoquvllbt4uGewG7KJRhPK7mpgybhj_uuyHdhvz3Cjip-uO5cQFY-GKTG4OXFY2vqgm1QNLj8j48_vC9mf6O9iNmJuDppJ-l1aFHlNgoWxCpWYbf_hQpRX4dn1eFx9ahnjyq03blic905kjPK1yBHXGDAZMjTDTrO2FCSSAtKAK1YEZYXpAS31aJjPu52CQM.juN69DzFwu87sx1mTJ2MeOIQeasDcUimlYhSGXHG0xI&#x26;dib_tag=se&#x26;keywords=m3%2Bbolt%2Bset%2Block&#x26;qid=1774120731&#x26;sprefix=m3%2Bbolt%2Bset%2Block%2Caps%2C106&#x26;sr=8-2-spons&#x26;sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&#x26;th=1">550Pcs M3 Screw Metric Screw Assortment</a><br><em>Note that this set contains washers, nuts, 12mm and 16mm bolts</em></td></tr><tr><td>M3 Nuts</td><td>2</td><td>N/A</td><td><a href="https://www.amazon.com/Mywish-Assortment-Stainless-Washers-Wrenche/dp/B0CQQS6STL/ref=sr_1_2_sspa?crid=2OQB0568S6327&#x26;dib=eyJ2IjoiMSJ9.jL3ugWYKcdL85URTqPY1UYYFtRYaztdNMgvlNSz-i1lOoquvllbt4uGewG7KJRhPK7mpgybhj_uuyHdhvz3Cjip-uO5cQFY-GKTG4OXFY2vqgm1QNLj8j48_vC9mf6O9iNmJuDppJ-l1aFHlNgoWxCpWYbf_hQpRX4dn1eFx9ahnjyq03blic905kjPK1yBHXGDAZMjTDTrO2FCSSAtKAK1YEZYXpAS31aJjPu52CQM.juN69DzFwu87sx1mTJ2MeOIQeasDcUimlYhSGXHG0xI&#x26;dib_tag=se&#x26;keywords=m3%2Bbolt%2Bset%2Block&#x26;qid=1774120731&#x26;sprefix=m3%2Bbolt%2Bset%2Block%2Caps%2C106&#x26;sr=8-2-spons&#x26;sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&#x26;th=1">550Pcs M3 Screw Metric Screw Assortment</a><br><em>Note that this set contains washers, nuts, 12mm and 16mm bolts</em></td></tr></tbody></table>

### Assembling The Frame

{% embed url="https://cad.onshape.com/documents/213930b67b04143c1c1a308d/w/406d1807662c0ce72d6a172c/e/192be2e1c51f732d3286fd99" %}

{% stepper %}
{% step %}
### Machine and Fabricate Parts

#### Printing Brackets

Make sure to print the mounts with **100% infill** and with the orientation specified below (add supports if your printer is not good at bridging)

<figure><img src="../../../../.gitbook/assets/image (443).png" alt=""><figcaption></figcaption></figure>

#### Machining Extrusion

Start with rough cuts the extrusion with a bandsaw, leaving 0.5" excess for facing.

Mill and face the extrusion to the lengths specified in the drawing.

{% file src="../../../../.gitbook/assets/Extrusion Drawing (1).pdf" %}

#### Laser Cut Acrylic

Ensure that your laser cutter is capable of cutting \~5mm acrylic and has proper ventilation.

Cut the Gussets, Top Plate, and Base Plate<br>
{% endstep %}

{% step %}
### Assemble the Base Plate

<div><figure><img src="../../../../.gitbook/assets/Microscope Mount Copy 1 (8).png" alt=""><figcaption></figcaption></figure> <figure><img src="../../../../.gitbook/assets/Microscope Mount Copy 1 (1).png" alt=""><figcaption></figcaption></figure></div>

Fasten the base plate to the **14.598" and 10" extrusion** as laid out above using the M5 bolts, washers, and hammer nuts.

* Be careful not to overtighten the screws, even with the washers the acrylic can crack if subjected to enough force

<figure><img src="../../../../.gitbook/assets/Frame 1 (1).png" alt=""><figcaption></figcaption></figure>

Make sure to leave **4 hammer nuts** on **each of the outside faces** of both 10" extrusions to mount the upright extrusion later.
{% endstep %}

{% step %}
### Assemble the Top Plate



<div><figure><img src="../../../../.gitbook/assets/Microscope Mount Copy 1 (4).png" alt=""><figcaption></figcaption></figure> <figure><img src="../../../../.gitbook/assets/Microscope Mount Copy 1 (5).png" alt=""><figcaption></figcaption></figure></div>

Fasten the base plate to the **14.598" and 10" extrusion** as laid out above using the M5 bolts, washers, and hammer nuts.

<div><figure><img src="../../../../.gitbook/assets/Frame 2 (1).png" alt=""><figcaption></figcaption></figure> <figure><img src="../../../../.gitbook/assets/Frame 4.png" alt=""><figcaption></figcaption></figure></div>

Make sure to leave **4 hammer nuts** on **each of the outside faces** of both 10" extrusions to mount the upright extrusion later and **4 hammer nuts** on each of the **top faces** of the 10" extrusion for reinforcing gussets.
{% endstep %}

{% step %}
### Fasten the Microscope Extrusion

Take a piece of **10" extrusion** and add **2 hammer nuts** onto the top face and **3 hammer nuts** to one of the adjacent side faces

{% hint style="info" %}
If you are using the [Microscope Autofocus Stage](./#fasten-the-microscope-extrusion), mount it to the extrusion now, otherwise leave the hammer nuts free to add the fixed microscope mount later
{% endhint %}

<figure><img src="../../../../.gitbook/assets/Frame 3 (1).png" alt=""><figcaption></figcaption></figure>

Press fit the Microscope Extrusion Brackets into the same **10" extrusion** and screw them in with **2 M5 bolts**, **washers**, and **hammer nuts.**

* Even with 100% infill, the PLA of the brackets can warp, make sure not to overtighten

<div><figure><img src="../../../../.gitbook/assets/Microscope Mount Copy 1 (10).png" alt=""><figcaption></figcaption></figure> <figure><img src="../../../../.gitbook/assets/Microscope Mount Copy 1 Copy 1 (1).png" alt=""><figcaption></figcaption></figure></div>

Mount the entire microscope extrusion assembly to the top plate using **4 M5 bolts**, **washers**, and **hammer nuts.**

{% hint style="info" %}
Do you best to have the microscope extrusion assembly approximately to the left of the hole in the top plate, this positioning **should be adjusted later** to **center** the objective within the circle cut in the acrylic when the microscope is mounted
{% endhint %}

<figure><img src="../../../../.gitbook/assets/Microscope Mount Copy 1 Copy 1.png" alt=""><figcaption></figcaption></figure>

Mount the gussets onto the top of the extrusion over the top assembly with the hammer nuts left in the extrusion, **16 M5 bolts** and **washers**, and an additional **8 hammer nuts** slid into the 14.598" extrusion.
{% endstep %}

{% step %}
### Combine the Top Assembly With the Bottom Assembly

<div><figure><img src="../../../../.gitbook/assets/Microscope Mount Copy 1 Copy 1 (2).png" alt=""><figcaption></figcaption></figure> <figure><img src="../../../../.gitbook/assets/Microscope Mount Copy 1 Copy 1 (3).png" alt=""><figcaption></figcaption></figure></div>

Screw in **8 gussets** to the top plate assembly using the hammer nuts left in the 10" extrusion, an additional **8 hammer nuts** added into the 14.598" extrusion, and **16 M5 bolts** **and washers**.

<div><figure><img src="../../../../.gitbook/assets/Microscope Mount Copy 1 Copy 1 Copy 1.png" alt=""><figcaption></figcaption></figure> <figure><img src="../../../../.gitbook/assets/Microscope Mount Copy 1 Copy 1 Copy 1 (1).png" alt=""><figcaption></figcaption></figure></div>

Repeat these steps to add **8 gussets** to the bottom plate assembly using the hammer nuts left in the 10" extrusion, an additional **8 hammer nuts** added into the 14.598" extrusion, and **16 M5 bolts** **and washers**.

<figure><img src="../../../../.gitbook/assets/Microscope Mount Copy 1 Copy 1 Copy 1 (2).png" alt=""><figcaption></figcaption></figure>

Fasten 4 pieces of **7.068"** extrusion to the gussets on the bottom plate using **16 M5 bolts**, **washers**, and **hammer nuts**.&#x20;

<figure><img src="../../../../.gitbook/assets/Frame 5.png" alt=""><figcaption></figcaption></figure>

Add 2 hammer nuts to each of the slots on the outer faces of the 7.068" extrusion, totaling to **16 hammer nuts.**&#x20;

<figure><img src="../../../../.gitbook/assets/Microscope Mount Copy 1 Copy 1 (4).png" alt=""><figcaption></figcaption></figure>

Fasten the top plate assembly to the height extrusion using the previously embedded hammer nuts and **16 M5 bolts and washers**.

<figure><img src="../../../../.gitbook/assets/Microscope Mount Copy 1 Copy 1 (5).png" alt=""><figcaption></figcaption></figure>

This should be your finished product! :tada:
{% endstep %}

{% step %}
### Add in Mounts and Carousel

Follow the instructions here to create the [nanopositioner mount](mounts.md), [slide mount](mounts.md), [chip return stage](../carousel-module/chip-return-stage.md) and the instructions [here to create the carousel](../carousel-module/).

<figure><img src="../../../../.gitbook/assets/Main (7).png" alt=""><figcaption></figcaption></figure>

<div><figure><img src="../../../../.gitbook/assets/Main (8).png" alt=""><figcaption></figcaption></figure> <figure><img src="../../../../.gitbook/assets/Main (9).png" alt=""><figcaption></figcaption></figure></div>

Mount the nanopositioner and carousel to the base plate using **8 M5 bolts, nuts and washers**

* Have one washer between the socket head and the 3D printed mounts, the other waser between the acrylic base plate and the nut



<div><figure><img src="../../../../.gitbook/assets/Main (10).png" alt=""><figcaption></figcaption></figure> <figure><img src="../../../../.gitbook/assets/Main (11).png" alt=""><figcaption></figcaption></figure></div>

Fasten the slide mount through it's threaded inserts with **3 16mm M3 bolts and washers**. Fix the slide return stage using **2 12mm M3 bolts, washers, and nuts**.
{% endstep %}
{% endstepper %}

### Finished Product

<figure><img src="../../../../.gitbook/assets/Main (13).png" alt=""><figcaption></figcaption></figure>
