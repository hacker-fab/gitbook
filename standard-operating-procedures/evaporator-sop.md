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

# 💡 Evaporator SOP



<figure><img src="../.gitbook/assets/image (4).png" alt="" width="256"><figcaption><p>Before Evaporation </p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (1) (1).png" alt="" width="256"><figcaption><p>Post Evaporation (Aluminum in Blue)</p></figcaption></figure>

***

## Parameters

| Bakeout Time                                                |             |
| ----------------------------------------------------------- | ----------- |
| Pressure Before Beggining Evaporation (hPa)                 | <p><br></p> |
| <p>Temp Time Sequence [c1, t1, c2, t2, c3, t3, ...]<br></p> | <p><br></p> |

## Purpose

![](https://lh4.googleusercontent.com/yv3Xvd\_KIRFxikW8IXeoZz1DrsRdIafct336MdBGMAKMBAcVv4k3aiLItyXGGFSA6E8y3ncllHQAcnt8YQhpf10OkZLj39s-UvdM6QOPQ19bSnF46kU1N6VdMYFmDuNQvpSWjqaXJU4cdtVMF84BIsk)

Figure from Microchip Fabrication (Van Zant, 2004)

Thermal evaporation is a layer deposition technique wherein the vapor pressure of a material is increased via resistive heating while the surrounding air is evacuated below that vapor pressure. The [mean free path](https://www.pfeiffer-vacuum.com/en/know-how/introduction-to-vacuum-technology/fundamentals/mean-free-path/) of gas in the chamber, which is determined by the pressure, must also be larger than the source to substrate distance. Under these conditions, the material evaporates into the vacuum and then coats any exposed surfaces. This is how we create deposit layers of metal, which are later etched into wires, and contact pads.

The Hacker Fab currently uses aluminum for wiring because it’s relatively conductive, fast to evaporate, and cheap. However, it can be tricky to evaporate because it alloys readily with many refractory metals. This is described in depth [here](https://www.lesker.com/newweb/deposition\_materials/deposition-materials-notes.cfm?pgid=al1). We currently use an alumina crucible which seems to work for a handful of evaporations, though other setups may be more effective and should be tested.

***

## Tools

1. MTI Thermal Evaporator with Inficon Film Thickness Monitor

## Materials

1. Kapton tape
2. 99.999% Aluminum wire
3. Recommended: piranha solution

***

## Procedure

### Preparation

1. Open the [Evaporation Data](https://docs.google.com/spreadsheets/d/1pLmIeejaP6-JWRBXLnWrWZQuf21\_CxsJdZeJoiU9y5w/edit?usp=sharing) sheet and plan your experiment.
2. (Recommended) Use piranha solution or [O2 plasma](https://docs.google.com/document/d/18O1M\_P8trr4wdzKeulmmXW6kANNKmp0MQrCSmAgrgFM/edit?usp=sharing) to clean the chip.
3. Place the chip on a hot plate at 180°C for 90 minutes. Cover it to avoid surface contamination.
4. Wear gloves while handling parts exposed to vacuum because oil from your hands will outgas.
5. Use double sided kapton tape to attach the chip(s) to the center of the substrate holder.
6. Put 20 cm of aluminum wire into the crucible.

### Bakeout

1. Use double sided kapton tape to attach the chip(s) to the center of the substrate holder.![](https://lh6.googleusercontent.com/9NKK\_9\_h\_\_AKVDh1-1foSxiXcjLL4kise\_raDG2HCA8MmmvWU9OFTTzazokaXLYgdicB0TnPsvD4SMcC-LD3xwRjsY8Yhcq8wdRpykdcAESKPtfhH2eptlbX0Q86TDZ2zoASNXuDiXFWlyNCWA2RKjk)
2. Carefully close the chamber.
3. Check that the vent knob on the turbopump is fully closed by turning clockwise.
4. Start the vacuum by pressing the on/off button on the pump.

![](https://lh4.googleusercontent.com/xCCTs0kXiXJMCuR3\_fyMlPI1FLkjscfvJLRqQDn1mLsQyrhwaw9U7yJxXDkKYlScPsGv\_Dc4fpo7hCTS01DJ\_YQ64udh\_0UotkJOeIecCxjwFShNk-rX9l5\_pebQDDCm\_38steTymFZ6bDwNPpm\_jq4)

5. Program the bakeout sequence to ramp to 700°C over 2000 s, then hold for 3600 s, then ramp down over 2000 s. Refer to page 15 of the [evaporator manual](https://drive.google.com/file/d/163nug7sO17XjpK8Gmx-9\_C81ZMmk-d6B/view?usp=share\_link) for detailed programming instructions.&#x20;
6. Wait for the pressure to get below 5E-5 hPa. You can also program the bakeout to have a long 0°C segment at the beginning.
7. Make sure that the current knob on the side of the evaporator is in the “Auto” position.
8. Press “Set” and “◀” to return to the standby state, then press and hold “▼” for 2 seconds to start the program. Press the green run button to enable current flow.



### Evaporation

1. Ensure the pressure reads less than 5E-6 hPa.&#x20;
2. Program the evaporator to ramp to 1125°C over 2000 seconds, hold for 500 seconds, and ramp down over 2000 seconds.
3. Start the program. Set a timer for 28 minutes so that you open the shutter at the right time.
4. Set up the film thickness monitor by plugging its USB cable into the laptop and starting the STM-2 software.
5. When the evaporator reaches the target temperature, open the shutter using the knob at the top of the chamber and press “zero” on the STM-2 software.
6. Monitor and record the pressure (should be below 5E-6 hPa) and deposition rate (should be greater than 5 Å/s) during the evaporation.
7. When the temperature starts to drop, close the shutter.
8. Wait for the temperature to drop below 350°C before proceeding

### Vent

1. Turn off the pump by pressing the same on/off button.
2. Wait 10 minutes for the turbopump blades to slow down.&#x20;
3. Slowly turn the knob on the turbopump until the pressure starts to increase (<¼ turn). Don’t open it all the way or the rapid pressure increase will destroy the pump, which is still spinning really fast.&#x20;
4. Wait another 10 minutes.
5. Once the pressure has increased to 1 hPa, open the valve a bit more. Wait until the chamber is at 1000 hPa (1 bar).
6. Open the chamber and place the substrate holder face up.
7. Use a utility knife blade to separate the chip(s) from the substrate holder.
8. Peel/scrape off any tape residue left on the chip.
9. Take inspection pictures and upload them in a new [Evaporation Photos](https://drive.google.com/drive/folders/1UahZeNBUPMZiq7Gocv0FQa7C8czsouz5?usp=share\_link) folder, then link that folder in the [Evaporation Data](https://docs.google.com/spreadsheets/d/1pLmIeejaP6-JWRBXLnWrWZQuf21\_CxsJdZeJoiU9y5w/edit?usp=sharing) spreadsheet.

### Anneal

400-500C

***

## Safety

1. As previously mentioned, don’t vent the chamber too quickly. Turbopumps supposedly have the kinetic energy of a car on a highway and can “grenade”... we don’t want to find out what that means.
2. The sample holder may be hot. Be careful.

\


***

\


Misc. notes that need to be organized:

Manually switch to evaporation procedure (based on evaporation data spreadsheet, using thickness monitor to determine when to stop)

Sam only evaporated for 1 minute, we are doing \~15?

Let it evaporate at 1100 for 3 min before moving guard to expose chip

This is because there is scum in the crucible and might be oxygen in the chamber at the beginning of evaporation that causes aluminum oxide to build on chip

\


1. Evaporation is faster than sputtering (supposedly, it might be equivalent because evaporation operates at a much lower pressure than sputtering so pump down and bakeout take a whi
