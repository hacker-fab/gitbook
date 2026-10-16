---
description: 'contact: @shreeja on discord'
---

# CV Measurement Setup (UWaterloo)

## Overview&#x20;

This documents a low-cost C–V characterisation method for MOSCAP devices using a function generator and oscilloscope, adapted for use at the University of Waterloo HackerFab. The method was initially validated on a commercial P-channel IRF9540N MOSFET and will be applied to fabricated MOSCAPs as devices become available.

Unlike the Keithley 4200-SCS-based approach used at CMU (which applies a direct AC small-signal to the gate and measures capacitance at each DC bias step), this setup uses an **RC frequency-sweep technique** to extract gate capacitance indirectly. Both methods produce the same C–V curve; this approach trades measurement speed for equipment accessibility.

<figure><img src="../../.gitbook/assets/WhatsApp Image 2026-04-20 at 3.11.58 AM.jpeg" alt=""><figcaption></figcaption></figure>

### Method

A known resistor (10 kΩ) is placed in series with the MOSCAP gate, forming an RC voltage divider. The drain is left floating and the source is tied to GND.

At each DC bias point, the AC frequency is swept until the voltage measured across the gate drops to 70.7% of the input; this is the −3 dB cutoff frequency, **f₃dB**. Gate capacitance is then:

$$
C= 1/ (2.π⋅R. f_3dB)
$$

Sweeping the DC offset from accumulation through depletion into inversion while repeating this measurement at each step produces the full C–V curve.

### Equipment

| Item               | Model                                                    |
| ------------------ | -------------------------------------------------------- |
| Function generator | Agilent 33521A                                           |
| Oscilloscope       | Siglent SDS1104X-U                                       |
| Series resistor    | 10 kΩ                                                    |
| Connectors         | BNC screw terminal breakout                              |
| Breadboard         | Standard                                                 |
| Test device        | IRF9540N P-channel MOSFET (until MOSCAPs are fabricated) |

### Settings

* **Waveform:** Sine wave
* **AC amplitude:** 100 mVpp
* **DC offset:** Swept from +5 V to −6 V in 1 V steps
* **Output load:** Hi-Z
* **Oscilloscope coupling:** AC on both channels

> Note: Keep the AC amplitude small (≤ 100 mVpp) to avoid perturbing the operating point set by the DC bias. This is especially important near the depletion minimum where capacitance is most sensitive to voltage.

### Procedure

* Wire the 10 kΩ resistor in series between the function generator output and the MOSCAP gate. Connect the source to GND. Leave the drain floating.
* Connect the oscilloscope Channel 1 across the function generator output (before the resistor) and Channel 2 across the gate (after the resistor).
* Set the DC offset to your starting bias (+5 V for a P-channel device starting in accumulation).
* Sweep the AC frequency from low to high. Record the frequency **f₃dB** at which Ch2 amplitude drops to 70.7% of Ch1.
* Calculate capacitance:&#x20;

$$
C= 1/ (2.π⋅R. f_3dB)
$$

* Step the DC offset by −1 V and repeat steps 4–5 through depletion and into inversion (down to −6 V).
* Plot C vs. V\_GS

### Results

The C–V curve for the IRF9540N showed all three expected operating regions:

| Region       | V\_GS range   | Capacitance        |
| ------------ | ------------- | ------------------ |
| Accumulation | V\_GS > 0 V   | \~4.5 nF (plateau) |
| Depletion    | \~0 V to −2 V | Decreasing         |
| Inversion    | V\_GS < −2 V  | \~4.5 nF (plateau) |

Threshold voltage was measured at −2 V to −3 V, consistent with the IRF9540N datasheet specification of −2 V to −4 V.

<figure><img src="../../.gitbook/assets/Screenshot 2026-04-22 122801.png" alt=""><figcaption></figcaption></figure>

### Next Steps

* Apply this procedure to fabricated MOSCAPs. Fabricated devices will likely require a **wider voltage sweep range** (potentially −8 V to +8 V, consistent with CMU's range) due to differences in oxide thickness and doping compared to commercial MOSFETs.
* Thicker gate oxides will shift C\_ox lower; adjust the expected capacitance range accordingly before choosing the series resistor value.
* If the inversion plateau is absent or suppressed, try reducing the AC measurement frequency (toward 1–10 kHz) to allow minority carriers time to respond.
* Cross-validate extracted V\_T against I–V transfer curve measurements once probe station access is available.

### References

* CMU HackerFab CV Measurement Documentation
* Keithley Application Note: _Making Optimal Capacitance and AC Impedance Measurements with the 4200A-SCS_
* IRF9540N datasheet

