---
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

# Aluminum Etch SOP



<figure><img src="../.gitbook/assets/image (2) (1) (1) (1) (1) (1) (1).png" alt="" width="256"><figcaption><p>Before Etch (Aluminum Metal in Blue)</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (3) (1) (1) (1) (1) (1).png" alt="" width="256"><figcaption><p>After Etch</p></figcaption></figure>

## Parameters

|           |              |
| --------- | ------------ |
| Etch Rate | \~ .1 um/min |
| Etch Temp | 40C          |
| Stir RPM  | 350          |

***

## Purpose

Before reading further, please see the [Safety ](aluminum-etch-sop.md#safety)section for more information.&#x20;

After thin films of Aluminum are deposited (whether it be Thermal Evaporation, sputtering, etc) onto the chip, we want to define isolated contacts to certain pats of the device, and define interconnects between those contact. To do this, the contacts and interconnects are patterned on top of the Aluminum surface with photoresist, and then wet etched. The contact pads that are left allow us to probe the device, or package it.

## How It Works

Alumina etchant contains Phosphoric Acid, Nitric Acid, and Acetic Acid (all in one solution). The Nitric Acid Oxidizes the Aluminum, then the Phosphoric Acid etches the Aluminum Oxide, and the acetic acid lowers surface tension to help the etchant wet the surface.

## Disclaimers

Phosphoric and Nitric Acid are extremely Hazardous, be sure to review the SDS for the Al etchant, and wear the proper PPE (Lab Coat, Splash Apron, Nitrile gloves (under), Neoprene gloves (over), Face shield)

SDS: [https://www.sigmaaldrich.com/US/en/sds/aldrich/901539?userType=anonymous](https://www.sigmaaldrich.com/US/en/sds/aldrich/901539?userType=anonymous)

If under etching occurs, then all contacts will be shorted to each other. Over etching could result in less feature resolution, or Aluminum peeling off the chip.

Aluminum etch has proven difficult to keep consistent. There are many problems with peeling and bad adhesion of both photoresist on top and aluminum to the layers below.

Best practice is to calculate how long you should etch for, then etch for 30 seconds greater than that amount of time, then inspect, then etch longer if the etch looks incomplete.

***

## Tools

1. Fume hood
2. Hot plate with magnetic spinner
3. Magnetic stirrer
4. Glass beaker
5. Appropriate container for acid (polypropylene)
6. Nitrile Gloves (under)
7. Neoprene Gloves (over)
8. Nitrile Splash Apron
9. Face shield
10. Spill kit and [all other required safety equipment, disposal equipment, and building utilities](https://www.cmu.edu/ehs/Laboratory-Safety/chemical-safety/documents/sop-for-the-use-of-hydrofluoric-acid.pdf)

## Materials

1. Aluminum etchant (16:1:1:2 phosphoric, nitric, acetic, DI water)

<figure><img src="../.gitbook/assets/image (94).png" alt="" width="188"><figcaption></figcaption></figure>

1. DI water

## Procedure

### Preparation

1. Put on nitrile gloves
2. Place your chip on the cleanroom wipe taped to the inside of the acid hood. Do not leave the tweezers inside the fume hood.
3. Put on a splash gown.
4. Put on a face shield.
5. Put on the neoprene gloves. Avoid touching the outside of the gloves.
6. Pre-heat the hot plate.
7. Fill the beaker to about 1 cm with Aluminum etchant
8. Once the hot plate has reached the desired temperature, place the evaporating dish on the hot plate slightly off center so that the magnetic stirrer is on one side. turn on the stirrer.

### Etching

![](https://lh6.googleusercontent.com/zeiSTdg1kLUn1G-eaC7Oafi2tNJ2TT8Mo2LWnE3KS3UWau9GNRlrRmdMcOJPsxxw9ExBYt1anuAaPwWdTfR2g7rauznhIm4NyDTsz_2TuCkdb4dsWI62MZny8mcd3UCaGKRuLOr5P64rY_QCxRtQ5nc)

8. After the acid has had 5 minutes to come to temperature, use DI water to rinse the black plastic tweezers and pick up the chip, then put it in the dish on the opposite side from the stirrer, then start the timer.
9. Rinse tweezers with DI water after.
10. Prepare to take the chip out 30 seconds before the timer is up. It can be tricky to grab the chip, so start early and drop it into the DI water when the timer expires.
11. Swish the chip around a couple of times and then take it and rinse further with the DI squirt bottle out and let it dry on the wipe.
12. Turn off the hot plate.
13. Take off the Neoprene gloves, Splash apron, and face shield.
14. Use your outside tweezers to pick up the chip and dry it off with the nitrogen gun.

### Inspection

Incomplete aluminum etch looks black and rough.

Complete etch should look like the layer you were trying to etch down to

Peeling is very obvious as well.

***

## Safety

While the acids involved in this step are not as aggressive as hydrofluoric acid, there are still many overlapping safety protocols to be followed. This document is NOT qualified to teach you all the required safety protocols and correct operating procedures - please refer to an SOP and more disposal and safety resources.

This document is an operating procedure for our specific lab, and is a reference for students to know how to consistently complete a successful etch.&#x20;

***

\
