# CV Measurements

[Capacitance-voltage (CV) profiling](https://en.wikipedia.org/wiki/Capacitance%E2%80%93voltage\_profiling) is a powerful technique for characterizing semiconductor materials and devices, especially the transistors that we build in our fab. The shape of the CV curve will provide information about the doping concentration in the silicon substrate. On this page, we will detail how to take CV measurements of your devices.

## Equipment

* Probe station (see [here](https://hacker-fab.gitbook.io/hacker-fab-space/standard-operating-procedures/probe-station-sop) for standard operating procedure)
* Capacitance-voltage meter (i.e. Keithley 4200-SCS Semiconductor Parameter Analyzer)

## Procedure

**Prepare the Transistor:**

* Ensure that the transistor surface is as clean as possible to minimize probe-to-pad contact issues. It is helpful to have another user with you to properly align and contact the pads without damaging other probes or the transistor surface.
* Ensure that the transistor is properly connected and biased for C-V measurements (i.e. for an NMOS transistor, ground the bulk and source contacts, apply voltage from the gate or drain depending on the type of measurement).

**Measurement Setup:**

* Set up the CV measurement equipment, we use a Keithley 4200-SCS Parameter Analyzer as our test equipment and Probe Station for circuit connections. Please follow the steps given in the [Probe Station Manual](https://hacker-fab.gitbook.io/hacker-fab-space/standard-operating-procedures/probe-station-sop) to ensure proper probe-to-pad contact with the transistor.

<figure><img src="https://lh7-us.googleusercontent.com/docsz/AD_4nXeLnrjKgvwRcaiOd2ZYDf1bickrkS2UdN0-5ngOWsmr4AQ4onbxWc4vLd3A51aKI9hmMOb6ghW_50I6S7IclWgY-Dka3USGk_MerbW_Vypalr90ul65euzqKRWkCyFlLhpenJH1Vt5GaTUpI1hrVGLiC2W5?key=rqwKbhBnfjOinMLlc9410w" alt=""><figcaption></figcaption></figure>

<figure><img src="https://lh7-us.googleusercontent.com/docsz/AD_4nXfqQah5PeQl_hsUHfTk14kSPqHJi_5z7mSSuCmbswTfPtWkw5tN0WMchGlR6c6lR9zfPcqJrFA8f94vU80QjzBysXPOWzSe2P_dvuBP9yIjzzdCH4AxX497ZGr7BA0IcWlQv9KldKPAjxieLhx7xu-jmewB?key=rqwKbhBnfjOinMLlc9410w" alt=""><figcaption></figcaption></figure>

**Voltage Sweep:**

* If using an NMOS transistor with 3 terminals (i.e. no bulk contact), turn off the bulk probe on the KITE interface, ground the source pad, apply a small-signal AC voltage to the drain pad (constant frequency ideally above 100 Hz, low frequency measurements will be performed later), apply a large-signal DC voltage sweep to the gate pad (-8V to +8V for our case). Measure the total capacitance from the gate pad as well. If your NMOS transistor has a bulk pad as well, it is possible to modulate the bulk potential and model threshold voltage dependencies. For regular use, grounding the bulk and/or at least having it at the same potential as the source pad is ideal.
* It is also possible to model the MOSFET as a MOS capacitor instead by connecting source and drain to the ground and only by sweeping the gate voltage. This “topology” may be deemed ideal to extract capacitive parasitics from the measured total gate capacitance:
  * When in accumulation (VGS < 0), mobile holes from the p-type substrate form a dielectric region due to being attracted under the gate. The total gate capacitance is the sum of the gate-source and gate-drain overlap capacitances, along with the gate-bulk capacitance.
  * When in depletion (VGS is a small but positive voltage), some number of mobile electrons are attracted under the gate but not enough to fully invert the net channel charge, therefore the region under the gate simply becomes devoid of mobile charges, but becomes more negative as the gate voltage is increased. Total capacitance is the sum of the overlap capacitances (which are often neglected due to their small magnitude) and the oxide capacitance (between the gate oxide and the induced weak negative channel) in series with the depletion region capacitance. This parallel topology decreases the total capacitance.
  * When in inversion (VGS >> 0, much larger than the threshold voltage required to “turn on” the MOS), a substantial number of electrons are attracted under the gate such that a strong conduction channel forms. The conduction channel forms the bottom plate of this virtual capacitance, and the distance between this bottom plate and the gate decreases as the channel inversion becomes stronger (with increasing gate-source voltage), increasing the total capacitance. Apply a DC voltage sweep to the transistor, typically from negative to positive bias (usual measurement range is from -8V to +8V). Measure the capacitance at each bias voltage.

<figure><img src="https://lh7-us.googleusercontent.com/docsz/AD_4nXdN3KX7kgv4q3QoyrTT2-nC_odkvriBKX4XPsYKfk1Nm3WLgufuSDam1lL76UKzekrXORhf9YjULWoqwp-L3eWm7coakp-8MX2JdyvYklwIuxmCrXI8Mo9hk8ZMHh2A2FQyiR14e08rPf4g0ZXalX5tUJ8?key=rqwKbhBnfjOinMLlc9410w" alt=""><figcaption></figcaption></figure>

<figure><img src="https://lh7-us.googleusercontent.com/docsz/AD_4nXcqW4FuzDNTWkHgrRAKQB0_3EIzbMxfJjcBulgfgqE8ahViZhXdtCEbmR1iSP1NIfs5yCfzN7EDoIJ3tL8eKAQMxiws1LC4RFJaA4E9XlIkkHWPeW5v7mFXENBrk7U11XEHjTPNgOJOku2hONMeLbVoT34?key=rqwKbhBnfjOinMLlc9410w" alt=""><figcaption></figcaption></figure>

**Plotting CV Curves:** Plot the measured capacitance as a function of the bias voltage. Below is an example of a measured capacitance versus applied voltage (C-V) curve. Note the decrease in the total capacitance as the mode of operation changes from accumulation in the deep negative voltages to depletion as the capacitance decreases significantly. There is no bulk contact in this measured NMOS transistor, and therefore the inherent and uncontrollable modulation in the bulk potential may be preventing the change of the mode of operation from depletion to inversion (note the lack of increase in the capacitance as the gate potential approaches +8V).

<figure><img src="https://lh7-us.googleusercontent.com/docsz/AD_4nXf6KeLTFsk7iih49XCzv37y8B0o410cjLP_FmXPXgJJQNCWQ6PpjJD5jPs7x0gmKt88P--3wOzdSdDGkS3fJiclC_K9NOZBFDUMK9sSQM_03IDBbPl-efVedMPFZl6254r-Zgynzx1utwgkPWQ7KSPeUMWM?key=rqwKbhBnfjOinMLlc9410w" alt=""><figcaption></figcaption></figure>

**Analyzing C-V Curves:** The shape of the CV curve will provide information about the doping concentration in the silicon substrate.

* Dopant Concentration (ND): To measure the concentration of the deposited donor atoms, either the source or the drain terminal of the NMOS is used with respect to the bulk. If the drain and the gate are grounded, the subsequent capacitance measurements will be done between the bulk and the source terminals. Since the source and the bulk regions are oppositely doped, they form a p-n junction with a depletion region in between. This structure presents inherent diode and capacitive properties, which is ideal for doping concentration and profile measurements. The average doping should be extracted to later calculate the Debye length (in plasma physics, the distance at which a charge (among a sea of other charges) is shielded against electrostatic forces of a charged plane, such as that of a capacitor), flat band capacitance and bulk potential.
* Flatband Voltage: Flat band voltage is the voltage that must be applied to the gate terminal at which the metal-oxide-semiconductor interface potential becomes equal in magnitude to the built-in potential, making the surface potential zero. Since the presence of a flat band condition affects the accumulation of charges for accumulation or inversion channel formation, it is an important parameter to extract for the modeling of the threshold voltage. VFB is usually interpolated from the C-VGS curves, if and only if the doping profile is assumed to be uniform over the region and interface trap state density is large. Otherwise, measuring the flat band voltage is finicky at best and extremely difficult at worst due to our fabrication methods.
* Metal-Semiconductor Work Function Difference: The work function difference is a key parameter in determining the threshold voltage of the MOS transistor since the WMS forms a potential barrier against the inversion of the channel. The bulk potential, which is extracted using the doping profile, is an input to WMS.

**Model Fitting:** As a general rule of thumb, for long-channel devices such as ours, 1 MHz is the frequency at which high-frequency measurements are performed, while low-frequency measurements are generally performed at and below 100 kHz, down to 1-10 Hz.

Use semiconductor device simulation software or a theoretical model to fit the experimental CV curve to theoretical curves, which depend on the doping concentration. This can provide a more accurate estimation of the doping concentration. See the ideal CV curve below:

<figure><img src="https://lh7-us.googleusercontent.com/docsz/AD_4nXfhkwU7b4GohQ1y_R1YmHBEiS_9u-516byvlQpY89msd3KzQtMkt77F8jGZMenGfKEGZZSrLZ2RcUG2XelTwLgozfvhMrJqpNFiyclDuX8N8XHoNjfurVAUHtsjHUD-FzorjHvECQKN3C09gOuezqHfzlfP?key=rqwKbhBnfjOinMLlc9410w" alt=""><figcaption></figcaption></figure>

**Extract Parameters:** From the fitting or analysis, extract parameters such as doping concentration, and threshold voltage using known parameters such as oxide thickness. See page 10 of [this document](https://download.tek.com/document/4200%20CV%20ApplicationsGuide.pdf) for a detailed explanation of the relevant equations. [This file](https://drive.google.com/file/d/1TuPRLBXm4QXOR7Z9HQoaeVCm9O479WsW/view) has an implementation of those equations in MATLAB.

## Future Work

As of June 2024, we are currently working on our own custom probe station and source-measurement unit, as described [here](https://hacker-fab.gitbook.io/hacker-fab-space/\~/changes/vU3tiwdKZG4Nizoz15Q1/standard-operating-procedures/probe-station-sop-v2). Once this is complete, we will be able to use our new setup to take CV measurements. We will update this page accordingly once this is done.

## Reference Sources

* [C-V Testing for Components and Semiconductor Devices](https://download.tek.com/document/4200%20CV%20ApplicationsGuide.pdf)
* [Making Optimal Capacitance and AC Impedance Measurements with the 4200A-SCS Parameter Analyzer](https://download.tek.com/document/1KW-61528-1\_Making\_Optimal\_Capacitance\_and\_AC\_Impedance\_Measurements\_4200A-SCS\_040220.pdf)
