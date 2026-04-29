---
icon: bolt-lightning
---

# Film Characterization

#### Overview

This page documents characterization of sputtered thin films of Al and Al2O3. This is in support of the development of a CMOS process that uses a Si-Al2O3-Al gate stack. The NMOS process originally developed with Hacker Fab tooling relies on procuring wafers that already have a Si-SiO2-PolySi prefabricated gate. This prevents the expansion of the NMOS process into a CMOS process. For a CMOS process, it is necessary for the gate stack to be fabricated in house with Hacker Fab tooling. Sputtering of the gate stack from just an Al target is pursued as a potential option to mitigate the risks associated with gate oxide contamination. For context, growing a SiO2 gate oxide has been considered, but abandoned due to a few challenges. The main being contamination control of the gate oxide in an open air tube furnace, contamination that can be introduced between oxide growth and metal deposition for the gate, and the added complexity of dopant pile up + depletion (discussed in the Oxidation Effects Section of "Microchip Fabrication: A Practical Guide to Semiconductor Processing by Peter Van Zant"). Overall this intended process simplifies the tooling required to tape out devices (cuts out evaporator and plasma etcher). Sputtering allows for a low contamination oxide to be deposited, which is immediately covered with a metal gate contact without the chip ever exiting the clean vacuum environment of the sputtering chamber. The choice of Al2O3 as the oxide and Al as the metal is motivated by simplified process flow it allows, and relatively inexpensive target material (Al2O3 is sputtered reactively form an Al target, then Al is sputtered immediately after from the same target, avoiding the need for a 2 target system or a target swapping). Al2O3 has favorable dielectric constant and band alignment, but there are risks related to charge traps forming at the Si-Al2O3 interface. Attempts are made to tune the process to mitigate this interface effect.

There are two distinct sections related to the sputtered Al2O3 and Al thin film documentation.

1\) Film characterization (AFM, XPS, 4 point probe, XRR, Optical imaging) under various processing conditions.

2\) CMOS process development which further charcterizes the Al2O3 as a gate oxide linked below.

{% content-ref url="../../../processes/cmos-sputtered-gate-stack-wip.md" %}
[cmos-sputtered-gate-stack-wip.md](../../../processes/cmos-sputtered-gate-stack-wip.md)
{% endcontent-ref %}

#### Deposition Methodology

All films were deposited using RF sputtering via the Hacker Fab DIY RF sputtering chamber. More details on executing the methodology below can be found in the SOP. All depositions were done with a [99.999% pure 2" 1/8" thick Al target](https://www.lesker.com/newweb/deposition_materials/depositionmaterials_sputtertargets_1.cfm?pgid=al1) and UHP O2 and/or Ar. So, Al2O3 films are dpsosited reactively, not from an Al2O3 target.

​

1. ​First 1cmx1cm chips are cleaved from SSP, p-Si 5-10ohm (100), 525 um thick wafers using a tungsten tip scribe.
2. ​Chips are cleaned with a variation of the RCA cleaning process (one of the tested variables). All beakers used are fused quartz to prevent contaminant leaching, all graduated cylinders are polypropylene. After cleaning, chips are blown dry with N2 then immediately loaded into the sputtering chamber.
3. ​The chamber is pumped down to 1.2E-7 hPa.
4. ​UHP Ar is flowed into the chamber as the pump speed is reduced to reach higher pressure for striking plasma.
5. ​Plasma is struck at 90 SCCM Ar (usually 1.6E-1 hPa) with 100W RF power with the shutter closed to prevent deposition on the chip.
6. ​Ar flow is reduced to 30 SCCM Ar, resulting in 1.2E-2 hPa, the system is left in this state for 15 minutes to plasma clean the target surface (the native oxide/nitride that forms on Al target and the contaminants that come with it are sputtered off and evacuated)
7. ​The plasma is turned off and the pump speed is returned to max speed, Ar flow is shut off. The system repumps down to 1.2E-7 hPa to ensure all liberated contaminants are evacuated.
8. ​Again pump speed is reduced while Ar is flowed, and plasma is struck. For Al films, Ar flow is reduced to the desired setpoint. For Al2O3 films, UHP O2 flow is added,and Ar flow is reduced to the desired setpoint. Plasma is left for 5 minutes with shutter closed to ensure SWR (rf power tuning parameter) has stabilized.
9. ​The shutter is opened, and the deposition timer begins. SWR retuning throughout deposition occurs as necessary
10. ​When the timer ends plasma is turned off, Ar and O2 flow shut off, and the pump turned off. The chamber is vented and the chip is retrieved.
11. ​For back to back Al2O3 then Al deposition. The chamber is not vented, instead the chamber is pumped down, and the target recleaned in between to ensure no introduction of contaminants.

O2 annealing method: For this study, a DIY heating element was added into the chamber. More details will be found in the sputtering "Add ons and WIP" page. The O2 anneal is done in a vacuum O2 environment inside the sputtering chamber. This allows the Al2O3 to be annealed in a clean environment without any exposure to outside environment between loading the sample, and covering the al2o3 film with Al). Specifically, the chamber is pumped down, then pump speed is reduced and 50SCCM of UHP O2 is flowed in to achieve 3E-2 hPa. Then the heater is tuned on for a set period of time. The chip is allowed to cool to below 50C before either retrieving or covering with an Al film.

In the following data, 12:6 15:3, 9:9, 15:0 or 30:0 indiactes the Ar:O2 flow ratio used during deposition.

## Film Characterization (Al and Al2O3)

#### Thickness/Deposition Rate Measurements

For thickness measurement, XRR and optical relfectometry was used. A great reference on the XRR technique is included below. XRR is very accurate thickness measurement technique that uses x-ray interence from the film surface and interface reflections to determine thickness. Similar but not equal to the principle of Bragg diffrction for powder XRD for measuring atmoic plane spacings.

{% file src="../../../.gitbook/assets/X-ray thin-film measurement techniques_V_X-ray reflectivity measurement.pdf" %}

<table><thead><tr><th width="92.45452880859375">Film Type</th><th width="119.81817626953125">Flow Ratio (SCCM Ar : SCCM O2)</th><th width="119.8179931640625">Deposition Time</th><th width="210.636474609375">Thickness Measurement</th><th>Deposition Rate</th></tr></thead><tbody><tr><td>Al2O3</td><td>9:9</td><td>3 hours</td><td><p>Reflectometry </p><p>(assume n = 1.6): </p><p>47.2 nm,  std = 1.8nm </p><p>(5 measurements)</p></td><td>.26 nm/min</td></tr><tr><td>Al2O3</td><td>9:9</td><td>1 hour</td><td><p>XRR: 15.1 nm </p><p>(single measurement)</p></td><td>.25 nm/min</td></tr><tr><td>Al</td><td>15:0</td><td>30 minutes</td><td><p>XRR: 74.8 </p><p>(single measurement)</p></td><td>2.49 nm/min</td></tr></tbody></table>

#### Sputtered Al Resisitivity

To measure the Al resistivty, a 150 nm thick Al film was deposited on a glass slide, then a 4 point probe measurement was used to measure sheet resistance (removes the contribution of contact resistance), from which resistivity is calcualted (resistivity = sheet ressitance \* film thickness). It is important to use a insulating susbtrate (unlike doped Si) so that the substrate doesn't cause an artificially low sheet resistance measurment. Additionally, the glass susbtrate is sufficently wide (compared to the probe spacing) to not have to add a correction factor.&#x20;

150nm was used to avoid the resistivity size effect observed in the work **"Aluminum Ultra Thin Film Grown by Physical Vapor Deposition for Solar Cell Electric Nanocontacts"** by **Abdennaceur Karoui.**&#x20;

{% file src="../../../.gitbook/assets/Aluminum Ultra Thin Film Grown by Physical Vapor Deposition for Solar Cell Electric Nanocontacts by Abdennaceur Karoui..pdf" %}

<figure><img src="../../../.gitbook/assets/image (389).png" alt="" width="375"><figcaption><p>Al film resisitivity size effect observed in <strong>"Aluminum Ultra Thin Film Grown by Physical Vapor Deposition for Solar Cell Electric Nanocontacts"</strong> by <strong>Abdennaceur Karoui.</strong></p></figcaption></figure>

Each data point below is an average of 5 measurments in the smae spot. Raw data attached below.

{% file src="../../../.gitbook/assets/4 point probe data 150nm thick Al.csv" %}

<figure><img src="../../../.gitbook/assets/image (374).png" alt=""><figcaption></figcaption></figure>

| Sample                                            | Sheet resistacne at 150nm | Resistivity at 150nm |
| ------------------------------------------------- | ------------------------- | -------------------- |
| 150nm thick Al sputtered at 4E-3 hPa (15 sccm Ar) | .229 ohm/sqaure           | 3.44E-8 ohm.m        |

#### Al and Al2O3 Surface Topology

<table><thead><tr><th width="77.8182373046875">Film</th><th width="125.81805419921875">Flow Ratio                (SCCM Ar : SCCM O2)</th><th width="146.18212890625">Deposition pressure (hPa)                         (turbo pump speed kept at 250Hz)</th><th width="120.727294921875">Deposition Time (minutes)</th><th width="122.90911865234375">RMS Surface Roughness (nm)</th><th width="308.3638916015625">AFM Image</th><th width="444.36376953125">AHM Topology Histogram</th></tr></thead><tbody><tr><td>Al2O3</td><td>25:5</td><td>1.2x10-2</td><td>60 </td><td>0.139</td><td><img src="../../../.gitbook/assets/unknown (35).png" alt="" data-size="original"></td><td><img src="../../../.gitbook/assets/unknown (36).png" alt=""></td></tr><tr><td>Al2O3</td><td>15:3</td><td>5.4x10-3</td><td>60</td><td>5.74</td><td><img src="../../../.gitbook/assets/unknown (37).png" alt=""></td><td><img src="../../../.gitbook/assets/unknown (38).png" alt=""></td></tr><tr><td>Al2O3</td><td>12:6</td><td>6.3x10-3</td><td>60</td><td>2.782</td><td><img src="../../../.gitbook/assets/unknown (43).png" alt=""></td><td><img src="../../../.gitbook/assets/unknown (44).png" alt=""></td></tr><tr><td>Al2O3</td><td>9:9</td><td>6.3x10-3</td><td>60</td><td>2.044</td><td><img src="../../../.gitbook/assets/unknown (45).png" alt=""></td><td><img src="../../../.gitbook/assets/unknown (46).png" alt=""></td></tr><tr><td>Al</td><td>30:0</td><td>1.2x10-2</td><td>30</td><td>19.833</td><td><img src="../../../.gitbook/assets/unknown (41).png" alt=""></td><td><img src="../../../.gitbook/assets/unknown (42).png" alt=""></td></tr><tr><td>Al</td><td>15:0</td><td>4x10-3</td><td>30</td><td>13.099</td><td><img src="../../../.gitbook/assets/unknown (39).png" alt=""></td><td><img src="../../../.gitbook/assets/unknown (40).png" alt=""></td></tr><tr><td>Al2O3</td><td>9:9, with post deposition O2 anneal.</td><td>6.3E-3</td><td>80</td><td>.768</td><td><img src="../../../.gitbook/assets/unknown (47).png" alt=""></td><td></td></tr></tbody></table>

#### Al2O3 XPS Data

Al2O3 films, 60 minute deposition time, 250Hz pump speed.

XPS is used to understand oxidation states and composition. her only oxdidation states are analyzed from Al2p peak position. Since Al2O3 is insualting, charging occurs during XPS and chifts the measured peaks. So, this is corrected for by looking at the C-C peak position (always present on the surface of a sample exposed to air), determing how far it is from the tabulated reference, then shifting all measured peaks by that amount (in eV).

Tabulated XPS peak positions by element can be found from [ThermoFisher here](https://www.thermofisher.com/us/en/home/materials-science/learning-center/periodic-table.html).

Below is the raw data collected for XPS, and a vibe coded python notebook used for analysis and plotting.

{% file src="../../../.gitbook/assets/XPS data plotting-analysis vibe coded.ipynb" %}

{% file src="../../../.gitbook/assets/XPS data 3-20-26-20260410T184735Z-3-001.zip" %}

<figure><img src="../../../.gitbook/assets/image (370).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (372).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (373).png" alt=""><figcaption></figcaption></figure>

| Flow Ratio (SCCM Ar : SCCM O2) | Al2p Peak Position | O1s Peak Position |
| ------------------------------ | ------------------ | ----------------- |
| 15:3                           | 74.1 eV            | 531.3 eV          |
| 12:6                           | 74.2 eV            | 531.1 eV          |
| 9:9                            | 74.2 eV            | 531.1 eV          |

ThermoFisher reports the Al2p binding energy for alumium oxide to be 74.6 eV, and the O1s binding energy for aluminum oxide to be 531.1. 15:3 deviates the most from the reference.

Peak fitting still needs to be done to detmerine composition.

#### Uniformity (unassessed)

All tests have been done on 1cmx1cm chips, so uniformity has not been assessed. It is of interest to process many chips at once, which may span the area of a standard 4" wafer, so uniformity will eventually be assessed quantitatively. Qualityatviy;, it seems that there is a <2" diameter area that appears to have a similar deposition rate. Below is an image of Al2O3 sputtered about \~50nm thick (which is just as Al2O3 begins to be visible to the eye on a wafer) with a relatively short 3" throw distance on a 4" diameter wafer. There is an obvious decrease in film thickness begging about 1" from the center of the wafer.

<figure><img src="../../../.gitbook/assets/image (375).png" alt="" width="188"><figcaption></figcaption></figure>

The diameter of the dark space shield is only 1.25", which is significantly smaller than the target diameter. A wider and beveled dark space shield would certainly increase uniformity, and will be considered in the future. People replicating the chamber should also consider improving the design of the dark space shield.

#### Blister Defects

In the reactively sputtered Al2O3 films, a bubble-like defect was observed. After some research, it was determined that these types of thin film defects are called "blisters" and are essentially a bubble in the film, caused by some type of trapped gas.

Summary of blister defect observations (RCA clean with middle step HF dip)

* Only occured in Al2O3 films
* High variability in blister size (\~1-100 um in diameter) and density vhip to chip and spatially on single chips
* Almost always circular, sometimes ovular.
* Thicker films had higher blister density (some observed in 15nm films, many observed in 45nm films.

<figure><img src="../../../.gitbook/assets/image (9).png" alt=""><figcaption><p>Blisters observed in 45nm thick reactively sputtered Al2O3 (9:9 flow ratio)</p></figcaption></figure>

I could not find any literature directly discussing blisters in sputtered Al2O3, however, I found some papers on trapped Ar in specific types of sputtered metal films. The images of blisters in these papers did not have similar morphology to the ones we observed, and this mechanism didn't seem to make sense given our low sputtering rates. There is a small body of literature documenting blister defects in ALD deposited thin films, which look identical to the blisters we observed. A zip file of the relevant literature collected is found below.

{% file src="../../../.gitbook/assets/Blister Defect References-20260410T224919Z-3-001.zip" %}

Below is an image from the work **"Analysis of blister formation in spatial ALD** ![](data:image/gif;base64,R0lGODlhAQABAIAAAP///wAAACH5BAEAAAAALAAAAAABAAEAAAICRAEAOw==) **for silicon surface passivation in photovoltaics"** by **L. Hennen** of blisters in ALD depsoited Al2O3.

<figure><img src="../../../.gitbook/assets/image (1) (1).png" alt=""><figcaption><p>Image from the work <strong>"Analysis of blister formation in spatial ALD  for silicon surface passivation in photovoltaics"</strong> by <strong>L. Hennen</strong> of blisters in ALD depsoited Al2O3.</p></figcaption></figure>

The blisters in ALD films are said to come from trapped species, mainly H and/or H2O which can diffuse and agglomerate at the Al2O3-Si interface. The H source is cited as being the metal organic precursors used in the ALD process. However, in sputtering there is no obvious source of H, other than what may be on the surface of the Si before any film is deposited. Based on this, it was suspected that the blister formation was surface preparation dependent. When considering surface preparation modifications to solve the blisters, the RCA clean that was being done could not be removed as it is vital for metal ion removal which is vital for gate performance. So, attempts were made to dehydrate the chip before deposition, and heat the chip during deposition. both of which failed. What ended up working, is incorporating an HF dip at the end of the RCA clean (often called HF last RCA clean and is common practice prior to to a gate oxide deposition or growth). In theory, the HF last dip etches native SiO2 and H passivates the bare Si surface making it hydrophobic, lowering the amount of H2O or organic contaminants that could cling to the surface between the cleaning and loading into the sputtering chamber. Without the HF last step, the Si should have a thin native oxide that is OH passivated, and hydrophilic. This is confirmed by observations of the chip surface with RCA vs RCA HF last cleaning: During normal RCA cleaning, the chip stays wet with the Final DI water rinse, where as with HF last RCA cleaning, the chip behaves very hydrophobic, and appears dry even after a DI water rinse.

Initially the HF last cleaning was purposefully avoided to retain an thin SiO2 layer between the Si and Al2O3 to reduce the number of dangling bonds which usually occur at a pristine Si-Al2O3 interface at the cost of a higher EOT in MOSCaps and MOSFETs. However, based on the blister defect issue, an HF last clean had to be used. Note that all the AFM images included above are done on chips that had a standard RCA clean, with the exception of the O2 annealed sample. It is unclear how much this may affect surface roughness, but needs to be noted as an uncontrolled variable in the surface roughness comparison between annealed and non annealed Al2O3.

| Attempt to prevent blisters                                                                                                                                                                 | Result                                                                                               |
| ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------- |
| 200C vaccuum bake (50sccm Ar \~3E-2 hPa) in sputtering chamber prior to deposition (to dehydrate)                                                                                           | High blister density                                                                                 |
| 200C substrate heating during deposition (to facilitate volatite diffusion away from film - Si interface, may have had opposite effect).                                                    | High blister density                                                                                 |
| Alternate substrate type - used a wafer with 500nm polySi deposited on it (has rougher surface than regualr Si wafers, literature shows limited/no blister formation with rougher surfaces) | No blisters observed                                                                                 |
| HF dip post RCA clean (remove native oxide and create temporary hydrophobic H passivated surface)                                                                                           | Almost no blisters observed (some near edges where tweezer was used to handle, otherwise very clear) |

As seen above, it was also observed that no blisteres formed in films deposited on a polySi surface, which has higher surface roughness. This same phenomenon is observed in   **"Analysis of blister formation in spatial ALD** ![](data:image/gif;base64,R0lGODlhAQABAIAAAP///wAAACH5BAEAAAAALAAAAAABAAEAAAICRAEAOw==) **for silicon surface passivation in photovoltaics"** by **L. Hennen**, as seen by the figure below, where "wafer side B" has notably higher surface roughness than "wafer Side A."

<figure><img src="../../../.gitbook/assets/image (7).png" alt=""><figcaption></figcaption></figure>

From all these observations, it is conlcluded that the blisters are a result of the surface prepartion techniques, and HF last RCA cleaning is neccesssary over standard RCA clean to prevent blister defects and allow for use of sputtered Al2O3 as a gate dielectric.
