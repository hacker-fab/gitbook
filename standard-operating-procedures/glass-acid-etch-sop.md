---
description: >-
  THIS IS NOT A COMPREHENSIVE GUIDE FOR HF ETCHING. THIS IS A RESOURCE TO
  COMPLIMENT IN PERSON TRAINING
layout:
  title:
    visible: true
  description:
    visible: true
  tableOfContents:
    visible: true
  outline:
    visible: true
  pagination:
    visible: false
---

# 🧪 Glass Acid Etch SOP



<figure><img src="../.gitbook/assets/image (17).png" alt="" width="256"><figcaption><p>Spin on Glass (SOG) on Surface masked by photoresist (in red)</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (19).png" alt="" width="256"><figcaption><p>Post-Etch SOG Removed</p></figcaption></figure>

Same process for Doped SOG:

<figure><img src="../.gitbook/assets/image (20).png" alt="" width="256"><figcaption><p>Doped Spin on Glass (SOG) on Surface masked by photoresist (in red)</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (21).png" alt="" width="256"><figcaption><p>Post-Etch Doped SOG Removed</p></figcaption></figure>

## Parameters

<table><thead><tr><th width="332"></th><th></th></tr></thead><tbody><tr><td>Time (if glass annealed at 400C)</td><td>20 Seconds</td></tr><tr><td>Time (if glass annealed at 1100C)</td><td>5 Minutes</td></tr><tr><td>Temperature</td><td>Room Temp.</td></tr></tbody></table>

***

## Purpose

Before reading further, please see the [Safety](https://docs.google.com/document/d/1dkbtMOQ6LT6IHo3lF97JkjbScxvUxxTmcUicWCd2fL8/edit#heading=h.jhthfiqxnpyg) section for more information.&#x20;

After spinning on liquid SiO2 (glass) over the entire chip, the solvent was evaporated and we were left with a solid layer of glass. This layer acts as dielectric, so we need to etch away the sections we don’t want covered.&#x20;

We etch away undoped glass (700B) to make room for the doped glass (p504) to make contact with bare silicon. This initial etch goes all the way through the Si02 we spun on and the thermally grown oxide layer that came with the substrate. This allows the dopant to diffuse into the substrate directly when it is in the tube furnace.&#x20;

After the dopant is diffused, we etch a second time to make another opening to bare silicon for the metal (aluminum in our case) to make contact with the doped silicon. The remaining P504, although doped, still acts as a dielectric to shield sections we don’t want shorted by the evaporated aluminum.

Hydrofluoric acid reacts quickly with glass, but we can still use photoresist to mask the sections we don’t want etched. It’s pretty incredible that the organic photoresist compound holds up better against this very strong acid than glass does.

SiO2 + HF → H2SiF6 + H20

A [buffered oxide etch](https://us.vwr.com/store/product/36722614/buffered-oxide-etch-6-1-boe-6-1-semiconductor-grade) is used instead of pure HF to help with issues of peeling and undercutting of photoresist.

***

## Tools

1. Fume hood
2. Appropriate container for acid (polypropylene)
3. Nitrile Gloves (under)
4. Neoprene Gloves (over)
5. Nitrile Splash Apron
6. Spill kit and [all other required safety equipment, disposal equipment, and building utilities](https://www.cmu.edu/ehs/Laboratory-Safety/chemical-safety/documents/sop-for-the-use-of-hydrofluoric-acid.pdf)

## Materials

1. Hydrofluoric Acid or Buffered Oxide Etch
2. DI water

***

## Procedure

### Preparation

1. Place your chip on the cleanroom wipe taped to the inside of the acid hood. Do not leave the tweezers inside the fume hood.
2. Put on nitrile gloves.
3. Put on a splash gown.
4. Put on a face shield.
5. Put on the neoprene gloves. Avoid touching the outside of the gloves.![](https://lh4.googleusercontent.com/jRPJLrFnxZH1qdT5iKs1nosnn31rF5jq5nVpMFXGpLs\_gETjZL6SNDDPULGkFqcJ2mqP4BsImJXQC2akcywpaBjtUQwnmNwqDZ1okK\_rfwIr32Qj\_rc2l0iA1oTOjV67q5H7j9AaYpdHC\_h-2e-3pHU)
6. Open the three small jars, labeled BOE, R1 (rinse 1), and R2 (rinse 2). Keep them in the orientation pictured below to minimize the chances of spilling, have them in the correct sequential order, and ensure that if a spill occurs it stays within the fume hood.



### Etching

7. Use the modified tweezers to pick up and hold your chip.
   1. These are self-locking tweezers, once it has a good grip you can hold the tweezers by the metal wire handle on top
8. Start the timer.
9. Prepare to take the chip out 30 seconds before the timer is up. It can be tricky to grab the chip, so start early and drop it into R1 when the timer expires.&#x20;
   1. When rinsing, place the tweezers as far in as possible to ensure that residual HF on the tweezers is also rinsed.
10. Swish the chip around a couple of times and then take it out and then put it in R2.
    1. Again, place the tweezers in as far as possible.
11. Swish the chip around again and then take it out and then put it in DI water dish.
12. Place the chip back on the cleanroom wipe in the fume hood
13. Place the modified tweezers back onto the fume hood table where you found them
14. <mark style="background-color:orange;">Remove your gloves first, keeping them in the fume hood where you found them</mark>
15. Remove the rest of your PPE
16. Now take a pair of tweezers from outside the fume hood and pick up your chip
17. Rinse the chip using the DI water squirt gun over the sink for 20 seconds
    1. Make sure you don't drop your chip
18. Dry your chip off with a nitrogen gun.
    1. Refer to [Photoresist Strip SOP](patterning-sop-stepper-v1/photoresist-strip-sop.md) for proper nitrogen gun usage if needed

***

### Inspection

Incomplete oxide etch looks like rainbow patterns at the bottom of holes.

***

## Safety

This is by far the most dangerous process step. This document is NOT qualified to teach you all the required safety protocols and correct operating procedures - please refer to an [SOP](https://www.cmu.edu/ehs/Laboratory-Safety/chemical-safety/documents/sop-for-the-use-of-hydrofluoric-acid.pdf) and more disposal and safety documents. Every student at CMU must go through a 1 hour safety training specifically for the handling of HF before they are even allowed to be in the same room as somebody handling it.&#x20;

This document is an operating procedure for our specific lab, and is a reference for students to know how to consistently complete a successful etch.&#x20;

***

\
