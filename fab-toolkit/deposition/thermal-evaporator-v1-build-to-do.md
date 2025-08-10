---
hidden: true
---

# 💡 Thermal Evaporator V1 Build (WIP)

&#x20;

## Vacuum Chamber Assembly

After purchasing and receiving all parts outlined in the [Evaporator Bill of Materials](https://docs.google.com/spreadsheets/d/1TPauRe4IT71wgZRzCAktdQAIhP94O9i4d5mw1youb1I/edit?usp=sharing), follow the step-by-step process to assemble the vacuum chamber.



#### 1. Assemble the chamber frame and plates

<figure><img src="../../.gitbook/assets/IMG_8889.jpg" alt="" width="188"><figcaption><p>Aluminum Frame</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/IMG_8892 (1).jpg" alt="" width="188"><figcaption><p>Plate with O-Ring</p></figcaption></figure>

(i) Wrap an O-ring around each plate to ensure the chamber has a tight vacuum seal.

<figure><img src="../../.gitbook/assets/IMG_8890 (1).jpg" alt="" width="188"><figcaption><p>Plate with 8 bolts</p></figcaption></figure>

(ii) Screw in each plate with 8 bolts into the frame as shown in the following image.

_Note: Plan where you want each plate to be (i.e. top, bottom, side) depending on your setup_

<figure><img src="../../.gitbook/assets/IMG_8893.jpg" alt="" width="188"><figcaption><p>Screw in bolts to attach plate to frame</p></figcaption></figure>

#### 2. Attach feedthroughs and/or blank flanges

Each opening must be covered and sealed for the vacuum to exist. Therefore, each opening needs a feedthrough in it or a blank flange to cover it. Ensure that each part has the correct dimension to properly fit in its corresponding port.

(i) Pair up the feedthrough/flange with its matching O-ring and clamp.

<figure><img src="../../.gitbook/assets/IMG_8904.jpg" alt="" width="188"><figcaption><p>KF-16 viton ring and blank flange</p></figcaption></figure>

(ii) Layer the parts in the following order. Starting from the bottom closest to the plate place the O-ring, flange/feedthrough, and clamp. Then attach all necessary screws tightly. Repeat this process for all openings.

<figure><img src="../../.gitbook/assets/IMG_8911.jpg" alt="" width="188"><figcaption><p>Attaching a blank flange to a KF-16 port</p></figcaption></figure>

#### 3. Turn a face into a door and attach feet

(i) Screw in the hinge into two adjacent plates where you want the door to be.

<figure><img src="../../.gitbook/assets/IMG_8915.jpg" alt="" width="188"><figcaption><p>Hinge to allow top face to open</p></figcaption></figure>

(ii) Attach knobs on opposite side of hinge to open and close the door securely.

<figure><img src="../../.gitbook/assets/IMG20231030205018 (1).jpg" alt="" width="188"><figcaption><p>Plate with hinge and knobs</p></figcaption></figure>

(iii) Attach feet to the bottom of the chamber to minimize vibration.

<figure><img src="../../.gitbook/assets/IMG_8916.jpg" alt="" width="188"><figcaption><p>Attaching rubber feet to chamber</p></figcaption></figure>

#### Final product

<figure><img src="../../.gitbook/assets/IMG_8927.jpg" alt="" width="375"><figcaption><p>Fully assembled vacuum chamber</p></figcaption></figure>

## Pumping down the Vacuum Chamber

#### 1. Attach the turbo pump to the chamber

Connect the turbo pump (Hi-Cube 80) to the KF-40 plate using the corresponding KF-40 flange and O-ring. Since the turbo pump has a lip that makes it difficult to tighten the screws, we recommend using hex shaped 10-32 x 5/8" screws and tightening with a wrench.

#### 2. Connect the pressure gauge

The Pfeiffer MPT 200 Gauge has a KF-25 connection port. To optimize the 6 plates we chose, an adapter from KF-25 to KF-16 is needed to connect the pressure gauge to the vacuum chamber. Attach using a KF-16 flange to the plate and a KF-25 clamp to connect the adapter to the pressure gauge.

<figure><img src="https://lh7-us.googleusercontent.com/RUduw8NYhUAYcC5eGjYP7mvngNn85c2TStduOvum2xsv0N8KkN6i2EUQVp8Okx7p4K2Dwnm2RU2RbfN_jQYqRuqvSPU8jitvvB3g-J9MTgDRRD6o5FgZIYj5mkmBLRijcQFgj58HMGWWCOw=s2048" alt="" width="375"><figcaption><p>Vacuum chamber connected to turbo pump.</p></figcaption></figure>



## Implement Heating Parts

Heating the vacuum chamber is necessary for two reasons. First, high temperatures of approximately 1200˚C are needed to evaporate the aluminum and perform the thermal evaporation process. Second, heating the chamber allows it to bakeout, meaning that the water trapped inside evaporates allowing the vacuum to achieve a lower pressure.

Our setup consists of two parts: the **crucible** and the **substrate heater.**

### Crucible Set-Up

The crucible is comprised of the following parts:

* #### [Tungsten Filament](https://www.lesker.com/newweb/evaporation_sources/basket-crucible-heaters.cfm)
* #### [Alumina Thermal Crucible](https://www.lesker.com/newweb/evaporation_sources/thermal-crucibles-alumina.cfm?highlight=EVC1AO)
* #### [Insulating Bucket](https://www.lesker.com/newweb/evaporation_sources/thermal-crucibles-alumina.cfm?highlight=EVC5AO\&highlight=EVC5AO)

After assembling these parts together, connect the copper power feedthroughs to either end of the tungsten filament using an [inline barrel connector](https://www.lesker.com/feedthroughs/connectors-inlinebarrel/part/ftaibc094).

[Ceramic beads](https://www.lesker.com/newweb/feedthroughs/ceramic_fishsplinebeads.cfm?pgid=0) can be used to safely insulate the metal and prevent electrical misconnections.&#x20;

Next, connect a power supply to the external end of the power feedthroughs to heat up the crucible.

Finally, attach the thermal  breakout board and arduino to the thermocouple to read the temperature values.&#x20;

<figure><img src="../../.gitbook/assets/image (8) (1) (1).png" alt="" width="375"><figcaption><p>Crucible heated to evaporate aluminum and deposit over chip.</p></figcaption></figure>
