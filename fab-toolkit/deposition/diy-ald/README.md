---
description: HackerFab DIY Low-Cost Atomic Layer Deposition Tool
---

# ⚛️DIY ALD

{% @github-files/github-code-block url="https://github.com/hacker-fab/ald" %}

## Preface

These pages will present the current proposed machine design plan and the work completed to date for our vertically aligned, cold-walled reaction chamber ALD machine for the Hacker Fab at CMU. The Fall 2024 semester's efforts at CMU are described [here](dec.-2024-cmu-update.md) and the Spring 2025 efforts are described [here](may-2025-cmu-update.md). Please note that there were significant changes to the design of the chamber, precursor storage, and control systems from the Fall 2024 semester to Spring 2025; those aiming to replicate these efforts are recommended to review the Spring 2025 design changes. Once this project is complete, this page will be updated so as to present a finalized guide for the machine design and build.

## Introduction

We are building a low cost Atomic Layer Deposition machine for the Hacker Fab to achieve improved gate dielectrics, which will help us achieve our goal of a 10 micron CMOS process as well as improve our capability in performing thin-film research. Our design work on it will be all open source, and we hope other labs can use our work to make their own ALDs at a fraction of the cost of commercial alternatives. We are building our ALD to fit 4" wafers so that it can be brought into the nanofab, which will  help us lower the barrier to entry for researching thin film deposition and new materials. Although 4" is much larger than anything we are currently using in the Hacker Fab at CMU, this larger size will make it useful to a larger audience.&#x20;

Our work thus far has been focused on machine design, largely drawing from two papers on “DIY” ALD machines: [“Design Of Atomic Layer Deposition Reactors For The Deposition Of Nanoparticle Embedded Thin Films](https://scholarly.cmich.edu/?a=d\&d=CMUGR2011-79.1.53\&e=-------en-10--1--txt-txIN%7CtxAU%7CtxTI--------)” by Michael Lubitz, and “[Homebuilt Reactor Design and Atomic Layer Deposition of Metal Oxide Thin Films](https://www.diva-portal.org/smash/get/diva2:1567530/FULLTEXT01.pdf)” by Pamburayi Mpofu. Each of these papers describes their machine design followed by some process development where they describe the settings (ie. temperatures and precursors deposition times) used in their initial depositions.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXfGEA2ge76Ug5VYrrEUXQVPkmGxAkSsFNQRsP_ExbUplk3XmULc1PfGS7NXwYY04U56aEVdUGoV-Zj3FgiVi8JXVb9aOxFnSuCSNAWuBtcAAQdtQXW8V9VN45B9TP-sMSlerOVevQ?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt=""><figcaption><p><em>A schematic of a general system overview of the ALD machine’s subsystems and components.</em></p></figcaption></figure>

## Bill of Materials

A complete list of parts and components used in making the DIY ALD system can be found [here](https://docs.google.com/spreadsheets/d/197pMBbWlABzj44jjp_owc5-I_hZhAVBunhPJlZiwtF0/edit?usp=sharing).

## References

Z. Zhang et al., "Atomically Thin Indium-Tin-Oxide Transistors Enabled by Atomic Layer Deposition," in IEEE Transactions on Electron Devices, vol. 69, no. 1, pp. 231-236, Jan. 2022, doi: 10.1109/TED.2021.3129707.

[“Design Of Atomic Layer Deposition Reactors For The Deposition Of Nanoparticle Embedded Thin Films](https://scholarly.cmich.edu/?a=d\&d=CMUGR2011-79.1.53\&e=-------en-10--1--txt-txIN%7CtxAU%7CtxTI--------)” by Michael Lubitz

["Homebuilt Reactor Design and Atomic Layer Deposition of Metal Oxide Thin Films"](https://www.diva-portal.org/smash/get/diva2:1567530/FULLTEXT01.pdf) by Pamburayi Mpofu

\
