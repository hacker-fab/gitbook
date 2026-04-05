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

## Device data (MOSCap, TLM, MOSFET)

To be completed by 4/6/26



#### MOSCap Capacitance and Conductance Profiling

Summary/Comparison

<figure><img src="../../../.gitbook/assets/image (25).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (26).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (27).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (24).png" alt=""><figcaption></figcaption></figure>

| Processing Conditions             | Al2O3 thickness (nm) | K (raw data) | K (slope method, raw data) | Vfb (P -> N, raw data) | Vfb (N -> P, raw data) | delta Vfb (raw data) | k (corrected data) | k (slope method, corrected data) | Vfb (P -> N, corrected data) | Vfb (N -> P, corrected data) | delta Vfb (corrected data) | G peak (Siemens) (P -> N) | G peak (Siemens) (N -> P) | Series Resistance (Ohms) (calculated) |
| --------------------------------- | -------------------- | ------------ | -------------------------- | ---------------------- | ---------------------- | -------------------- | ------------------ | -------------------------------- | ---------------------------- | ---------------------------- | -------------------------- | ------------------------- | ------------------------- | ------------------------------------- |
| Standard RCA clean                | 45                   | 7.1          | 4.7                        | -0.20                  | -1.15                  | 0.95                 | 7.2                | 4.9                              | -0.20                        | -1.10                        | 0.90                       | 2.2E-05                   | 2.3E-05                   | 565.95                                |
| Standard RCA clean                | 15                   | 5.3          | 2.4                        | -0.80                  | -1.20                  | 0.40                 | 5.5                | 2.5                              | -0.70                        | -1.00                        | 0.30                       | 8.3E-05                   | 8.3E-05                   | 495.45                                |
| HF-Last RCA clean                 | 45                   | 7.4          | 4.7                        | -1.90                  | -2.20                  | 0.30                 | 7.4                | 4.8                              | -1.85                        | -2.15                        | 0.30                       | 1.9E-05                   | 2.0E-05                   | 260.67                                |
| HF-Last RCA clean                 | 20                   | 6.6          | 3.2                        | -1.05                  | -1.85                  | 0.80                 | 6.7                | 3.4                              | -0.95                        | -1.70                        | 0.75                       | 7.5E-05                   | 8.3E-05                   | 289.87                                |
| HF-Last RCA clean, 450C O2 anneal | 20                   | 4.7          | 2.8                        | -4.35                  | -4.70                  | 0.35                 | 5.3                | 3.1                              | -4.15                        | -4.45                        | 0.30                       | 8.1E-05                   | 9.0E-05                   | 910.06                                |

#### MOSCap Leakage Current

<figure><img src="../../../.gitbook/assets/image (64).png" alt=""><figcaption></figcaption></figure>

## Appendix

#### 9:9, 3hr, Standard RCA Clean

<figure><img src="../../../.gitbook/assets/image (29).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (30).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (31).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (32).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (33).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (40).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (34).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (35).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (36).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (37).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (38).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (39).png" alt="" width="375"><figcaption></figcaption></figure>

| size (area)       | frequency | area\_mm2 | k\_avg\_raw | k\_slope\_avg\_raw | Vfb\_PN\_avg\_raw | Vfb\_NP\_avg\_raw | deltaVfb\_avg\_raw | k\_avg\_corrected | k\_slope\_avg\_corrected | Vfb\_PN\_avg\_corrected | Vfb\_NP\_avg\_corrected | deltaVfb\_avg\_corrected | Gpeak\_PN\_S | Gpeak\_NP\_S | Rs\_mean\_ohm |
| ----------------- | --------: | --------: | ----------: | -----------------: | ----------------: | ----------------: | -----------------: | ----------------: | -----------------------: | ----------------------: | ----------------------: | -----------------------: | -----------: | -----------: | ------------: |
| Small (0.2 mm²)   |     10KHz |      0.20 |    7.428647 |           5.073352 |              0.35 |             -0.90 |               1.25 |          9.863421 |                 4.937214 |                    0.05 |                   -1.35 |                     1.40 |     0.000012 |     0.000012 |  20992.490094 |
| Small (0.2 mm²)   |    100KHz |      0.20 |    7.114325 |           4.743494 |             -0.20 |             -1.15 |               0.95 |          7.186758 |                 4.910686 |                   -0.20 |                   -1.10 |                     0.90 |     0.000022 |     0.000023 |    565.949437 |
| Small (0.2 mm²)   |      1MHz |      0.20 |    6.768461 |           1.728415 |             -0.60 |             -1.40 |               0.80 |          7.379437 |                 6.553137 |                   -0.50 |                   -1.30 |                     0.80 |     0.000512 |     0.000514 |    165.844804 |
| Medium (0.79 mm²) |     10KHz |      0.79 |    6.697895 |           5.073352 |              0.45 |             -0.60 |               1.05 |          6.800300 |                 4.937214 |                    0.50 |                   -0.55 |                     1.05 |     0.000009 |     0.000010 |   1349.595597 |
| Medium (0.79 mm²) |    100KHz |      0.79 |    6.529448 |           4.743494 |             -0.10 |             -0.95 |               0.85 |          6.571378 |                 4.910686 |                    0.00 |                   -0.85 |                     0.85 |     0.000095 |     0.000099 |    124.666071 |
| Medium (0.79 mm²) |      1MHz |      0.79 |    5.318851 |           1.728415 |             -0.45 |             -1.30 |               0.85 |          7.888473 |                 6.553137 |                   -0.40 |                   -1.25 |                     0.85 |     0.003640 |     0.003644 |     90.601948 |
| Large (1.77 mm²)  |     10KHz |      1.77 |    5.409678 |           5.073352 |              0.40 |             -0.25 |               0.65 |          5.535893 |                 4.937214 |                    0.45 |                   -0.10 |                     0.55 |     0.000023 |     0.000023 |   1002.470871 |
| Large (1.77 mm²)  |    100KHz |      1.77 |    5.092326 |           4.743494 |             -0.15 |             -0.60 |               0.45 |          5.241898 |                 4.910686 |                    0.00 |                   -0.45 |                     0.45 |     0.000241 |     0.000233 |    132.262058 |
| Large (1.77 mm²)  |      1MHz |      1.77 |    2.455902 |           1.728415 |             -0.35 |             -0.40 |               0.05 |          6.723377 |                 6.553137 |                   -0.45 |                   -0.50 |                     0.05 |     0.006887 |     0.006341 |    107.769918 |

#### 9:9, 1hr, Standard RCA Clean

<figure><img src="../../../.gitbook/assets/image (41).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (42).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (43).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (44).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (45).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (46).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (47).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (48).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (49).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (50).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (51).png" alt="" width="375"><figcaption></figcaption></figure>

| size (area)       | frequency | area\_mm2 | k\_avg\_raw | k\_slope\_avg\_raw | Vfb\_PN\_avg\_raw | Vfb\_NP\_avg\_raw | deltaVfb\_avg\_raw | k\_avg\_corrected | k\_slope\_avg\_corrected | Vfb\_PN\_avg\_corrected | Vfb\_NP\_avg\_corrected | deltaVfb\_avg\_corrected | Gpeak\_PN\_S | Gpeak\_NP\_S | Rs\_mean\_ohm |
| ----------------- | --------: | --------: | ----------: | -----------------: | ----------------: | ----------------: | -----------------: | ----------------: | -----------------------: | ----------------------: | ----------------------: | -----------------------: | -----------: | -----------: | ------------: |
| Small (0.2 mm²)   |     10KHz |      0.20 |    6.141816 |           0.904621 |             -0.30 |             -1.00 |               0.70 |         13.045352 |                 0.173698 |                   -0.75 |                   -0.80 |                     0.05 |     0.000052 |     0.000056 |   9025.245375 |
| Small (0.2 mm²)   |    100KHz |      0.20 |    5.301111 |           2.379235 |             -0.80 |             -1.20 |               0.40 |          5.513058 |                 2.470873 |                   -0.70 |                   -1.00 |                     0.30 |     0.000083 |     0.000083 |    495.445897 |
| Small (0.2 mm²)   |      1MHz |      0.20 |    3.828395 |           0.381960 |             -1.10 |             -1.55 |               0.45 |          5.758140 |                 3.908771 |                   -1.00 |                   -1.35 |                     0.35 |     0.002048 |     0.002042 |    166.487007 |
| Medium (0.79 mm²) |     10KHz |      0.79 |    3.996518 |           0.904621 |             -0.25 |             -0.60 |               0.35 |          5.358427 |                 0.173698 |                   -0.40 |                   -0.70 |                     0.30 |     0.000075 |     0.000072 |   3649.048078 |
| Medium (0.79 mm²) |    100KHz |      0.79 |    3.610729 |           2.379235 |             -0.55 |             -0.95 |               0.40 |          3.720343 |                 2.470873 |                   -0.50 |                   -0.80 |                     0.30 |     0.000190 |     0.000199 |    159.210655 |
| Medium (0.79 mm²) |      1MHz |      0.79 |    1.724243 |           0.381960 |             -0.85 |             -1.25 |               0.40 |          4.774321 |                 3.908771 |                   -1.00 |                   -1.30 |                     0.30 |     0.006874 |     0.006886 |     95.271610 |
| Large (1.77 mm²)  |     10KHz |      1.77 |    1.616946 |           0.904621 |             -1.45 |             -0.60 |               0.85 |          1.759600 |                 0.173698 |                   -1.40 |                   -0.60 |                     0.80 |     0.000002 |     0.000061 |   1696.143692 |
| Large (1.77 mm²)  |    100KHz |      1.77 |    2.742960 |           2.379235 |             -0.35 |             -0.75 |               0.40 |          2.847340 |                 2.470873 |                   -0.35 |                   -0.70 |                     0.35 |     0.000355 |     0.000355 |    104.022923 |
| Large (1.77 mm²)  |      1MHz |      1.77 |    0.803455 |           0.381960 |             -0.40 |             -0.75 |               0.35 |          4.144864 |                 3.908771 |                   -0.55 |                   -0.95 |                     0.40 |     0.010591 |     0.010604 |     77.807216 |

#### 9:9, 3 hr, HF last

<figure><img src="../../../.gitbook/assets/image (52).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (53).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (54).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (55).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (56).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (57).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (58).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (59).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (60).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (61).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (62).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (63).png" alt="" width="375"><figcaption></figcaption></figure>

| size (area)       | frequency | area\_mm2 | k\_avg\_raw | k\_slope\_avg\_raw | Vfb\_PN\_avg\_raw | Vfb\_NP\_avg\_raw | deltaVfb\_avg\_raw | k\_avg\_corrected | k\_slope\_avg\_corrected | Vfb\_PN\_avg\_corrected | Vfb\_NP\_avg\_corrected | deltaVfb\_avg\_corrected | Gpeak\_PN\_S | Gpeak\_NP\_S | Rs\_mean\_ohm |
| ----------------- | --------: | --------: | ----------: | -----------------: | ----------------: | ----------------: | -----------------: | ----------------: | -----------------------: | ----------------------: | ----------------------: | -----------------------: | -----------: | -----------: | ------------: |
| Small (0.2 mm²)   |     10KHz |      0.20 |    7.685834 |           5.625961 |             -1.45 |             -1.90 |               0.45 |          7.766772 |                 5.877118 |                   -1.40 |                   -1.85 |                     0.45 |     0.000002 |     0.000002 |   3053.672852 |
| Small (0.2 mm²)   |    100KHz |      0.20 |    7.396978 |           4.707130 |             -1.90 |             -2.20 |               0.30 |          7.414154 |                 4.847823 |                   -1.85 |                   -2.15 |                     0.30 |     0.000019 |     0.000020 |    260.665467 |
| Small (0.2 mm²)   |      1MHz |      0.20 |    6.890245 |           2.242337 |             -2.25 |             -2.55 |               0.30 |          7.407294 |                 4.727527 |                   -2.20 |                   -2.45 |                     0.25 |     0.000470 |     0.000471 |    148.915132 |
| Medium (0.79 mm²) |     10KHz |      0.79 |    7.129632 |           5.625961 |             -0.90 |             -1.30 |               0.40 |          7.175604 |                 5.877118 |                   -0.85 |                   -1.25 |                     0.40 |     0.000008 |     0.000009 |   1143.266648 |
| Medium (0.79 mm²) |    100KHz |      0.79 |    6.360197 |           4.707130 |             -1.25 |             -1.60 |               0.35 |          6.415378 |                 4.847823 |                   -1.20 |                   -1.55 |                     0.35 |     0.000085 |     0.000090 |    147.965410 |
| Medium (0.79 mm²) |      1MHz |      0.79 |    5.041438 |           2.242337 |             -1.55 |             -1.95 |               0.40 |          6.663681 |                 4.727527 |                   -1.50 |                   -1.85 |                     0.35 |     0.002853 |     0.002849 |     87.454312 |
| Large (1.77 mm²)  |     10KHz |      1.77 |    5.925761 |           5.625961 |             -1.75 |             -2.05 |               0.30 |          6.146619 |                 5.877118 |                   -1.60 |                   -1.85 |                     0.25 |     0.000026 |     0.000026 |   1447.212115 |
| Large (1.77 mm²)  |    100KHz |      1.77 |    5.077424 |           4.707130 |             -2.15 |             -2.35 |               0.20 |          5.200458 |                 4.847823 |                   -2.05 |                   -2.25 |                     0.20 |     0.000191 |     0.000195 |    136.210088 |
| Large (1.77 mm²)  |      1MHz |      1.77 |    2.878274 |           2.242337 |             -2.25 |             -2.50 |               0.25 |          5.116181 |                 4.727527 |                   -2.30 |                   -2.55 |                     0.25 |     0.005637 |     0.005627 |     79.692297 |

#### 9:9, 80 min, HF last

<figure><img src="../../../.gitbook/assets/image.png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (1).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (2).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (3).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (4).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (5).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (6).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (7).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (8).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (9).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (10).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (11).png" alt="" width="375"><figcaption></figcaption></figure>

| size (area)       | frequency | area\_mm2 | k\_avg\_raw | k\_slope\_avg\_raw | Vfb\_PN\_avg\_raw | Vfb\_NP\_avg\_raw | deltaVfb\_avg\_raw | k\_avg\_corrected | k\_slope\_avg\_corrected | Vfb\_PN\_avg\_corrected | Vfb\_NP\_avg\_corrected | deltaVfb\_avg\_corrected | Gpeak\_PN\_S | Gpeak\_NP\_S | Rs\_mean\_ohm |
| ----------------- | --------: | --------: | ----------: | -----------------: | ----------------: | ----------------: | -----------------: | ----------------: | -----------------------: | ----------------------: | ----------------------: | -----------------------: | -----------: | -----------: | ------------: |
| Small (0.2 mm²)   |     10KHz |      0.20 |    7.226328 |           4.517307 |             -0.30 |             -1.45 |               1.15 |         11.470554 |                 4.553309 |                   -1.85 |                   -1.70 |                     0.15 |     0.000034 |     0.000027 |   3265.030912 |
| Small (0.2 mm²)   |    100KHz |      0.20 |    6.614153 |           3.185460 |             -1.05 |             -1.85 |               0.80 |          6.721767 |                 3.417425 |                   -0.95 |                   -1.70 |                     0.75 |     0.000075 |     0.000083 |    289.871676 |
| Small (0.2 mm²)   |      1MHz |      0.20 |    4.991604 |           0.455764 |             -1.55 |             -2.45 |               0.90 |          7.040173 |                 5.204334 |                   -1.35 |                   -2.05 |                     0.70 |     0.001855 |     0.001850 |    162.998687 |
| Medium (0.79 mm²) |     10KHz |      0.79 |    6.424663 |           4.517307 |             -0.45 |             -1.65 |               1.20 |          6.597815 |                 4.553309 |                   -0.40 |                   -1.55 |                     1.15 |     0.000027 |     0.000027 |   1121.137288 |
| Medium (0.79 mm²) |    100KHz |      0.79 |    5.074745 |           3.185460 |             -1.15 |             -1.90 |               0.75 |          5.259125 |                 3.417425 |                   -1.10 |                   -1.75 |                     0.65 |     0.000245 |     0.000268 |    163.635326 |
| Medium (0.79 mm²) |      1MHz |      0.79 |    2.018435 |           0.455764 |             -1.50 |             -2.35 |               0.85 |          6.804791 |                 5.204334 |                   -1.50 |                   -2.25 |                     0.75 |     0.006929 |     0.006923 |    105.118284 |
| Large (1.77 mm²)  |     10KHz |      1.77 |    4.906795 |           4.517307 |             -0.90 |             -1.85 |               0.95 |          5.354940 |                 4.553309 |                   -0.85 |                   -1.70 |                     0.85 |     0.000085 |     0.000083 |   1191.643675 |
| Large (1.77 mm²)  |    100KHz |      1.77 |    3.642597 |           3.185460 |             -1.60 |             -2.20 |               0.60 |          3.859411 |                 3.417425 |                   -1.50 |                   -2.00 |                     0.50 |     0.000497 |     0.000502 |    128.614905 |
| Large (1.77 mm²)  |      1MHz |      1.77 |    0.996573 |           0.455764 |             -1.75 |             -2.35 |               0.60 |          5.489297 |                 5.204334 |                   -1.90 |                   -2.45 |                     0.55 |     0.010393 |     0.010387 |     82.599948 |

#### 9:9, 80 min, HF last, 450C 30 min O2 anneal

<figure><img src="../../../.gitbook/assets/image (12).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (13).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (14).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (15).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (16).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (17).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (18).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (19).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (20).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (21).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (22).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../../.gitbook/assets/image (23).png" alt="" width="375"><figcaption></figcaption></figure>

| size (area)       | frequency | area\_mm2 | k\_avg\_raw | k\_slope\_avg\_raw | Vfb\_PN\_avg\_raw | Vfb\_NP\_avg\_raw | deltaVfb\_avg\_raw | k\_avg\_corrected | k\_slope\_avg\_corrected | Vfb\_PN\_avg\_corrected | Vfb\_NP\_avg\_corrected | deltaVfb\_avg\_corrected | Gpeak\_PN\_S | Gpeak\_NP\_S | Rs\_mean\_ohm |
| ----------------- | --------: | --------: | ----------: | -----------------: | ----------------: | ----------------: | -----------------: | ----------------: | -----------------------: | ----------------------: | ----------------------: | -----------------------: | -----------: | -----------: | ------------: |
| Small (0.2 mm²)   |     10KHz |      0.20 |    5.725439 |           3.625706 |             -3.35 |             -4.30 |               0.95 |         10.969794 |                 3.796601 |                   -3.20 |                   -4.55 |                     1.35 |     0.000007 |     0.000026 |   4665.743838 |
| Small (0.2 mm²)   |    100KHz |      0.20 |    4.742700 |           2.765370 |             -4.35 |             -4.70 |               0.35 |          5.292607 |                 3.124594 |                   -4.15 |                   -4.45 |                     0.30 |     0.000081 |     0.000090 |    910.056283 |
| Small (0.2 mm²)   |      1MHz |      0.20 |    2.901555 |           0.793532 |             -4.75 |             -4.95 |               0.20 |          4.029582 |                 2.940564 |                   -4.65 |                   -4.85 |                     0.20 |     0.000823 |     0.000622 |    273.774244 |
| Medium (0.79 mm²) |     10KHz |      0.79 |    4.972657 |           3.625706 |             -3.15 |             -4.30 |               1.15 |          5.803228 |                 3.796601 |                   -2.95 |                   -3.70 |                     0.75 |     0.000029 |     0.000053 |   2254.233872 |
| Medium (0.79 mm²) |    100KHz |      0.79 |    3.760431 |           2.765370 |             -4.50 |             -4.75 |               0.25 |          4.186907 |                 3.124594 |                   -4.30 |                   -4.55 |                     0.25 |     0.000289 |     0.000286 |    309.539446 |
| Medium (0.79 mm²) |      1MHz |      0.79 |    1.665962 |           0.793532 |             -4.75 |             -4.95 |               0.20 |          3.416144 |                 2.940564 |                   -4.80 |                   -5.00 |                     0.20 |     0.002619 |     0.001648 |    137.554599 |
| Large (1.77 mm²)  |     10KHz |      1.77 |    3.918623 |           3.625706 |             -3.10 |             -4.35 |               1.25 |          4.620144 |                 3.796601 |                   -3.05 |                   -3.90 |                     0.85 |     0.000062 |     0.000073 |   1385.010681 |
| Large (1.77 mm²)  |    100KHz |      1.77 |    3.022550 |           2.765370 |             -4.30 |             -4.65 |               0.35 |          3.404616 |                 3.124594 |                   -4.10 |                   -4.50 |                     0.40 |     0.000523 |     0.000518 |    210.306410 |
| Large (1.77 mm²)  |      1MHz |      1.77 |    1.054850 |           0.793532 |             -4.35 |             -4.65 |               0.30 |          3.077261 |                 2.940564 |                   -4.65 |                   -4.90 |                     0.25 |     0.005672 |     0.003891 |     97.212422 |
