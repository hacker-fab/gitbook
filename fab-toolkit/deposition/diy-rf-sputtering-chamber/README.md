---
cover: ../../../.gitbook/assets/IMG_7049.jpg
coverY: 266.6676916987451
---

# ⚡ DIY RF Sputtering Chamber

<figure><img src="../../../.gitbook/assets/IMG_7063.jpg" alt=""><figcaption></figcaption></figure>

## Subpage links

{% embed url="https://docs.hackerfab.org/home/fab-toolkit/deposition/diy-rf-sputtering-chamber/bom" %}

{% embed url="https://docs.hackerfab.org/home/fab-toolkit/deposition/diy-rf-sputtering-chamber/build-instructions" %}

{% embed url="https://docs.hackerfab.org/home/fab-toolkit/deposition/diy-rf-sputtering-chamber/sop" %}

{% embed url="https://docs.hackerfab.org/home/fab-toolkit/deposition/diy-rf-sputtering-chamber/testing-film-characterization-and-initial-process-dev-in-support-of-cmos" %}

{% embed url="https://docs.hackerfab.org/home/fab-toolkit/deposition/diy-rf-sputtering-chamber/add-ons-and-wip" %}

## Preface

At the CMU Hacker Fab, we started building an RF sputtering Chamber in the Fall 2024. After a second iteration, the RF sputtering chamber seems to be reliable enough to share.

The sputtering project was originally initiated to support the development of a reliable DIY CMOS process. For context, the NMOS process as of F24 relies on buying p-type wafers which already have a clean gate oxide grown on the substrate, and a polysilicon gate contact deposited on top, providing a fab quality gate stack which is further processed into NMOS integrated circuits (ICs). For CMOS ICs, n-type wells are needed within the p-type substrate, and these wells cannot be doped while the gate oxide and polysilicon gate contact are present on the wafer/substrate surface. Thus, to create a CMOS process, the n-wells would have to be doped **before** depositing a gate oxide and gate contact. Therefore, the fab needs to be capable of depositing a high quality gate oxide and gate contact, instead of buying wafers with the gate stack already present. The gate oxide and its interfaces are the most sensitive parts of a transistor, as they are sensitive to small amounts of contamination, and small concentrations of thin film and interfacial defects. For example, to grow a high quality gate oxide of SiO2 requires a remarkably pure environment since ionic contamination at those temperature is extremely mobile, and can ruin the gate oxide.

After assessing the feasibility of creating high quality gate stacks through various methods, we landed on sputtering as the best tool for our situation; a fab that exists in non-clean room. We chose RF sputtering, as it is capable of depositing almost any material, including high-K dielectrics. Additionally, the vacuum environment of the sputtering chamber is likely to produce higher purity films than if we attempted to create a high purity furnace for growing oxides.&#x20;

The initial materials chosen for the sputter gate stack were Aluminum oxide (twice the dielectric constant of SiO2) as the gate oxide and aluminum as the gate contact. The aluminum oxide is to be deposited via a reactive process, by flowing in O2 during the sputtering process, and using an Al target. This process selection allows for the use of a single target, and allows for the deposition of both the gate oxide and gate contact in a single sputtering run, which helps avoid contamination of the gate oxide, since it is covered with aluminum before venting the chamber and exposing the wafer to potential contamination.&#x20;

Si - Al2O3 to Si gate stack:

&#x20;pros

* High-k dielectric
* Single target needed if reactive sputtering is used
* Allows for immediate protection of gate oxide (which is very contamination sensitive)
* Cheap sputtering target material

cons

* Of all the metals, Al is particularly sensitive to oxygen contamination, and pre-sputtering/target cleaning. So, our system will have to be able to delivery extremely pure Ar, and a very clean vacuum environment to achieve conductive aluminum

## Goal Specifications

#### Machine

* <1E-7 torr base pressure ✅
* 100 watts 14 MHz RF power with >90% impedance matching ✅
* Stable plasma down to 5 millitorr Ar ✅ (3 millitorr lowest achieved)
* .5 - 8" adjustable throw distance ✅
* \>10nm/minute deposition rate for Al at 4" throw distance ❌ (experiencing \~2.5 nm/min at 100 watts 3" throw)
* Balanced magnetron magnetic field ❓
* <1 sccm O2 flow accuracy ✅
* <1 sccm Ar flow accuracy ✅
* Actuatable substrate shield ✅
* Air cooled magnetron ✅
* 2 simultaneous process gasses ✅
* View port ✅
* Entire system machinable with only a drill press ✅

#### Thin films

* Al2O3 measured dielectric constant >6 ❓
* Al2O3 surface roughness <5nm ❓
* Al resistivity of <3E-6 ohm-cm ❓



## Chamber + Integrated Air Cooled Magnetron&#x20;

{% embed url="https://cad.onshape.com/documents/9b37f3bdb20664244f2f9c10/w/2cb1a33f5f5ef24c0f8f9cdc/e/f2ac309f15103b1f1225eb56?renderMode=0&uiState=69c4908298c729a5b1bc7023" %}

<figure><img src="../../../.gitbook/assets/image (65).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/IMG_7007.jpg" alt=""><figcaption></figcaption></figure>

#### Concept Diagrams

<figure><img src="../../../.gitbook/assets/Untitled presentation (4).png" alt=""><figcaption><p>Chamber</p></figcaption></figure>

<figure><img src="../../../.gitbook/assets/Untitled presentation (5).png" alt=""><figcaption><p>Air Cooled Magnetron</p></figcaption></figure>



## Power Supply

The power supply consists of a 100W Radio transceiver, an antenna tuner, and a switching DC power supply to power the radio. The radio supplies a 14 MHz sine wave at 100 watts into an antenna tuner. The antenna tuner uses selectable inductors and a variable capacitor to tune the impedance of the system, and the output is connected to the magnetron via UHF cable.

The antenna tuner achieves 90-95% impedance matching, delivering 90-95 watts of forward power.

<div><figure><img src="../../../.gitbook/assets/IMG_7072.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7067.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7012.jpg" alt=""><figcaption></figcaption></figure></div>

## Testing/Verification

* Chamber reaches 8.6E-8 hPa base pressure
* Highly conductive Al films have been sputtered
* Insulating reactively Sputtered Al2O3 films have been sputtered
* Further characterization of films is actively being pursued

<figure><img src="../../../.gitbook/assets/unnamed (1).png" alt=""><figcaption><p>Glass microscope slide with Al sputtered onto it</p></figcaption></figure>

## Future/Pending Work

* Replace radio with signal generator and amplifier
* Build our own tuner/matching network (as it is literally just an inductor and variable capacitor)
* DIY substrate heater
* DIY QCM
* Automation/controls
* More film characterization, and experimentation with various target materials

## Lessons Learned

Many failures occurred over two iterations of the power supply and chamber. A more detailed collection and description of these is yet to be uploaded.

## Contacts

#### Primary Contacts

* Jay Kunselman
* Rahim Malik

#### Additional Contributors

* Matthew Moneck
* Marina Wang
* Shayaan Gandhi
* Meadow Webster
* Rachel Lewis
* Ayan Ghosh

## Misc. Images

<div><figure><img src="../../../.gitbook/assets/IMG_7087.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7088.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7041.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7042.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7043.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7021.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7024.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7029.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7037.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7030.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7034.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7020.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7023.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7038.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7033.jpg" alt=""><figcaption></figcaption></figure> <figure><img src="../../../.gitbook/assets/IMG_7025.jpg" alt=""><figcaption></figcaption></figure></div>





















