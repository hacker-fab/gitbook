---
description: the first open-source semiconductor fab.
layout:
  title:
    visible: false
  description:
    visible: false
  tableOfContents:
    visible: true
  outline:
    visible: true
  pagination:
    visible: false
---

# Hacker Fab Documentation

<figure><img src=".gitbook/assets/Hacker Fab_Black w lilac.png" alt="" width="563"><figcaption></figcaption></figure>

<table data-view="cards"><thead><tr><th align="center"></th><th data-hidden data-card-target data-type="content-ref"></th><th data-hidden data-card-cover data-type="files"></th></tr></thead><tbody><tr><td align="center">discord.</td><td><a href="https://discord.gg/HFb3FKAxuX">https://discord.gg/HFb3FKAxuX</a></td><td></td></tr><tr><td align="center">github.</td><td><a href="https://github.com/hacker-fab">https://github.com/hacker-fab</a></td><td></td></tr><tr><td align="center">x.</td><td><a href="https://x.com/TheHackerFab">https://x.com/TheHackerFab</a></td><td></td></tr></tbody></table>

## <mark style="color:purple;">intro.</mark>

Our Goals:

1. Make integrated circuit prototyping as fast as 3D printing
2. Make DIY version of every nanofabrication tool
3. Get there with collaborative open source hardware

Right now we use factories and tools that are optimized to manufacture at scale to do our integrated circuit prototyping. There does not exist a set of machines that enable rapid tape-out of semiconductor devices on a budget, nor are there sufficient resources to make/modify fab tools from the ground up.

Nanofabrication is often communicated as complex [magic](https://www.youtube.com/watch?v=d9SWNLZvA8g), where every machine is immutable. We believe that innovation in the industry requires a thorough understanding of these machines from first principles, which will lead us to simpler solutions. Even on machines and processes of magnitudes less complexity than modern industry, there are designs worth sharing.

The use of low-cost, abundant, and fast-turn-around hardware serves a larger purpose than making the fab cheaper. These design constraints are what enable others to recreate, modify, and contribute to our work. The simpler the better.

|                                                                              |                                                               |
| :--------------------------------------------------------------------------: | ------------------------------------------------------------- |
| <h4>Number of People Who Have Made a Transistor by Hand in a Hacker Fab</h4> | <h4>75</h4>                                                   |
|                        <h4>Number of Hacker Fabs</h4>                        | <h4>3 <mark style="color:green;">(+1 in progress)</mark></h4> |

***

## <mark style="color:purple;">working on the hacker fab.</mark>

You don't need prior nanofabrication experience to create meaningful contributions.

You do need to read the [**Required Reading**](guides/required-reading-todo.md)**.**

You don't need to recreate the entire fab to contribute, [**although you can**](guides/build-a-fab-to-do.md).

We communicate entirely over [**Discord**](https://discord.gg/HFb3FKAxuX).

***

## this website.

This page is a home for all documentation. There are enough resources here to turn an empty room into one that fabricates simple IC's in a matter of months. Many pages are works in progress, as a lot of documentation is being migrated from our Google Drive.

Any contributor can submit change requests with a free Gitbook account. All of this is on Github, but formatted nicely here on Gitbook.

For the most up-to-date status on everything, join the [**Discord**](https://discord.gg/HFb3FKAxuX).

***

## fab toolkit.

Here is a list of all the tools built or bought necessary to make our devices.

Every build contains:

* BOM
* Links to Design Files
* Links to Code
* First Principles Understanding of Machine Design (WIP)

### fabrication tools.

<table data-view="cards"><thead><tr><th></th><th></th><th></th><th></th><th data-hidden data-card-cover data-type="files"></th><th data-hidden data-card-target data-type="content-ref"></th></tr></thead><tbody><tr><td>Lithography Stepper V2</td><td><a href="fab-toolkit/patterning/lithography-stepper-v2-build-work-in-progress.md">Build </a>for $3,708</td><td><a href="standard-operating-procedures/patterning-sop-stepper-v2/">SOP</a></td><td>Carnegie Mellon</td><td><a href=".gitbook/assets/IMG_6328 (1).jpg">IMG_6328 (1).jpg</a></td><td><a href="fab-toolkit/patterning/lithography-stepper-v2-build-work-in-progress.md">lithography-stepper-v2-build-work-in-progress.md</a></td></tr><tr><td>Vacuum Spin Coater V1</td><td><a href="fab-toolkit/deposition/spin-coater-v1-build-to-do.md">Build</a> for $200</td><td><a href="standard-operating-procedures/patterning-sop-stepper-v2/vacuum-spin-coater-sop.md">SOP</a></td><td>Carnegie Mellon</td><td><a href=".gitbook/assets/spinner.jpg">spinner.jpg</a></td><td><a href="fab-toolkit/deposition/spin-coater-v1-build-to-do.md">spin-coater-v1-build-to-do.md</a></td></tr><tr><td>Thermal Evaporator V1 (work in progress)</td><td><a href="fab-toolkit/deposition/thermal-evaporator-v1-build-to-do.md">Build</a> for $15,000</td><td><a href="standard-operating-procedures/evaporator-sop.md">SOP</a></td><td>Carnegie Mellon</td><td><a href=".gitbook/assets/assembled.PNG">assembled.PNG</a></td><td><a href="fab-toolkit/deposition/thermal-evaporator-v1-build-to-do.md">thermal-evaporator-v1-build-to-do.md</a></td></tr><tr><td>Tube Furnace V1 (work in progress)</td><td><a href="https://youtu.be/oqOlrGPgng8?si=W4bGpYOg1724bw0Y">Build</a> for $200</td><td><a href="standard-operating-procedures/tube-furnace-sop.md">SOP</a></td><td>Projects in Flight</td><td><a href=".gitbook/assets/furnace.jpg">furnace.jpg</a></td><td><a href="https://www.youtube.com/watch?v=oqOlrGPgng8">https://www.youtube.com/watch?v=oqOlrGPgng8</a></td></tr><tr><td>Plasma Etcher</td><td><a href="broken-reference">Buy</a> for $17,400</td><td><a href="standard-operating-procedures/plasma-etcher-sop.md">SOP</a></td><td>Plasma Etch PE-25</td><td><a href=".gitbook/assets/pe25-large.png">pe25-large.png</a></td><td><a href="broken-reference">Broken link</a></td></tr><tr><td>Hot Plate</td><td><a href="https://www.amazon.com/SainSmart-Soldering-Preheating-Preheater-Intelligent/dp/B08R6XFPKR/ref=sr_1_5?crid=GQGSA76ZKKCZ&#x26;keywords=mini%2Bhot%2Bplate%2Bsoldering&#x26;qid=1701728962&#x26;sprefix=mini%2Bhot%2Bplate%2Bsoldeirn%2Caps%2C71&#x26;sr=8-5&#x26;th=1">Buy</a> for $125</td><td></td><td></td><td><a href=".gitbook/assets/2023-12-04 17_30_26-mini hot plate in hand.jpg ‎- Photos (1).png">2023-12-04 17_30_26-mini hot plate in hand.jpg ‎- Photos (1).png</a></td><td></td></tr><tr><td>3-Axis Piezo Nanopositioner</td><td><a href="broken-reference">Build </a>for $500</td><td></td><td></td><td></td><td></td></tr><tr><td>Electroless Plating</td><td><a href="fab-toolkit/deposition/electroless-nickel-plating.md">Build </a>for $500</td><td></td><td></td><td></td><td></td></tr></tbody></table>

### verification / metrology tools.

<table data-view="cards"><thead><tr><th></th><th></th><th></th><th data-hidden data-card-cover data-type="files"></th><th data-hidden data-card-target data-type="content-ref"></th></tr></thead><tbody><tr><td>Probe Station V1</td><td><a href="broken-reference">Buy </a>for $15,800</td><td><a href="standard-operating-procedures/probe-station-sop.md">SOP</a></td><td><a href=".gitbook/assets/proberMPI-TS50.jpg">proberMPI-TS50.jpg</a></td><td><a href="broken-reference">Broken link</a></td></tr><tr><td>DIY SMU</td><td>Buy for $800</td><td><a href="fab-toolkit/metrology-characterization/semiconductor-parameter-analyzer/smu-analog-discoveries.md">SOP</a></td><td><a href=".gitbook/assets/AD3.png">AD3.png</a></td><td></td></tr><tr><td>Optical Spectrometer</td><td></td><td></td><td></td><td></td></tr></tbody></table>

### chemicals.

<table data-view="cards"><thead><tr><th></th><th></th><th></th></tr></thead><tbody><tr><td>Photoresists + Developers</td><td></td><td></td></tr><tr><td>Dielectrics</td><td></td><td></td></tr><tr><td>Conductors</td><td></td><td></td></tr><tr><td>Etchants</td><td></td><td></td></tr><tr><td>Dopant Sources</td><td></td><td></td></tr></tbody></table>

***

## background and licensing.

The Hacker Fab was inspired by [Sam Zeloof](https://www.youtube.com/@SamZeloof).

The Hacker Fab was started by Elio Bourcart, Alexander Hakim, and Sam Zeloof.

The first Hacker Fab was opened at [Carnegie Mellon University](https://hackerfab.ece.cmu.edu/).

The Hacker Fab is run entirely by independent contributors.

<details>

<summary>Hardware: CERN-OHL-W</summary>

For example, if you release HDL files under CERN-OHL-W and then somebody uses those files in their FPGA, when they distribute the bitstream (either putting it online or shipping a product with it) they do not to make the rest of the HDL design available under CERN-OHL-W as well.&#x20;

[https://ohwr.org/project/cernohl/wikis/faq#q-what-are-all-these-suffixes  ](https://ohwr.org/project/cernohl/wikis/faq#q-what-are-all-these-suffixes)

[https://ohwr.org/cern\_ohl\_w\_v2.pdf](https://ohwr.org/cern\_ohl\_w\_v2.pdf)

</details>

<details>

<summary>Software: MPL v2.0</summary>

The MPL’s “file-level” copyleft is designed to encourage contributors to share modifications they make to your code, while still allowing them to combine your code with code under other licenses (open or proprietary) with minimal restrictions.&#x20;

[https://www.mozilla.org/en-US/MPL/2.0/ ](https://www.mozilla.org/en-US/MPL/2.0/)

[https://www.mozilla.org/en-US/MPL/2.0/FAQ/](https://www.mozilla.org/en-US/MPL/2.0/FAQ/)

</details>

<details>

<summary>Documentation: CC BY-SA 4.0</summary>

This license enables reusers to distribute, remix, adapt, and build upon the material in any medium or format, **so long as attribution is given to the creator**. The license allows for commercial use. If you remix, adapt, or build upon the material, you must license the modified material under identical terms. [https://creativecommons.org/licenses/by-sa/4.0/ ](https://creativecommons.org/licenses/by-sa/4.0/)[https://creativecommons.org/share-your-work/cclicenses/](https://creativecommons.org/share-your-work/cclicenses/)

</details>
