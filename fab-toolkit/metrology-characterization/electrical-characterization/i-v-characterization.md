# I-V Characterization

Current-voltage (I-V) characterization measures how the current through a device changes with applied voltage. It is one of the most basic electrical measurements used to characterize semiconductor devices.\
\
The shape of an I-V curve tells us how a device conducts under different bias conditions. Depending on the device, it can be used to determine parameters such as resistance, threshold voltage, leakage current, forward voltage, breakdown voltage, and contact behavior.

### **How does it work?**

An I-V measurement is performed by applying a voltage to the device and measuring the resulting current. The applied voltage is swept across a selected range, and the current is measured at each voltage point.

<figure><img src="../../../.gitbook/assets/IV Measurement.png" alt="" width="563"><figcaption><p><strong>Basic I-V measurement principle.</strong> A voltage is applied to the DUT while the resulting current is measured. Sweeping the applied voltage produces the I-V characteristic of the device.</p></figcaption></figure>

The result is a set of voltage and current measurements that can be plotted as an **I-V curve:**

$$
I=f(V)
$$

Different devices produce very different I-V characteristics. A resistor produces an approximately linear relationship between voltage and current, while semiconductor devices such as diodes and transistors generally show nonlinear behavior.

<figure><img src="../../../.gitbook/assets/IV graph (1).png" alt="" width="563"><figcaption><p><strong>Examples of I-V characteristics.</strong> A resistor shows an approximately linear relationship between voltage and current, while a semiconductor junction produces a nonlinear characteristic.</p></figcaption></figure>

For some devices, the current can vary by many orders of magnitude. In these cases, a logarithmic current scale is often useful for showing both low-current and high-current regions of the same measurement.

### What can we measure?

What we can learn from an I-V measurement depends on the device being tested. For **resistive structures**, the relationship between voltage and current can be used to determine resistance:

$$
R=\frac{V}{I}
$$

For a linear device, this corresponds to Ohm's law. For nonlinear devices, the local slope can instead be used to describe the differential resistance:

$$
r_d = \frac{dV}{dI}
$$

For **semiconductor devices**, I-V characteristics can be used to determine or study parameters and behaviors such as:

* leakage current,
* turn-on and threshold behavior,
* forward voltage,
* breakdown voltage,
* rectification behavior,
* on-state resistance,
* transconductance,
* subthreshold behavior,
* contact behavior.

The exact measurement depends on the device and on which terminals are biased. A two-terminal device, such as a diode, can often be characterized by sweeping the voltage across the device and measuring the resulting current.\
\
For devices with more terminals, several different I-V characteristics may be useful. For example, a MOSFET is commonly characterized using a **transfer characteristic**, where drain current is measured while sweeping the gate voltage, and **output characteristics**, where drain current is measured while sweeping the drain voltage at different gate voltages.\
\
Each of these measurements describes a different part of the device behavior and can be used to extract different parameters.
