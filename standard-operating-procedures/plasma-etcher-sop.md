---
description: This SOP is specifically for etching 300nm of polysilicon in the NMOS process
---

# Plasma Etcher SOP

<figure><img src="../.gitbook/assets/image (13) (1).png" alt="" width="256"><figcaption><p>Before Reactive Ion Etch (RIE)</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (14) (1).png" alt="" width="256"><figcaption><p>After Reactive Ion Etch (RIE)</p></figcaption></figure>

## Parameters

| Total Time    | 15 min  |
| ------------- | ------- |
| SF6 flow rate | 10 sccm |
| Etch time     | 60s     |
| RF Power      | 100W    |

#### For more detaild process parameters:

[Plasma Etch Process Sheet](https://docs.google.com/spreadsheets/d/1-mvhaMWhcO-PKCisJJNyvKJd4Pv3DMQQeegNJ-yXHSk/edit#gid=0)

[Plasma Clean Process Sheet](https://docs.google.com/spreadsheets/d/1n-9ACh263syzrxcAJIWBtZ5d4DbPKWw7ZwvzPnsIGhM/edit#gid=0)

***

## Purpose

This first etch step creates the transistor’s gate by etching away almost all of the polysilicon and gate oxide, except for the islands covered by patterned photoresist. We use plasma etching (AKA dry etching) for two reasons:

1. Plasma is capable of etching silicon, whereas HF is not.
2. The anisotropic (vertical) etch profile is capable of transferring smaller patterns than isotropic etches.

![](https://lh3.googleusercontent.com/uXX_gQv5tF0iwjYCRM9nW_y9nMgJCNZmh8gX29XNLdeLtO6x3n9puJvh6JQcOweAe7BCvqSRlumfoE9QHpgLBnno_xR1J2g9ds98vu9Jzm3mJxINpDpTekGtgIgwqyIC9AKQbG7ALmC13QHoKvhVg84)

The plasma etcher breaks down the normally inert SF6, creating a fluorine ion containing plasma on the surface of the chip. A combination of physical bombardment and chemical reaction removes material from the surface. Physical bombardment occurs when the pressure is low (<\~.1 Torr) and results in an anisotropic (vertical) etch. This allows for precise transfer of a photoresist pattern onto the underlying material. Chemical etching dominates at higher pressures and results in an isotropic etch. Fluorine reacts more quickly with Si than SiO2, resulting in high selectivity.

***

## Tools

1. PE-25 Plasma Etcher

## Materials

1. Chip with patterned resist on Si
2. Acetone
3. Isopropanol

***

## Procedure

### Preparation

1. If you have already claimed a chip number, and opened its specific chip view data sheet, record your patterning data into that sheet. If you have NOT claimed a chip number, and have NOT begun recording data in a chip specific sheet, open this [central chip count](https://docs.google.com/spreadsheets/d/1MrqtnkHcNr5hekHpQHusBZJG4nrdcxDz7Yg5Emn9BMQ/edit#gid=0) sheet, claim the next available chip number, open the blank chip view sheet for that specific chip number and record all subsequent process data into it.
2. Turn on the etcher via the switch on the back panel.
3. Turn on the laptop and open the Plasma Etch app.
4. Turn on the RF power supply on top of the etcher.
5. Open the chamber and place your chip in the middle of the rack. Close the chamber.
6. Set O2 flow, SF6 flow, power, time, vacuum setpoint in Sequence screen. Save your sequence.

### Etching

1. At the top menu bar, go to **power** and turn on RF and vacuum. The pump will start.
2. Wait until the pressure (the number next to "vacuum") is below .1 Torr.
3. Go to **commands > cycle off**. This will purge the chamber for three seconds with nitrogen in order to remove H2O. If any water is in the chamber during the plasma it will react with fluorine to make HF. Very bad.
4. **Commands > standby**. This will start the pump again.
5. Repeat steps 2-4 to purge again. This makes sure no water is in the chamber.
6. Open the valve on the cylinders of gas that you are using. Lefty loosey.

![](https://lh3.googleusercontent.com/z-K7CU-RkI2anr8zqe7FrCUV2ncA2f-2_0wO40aaPKTE1MMkd_EI4sQSiZCDjC_NAQeo96zIVi0B__DF_9CsLVZFN43jFutxQ4_XQatcErRQGp6GarRT4gpPbWzosOydO5L1pO9fojQrCcltEL4rqwY)

7. When you are ready to start etching, select **commands > plasma**.&#x20;
8. During the etch, monitor the pressure on the screen (should be at your setpoint) and the outlet pressure on the regulator (should be around 5-15 psig). Look in the window for pretty plasma!
9. SHUT THE GAS CYLINDER. RIGHTY TIGHTY
10. At the end of the cycle, the etcher will purge itself once, pump down, then purge again. To be safe we’ll purge a third time:
11. **Commands > standby**. This will start the pump again.
12. Wait until the pressure is below .1 Torr.
13. **Commands > cycle off**. Lets gas in for 3 seconds
14. **Commands > standby**.
15. Wait until the pressure is below .1 Torr.
16. **Commands > shutdown**. The chamber will come to atmosphere in 30 seconds, at which point you can open it.

## O2 Plasma Cleaning

The procedure is the same as for silicon etching, but you may skip a purge before and after the plasma. This is because&#x20;

| Total Time   | 6 min   |
| ------------ | ------- |
| O2 flow rate | 10 sccm |
| Etch time    | 120s    |
| RF Power     | 100W    |

***

## Safety

SF6 is not toxic, but fluorine is. By purging before and after the plasma, we’re trying to prevent two things:

1. Purging before removes all water from the chamber. This prevents any HF from being formed, which would otherwise corrode the pump and exhaust. If the exhaust hose connected to the pump turns green, this is an indication that HF is being formed.
2. Purging after removes all reaction products from the chamber. This includes SiF4 and various other sulfur oxides.

<br>
