# 🥞 Spin on Glass SOP

| Total Time                                                                 | 2.5 Hours                     |
| -------------------------------------------------------------------------- | ----------------------------- |
| Spin Speed                                                                 | 4000 rpm                      |
| Spin Time                                                                  | 30s                           |
| Anneal Temperature Profile \[temp 1, time 1, temp 2, time 2...] \[°C, min] | \[100, 5, 400, 20, 400, 0, 0] |

<figure><img src="../../.gitbook/assets/image (3).png" alt=""><figcaption><p>Spin on glass cross sections</p></figcaption></figure>

## Purpose

1. 700B (undoped) SOG
   1. As seen in the cross sections above. 700B is applied after the gate etch is performed. The purpose of 700B is then to protect certain areas of the wafer from P504 during the doping process. More specifically the 700B blocks off everywhere but the active areas. This means that the 700B layer must be consistent and impermeable, so, cracks and pinholes may be detrimental to the function of the chips transistors since they could allow dopant to leak into undesired areas of the chip. The cross sections of this are included below.

<figure><img src="https://lh3.googleusercontent.com/mv6HAXtlUqH6EawcdYnrPIqupeaFxToTpSqpxjcf8sc9A6PDrBTgIhbIUTmLdMhhlnv2smCCLukoraZ6BB_tkkughBq3yd_rdtCl4Nt2S2GwX95S5qt3XwQtbjXsvfvjB668oy3ifjkn5H_nzULt1Q" alt="" width="375"><figcaption><p>700B acting as a diffusion barrier</p></figcaption></figure>

The other purpose of the 700B is to act as a dielectric and insulate between contact areas on the chip. The resulting requirement is that the 700B layer is not conductive (which it is not)

2. P504 (doped glass) is doped with boron, unlike 700B. Naturally, this boron will diffuse into the silicon over time and this can be significantly sped up by heating it up in the tube furnace.&#x20;

## Tools

3. [Vacuum spin coater](https://docs.google.com/document/d/1xl2Znqv970THWs4tepz\_Cetx3j9r2hTCr4MdhxKwyDc/edit?usp=sharing)
4. [Hot Plate](https://docs.google.com/document/d/14IZRb\_CLO6zwDDNvO9dSkzYD5jisfbr-6na2exCk-T0/edit?usp=sharing)

## Materials

1. Filmtronics 700B (undoped) or P504 (dopant) Spin On Glass
   1. [storage and preparation](https://docs.google.com/document/d/1ZDfl5ehhsNCeg0cILxAQ3DSgg35inCzpQYTM5T-Tpig/edit?usp=sharing)
2. Acetone
3. Isopropanol

## Procedure

### Preparation

1. If you have already claimed a chip number, and opened its specific chip view data sheet, record your patterning data into that sheet. If you have NOT claimed a chip number, and have NOT begun recording data in a chip specific sheet, open this [central chip count](https://docs.google.com/spreadsheets/d/1MrqtnkHcNr5hekHpQHusBZJG4nrdcxDz7Yg5Emn9BMQ/edit#gid=0) sheet, claim the next available chip number, open the blank chip view sheet for that specific chip number and record all subsequent process data into it.

### Wafer Cleaning

1. In the fume hood, hold the wafer with tweezers over the sink.
2. Rinse the polished side of the wafer thoroughly with acetone, then isopropyl alcohol.
   1. The acetone leaves a residue that must be removed by the isopropyl alcohol rinse.
   2. If there is acetone film visible, repeat this step.
3. Blow the wafer dry with the nitrogen gun.
   1. Even when the wafer appears dry, there may still be moisture on the edges, so dry both sides liberally for about 20 seconds
   2. If there is acetone film visible, repeat the wafer cleaning procedure.
4. Inspect with the naked eye and make note of any marks on the wafer.
   1. Marks present after cleaning are likely scratches that need to be documented so we observe their effect on the process.

### Prebake

4. Preheat the [Hot Plate](https://docs.google.com/document/d/14IZRb\_CLO6zwDDNvO9dSkzYD5jisfbr-6na2exCk-T0/edit?usp=sharing) to 100°C
5. Place the wafer in the center of the hotplate for 20 seconds
   1. Be sure to handle the wafer with tweezers that can handle high temperatures
   2. No need to turn the hotplate off since annealing will require 100°C initially as well

### Spin Coat

6. Place wafer onto the chuck of the [vacuum spin coater](https://docs.google.com/document/d/1xl2Znqv970THWs4tepz\_Cetx3j9r2hTCr4MdhxKwyDc/edit?usp=sharing)
7. Inspect the wafer for pre spin coating failure conditions ([Reference for failure conditions](https://docs.google.com/document/d/1PGFy6Bar8kD9Lnka1koOhkTMzc6LxXHq-yRzDwc0J-I/edit?usp=sharing))
8. Pipette SOG using Luer Lock syringe
   1. Take a clean syringe and draw it up \~¼ to create an air pocket in the tube
   2. Twist on a syringe filter
   3. Suck up SOG until you see liquid above the filter (in the syringe tube itself). This will take more than you think, because the filter has to be wetted
   4. Release 1 or 2 drops back into the SOG container
   5. Apply 1 or 2 drops to your chip, make sure the chip is completely covered
   6. Dump any remaining SOG in the syringe back into the container
   7. Dispose of the syringe and the filter
9. Spin coat the wafer (Remember to switch on the vacuum!)
   1. After spin coating, the SOG application should appear even. ([Reference for failure conditions](https://docs.google.com/document/d/1PGFy6Bar8kD9Lnka1koOhkTMzc6LxXHq-yRzDwc0J-I/edit?usp=sharing))
10. Inspect the wafer for post spin coating failure conditions ([Reference for failure conditions](https://docs.google.com/document/d/1PGFy6Bar8kD9Lnka1koOhkTMzc6LxXHq-yRzDwc0J-I/edit?usp=sharing))
11. Take a picture of the post spin wafer

### ![](https://lh4.googleusercontent.com/4Ze7i5GPpmCDYI7aWq1580wodj3FLuTmzr5LFTFVKZZEH8wd3g3ZxrQDQnnKdB-IUx0fghg02me3XZP0K3uWaphXByDInh0R2B2zF9XwXxF4DsD2VuaxtlDmqD6MGCHN5h-SGkmNsc\_S5fNYML\_nlP4)![](https://lh6.googleusercontent.com/RT5HwEkmavaU19ulqmj9jaGKk7\_BrJwYQV73joK\_IWuo4s4lSiIjBKK0NuTwKOjWpMett8jFdsAquYMG\_DuvQ5Frj3jaCpMDT18Wev8pEJMBRENax5Zr5OsLYgqIhAI8IYR52UMHoDg1ugVve1Ms1j8)

### Annealing (700B)

12. Place wafer onto the [Hot Plate](https://docs.google.com/document/d/14IZRb\_CLO6zwDDNvO9dSkzYD5jisfbr-6na2exCk-T0/edit?usp=sharing) at desired temperature and time
    1. Be sure to handle the wafer with tweezers that can handle high temperatures
    2. Place a cover, such as a glass dish upside down, on top of the wafer to avoid contamination and air movement as the wafer is annealing
    3. Ramp up if to higher temperature if instructed to do so
13. Ramp down temperature
    1. When baking has finished, turn off the hot plate and and do NOT remove the wafer
    2. This allows the wafer to cool at a slower rate to prevent cracking.
14. Once the hot plate cools to room (25-30C), remove the wafer. (this takes about an hour)

### Inspection

15. [Inspecting SOG wafers](https://docs.google.com/document/d/1\_ooYkyV0m09i5Vt-Nj7p-poasi7RSbHCJUnWa4\_Qd\_A/edit?usp=sharing)
16. Upload microscope photos to the google drive&#x20;
    1. Either link them into [this spreadsheet](https://docs.google.com/spreadsheets/d/16RCDKUIi40yrM9UH7k1RGnfHmALMW1aAkPhzuUAF6Tc/edit?usp=sharing) or create your own folder for a specific chip (whichever makes more sense or instructed to do so)

## Safety

Be sure to work under fume hood when working with SOG. The SOG can give off toxic vapors (especially during annealing)

DO NOT touch the hot plate during operation. A 400 C hot plate will cause severe burns. (Reminder: 400 C = 752 F). A glass cover will also heat up to the same temperature.

\


***

\
