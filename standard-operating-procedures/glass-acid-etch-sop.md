---
description: >-
  THIS IS NOT A COMPREHENSIVE GUIDE FOR HF ETCHING. THIS IS A RESOURCE TO
  COMPLIMENT IN PERSON TRAINING
---

# Glass Acid Etch SOP



<figure><img src="../.gitbook/assets/image (17) (1).png" alt="" width="256"><figcaption><p>Spin on Glass (SOG) on Surface masked by photoresist (in red)</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (19) (1).png" alt="" width="256"><figcaption><p>Post-Etch SOG Removed</p></figcaption></figure>

Same process for Doped SOG:

<figure><img src="../.gitbook/assets/image (20) (1).png" alt="" width="256"><figcaption><p>Doped Spin on Glass (SOG) on Surface masked by photoresist (in red)</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (21) (1).png" alt="" width="256"><figcaption><p>Post-Etch Doped SOG Removed</p></figcaption></figure>

## Parameters

<table><thead><tr><th width="332"></th><th></th></tr></thead><tbody><tr><td>Time (if glass annealed at 200-400C)</td><td>~10 Seconds with 6:1 BOE</td></tr><tr><td>Time (if glass annealed at 1100C)</td><td>5-10 Minutes with 6:1 BOE</td></tr><tr><td>Temperature</td><td>Room Temp.</td></tr></tbody></table>

***

## Purpose

You must complete Hydrofluoric Acid training before using Hf for etching.

The HF/BOE etch is used to do one of the following.

* To etch holes through a layer of glass to open up areas for electrical contact to to doped Silicon.
* To etch holes through a layer of glass being used as a diffusion barrier to open up regions for doping.
* To etch way specific areas of doped glass to control where dopant diffusion will occur.
* To strip a chip of leftover doped glass that needs to be removed for subsequent processing.
* To strip native oxides, thermally grown oxides that may have formed during drive in diffusion.
* To etch gate oxide layer left over after plasma etching of polySi with a plasma etcher in the original NMOS process.

Each of these conditions may require different etch times, and require different amounts of temporal precision for when to stop the etch. Regardless, you need to have an understanding of the density and thickness of layers you're etching, and the device you're processing to understand what etching parameters to use.

Spin on glass/diffusant should be patterned with HMDS to enhance adhesion between the photoresist and SOG layer during etching. Otherwise the photoresist is prone to peeling.

Relevant reaction:

SiO2 + HF → H2SiF6 + H20

A [buffered oxide etch](https://us.vwr.com/store/product/36722614/buffered-oxide-etch-6-1-boe-6-1-semiconductor-grade) is used instead of pure HF to control the etch rate.

***

## Tools

1. Fume hood
2. Appropriate container for acid (polypropylene)
3. Nitrile Gloves (under)
4. Neoprene Gloves (over)
5. Nitrile Splash Apron
6. Face shield
7. Spill kit and [all other required safety equipment, disposal equipment, and building utilities](https://www.cmu.edu/ehs/Laboratory-Safety/chemical-safety/documents/sop-for-the-use-of-hydrofluoric-acid.pdf)

## Materials

1. Hydrofluoric Acid or Buffered Oxide Etch
2. DI water

***

## Procedure

### Preparation

1. Put on PPE, including splash apron and face shield, where the over neoprene gloves when handling items in the fume hood
2. Never remove tweezers from the fume hood. Once a tweezer has been used in the fume hood, it must remain there.
3. Place your chip on the cleanroom wipe taped to the inside of the acid hood.
4. Put on the neoprene gloves. Avoid touching the outside of the gloves.![](https://lh4.googleusercontent.com/jRPJLrFnxZH1qdT5iKs1nosnn31rF5jq5nVpMFXGpLs_gETjZL6SNDDPULGkFqcJ2mqP4BsImJXQC2akcywpaBjtUQwnmNwqDZ1okK_rfwIr32Qj_rc2l0iA1oTOjV67q5H7j9AaYpdHC_h-2e-3pHU)
5. Open the three small jars, labeled BOE, R1 (rinse 1), and R2 (rinse 2). Keep them in the orientation pictured below to minimize the chances of spilling, have them in the correct sequential order, and ensure that if a spill occurs it stays within the fume hood.
6. Keep them in the black 3D printed tweezer guide.
7. R2 should be filled higher than R1, and R1 should be filled higher than the BOE.



### Etching

7. Use the modified tweezers to pick up and hold your chip.
   1. These are self-locking tweezers, once it has a good grip you can hold the tweezers by the metal wire handle on top
8. Start the timer and place your chip in the BOE, letting the tweezer dongle rest on the 3D printed etching stand
9. When the timer is up, move the chip to R1, and jiggle it in R1 for 30 seconds
10. Move the chip to R2, and jiggle it in R1 for 30 seconds
11. Hold the chip over a beaker and spray it with DI water thoroughly.
12. Place the chip back on a new cleanroom wipe outside the fume hood.
13. Place the modified tweezers back in the fume hood where you found them
14. <mark style="background-color:orange;">Remove your gloves first, keeping them in the fume hood where you found them</mark>
15. Remove the rest of your PPE
16. Now take a pair of tweezers from outside the fume hood and pick up your chip
17. Rinse the chip using a DI water squirt gun over the sink for 20 seconds, or hold it under the DI water tank.
18. Dry your chip off with a nitrogen gun.
    1. Refer to [Photoresist Strip SOP](patterning-sop-stepper-v2/photoresist-strip-sop.md) for proper nitrogen gun usage if needed

***

### Inspection

Incomplete oxide etch looks like rainbow patterns at the bottom of holes.

Complete etch looks like flat white reflective Silicon

Inspect before stripping the photoresist

***

## Safety

This is by far the most dangerous process step. This document is NOT qualified to teach you all the required safety protocols and correct operating procedures - please refer to an [SOP](https://www.cmu.edu/ehs/Laboratory-Safety/chemical-safety/documents/sop-for-the-use-of-hydrofluoric-acid.pdf) and more disposal and safety documents. Every student at CMU must go through a 1 hour safety training specifically for the handling of HF before they are even allowed to be in the same room as somebody handling it.&#x20;

This document is an operating procedure for our specific lab, and is a reference for students to know how to consistently complete a successful etch.&#x20;

***

\
