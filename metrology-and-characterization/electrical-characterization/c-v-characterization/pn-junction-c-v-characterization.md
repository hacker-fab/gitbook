# PN Junction C-V Characterization

Capacitance-voltage (C-V) characterization is used to investigate the electrical properties of semiconductor p-n junctions. By measuring junction capacitance as a function of applied voltage, information about doping concentrations, built-in potential, and depletion region properties can be obtained.

When p-type and n-type semiconductors form a junction, mobile carriers diffuse across the interface and recombine, leaving behind fixed ionized dopants. This creates a depletion region whose width depends on the applied voltage. Since the depletion region determines the junction capacitance, its voltage dependence can be used to characterize the junction.

## Depletion Region and Junction Capacitance

The depletion region contains negatively charged ionized acceptors on the p-side and positively charged ionized donors on the n-side. The resulting electric field creates a built-in potential that opposes further diffusion of carriers.\
\
When a reverse-bias voltage is applied, the potential across the junction increases and the depletion region widens. Under forward bias, the depletion region narrows.

<figure><img src="../../../.gitbook/assets/PN Junction.png" alt="" width="375"><figcaption><p>Depletion region of a p-n junction under zero-bias and reverse-bias conditions.</p></figcaption></figure>

The depletion capacitance is approximately given by:



$$
C_j = \frac{\epsilon_s A}{W_d}
$$

where:

* $$C_j$$ is the junction depletion capacitance,
* $$\epsilon_S$$ is the semiconductor permittivity,
* $$A$$ is the junction area,
* &#x20;$$W_d$$ is the total depletion width.

The capacitance is inversely proportional to the depletion width. Increasing the reverse-bias voltage therefore decreases the junction capacitance.

For an abrupt junction with uniform doping, the depletion width is:

$$
W_d = \sqrt{\frac{2 \epsilon_s}{q}\left( \frac{1}{N_A} + \frac{1}{N_D}\right)(V_{bi}+V_R)}
$$

where $$q$$ is the elementary charge, $$N_A$$ and $$N_D$$ are the acceptor and donor concentrations, $$V_{bi}$$ is the built-in potential, and $$V_R$$ is the reverse-bias voltage expressed as a positive magnitude.

The depletion region extends further into the more lightly doped side of the junction. For a strongly asymmetric junction, most of the depletion width lies in that region.

## C-V Characteristics

The junction capacitance depends on the applied voltage and the doping concentrations on both sides of the junction. For an abrupt junction with uniform doping, the inverse square of junction capacitance varies linearly with reverse-bias voltage:

$$
\frac{1}{C_J^2} =\frac{2(V_{bi}+V_R)}
{q\epsilon_sA^2}
\left(\frac{1}{N_A}+\frac{1}{N_D}\right)
$$

This relationship follows from the depletion approximation and assumes that the junction geometry and doping profile are adequately described by the model.\
\
For a one-sided junction, where one side is much more heavily doped than the other, the depletion region extends mainly into the lightly doped side. The capactiance can then be approximated by:

$$
C_j=A\sqrt{\frac{q \epsilon_s N}{2 (V_{bi}+V_R)}}
$$

where $$N$$ is the doping concentration on the lightly doped side.

<figure><img src="../../../.gitbook/assets/c-v-graph (1).png" alt="" width="375"><figcaption><p>Typical junction capacitance as a function of reverse-bias voltage.</p></figcaption></figure>

The measured C-V characteristics can therefore be used to investigate the doping profile of the junction.

## Parameter  Extraction

C-V measurements can be used to estimate semiconductor doping concentration and built-in potential. These parameters are commonly extracted from the linear region of a plot of inverse squared capacitance against reverse-bias voltage.

### Doping Concentration

For a one-sided abrupt junction, the doping concentration can be estimated from the slope of a plot of $$\frac{1}{C_j^2}$$against reverse-bias voltage. If $$m$$ is the slope of the linear region, then:

$$
N = \frac{2}{q\epsilon_sA^2m}
$$

where $$N$$ is the doping concentration on the lightly doped side. This expression assumes a known junction area and an abrupt, one-sided junction.

### Built-In Potential

The built-in potential can be estimated by extrapolating the linear region of the $$\frac{1}{C_j^2}$$ versus $$V_R$$ plot to its voltage-axis intercept. Under the stated sign convention, the extrapolated intercept occurs at $$V_R=-V_{bi}$$. The built-in potential is related to the equilibrium doping concentrations by:

$$
V_{bi}=\frac{kT}{q}\ln\left(\frac{N_A N_D}{n_i^2}\right)
$$

where $$k$$ is the Boltzman constant, $$T$$ is the absolute temperature, and $$n_i$$ is the intrinsic carrier concentration.

Comparing the measured and calculated built-in potentials can help assess whether the assumptions of the ideal junction model are reasonable.

### Depletion and Diffusion Capacitance

A p-n junction can exhibit both depletion capacitance and diffusion capacitance.

**Depletion capacitance** results from changes in the cahrge stored in the depletion region as the applied voltage changes. It dominates under reverse bias and is the main quantity used for C-V doping analysis.

**Diffusion capacitance** arises from minority carriers injected into the neutral semiconductor regions under forward bias. As the applied voltage changes, the stored carrier charge changes, producing an additional capacitance.

Diffusion capacitance can be expressed as:

$$
C_d = \frac{dQ_s}{dV}
$$

where $$Q_s$$ is the stored minority-carrier charge.

Under forward bias, diffusion capacitance can become much larger than depletion capacitance. For this reason, reverse-bias measurements are generally preferred for extracting doping information from junction C-V characteristics.

### Non-Ideal Effects

Real junctions may deviate from the ideal model due to several effects:

* **Leakage current:** Can interfere with measurements, particularly at high reverse-bias voltages.
* **Series resistance:** Affects the measured impedance and apparent capacitance.
* **Defects and trap states:** May contribute additional capacitance depending on their response time and measurement frequency.
* **Non-uniform doping:** Changes the shape of the C-V curve and may require a more detailed model.
* **Junction breakdown:** Excessive reverse bias can cause avalanche or Zener breakdown and should be avoided.

Measurement frequency, AC excitation amplitude, and bias range should be selected according to the device under test and the measurement setup.

### References

* Robert F. Pierret, Semiconductor Device Fundamentals, Addison-Wesley, 1996, Chapter 5: “PN Junction Electrostatics,” Sections 5.1–5.2; Chapter 7: “PN Junction Diode: Small-Signal Admittance,” Sections 7.2–7.3.
