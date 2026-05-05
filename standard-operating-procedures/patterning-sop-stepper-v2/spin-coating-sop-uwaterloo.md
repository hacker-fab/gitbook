# Spin Coating SOP (UWaterloo)

## Purpose

To apply a uniform photoresist coating on silicon wafers using a calibrated spin-coater for microfabrication and lithography processes.

This SOP supports HackerFab lithography workflows targeting <10 µm features, consistent with recent calibration results.

Currently, our spin coater has an error tolerance of <0.3%

With the new build, error tolerance will be even lower!

<figure><img src="../../.gitbook/assets/WhatsApp Image 2026-04-23 at 4.34.39 PM.jpeg" alt="" width="375"><figcaption></figcaption></figure>

## Scope

Applies to:

* Silicon wafers (1cm x 1cm diced samples)
* Positive photoresist
* HackerFab custom spin-coater

Used before:

* UV lithography
* Pattern transfer
* Etching or lift-off

## Equipment & Materials

### Equipment

* HackerFab calibrated spin-coater
* Hot plate
* Micropipette or resist dropper
* Wafer tweezers
* Timer
* Fume hood or wet lab bench

### Materials

* Silicon wafers
* Photoresist (AZ-P4620)
* Acetone
* IPA
* DI water
* He gas

## Safety Precautions

Work inside fume hood. Wear gloves, goggles, lab coat.

Photoresist solvents are flammable and toxic.

If using developers or etchants later (KOH, HF etc.), follow separate SOPs.

Dispose waste in labeled resist-waste container.

## Process Parameters

(Fill based on your calibrated spin-coater data)

| Step        | Parameter      | Typical Value |
| ----------- | -------------- | ------------- |
| Clean       | DI water rinse | 10s           |
| Clean       | Acetone rinse  | 10s           |
| Clean       | IPA rinse      | 10s           |
| Dry         | He blow dry    | Until dry     |
| Spin step 1 | Spread speed   | 500 rpm, 5s   |
| Spin step 2 | Final speed    | 5000 rpm, 30s |
| Soft bake   | Temp; Time     | 100°C; 1min   |

## Procedure

### Wafer Cleaning

1. Rinse wafer with DI Water.
2. Rinse wafer with acetone.
3. Rinse with IPA.
4. Blow dry with Helium.
5. Inspect wafer for particles.

### Spin Coating

1. Place wafer on spin-coater chuck.
2. Dispense \~1 mL photoresist at wafer center.
3. Run spin program:
   * Spread: 500 rpm for 5 s
   * Spin: 4500-5000 rpm for 30 s
4. Stop spin-coater.
5. Remove wafer carefully.

### Soft Bake

1. Place wafer on hot plate at 100 °C.
2. Bake for 60 s.
3. Cool wafer on clean surface.

## &#x20;Expected Results

* Uniform resist thickness.
* No streaks or bubbles.
* Good adhesion.
* Compatible with UV lithography, achieving <10 µm features.

## Troubleshooting

| Problem               | Cause           | Fix                     |
| --------------------- | --------------- | ----------------------- |
| Edge bead             | Too much resist | Use less resist volume  |
| Streaks               | Dirty wafer     | Improve cleaning        |
| Non-uniform thickness | RPM mismatch    | Recalibrate spin-coater |
| Bubbles               | Moisture        | Dehydrate bake wafer    |

## &#x20;Notes

* Use tachometer-verified RPM values
