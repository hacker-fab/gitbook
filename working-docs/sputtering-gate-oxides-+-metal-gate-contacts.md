# Sputtering Gate Oxides + Metal Gate Contacts



## Motivation:

A metal oxide semiconductor field effect transistor (MOSFET) is essentially made up of two opposing PN junctions and a metal oxide semiconductor capacitor (MOSCap). The current Hacker Fab NMOS process begins with a wafer which already has 20 nm of SiO2 on the surface of the Si, and 500 nm of polysilicon deposited on top of the SiO2. In the final MOSFet device, the SiO2 acts as the oxide and the polySi acts as the “metal” in the MOSCap present within the NMOSFET. This process flow prevents the simultaneous fabrication of PMOSFETs, which is necessary to make CMOS devices. To make CMOS devices, we need to begin with a bare Si wafer, and make the MOSFets “oxide”/dielectric layer ourselves Due to this, and other concerns with the NMOS process flow, Hacker Fab needs to develop the capability to grow or deposit dielectric thin films to act as the oxide. However, the oxide is the thinnest film in the device, and the film most sensitive to impurities. For this reason, the process to deposit gate oxides is the most likely to have quality issues.

Based on this need, and surveying our options for making our own gate oxide, we began building an RF sputtering chamber in the F24 semester (@ CMU). RF sputtering has the capability to deposit thin films of dielectric and conducting materials.



## Goals

* Deposit 40-50nm thick Al2O3 layers to use a gate dielectric in CMOS process
* Deposit 100 nm thick Al2O3 layers to make electrical contact to the gate dielectric, and protect the sensitive gate dielectric. This is to be done in the same process step as the Al2O3 deposition.

### Metrics

| Al2O3 Property      |               |
| ------------------- | ------------- |
| Dielectric constant | >8            |
| Resistivity         | 10^-12 ohm-cm |
| Surface Roughness   | 5 nm          |

The metrics defined above are dependent on other metrics, such as stoichiometry, which is effected by processing parameters like sputtering power and O2 flow rate etc.&#x20;

| Al Metrics        |             |
| ----------------- | ----------- |
| Resistivity       | 3E-6 ohm-cm |
| Surface Roughness | 15 nm       |

Working Folder in Google Drive: [https://drive.google.com/drive/folders/1\_SNzkVnHybTjfvlqHM6ZcEksfZroROLm](https://drive.google.com/drive/folders/1_SNzkVnHybTjfvlqHM6ZcEksfZroROLm)
