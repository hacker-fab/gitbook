---
description: >-
  This page contains information about the state of the ALD project as of August
  2025. This is the most recent update for the project, and focuses on control
  systems + precursor handling.
---

# Summer 2025 CMU Update

## Progress&#x20;

### Control Systems

**Software**&#x20;

The ALD valves and heating elements were previously controlled through LabVIEW, but we have found it easier to use one main Arduino program loop to control both elements. Through the use of bang-bang controls, this program reads thermocouple values and uses them to actuate relays connected to heating elements in order to maintain a predetermined setpoint temperature. The heating elements include the substrate heater and heating tapes that control the temperature of the precursors and delivery line. This program is also responsible for actuating the ALD valves based on the number of pulses and duration of each of the pulses. For easier use, a GUI is being built to easily control all these factors. The instructions to use this program and GUI can be found in the controls folder of the ALD Github [here](https://github.com/hacker-fab/ald).

As for the chamber pressure and carrier gas flow controls, protocols are still the same with manual control of both the throttle valve and mass flow controller (MCF).

<figure><img src="../../../.gitbook/assets/image.png" alt=""><figcaption><p>Visual representation of the GUI (in development) that will be used during testing in order to control the number of pulses, pulse time, and purge time of one specified valve. </p></figcaption></figure>

**Hardware**&#x20;

Since the Spring 2025 semester, there have been many changes to the hardware for the ALD. Starting with the Arduino stack, our current stack include the following:&#x20;

* Arduino Uno Rev3
* 4-channel k-type thermocouple sensor MAX31855 Arduino shield&#x20;
* 4-channel j-type thermocouple sensor MAX31855 Arduino shield&#x20;
* Screw terminal block breakout shield&#x20;

The Arduino stack, along with other electrical components, will be placed within a NEMA enclosure to ensure safe-handling of high currents and voltages in case of an electrical failure or accident.&#x20;

The NEMA enclosure and wiring:

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXcCcf71d6hsJuLZ7-ezpUEQ_IYmOJtGf-VimwVOp6qizAgfcWSxwO_OJvhPGVi6zwg_9JkId1WLSgzrCYoSusXmcHEedREy6uSAJAs80fRQD2yFRF4IDNNaKwHllDkRan2qb6npfg?key=LnU0XhOCfLStAR3KNGouYg" alt=""><figcaption><p>Schematic of the wiring within the NEMA enclosure.</p></figcaption></figure>

For the wires to run in and out of the enclosure safely, cable glands were used on the back and side of the enclosure.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXd1CHWVTEVLkaQqJF4SQUR0DmFGFkRN62LFKZX_2CClKDyJi9YaQwRhWHE3EoV0YmMCfL9r8XOwSYZM97hOdXvfv7M7ciDgdWw40Ubs2WKhFjipUW4uwVHWNpz28nG5SLiaDSRv?key=LnU0XhOCfLStAR3KNGouYg" alt=""><figcaption><p>Cable glands on the back-side of the enclosure.</p></figcaption></figure>

The three ALD valve wires are each split into neutral and live wires that are extended to the blue and yellow wires that lead to the cable glands into the enclosure. The middle connection is through plugs that ensures electrical contact.&#x20;

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXeYT7lMwkukNrg3RbKxTFpZ726c6Sq5d46jj1P9pESu7HvLN_qK_Yg7a-cz13bO1yiojsp4Ecl6wegbbDh8wwQQcjv5OyCQhO1waUG3TatrBUHCuy9pEIIbpIeXUquv87YkCjPjHw?key=LnU0XhOCfLStAR3KNGouYg" alt=""><figcaption><p>Wiring connection between the ALD valve wires and the yellow and blue wires that lead to the enclosure. </p></figcaption></figure>

The heating tapes are to a male and female extension cable with the heating tape prongs going into the female end of the cable. The male end of the extension cable has been cut off and split based on the neutral and live wiring and wired into the 8-shield relay and bus bar accordingly.&#x20;

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXf2l_UrF0TjdyOwn5T3cfKlBrgn3kaMQ6D_zO1ZsUmGRmVR53p8cFAf5mC32Qm0Xol3I83yBf1_KeSqAE7NpbFeWWF-vEQr51Ehd1IU3SMpGUbN9MiyBRgbt6UgXZCawG_x_ZbC3Q?key=LnU0XhOCfLStAR3KNGouYg" alt=""><figcaption><p>Wiring of the heating tapes and the extension cable. </p></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (1).png" alt=""><figcaption><p> Visual of the inside of the NEMA enclosure for our ALD system, along with variac and DC power supply used for heating.</p></figcaption></figure>

### Other Design Choices&#x20;

We have changed the front panel of the chamber that previously had a glass window to one that is completely aluminum. The glass on the window would reach an unsafe temperature based on our operating conditions and wanted to minimize the amount of heat lost.&#x20;

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXd2MCFwEA0B4nK8CTPWOYTUYKcQA_Kt0SlIlI9QaRAXFknFAcNpc3uj7VAA1AzKJWZDeReiSKIbpmCQkkkkiQmt1mP7woQLkvvslVmdKMrspHH5PWGS7Tx0nFc7o0Ppm9xj4QAZ8A?key=LnU0XhOCfLStAR3KNGouYg" alt=""><figcaption><p>Current chamber design with the aluminum front door with no glass window. </p></figcaption></figure>

The thermocouple for the substrate heater has been switched to one that is coated with PFA which is compatible with the precursors and byproducts. This thermocouple uses j-type, so we bought the 4-channel j-type thermocouple sensor MAX31855 Arduino shield along with the j-type extender to the enclosure.&#x20;

### Precursor Compatibility Chart&#x20;

(Only for certain precursors based on the oxide of choice)

| <p><br></p>                     | Al2O3 | Al2O3 | Al2O3   | ITO  | ITO    | ITO                                                                                                                         | ITO     | ITO                                 |
| ------------------------------- | ----- | ----- | ------- | ---- | ------ | --------------------------------------------------------------------------------------------------------------------------- | ------- | ----------------------------------- |
| Precursors/ expected byproducts | TMA   | Water | Methane | TMIn | TDMASn | Water                                                                                                                       | Methane | <p>Dimethylamine</p><p>HN(CH3)2</p> |
| PVC                             | ❌     | ✅     | ✅       | ❌    | ❌      | ✅                                                                                                                           | ✅       | ❌                                   |
| Polypropylene                   | ❌     | ✅     | ✅       | ❌    | ❌      | ✅                                                                                                                           | ✅       | ✅                                   |
| Stainless steel                 | ✅     | ✅     | ✅       | ✅    | ✅      | ✅                                                                                                                           | ✅       | ✅                                   |
| PLA                             | ❌     | ✅     | ✅       | ❌    | ❌      | ✅                                                                                                                           | ✅       | ❌                                   |
| PETG                            | ❌     | ✅     | ✅       | ❌    | ❌      | ✅                                                                                                                           | ✅       | ❌                                   |
| PTFE                            | ✅     | ✅     | ✅       | ✅    | ✅      | ✅[t](https://www.calpaclab.com/teflon-ptfe-compatibility/?srsltid=AfmBOopRLIZT663Z8BCPsSAB9AWismKeuQo5zKICJiLoeJqjqPJgDIRA) | ✅       | ✅                                   |
| PFA                             | ✅     | ✅     | ✅       | ✅    | ✅      | ✅                                                                                                                           | ✅       | ✅                                   |

| <p><br></p>                     | HfO2   | HfO2  | HfO2                                | ZrO2    | ZrO2  | ZrO2                                           |
| ------------------------------- | ------ | ----- | ----------------------------------- | ------- | ----- | ---------------------------------------------- |
| Precursors/ expected byproducts | TDMAHf | Water | <p>Dimethylamine</p><p>HN(CH3)2</p> | TDMA-Zr | Water | <p>Dimethylamine</p><p>HN(CH3)2</p><p><br></p> |
| PVC                             | ❌      | ✅     | ✅                                   | ❌       | ✅     | ❌                                              |
| Polypropylene                   | ❌      | ✅     | ✅                                   | ❌       | ✅     | ✅                                              |
| Stainless steel                 | ✅      | ✅     | ✅                                   | ✅       | ✅     | ✅                                              |
| PLA                             | ❌      | ✅     | ✅                                   | ❌       | ✅     | ❌                                              |
| PETG                            | ❌      | ✅     | ✅                                   | ❌       | ✅     | ❌                                              |
| PTFE                            | ✅      | ✅     | ✅                                   | ✅       | ✅     | ✅                                              |
| PFA                             | ✅      | ✅     | ✅                                   | ✅       | ✅     | ✅                                              |

### Trap System&#x20;

The company Mass-Vac has [posi-trap vacuum traps](https://www.massvac.com/posi-trap/) that we will be using to trap the precursors and byproducts created from the process. There will be three 4” traps in sequential order with the following filter elements:&#x20;

* Ammoniasorb (for amines)
* Activated charcoal (for organic vapors)
* Stainless steel gauze (for condensable particles and oil vapors)

Note: You are able to choose between two models that can be more suitable for your set up, including a right-angle or straight-through shape for the posi-traps.&#x20;

This trap system will be after the chamber and before the vacuum pump to prevent major damage on the pump and filter out the chemicals before entering the exhaust. To know when to switch the filter elements of the traps, you can put one pressure gauge on the inlet side and another on the outlet side of the trap configuration. When there is a significant pressure difference between the two gauges, it is a good indicator to switch out the filter elements.&#x20;



**\*\*\*Add a picture of how our traps are set up\*\*\***

### Exhaust System&#x20;

\*\*\***Additional information on changes from the original layout**\*\*\*

The exhaust system is composed of aluminum and stainless steel to ensure safety and contain the gases to the vent. The following will be a list of components from the 6” vent outlet to the pump:&#x20;

* 6” to 3” reducer&#x20;
* ...\


### Process Parameters

**Hafnium oxide (HfO2)**

| Component                         | Value                                                                                      | Sources                                                                                                                                                                                                                                                                                                                     |
| --------------------------------- | ------------------------------------------------------------------------------------------ | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| N2 carrier gas flow rate (sccm)   | 20                                                                                         | [https://onlinelibrary.wiley.com/doi/full/10.1002/pssr.202400202](https://onlinelibrary.wiley.com/doi/full/10.1002/pssr.202400202)                                                                                                                                                                                          |
| TDMAHf  pulse time (s)            | 0.04 to 0.1                                                                                | [https://pmc.ncbi.nlm.nih.gov/articles/PMC10254648/](https://pmc.ncbi.nlm.nih.gov/articles/PMC10254648/)                                                                                                                                                                                                                    |
| H2O pulse time (s)                | 0.04 to 0.1                                                                                | [https://pmc.ncbi.nlm.nih.gov/articles/PMC10254648/](https://pmc.ncbi.nlm.nih.gov/articles/PMC10254648/)                                                                                                                                                                                                                    |
| Purge time (s)                    | 10                                                                                         | [https://pmc.ncbi.nlm.nih.gov/articles/PMC10254648/](https://pmc.ncbi.nlm.nih.gov/articles/PMC10254648/)                                                                                                                                                                                                                    |
| Number of cycles                  | (Variable)                                                                                 | N/A                                                                                                                                                                                                                                                                                                                         |
| Substrate heater temperature (ºC) | <p>85 to 350 (above 200 decrease purge time to 5 seconds) </p><p><br></p><p>275 to 300</p> | <p><a href="https://pmc.ncbi.nlm.nih.gov/articles/PMC10254648/">https://pmc.ncbi.nlm.nih.gov/articles/PMC10254648/</a></p><p><br></p><p><a href="https://www.sciencedirect.com/science/article/pii/S2468023023008684">https://www.sciencedirect.com/science/article/pii/S2468023023008684</a></p>                           |
| Bubbler temp. for TDMAHf (ºC)     | 75 or 80                                                                                   | <p><a href="https://onlinelibrary.wiley.com/doi/full/10.1002/pssr.202400202">https://onlinelibrary.wiley.com/doi/full/10.1002/pssr.202400202</a></p><p><br></p><p><a href="https://www.sciencedirect.com/science/article/pii/S2468023023008684">https://www.sciencedirect.com/science/article/pii/S2468023023008684</a></p> |
| Bubbler temp. for H2O (ºC)        | 25 (room temp. should be fine?)                                                            | [https://www.svta.com/uploads/documents/NorthstarALDOperationManual.pdf](https://www.svta.com/uploads/documents/NorthstarALDOperationManual.pdf)                                                                                                                                                                            |
| Valve line temp. (ºC)             | 100                                                                                        | [https://www.sciencedirect.com/science/article/pii/S2468023023008684](https://www.sciencedirect.com/science/article/pii/S2468023023008684)                                                                                                                                                                                  |
| Chamber pressure (mTorr)          | 1000??                                                                                     | [https://www.sciencedirect.com/science/article/pii/S2468023023008684](https://www.sciencedirect.com/science/article/pii/S2468023023008684)                                                                                                                                                                                  |



**Zirconium oxide (ZrO2)**

| Component                         | Value                           | Source                                                                                   |
| --------------------------------- | ------------------------------- | ---------------------------------------------------------------------------------------- |
| N2 carrier gas flow rate (sccm)   | 20                              | [https://www.osti.gov/servlets/purl/1763732](https://www.osti.gov/servlets/purl/1763732) |
| TDMAZr  pulse time (s)            | 0.03                            |                                                                                          |
| H2O pulse time (s)                | 0.015                           |                                                                                          |
| Purge time (s)                    | 10 to 30                        |                                                                                          |
| Number of cycles                  | 100 to 300                      |                                                                                          |
| Substrate heater temperature (ºC) | 100 to 275                      |                                                                                          |
| Bubbler temp. for TDMAZr (ºC)     | 75                              |                                                                                          |
| Bubbler temp. for H2O (ºC)        | 25 (room temp. should be fine?) |                                                                                          |
| Valve line temp. (ºC)             | 90                              |                                                                                          |
| Chamber pressure (mTorr)          | 300 to 400                      |                                                                                          |



**Aluminum Oxide (Al2O3)**

| Component                         | Value                           | Source                                                                                                                                                                                                          |
| --------------------------------- | ------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| N2 carrier gas flow rate (sccm)   | 150                             | [https://www.mdpi.com/2079-6412/14/5/578](https://www.mdpi.com/2079-6412/14/5/578)                                                                                                                              |
| TMA pulse time (s)                | 0.09                            | [https://www.mdpi.com/2079-6412/14/5/578](https://www.mdpi.com/2079-6412/14/5/578)                                                                                                                              |
| H2O pulse time (s)                | 0.09                            | [https://www.mdpi.com/2079-6412/14/5/578](https://www.mdpi.com/2079-6412/14/5/578)                                                                                                                              |
| Purge time (s)                    | 15                              | [https://www.svta.com/uploads/documents/NorthstarALDOperationManual.pdf](https://www.svta.com/uploads/documents/NorthstarALDOperationManual.pdf)                                                                |
| Number of cycles                  | 1000                            | [https://www.mdpi.com/2079-6412/14/5/578](https://www.mdpi.com/2079-6412/14/5/578)                                                                                                                              |
| Substrate heater temperature (ºC) | 150 to 300                      | [https://www.mdpi.com/2079-6412/14/5/578](https://www.mdpi.com/2079-6412/14/5/578)                                                                                                                              |
| Bubbler temp. for TMA (ºC)        | 25 (room temp. should be fine?) | [https://www.svta.com/uploads/documents/NorthstarALDOperationManual.pdf](https://www.svta.com/uploads/documents/NorthstarALDOperationManual.pdf)                                                                |
| Bubbler temp. for H2O (ºC)        | 25 (room temp. should be fine?) | [https://www.svta.com/uploads/documents/NorthstarALDOperationManual.pdf](https://www.svta.com/uploads/documents/NorthstarALDOperationManual.pdf)                                                                |
| Valve line temp. (ºC)             | 150                             | [https://www.nanofab.utah.edu/wp-content/uploads/2022/10/Fiji\_F200\_V2\_installation-and-use-manual.pdf](https://www.nanofab.utah.edu/wp-content/uploads/2022/10/Fiji_F200_V2_installation-and-use-manual.pdf) |
| Chamber pressure (mTorr)          | 170                             | [https://www.svta.com/uploads/documents/NorthstarALDOperationManual.pdf](https://www.svta.com/uploads/documents/NorthstarALDOperationManual.pdf)                                                                |



**ITO**

| Component                              | Value                           | Sources                                                                                                                                              |
| -------------------------------------- | ------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------- |
| N2 carrier gas flow rate (sccm)        | 100 (40 in the paper)           | [https://engineering.purdue.edu/\~yep/Papers/TED\_2021\_ALD%20ITO\_ASAP.pdf](https://engineering.purdue.edu/~yep/Papers/TED_2021_ALD%20ITO_ASAP.pdf) |
| In:Sn                                  | 9:1                             | [https://engineering.purdue.edu/\~yep/Papers/TED\_2021\_ALD%20ITO\_ASAP.pdf](https://engineering.purdue.edu/~yep/Papers/TED_2021_ALD%20ITO_ASAP.pdf) |
| TDMASn pulse time (s)                  | 2                               | [https://engineering.purdue.edu/\~yep/Papers/TED\_2021\_ALD%20ITO\_ASAP.pdf](https://engineering.purdue.edu/~yep/Papers/TED_2021_ALD%20ITO_ASAP.pdf) |
| H2O pulse time for TDMASn (s)          | 1                               | [https://engineering.purdue.edu/\~yep/Papers/TED\_2021\_ALD%20ITO\_ASAP.pdf](https://engineering.purdue.edu/~yep/Papers/TED_2021_ALD%20ITO_ASAP.pdf) |
| Purge time for TDMASn (s)              | 30                              | [https://docs.hackerfab.org/home/fab-toolkit/deposition/diy-ald](https://docs.hackerfab.org/home/fab-toolkit/deposition/diy-ald)                     |
| TMIn pulse time (s)                    | 0.625                           | [https://engineering.purdue.edu/\~yep/Papers/TED\_2021\_ALD%20ITO\_ASAP.pdf](https://engineering.purdue.edu/~yep/Papers/TED_2021_ALD%20ITO_ASAP.pdf) |
| H2O pulse time for TMIn (s)            | 0.75                            | [https://engineering.purdue.edu/\~yep/Papers/TED\_2021\_ALD%20ITO\_ASAP.pdf](https://engineering.purdue.edu/~yep/Papers/TED_2021_ALD%20ITO_ASAP.pdf) |
| Purge time for TMIn (s)                | 10                              | [https://docs.hackerfab.org/home/fab-toolkit/deposition/diy-ald](https://docs.hackerfab.org/home/fab-toolkit/deposition/diy-ald)                     |
| Number of cycles                       | (Variable)                      | N/A                                                                                                                                                  |
| Substrate heater temperature (ºC)      | 225                             | [https://engineering.purdue.edu/\~yep/Papers/TED\_2021\_ALD%20ITO\_ASAP.pdf](https://engineering.purdue.edu/~yep/Papers/TED_2021_ALD%20ITO_ASAP.pdf) |
| Bubbler temp. for TDMASn and TMIn (ºC) | 60                              | [https://engineering.purdue.edu/\~yep/Papers/TED\_2021\_ALD%20ITO\_ASAP.pdf](https://engineering.purdue.edu/~yep/Papers/TED_2021_ALD%20ITO_ASAP.pdf) |
| Bubbler temp. for H2O (ºC)n            | 25 (room temp. should be fine?) | [https://www.svta.com/uploads/documents/NorthstarALDOperationManual.pdf](https://www.svta.com/uploads/documents/NorthstarALDOperationManual.pdf)     |
| Valve line temp. (ºC)                  | 110                             | \*\*\*Check below                                                                                                                                    |
| Chamber pressure (mTorr)               | <100                            | [https://docs.hackerfab.org/home/fab-toolkit/deposition/diy-ald](https://docs.hackerfab.org/home/fab-toolkit/deposition/diy-ald)                     |

\*\*\*Valve line temp. for ITO

[This](https://chemgroups.northwestern.edu/hupp/Publications/243.pdf) article deposits tin oxide, keeping the TDMASn bubbler at 40 ºC and the tubing for that connection at 150ºC to prevent condensation to the chamber walls.&#x20;

[This](https://pubs.aip.org/aip/jcp/article/158/17/174313/2888844/Thermal-decomposition-of-trimethylindium-and) source states that TMI decomposition in the gas phase is feasible at T = 120–535 °C in an N2 environment.&#x20;

[This](https://www.sciencedirect.com/science/article/pii/S0169433214012987) source states that a temperature range of 70–150 °C will volatilize around 92% of the TDMASn. Above 150 °C but below 230 °C, TDMASn is easily volatilize. 230 °C is when TDMASn starts to decompose.&#x20;

### Testing&#x20;

Chamber pressure&#x20;

**(To be filled)**\


Heating elements

**(To be filled)**\


## Key Components

ALD precursors and co-reactants are self-limiting&#x20;

1. Precursor and co-reactant selection
   1. Have to be reactive with the surface groups&#x20;
   2. Volatility, thermal stability, and reactivity have to be high
   3. Different ways to deliver the precursor to the chamber
2. Chemical composition
   1. Checking if the intended materials are being deposited through X-ray photoelectron spectroscopy (XPS) or four-point probe conductivity measurement&#x20;
   2. Optimization of the parameters
   3. Chemical composition and stoichiometry will determine the final material properties&#x20;
3. Thickness control
   1. Want to deposit the same amount of material in each cycle&#x20;
   2. Thickness is determined per cycle (growth per cycle or GPC)
   3. Keep track of material increase during deposition and deposit multiple samples with a varying number of cycles (Thickness vs. ALD cycles)&#x20;
   4. Focus of thicker films over 15 nm
   5. Determining film thickness:
      1. Spectroscopic ellipsometry&#x20;
      2. Number of deposited atoms (rutherford backscattering spectroscopy)
      3. Deposited mass (quartz-crystal microbalance or QCM)
4. Saturation
   1. Need to optimize precursor dosing time, precursor purging time, co-reactant dosing time, and co-reactant purging time (two-step process)
   2. Choose a relatively long time for three of the four while varying the fourth&#x20;
   3. Confirm saturation when increasing the dosing or purging time does not increase or decrease the GPC any more (do with all steps of the procedure)
   4.  Phenomena that deviate the saturation curve&#x20;

       1. Precursor condensation and decomposition (precursor curve)
       2. Too short co-reactant dosing times (impurity incorporation)
       3. Too short purging times (parasitic components impacting conformality and uniformity&#x20;
       4. Too long dosing and purging times can slow down the process

       <figure><img src="../../../.gitbook/assets/image (2).png" alt=""><figcaption></figcaption></figure>
5. Material properties
   1. Optical properties (refractive index, absorption coefficient)
   2. Electrical properties (resistivity, carrier density, mobility)
   3. Surface morphology (roughness, crystallinity)
6.  Temperature dependence

    1. ALD window where the GPC is nearly constant for reliability and repeatability despite slight change in temperature
    2. Constant GPC is not necessary but verifying saturation is important for all varied temperatures&#x20;
    3. Temperature dependent GPC exist but show saturating ALD behavior over a wide temp. range

    <figure><img src="../../../.gitbook/assets/image (3).png" alt=""><figcaption></figcaption></figure>
7. Uniformity&#x20;
   1. Verified saturation in one area doesn’t mean dosing is sufficient everywhere
   2. Place the largest fitting substrate into the chamber and check for thickness variation as well as material properties
      1. Thickness uniformity may be good but the resistivity might vary significantly over the substrate&#x20;
8. Conformality&#x20;
   1. Ability to deposit on 3D structures with no variation in thickness (trenches or vias)
   2.  Check for conformality

       1. Deposit a vertical trench or via with a certain aspect ration (AR = height/width)
       2. After deposition, calculate the ratio at different locations in comparison to the thickness at the surface&#x20;
       3. There is also the Pillar Hall aspect ratio test

       <figure><img src="../../../.gitbook/assets/image (4).png" alt=""><figcaption></figcaption></figure>
9. Nucleation behavior&#x20;
   1. Different film growth behavior from beginning to end
   2. Linear growth, accelerated growth, and delayed growth
   3. Nucleation behavior can affect material properties (defects, pinhole density, crystalline structure, and film resistivity)&#x20;
   4. Nucleation behavior depends on the growth mode
      1. Island growth forms isolated clusters that will eventually grow into a continuous film
      2. Layer-by-layer growth
   5. Growth mode depends on the difference in surface energy (substrate and deposited film)
   6. GPC increase after crystallization after a certain thickness
10. Other important aspects
    1. Stability of the films over time and sensitivity to the environment
    2. Reproducible film thickness and properties
    3. Avoid overdosing and required precursor dosing depends on the surface area of the substrate (larger when working with 3D substrates)
    4. Precursors can degrade after prolonged heating so turn off the heating when not depositing
