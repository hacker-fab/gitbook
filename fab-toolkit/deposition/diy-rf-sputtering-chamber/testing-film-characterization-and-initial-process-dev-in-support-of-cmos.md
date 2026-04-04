---
icon: bolt-lightning
---

# Testing (film characterization, and initial process dev in support of CMOS)

## Film Characterization (Al and Al2O3)

Explanation of methods, data commentary, conclusions and next steps to be added by 4/5/26

#### Thickness/Deposition Rate Measurements

<table><thead><tr><th width="92.45452880859375">Film Type</th><th width="119.81817626953125">Flow Ratio (SCCM Ar : SCCM O2)</th><th width="119.8179931640625">Deposition Time</th><th width="210.636474609375">Thickness Measurement</th><th>Deposition Rate</th></tr></thead><tbody><tr><td>Al2O3</td><td>9:9</td><td>3 hours</td><td><p>Reflectometry </p><p>(assume n = 1.6): </p><p>47.2 nm,  std = 1.8nm </p><p>(5 measurements)</p></td><td>.26 nm/min</td></tr><tr><td>Al2O3</td><td>9:9</td><td>1 hour</td><td><p>XRR: 15.1 nm </p><p>(single measurement)</p></td><td>.25 nm/min</td></tr><tr><td>Al</td><td>15:0</td><td>30 minutes</td><td><p>XRR: 74.8 </p><p>(single measurement)</p></td><td>2.49 nm/min</td></tr></tbody></table>

#### Sputtered Al Resisitivity

<figure><img src="../../../.gitbook/assets/image (374).png" alt=""><figcaption></figcaption></figure>

#### Al and Al2O3 Surface Topology

<table data-header-hidden><thead><tr><th width="77.8182373046875">Film</th><th width="125.81805419921875">Flow Ratio                (SCCM Ar : SCCM O2)</th><th width="146.18212890625">Deposition pressure (hPa)                         (turbo pump speed kept at 250Hz)</th><th width="120.727294921875">Deposition Time (minutes)</th><th width="122.90911865234375">RMS Surface Roughness (nm)</th><th width="308.3638916015625">AFM Image</th><th width="444.36376953125">AHM Topology Histogram</th></tr></thead><tbody><tr><td>Al2O3</td><td>25:5</td><td>1.2x10-2</td><td>60 </td><td>0.139</td><td><img src="../../../.gitbook/assets/unknown (35).png" alt="" data-size="original"></td><td><img src="../../../.gitbook/assets/unknown (36).png" alt=""></td></tr><tr><td>Al2O3</td><td>15:3</td><td>5.4x10-3</td><td>60</td><td>5.74</td><td><img src="../../../.gitbook/assets/unknown (37).png" alt=""></td><td><img src="../../../.gitbook/assets/unknown (38).png" alt=""></td></tr><tr><td>Al2O3</td><td>12:6</td><td>6.3x10-3</td><td>60</td><td>2.782</td><td><img src="../../../.gitbook/assets/unknown (43).png" alt=""></td><td><img src="../../../.gitbook/assets/unknown (44).png" alt=""></td></tr><tr><td>Al2O3</td><td>9:9</td><td>6.3x10-3</td><td>60</td><td>2.044</td><td><img src="../../../.gitbook/assets/unknown (45).png" alt=""></td><td><img src="../../../.gitbook/assets/unknown (46).png" alt=""></td></tr><tr><td>Al</td><td>30:0</td><td>1.2x10-2</td><td>30</td><td>19.833</td><td><img src="../../../.gitbook/assets/unknown (41).png" alt=""></td><td><img src="../../../.gitbook/assets/unknown (42).png" alt=""></td></tr><tr><td>Al</td><td>15:0</td><td>4x10-3</td><td>30</td><td>13.099</td><td><img src="../../../.gitbook/assets/unknown (39).png" alt=""></td><td><img src="../../../.gitbook/assets/unknown (40).png" alt=""></td></tr><tr><td>Al2O3</td><td>9:9, with post deposition O2 anneal.</td><td>6.3E-3</td><td>80</td><td>.768</td><td><img src="../../../.gitbook/assets/unknown (47).png" alt=""></td><td></td></tr></tbody></table>

#### Al2O3 XPS Data

Al2O3 films, 60 minute deposition time, 250Hz pump speed.

<figure><img src="../../../.gitbook/assets/image (370).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (372).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (373).png" alt=""><figcaption></figcaption></figure>

| Flow Ratio (SCCM Ar : SCCM O2) | Al2p Peak Position | O1s Peak Position |
| ------------------------------ | ------------------ | ----------------- |
| 15:3                           | 74.1 eV            | 531.3 eV          |
| 12:6                           | 74.2 eV            | 531.1 eV          |
| 9:9                            | 74.2 eV            | 531.1 eV          |

#### Uniformity (unassessed)

All tests have been done on 1cmx1cm chips, so uniformity has not been assessed. It is of interest to process many chips at once, which may span the area of a standard 4" wafer, so uniformity will eventually be assessed quantitatively. Qualityatviy;, it seems that there is a <2" diameter area that appears to have a similar deposition rate. Below is an image of Al2O3 sputtered about \~50nm thick (which is just as Al2O3 begins to be visible to the eye on a wafer) with a relatively short 3" throw distance on a 4" diameter wafer. There is an obvious decrease in film thickness begging about 1" from the center of the wafer.

<figure><img src="../../../.gitbook/assets/image (375).png" alt="" width="188"><figcaption></figcaption></figure>

The diameter of the dark space shield is only 1.25", which is significantly smaller than the target diameter. A wider and beveled dark space shield would certainly increase uniformity, and will be considered in the future. People replicating the chamber should also consider improving the design of the dark space shield.

## Device data (TLM, MOSCap, MOSFET)

To be uploaded by 4/5/26

<br>
