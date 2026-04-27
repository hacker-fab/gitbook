# Photoresist Development SOP (UWaterloo)

## Purpose

To develop exposed photoresist patterns using AZ 400K developer diluted 1:3 with DI water, revealing patterned structures for subsequent etching or lift-off.

Supports HackerFab lithography workflows targeting <10 µm features.

## Scope

Applies to:

* Wafers exposed using Litho stepper v2
* Positive photoresists compatible with AZ 400K developer
* Silicon diced samples

## Equipment & Materials

### Equipment

* Chemical-safe beaker or petri dish
* Timer
* Tweezers
* DI water rinse station
* Nitrogen gas/ He gas (we used a helium gas tank)
* Hot plate
* Optical microscope

### Materials

* AZ 400K developer
* DI water
* Photoresist-coated exposed wafer

## Safety Precautions

* Wear gloves, goggles, and a lab coat.
* Work inside the wet lab or fume hood.
* AZ 400K is alkaline; avoid skin contact.
* Dispose of developer waste properly.

## 6. Developer Preparation

Prepare 1:3 dilution:

1 part AZ 400K : 3 parts DI water

**Example:**

* 10 mL AZ 400K + 30 mL DI water

Mix gently.

Label solution with date.

## Process Parameters

| Parameter        | Typical Value          |
| ---------------- | ---------------------- |
| Developer Ratio  | 1:3 AZ 400K : DI water |
| Development Time | 20s                    |
| Rinse            | DI water, 30 s         |
| Dry              | He blow dry            |
| Post-bake        | 100 °C, 60 s           |

Adjust time based on resist thickness and exposure dose.

## Procedure

### Development

1. Pour prepared developer into a clean beaker.
2. Gently hold the wafer with a tweezer in the developer solution.
3. Start the timer immediately.
4. Agitate gently for 15 seconds.
5. Remove the wafer at exactly 15 seconds and transfer in the DI water beaker when the timer hits 20 seconds.
6. Watch the pattern appear.

### Rinse

1. Rinse thoroughly in DI water for \~30 s.
2. Blow dry with Helium gas.
3. Bake at 100 °C for 60 s to remove moisture.

### Inspection

1. Inspect the wafer under the microscope.
2. Check for:
   * Clean pattern edges
   * No residual resist
   * No overdevelopment
3. Record results.

## Expected Results

* Exposed regions cleared cleanly.
* Pattern sharp and uniform.
* Compatible with achieving <10 µm features.

## Troubleshooting

| Problem                 | Cause                | Fix                                    |
| ----------------------- | -------------------- | -------------------------------------- |
| Pattern washed away     | Overdevelopment      | Reduce time                            |
| Residual resist         | Underdevelopment     | Increase time                          |
| Resist peeling          | Poor adhesion        | Improve wafer clean / dehydration bake |
| Entire resist dissolves | Developer too strong | Check 1:3 dilution                     |

## Notes

* Record development time vs resist thickness.
* Use fresh developer for consistent results.

