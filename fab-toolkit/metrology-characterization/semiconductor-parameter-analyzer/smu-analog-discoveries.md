---
description: A guide on Analog Discoveries and Waveforms Software
cover: ../../../.gitbook/assets/AD3.png
coverY: -134
---

# SMU - Analog Discoveries

{% embed url="https://digilent.com/reference/test-and-measurement/analog-discovery-3/start" fullWidth="true" %}

{% embed url="https://digilent.com/reference/software/waveforms/waveforms-3/start" %}

A portable USB-powered test and measurement device, also known as the AD3, is a digital oscilloscope, logic analyzer, waveform generator, pattern generator, and much more. Digilent WaveForms software makes it easy to acquire, visualize, store, analyze, produce and reuse analog and digital signals.

***

## Hardware Specs

<table><thead><tr><th width="253">Product</th><th width="119">Cost (each)</th><th>Quantity</th></tr></thead><tbody><tr><td>Analog Discovery 3</td><td>$379</td><td>2</td></tr><tr><td>Transistor Tester Adapter</td><td>$75.59</td><td>2</td></tr><tr><td>USB-C port Extender</td><td>$19.99</td><td>1</td></tr><tr><td>Jumper Cables set</td><td>$6.98</td><td>1</td></tr><tr><td>Micropositioners</td><td>TBD</td><td>4</td></tr></tbody></table>

Total Cost:

Setup Time:

***

## Technical Specs

* Output Voltage Range: ±5 V
* Accuracy:
  1. ±10 mV ± 0.5% (│Vout│ ≤ 1.25 V)&#x20;
  2. ±25 mV ± 0.5% (│Vout│ > 1.25 V)
* Number of channels: 2 (custom channels feature available)
* DC Current Drive: 30 mA maximum

***

## Setting up AD 3

1. Download the Waveforms software: [https://digilent.com/shop/software/digilent-waveforms/](https://digilent.com/shop/software/digilent-waveforms/)
2. Run the .exe installer
3. Add Waveforms and Analog Discovery 3 to “My Products”. Register the Analog Discovery 3 under “My products” using the serial number on the bottom of the device: [https://cloud.digilent.com/myproducts?pc=1](https://cloud.digilent.com/myproducts?pc=1)
4. Plug the Analog Discovery 3 into the laptop using the USB-C cable and open up the Waveforms software.

***

## Manual Testing

The following steps assume that the probe and positioners are connected and probing the chip correctly.&#x20;

(Refer to the Probe Station Document)

{% content-ref url="../probe-station.md" %}
[probe-station.md](../probe-station.md)
{% endcontent-ref %}

* For our purposes, click on Tracer (for IV Characterization).

<figure><img src="https://lh7-us.googleusercontent.com/g66nne3wdp7q1XSJeBa6E8R3Uc5uBte1-PvmeTK0gpCwWwGNA9qhh0d1thaqP0HsBKV9Ll-x3rOlVQBP2eeP6XRzprOWjbHJn7_qIi7_2vzGd2ru1B1jBfGVoU7XnCKtxEdEu_DelsQz" alt="" width="563"><figcaption><p>Waveforms Software</p></figcaption></figure>

* Click on drop down to select transistor type.

<figure><img src="https://lh7-us.googleusercontent.com/97IXGObLskDgn14s4T_S17AHNr0GkFNPQgi1DAWDBQsA7CQAuWSmfjI_pQ29OZTA7cj7XLAipwbiOru88zcN9kQ_9uZTcV4t8lXhpY6e2ASjDvIBYydkCZmTIHH2g9p1g4J-HVbw8blO" alt=""><figcaption><p>Tracer Window</p></figcaption></figure>

* Select “Adapter” or “No Adapter” depending on whether the transistor tester adapter is being used.

<figure><img src="https://lh7-us.googleusercontent.com/qS9EX7mw5EvkxljI3d9Ukt1gIRHhj6RGKYKXWYC0yVbWcOVYMjytNW9v5IO2PUxJGTchEijGqBsvK8Ekp9d8LzZ5hLGPTc_gT2NMkTkilaDVmm0GWDo4ax5xmkpILHl8lqus4BGICwbv" alt=""><figcaption></figcaption></figure>

*   Select “Measure Vgs” and set the ranges for the Vgs and Vds.

    \


    <figure><img src="https://lh7-us.googleusercontent.com/8zeOVu2eRjWmSVXl2hms-Zizn52cv3mlvYxCdZWacPnhJcgHzY-2tyelzH0sU_HLMgrEPV0rxZjdCFS6j3ahSyMKLSNZmM2gnjVGM2zyEJ4y55xqHHOnC8LHhID14SF3bQaqSTG5GI8E" alt=""><figcaption></figcaption></figure>
* Select step-size/no. of steps for both voltages.

<figure><img src="https://lh7-us.googleusercontent.com/KrMvyDHt6gDc9E2_7ATVEvSFQJjgaFhlP2Y5czqsAwzXaAiO8htzOpMm0aAFEIH3LCqCNfyLHAv1yrwUcxaA-ouS7uPCUY0o024igpt_hg1nBoytJL7hvInnSLpBacmTmqcgHuFzRcLK" alt=""><figcaption></figcaption></figure>

* Click play (in the top right corner) and watch the magic!

<figure><img src="https://lh7-us.googleusercontent.com/SluuZhq3VngqqSka_gMuNTv23pyehgyUqt8Je9BAqFVdTVbShEtxWfwQDEaM1yl_rEdTsKEJMCL6GPZgtcUoAH_IFV2PHLRUgZuXYLFktcHTRoc86a1gKgWEwV6DP3wj6gMEDERTVudQ" alt=""><figcaption></figcaption></figure>

* I-V Curve _for ZVN3310A Transistor_ on Curve Tracer _(replace this image with our chip curves)._

<figure><img src="https://lh7-us.googleusercontent.com/RS9dqac35gbACXOi9VDmvNB3ZVw-kMAtXRyOxm_ytfeAH0pzm9MHJe9amw_KYrKAg4l9KgZP7Suvg7o79T8SVInKxo3BuZZJN0l2E8_M9GjUv8GThLlvxJEHXaGw9kxDLG8p6RITTW3x" alt=""><figcaption></figcaption></figure>

#### Suggestions:

* Can adjust current compliance for Gate if needed. (below the main toolbar, right above the graph).
* Can adjust Drain resistance if not using the transistor tester adapter. (top right corner).

***

## Automated testing with JavaScript

* Curve Tracer works really well for manual tracing, but the Wavegen and Scope Windows can’t be accessed when the Tracer is in use.
* Another way to view I-V curves without using Curve Tracer is via the Scope Window and Script Window.
* Open the Script window from the left panel on Waveforms. Add the JavaScript code here. Refer to Code section.

<figure><img src="https://lh7-us.googleusercontent.com/6arv9XH5p75JxQWYgXImfKhgdNYhfAiDdpfZcDDat2sHgZHuIDyPYPAfuqMdV4dUm0Ha0xe020QPF9iAu6raNYcwIH61ICAqLI4Dr5HdagC-ep-IyXXrkj05b063UUF1ylJpb2O8p7BF" alt=""><figcaption><p>Script Window</p></figcaption></figure>

#### Viewing plots on the Script Window

* Click on View -> Add Plot.

![](https://lh7-us.googleusercontent.com/8tU67IaN0VATdj08j0nqL6ToSbajmxjKjXw547G8t5UNRi6-umWaY19OJ72RLa\_voqsiqzlgN\_zYs3SfduyAX1rx4JlXKSbmsVRb3Zd5JasTFDy01Bb9r2vSVlQUbg05tVAInT5EHVex)

* A plot window will appear on the right side.

<figure><img src="https://lh7-us.googleusercontent.com/v5ykg3QskJGh850gFQEAt_EW-LhkUaL9Yu-8t6aLtSev6SldYuO5ggUPjlnP4drm2UIA_d16AD1Q3hL-zpBk--0sxSloVYOSp9C_eA7Cqdqngc_CDiaW6IYt41pLAyNJI5HxHM7N0Q4m" alt=""><figcaption></figcaption></figure>

#### Alternative: Viewing plots on the Scope Window

* In the Scope window, click on View -> Add XY.

![](https://lh7-us.googleusercontent.com/eNg8MLr-Wk2FtZHgGEVcCdhdY-bVnFu3simNmeDAw6CD26speCJTZjhmBEtG6Pzf\_O85nrlx80lbFtivKpye6kgHUHq0SxM1E6MJsOtJhUzDDa7fj0r23A1KP3Dmq0Dp4ewNnCsEmBfg)

* The plot window will appear on the right side.

<figure><img src="https://lh7-us.googleusercontent.com/-KsVoLF8k4ZNxE22BX-N4WCOtAvsFrPcVbd-7DiIHNsTddaBdbaKeAereCVYpBeQbb-6fFXIVrOAko5E5y_RxJoHrX9zJ-lj_tTmGZZ8LoyexgYAg3UONZzcocsOF6kKlyTFPKo-SYv1" alt=""><figcaption></figcaption></figure>

* Change the X-axis and Y-axis to respective channels, calibrate the channels based on the quantity being measured. You may use the Math channel to add any custom channels to the plot.

***

## Code

_modify the code according to our new setup_

```javascript
// Ensure Scope instruments are open
if (!('Scope' in this)) throw "Please open a Scope instrument";
// Configure Scope settings
Scope.single();
Scope.Channel1.Range.value = 5; // Set the voltage range as needed
Scope.Channel2.Range.value = 1; // Set the current range as needed
Scope.Trigger.Trigger.text = "Normal";
Scope.run();
// Wait for Scope to finish acquisition
if (!Scope.wait()) throw "Stopped";
// Access voltage data from Channel 1
var voltageData = Scope.Channel1.data;
// Access current data (replace 'Scope.Channel2' with the correct channel for current)
var currentData = Scope.Channel2.data;
// Display the waveform data
print("Voltage Data from Channel 1:");
print(voltageData);
print("Current Data from Channel 2:");
print(currentData);
// Plot the IV curve on the Script tool window
var plot = plot1;
plot.Y1.data = currentData;
plot.Y2.data = voltageData;
plot.Y1.AutoScale.checked = true; // Enable auto scaling for Y1 axis (current)
plot.Y1.Units.text = "Amperes"; // Set Y1 axis unit for current
plot.Y1.Range.value = 1; // Set the range value for Y1 axis as needed (current)
plot.Y2.data = voltageData;
plot.Y2.AutoScale.checked = true; // Enable auto scaling for Y2 axis (voltage)
plot.Y2.Units.text = "Volts"; // Set Y2 axis unit for voltage
plot.Y2.Range.value = 5; // Set the range value for Y2 axis as needed (voltage)
```

