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

## Precursor Selection

### **Oxide of interest**

For the current system we aim to deposit Indium-Tin Oxide. Indium Tin Oxide (ITO) is a versatile material widely recognized for its excellent electrical conductivity and optical transparency. These properties make ITO a promising candidate for advanced applications, particularly as a channel material in thin-film transistors (TFTs). Its high carrier mobility and tunable electrical characteristics offer significant potential for improving TFT performance in display technologies and flexible electronics. Additionally, ITO thin films are of great interest in materials and thin-film research due to their unique combination of metallic and semiconducting properties. This makes them an ideal system for exploring novel deposition techniques, optimizing film uniformity, and investigating structure-property relationships.&#x20;

The precursors for the metals were chosen based on their feasibility to react with water vapor as the oxidizer. The precursors chosen are Trimethyl Indium (TMIn) for Indium and Tetrakis(dimethylamino) Tin (TDMASn) for Tin with Nitrogen carrier gas. They have been shown to be used for ALD and CVD processes with water as the oxidizer in literature. As a starting point our aim would be to reproduce the results achieved in \[Zhang et al.]. The process parameters highlighted in the paper are as follows _(substrate temperature: -225C)_:

| Oxide | Bubbler temperature | Pulse time | Co-reactant pulse time | Process pressure | Purge time |
| ----- | ------------------- | ---------- | ---------------------- | ---------------- | ---------- |
| In2O3 | 60oC                | 0.625s     | 0.75s                  | 100 mTorr        | 10s        |
| SnO2  | 60oC                | 2s         | 1s                     | 100 mTorr        | 30s        |

For the first attempts at deposition however, the research group at CMU will attempt to deposition Al2O3, as this process is well-documented in the CMU Nanofab. Then, the group will attempt to deposit more complex oxides such as ITO.

### **Safety Considerations**

Most precursors and specifically metal organic precursors used for CVD and ALD processes tend to be pyrophoric (i.e. thermally unstable and spontaneously ignite on exposure to air) thus necessitating safety measures.&#x20;

#### **Material Considerations**

Compatibility with the precursors and byproducts produced during reaction are important to consider when selecting components for the delivery system. For our given precursors the chemical groups for which we checked compatibility are: 1) ability to handle pyrophoric materials, 2) ability to resist corrosion due to water vapor, 3) compatibility with methane (by product of TMIn reaction with water) and dimethylamine gas (by product of TDMASn reaction with water)

The compatibility of o-ring materials was checked on the following sources: [(1) ](https://www.marcorubber.com/o-ring-chemical-compatibility-chart.htm#chemId=702)[(2)](https://www.calpaclab.com/content/chemical-charts/Viton.pdf?srsltid=AfmBOopyameT2zvZmpAXXrtGtFDTGRPDOtgCQlMOpx0zRFcJjbQj2GMl)

Specific choices:

* Stainless Steel Tubing
* Aflas O-rings - conventionally used Viton O-rings are incompatible with dimethylamine&#x20;
* Aluminum vacuum chamber
* Stainless steel bellow hose
* Vacuum pump - Although the vacuum pump manufacturer warns against using the pump with pyrophoric gases, this caution can be safely disregarded in our case. Since we will be working with extremely dilute concentrations of these gases, the risk of combustion or hazardous reactions is significantly minimized. The low concentration ensures that the gases remain well within safe limits, allowing for the pump's use without compromising safety or performance.

### **Sourcing Precursors**

Given the safety considerations involved in handling the pyrophoric precursors, the sourcing of materials for ITO deposition is managed by the Claire & John Bertucci Nanotechnology Laboratory staff. They ensure that all necessary precautions are taken during the procurement, handling, and storage of the chemicals. The required precursors have been ordered from Strem Chemicals, a trusted supplier known for providing high-quality materials for advanced research and industrial applications. [TMIn](https://www.strem.com/product/98-4068), [TDMASn](https://www.strem.com/product/98-4050)

## References

Z. Zhang et al., "Atomically Thin Indium-Tin-Oxide Transistors Enabled by Atomic Layer Deposition," in IEEE Transactions on Electron Devices, vol. 69, no. 1, pp. 231-236, Jan. 2022, doi: 10.1109/TED.2021.3129707.

[“Design Of Atomic Layer Deposition Reactors For The Deposition Of Nanoparticle Embedded Thin Films](https://scholarly.cmich.edu/?a=d\&d=CMUGR2011-79.1.53\&e=-------en-10--1--txt-txIN%7CtxAU%7CtxTI--------)” by Michael Lubitz

["Homebuilt Reactor Design and Atomic Layer Deposition of Metal Oxide Thin Films"](https://www.diva-portal.org/smash/get/diva2:1567530/FULLTEXT01.pdf) by Pamburayi Mpofu

\
