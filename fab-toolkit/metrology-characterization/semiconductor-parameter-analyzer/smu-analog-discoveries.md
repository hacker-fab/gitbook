---
description: A guide on Analog Discoveries and Waveforms Software
cover: ../../../.gitbook/assets/AD3.png
coverY: -134
---

# SMU - Analog Discovery

{% embed url="https://digilent.com/reference/test-and-measurement/analog-discovery-3/start" fullWidth="true" %}

A portable USB-powered test and measurement device, also known as the AD3, is a digital oscilloscope, logic analyzer, waveform generator, pattern generator, and much more. Digilent WaveForms software makes it easy to acquire, visualize, store, analyze, produce and reuse analog and digital signals.

***

## Hardware Specs

<table><thead><tr><th width="253">Product</th><th width="119">Cost (each)</th><th>Quantity</th></tr></thead><tbody><tr><td>Analog Discovery 3</td><td>$379</td><td>3</td></tr><tr><td>Jumper Cables set</td><td>$6.98</td><td>1</td></tr><tr><td>Micropositioners</td><td>TBD</td><td>4</td></tr></tbody></table>

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
3. Plug the Analog Discovery 3s into the laptop and open up the Waveforms software.

***

## Circuit Setup&#x20;

Set up the circuit that connects the Analog Discovery 3 like this circuit diagram:

<figure><img src="../../../.gitbook/assets/Screenshot 2024-03-28 at 17.24.24 (4).png" alt=""><figcaption></figcaption></figure>

The actual circuit will look something like this:

<figure><img src="../../../.gitbook/assets/IMG_5898.JPG" alt=""><figcaption></figcaption></figure>

## Manual Testing with Waveforms GUI (not sdk)

* For our purposes, click on Tracer (for IV Characterization).

<figure><img src="https://lh7-us.googleusercontent.com/g66nne3wdp7q1XSJeBa6E8R3Uc5uBte1-PvmeTK0gpCwWwGNA9qhh0d1thaqP0HsBKV9Ll-x3rOlVQBP2eeP6XRzprOWjbHJn7_qIi7_2vzGd2ru1B1jBfGVoU7XnCKtxEdEu_DelsQz" alt="" width="563"><figcaption><p>Waveforms Software</p></figcaption></figure>

* Click on drop down to select transistor type.

<figure><img src="https://lh7-us.googleusercontent.com/97IXGObLskDgn14s4T_S17AHNr0GkFNPQgi1DAWDBQsA7CQAuWSmfjI_pQ29OZTA7cj7XLAipwbiOru88zcN9kQ_9uZTcV4t8lXhpY6e2ASjDvIBYydkCZmTIHH2g9p1g4J-HVbw8blO" alt=""><figcaption><p>Tracer Window</p></figcaption></figure>

* Select “No Adapter”

<figure><img src="https://lh7-us.googleusercontent.com/qS9EX7mw5EvkxljI3d9Ukt1gIRHhj6RGKYKXWYC0yVbWcOVYMjytNW9v5IO2PUxJGTchEijGqBsvK8Ekp9d8LzZ5hLGPTc_gT2NMkTkilaDVmm0GWDo4ax5xmkpILHl8lqus4BGICwbv" alt=""><figcaption></figcaption></figure>

*   Select “Measure Id/Vgs” and set the ranges for the Vgs and Vds.

    <br>

    <figure><img src="https://lh7-us.googleusercontent.com/8zeOVu2eRjWmSVXl2hms-Zizn52cv3mlvYxCdZWacPnhJcgHzY-2tyelzH0sU_HLMgrEPV0rxZjdCFS6j3ahSyMKLSNZmM2gnjVGM2zyEJ4y55xqHHOnC8LHhID14SF3bQaqSTG5GI8E" alt=""><figcaption></figcaption></figure>
* Select step-size/no. of steps for both voltages.

<figure><img src="https://lh7-us.googleusercontent.com/KrMvyDHt6gDc9E2_7ATVEvSFQJjgaFhlP2Y5czqsAwzXaAiO8htzOpMm0aAFEIH3LCqCNfyLHAv1yrwUcxaA-ouS7uPCUY0o024igpt_hg1nBoytJL7hvInnSLpBacmTmqcgHuFzRcLK" alt=""><figcaption></figcaption></figure>

* Click play (in the top right corner) and watch the magic!

<figure><img src="https://lh7-us.googleusercontent.com/SluuZhq3VngqqSka_gMuNTv23pyehgyUqt8Je9BAqFVdTVbShEtxWfwQDEaM1yl_rEdTsKEJMCL6GPZgtcUoAH_IFV2PHLRUgZuXYLFktcHTRoc86a1gKgWEwV6DP3wj6gMEDERTVudQ" alt=""><figcaption></figcaption></figure>

* I-V Curve _for ZVN3310A Transistor_ on Curve Tracer _(replace this image with our chip curves)._

<figure><img src="https://lh7-us.googleusercontent.com/RS9dqac35gbACXOi9VDmvNB3ZVw-kMAtXRyOxm_ytfeAH0pzm9MHJe9amw_KYrKAg4l9KgZP7Suvg7o79T8SVInKxo3BuZZJN0l2E8_M9GjUv8GThLlvxJEHXaGw9kxDLG8p6RITTW3x" alt=""><figcaption></figcaption></figure>

#### Suggestions:

* Can adjust current compliance for Gate if needed. (below the main toolbar, right above the graph).

***

## Automated testing with Waveforms SDK

Get the code from github by typing in terminal

```
>>> git clone https://github.com/joshna-ii/HackerFabSMU
```

Cd into this directory then run the below Python script in any environment where Python is installed by typing in terminal

```
>>> python3 smu.py
```

If this is the first time being run in this environment, make sure all dependencies are installed by typing the following command in terminal:

```
>>> pip install -r requirements.txt
```

***

