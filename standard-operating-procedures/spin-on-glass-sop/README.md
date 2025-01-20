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

# Spin on Glass/Diffusant SOP



<figure><img src="../../.gitbook/assets/image (7) (1) (1) (1).png" alt="" width="256"><figcaption><p>Before Spin on Glass (SOG)</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (8) (1) (1) (1).png" alt="" width="256"><figcaption><p>After Spin on Glass (SOG)</p></figcaption></figure>

## Process Parameters

***

| Total Time                                                                 | 15-35 minutes                                                            |
| -------------------------------------------------------------------------- | ------------------------------------------------------------------------ |
| Spin Speed                                                                 | 4000 rpm                                                                 |
| Spin Time                                                                  | 20s                                                                      |
| Anneal Temperature Profile \[temp 1, time 1, temp 2, time 2...] \[°C, min] | **700B**: \[400, 20-30], **P504**: \[200, 10-15], **B154** \[200, 10-15] |

***

## Purpose

Three types of "spin on glass" are currently used in the Hacker Fab. 700B, P504, and B154, all three sourced from Filmtronics. Each of these begin as liquids, which are spun onto the surface of the chip, then annealed to form solid thin films. This is known as a sol-gel process.&#x20;

700B becomes an undoped thin film of SiO2, but with lower density than a thermally grown SiO2. After high temperature exposure (\~1100C) this thin film densifies to the density of a thermally grown oxide.

P504 becomes a thin film of SiO2, with a small amount of Phosphorous in it, also with lower density than a thermally grown SiO2. This is also referred to as a "spin on diffusant." After high temperature diffusion (\~1100C) this thin film densifies to the density of a thermally grown oxide.

B154 does not have SiO2 precursors like 700B and P504, but becomes a solid thin film with a small amount of Boron in it. The composition of this solid film after relatively low temperature exposure (\~200) is not clear, since the formula is proprietary, but it is believed to be some sort of polymer. Upon diffusion (exposure around \~1100C) the B154 thin film becomes SiO2 of thermally grown density.

These spin on glass films are often etched with a dilute HF solution, or BOE (HF + NH4F) due to the high selectivity with Si. However, the etch rate of spin on glass annealed around 400C is much faster than that of spin on glass that has been densified at around 1100C. Additionally, the B154 film that has been annealed at 200C is not effectively etched with HF, but is effectively etched with HF after diffusion at 1100C.

As indicated above, the purpose of the P504 and B154 deposition is to create a dopant source at the surface of the silicon, which can be diffused into the silicon substrate. 700B is used as a diffusion barrier, or a dielectric layer to fabricate metal interconnects on top of.

### Defects

The main concern with spin on glass, is its tendency to crack (extent of cracking varies, but full shatter can occur leading to flake off), have variation in uniformity, and have pinholes. Cracks and pinholes can lead to uneven doping across the surface, failure of 700B to act as a diffusion barrier, or metal interconnects shorting to the Si below. Factors like humidity, annealing temperature profile, particulate contamination, and shelf life of the spin on glass solution.

However, the CMU Hacker Fab has found particulate contamination to be the number one cause of defects, and this issue has been mitigated greatly by using filtered syringe tips during deposition, as seen below in the procedure.

***

## Tools

3. [Vacuum Spin Coater](../patterning-sop-stepper-v2/vacuum-spin-coater-sop.md)
4. [Hot Plate](../patterning-sop-stepper-v2/hot-plate-sop.md)

## Materials

1. Filmtronics 700B, P504, or B154.
   1. [Storage and Preparation](spin-on-glass-storage-and-preperation.md)
2. Acetone
3. Isopropanol

***

## Procedure

### Wafer Cleaning

1. Check that the working volume of spin on glass is labeled with the date it was poured. For 700B and P504, ensure that the solution has not been out for more than a month (main bottle is stored at 5C).
   1. If you are pouring a new working volume of P504 or 700B, let it come to room temperature before using it (ideally, wait 24 hours).
2. Preheat the[ Hot Plate](../patterning-sop-stepper-v2/hot-plate-sop.md) to 100°C
3. In the fume hood, hold the wafer with tweezers over the sink.
4. Rinse the polished side of the wafer thoroughly with acetone, then isopropyl alcohol.
   1. The acetone leaves a residue that must be removed by the isopropyl alcohol rinse.
5. Blow the wafer dry with the nitrogen gun by pressing the wafer against a cleanroom wipe on the table to ensure it does not fly away. **Get a good grip on it with your tweezers**.
   1. Even when the wafer appears dry, there may still be moisture on the edges, so dry both sides liberally for \~20 seconds
   2. if there is visible acetone residue after drying, repeat steps 2-3

<div><figure><img src="../../.gitbook/assets/cleaning.jpg" alt=""><figcaption><p>Acetone rinse</p></figcaption></figure> <figure><img src="../../.gitbook/assets/drying.jpg" alt=""><figcaption><p>Drying with nitrogen gun</p></figcaption></figure></div>

### Prebake

4. Place the wafer in the **center** of the hotplate for 20 seconds
   1. Be sure to handle the wafer with tweezers that can handle high temperatures (metal tweezers)
   2. No need to turn the hotplate off since annealing will require 100°C initially as well

<figure><img src="../../.gitbook/assets/hotplate (1).jpg" alt="" width="375"><figcaption><p>100C hotplate with chip in the center</p></figcaption></figure>

### Spin Coat

6. Place wafer onto the chuck of the [vacuum spin coater](../patterning-sop-stepper-v2/vacuum-spin-coater-sop.md)
7. Open the SOG container while keeping the bottom resting on the table
   1. Never open containers up in the air or outside of the fume hood
8. Pipette **1-2 drop** of SOG using Luer Lock filtered syringe:
   1. Take a clean syringe and draw it up \~½ to create an air pocket in the tube
   2. Suck up SOG about halfway up the syringe. This is a lot more than you need for 1 drop, because the filter needs to be wetted by the excess solution before drops are released.
   3. Twist on a syringe filter
   4. Release 2 drops back into the SOG container
   5. Apply 1 or 2 drops to your chip, make sure the chip is completely coated in solution but do not use more than 2 drops
   6. Dump any remaining SOG in the syringe back into the SOG container
   7. Dispose of the syringe and the filter in the waste bucket

<div><figure><img src="../../.gitbook/assets/syringe.jpg" alt=""><figcaption><p>Pipette with SOG and air pocket</p></figcaption></figure> <figure><img src="../../.gitbook/assets/syringe-filter.jpg" alt=""><figcaption><p>Pipette with filter</p></figcaption></figure></div>

6. Spin coat the wafer <mark style="background-color:orange;">(Remember to switch on the vacuum!)</mark>
   1. After spin coating, the SOG application should appear even. (See pictures below)
7. Immediately move onto annealing

### ![](https://lh4.googleusercontent.com/4Ze7i5GPpmCDYI7aWq1580wodj3FLuTmzr5LFTFVKZZEH8wd3g3ZxrQDQnnKdB-IUx0fghg02me3XZP0K3uWaphXByDInh0R2B2zF9XwXxF4DsD2VuaxtlDmqD6MGCHN5h-SGkmNsc_S5fNYML_nlP4)![](https://lh6.googleusercontent.com/RT5HwEkmavaU19ulqmj9jaGKk7_BrJwYQV73joK_IWuo4s4lSiIjBKK0NuTwKOjWpMett8jFdsAquYMG_DuvQ5Frj3jaCpMDT18Wev8pEJMBRENax5Zr5OsLYgqIhAI8IYR52UMHoDg1ugVve1Ms1j8)

### Hot Plate Annealing.

12. The hot plate should already be at 100C
13. Place wafer onto the center of the [Hot Plate](../patterning-sop-stepper-v2/hot-plate-sop.md)
    1. Be sure to handle the wafer with tweezers that can handle high temperatures
14. Set the hotplate to the desired annealing temperature (200C for P504 or B154, 400C for 700B)
15. After the desired anneal time has passed (10-15 minutes for P504 and B154, 20-30 minutes for 700B), use metal tweezers to remove the chip. Be careful not to burn yourself.

### Tube Furnace Anneal/Diffusion P504

If the next step requires higher temperatures, see the [Tube Furnace SOP](../tube-furnace-sop.md) for details.

### Inspection

See [Inspecting SOG wafers](spin-on-glass-inspection.md) document for a more detailed overview of failure conditions and possible causes.

## Safety

Be sure to work under fume hood when working with SOG. The SOG can give off toxic vapors (especially during annealing)

DO NOT touch the hot plate during operation. A 400 C hot plate will cause severe burns. (Reminder: 400 C = 752 F). The same is true of the glass cover, which is why it is important to ramp down before touching.

\


***

\
