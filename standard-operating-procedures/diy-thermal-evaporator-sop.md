---
cover: ../.gitbook/assets/IMG_5114.jpg
coverY: 0
---

# DIY Thermal Evaporator SOP (CMU Version)

## Purpose

Deposit thin films of Aluminum onto the chip so that we can make electrical contact with doped Si and make interconnects between those contacts.

<figure><img src="../.gitbook/assets/image (4) (1) (1) (1).png" alt="" width="256"><figcaption><p>Before Evaporation </p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (1) (1) (1) (1) (1) (1) (1) (1) (1) (1) (1).png" alt="" width="256"><figcaption><p>Post Evaporation (Aluminum in Blue)</p></figcaption></figure>

### Materials



<div><figure><img src="../.gitbook/assets/IMG_5115.jpg" alt=""><figcaption><p>Laptop with STM2 software and STM2 monitor plugged in</p></figcaption></figure> <figure><img src="../.gitbook/assets/IMG_5113.jpg" alt=""><figcaption><p>Double sided polyimide tape, tunsten filament, and high purity Al wire (99.999%)</p></figcaption></figure> <figure><img src="../.gitbook/assets/IMG_5114.jpg" alt=""><figcaption><p>DIY Evaporator (CMU Version)</p></figcaption></figure></div>

### Procedure

* Put on nitrile gloves.
* If the Pfeiffer turbo pump is on, power it off by pressing the button pictured below.

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeOG6MriYZC6CRW7fP_Urj-Tfk3MlARikl1V4vtmrwENos-q9WE5vprOGSy5bnzfN6Ere216t0DFX55vaf1cbT70Or-jAwo_Fp6i_eFsjFNIP6KxLwzdN11nqGJxr4oF8tz57zd_w?key=YFXw4_UKMpKLfZ4YpqJAC7BQ)

* Use the arrows to scroll to parameter 309, which show pump speed.
* wait until the pump speed is at 0Hz
* Slowly vent the chamber by unscrewing the vent screw located on the turbo pump (behind the chamber)
  * Try to increase 1 order of magnitude every 10 seconds

<figure><img src="../.gitbook/assets/image (73).png" alt="" width="375"><figcaption></figcaption></figure>

* Wait until the pressure is at 1E3 hPa or greater (pressure is given by parameter 340).
* Unskrew the two black knobs pictured below (B), then lift the chamber lid.

<figure><img src="../.gitbook/assets/image (1) (1) (1).png" alt="" width="375"><figcaption></figcaption></figure>

* Turn the two black knobs on the top of the blue box as shown in Figure 1, and open the lid.
* Make sure youre wearing nitrile goves.
* The tungsten filament is secured with two barrel connectors piuctured below (B). The filament can be removed by slightly loosening the screws closest to the filamnet.

<figure><img src="../.gitbook/assets/image (2).png" alt=""><figcaption><p><em>Inside of thermal evaporator. A (red circle) indicates the Tungsten coil, B (blue circles) screw the coil in place, and C (yellow circle) is the metal sheet blocking the vacuum.</em></p></figcaption></figure>

* Tightly wrap aluminum around the Tungsten coil. The filament becomes brittle after evaporation, so be careful not to break it. if you do break it, use a new filament
* Place the tungsten filament back and screw it in. Make sure it is straight.
* Place \~ 1 inch of poly ide tape on the substrate holder shown below (A), then peel off the clear layer on top of the tape. Since aluminum often covers the square box, when you put the tape on, aluminum might stick to it and flake off. Just continue attempting to apply tape until it stick without flaking off.

<figure><img src="../.gitbook/assets/image (3).png" alt=""><figcaption><p><em>Figure 4: Thermal evaporator with lid open. A (red circle) indicates where the tape and chip should be placed.</em></p></figcaption></figure>

### Evaporation

* Place your chip on the yellow tape, and use tweezers to gently press down on the corners of the chip.
* Double check that the metal sheet at the back is not bent and still covering the vacuum.
* Double check that the wire and barrel connectors are suspended and not touching anything conductive as to short them.
* Use a multimeter to ensure no continuity between the power and ground wire going into the chamber.
* Close the blue lid and screw the black knobs all the way.
* Close the vent all the way (hand tight)
* Turn on the pump.
* Screw the black knobs more since they tend to loosen after the pump turns on.
* Wait for the pressure to reach at least 6E-5 hPa. This will take 10+ minutes depending on how clean the inside of the chamber is, and how well it is sealed.
* Turn on the power source as shown below (A)

<figure><img src="../.gitbook/assets/image (4).png" alt=""><figcaption><p><em>Program on computer next to thermal evaporator. Note green start button to begin, rate (A/s) in the table, and thickness (Angstroms) in the table on the computer program. A (yellow circle) indicates the power supply on bottom and B (red circle) indicates the knob for adjusting current.</em></p></figcaption></figure>

* Press start on the STM software
* Slowly turn up the current on the power source until \~30 Angstrom/s is reached (do not exceed 45 amps). Keep adjusting the current to keep the rate between around 30 Angstrom/second until the thickness hits 5 kÅ, or you can no longer sustain the rate.
  * If you click the dial, you can change the digit.
  * The voltage and power will automatically change as you adjust the current, so you do not need to worry about it.
  * The pressure might increase during evaporation.
* After the thickness hits 5 kÅ, TURN THE CURRENT BACK TO 0 AMPS BEFORE TURNING OFF THE POWER SUPPLY.
* Press stop on the STM software.
* Turn off the vacuum pump. WAIT until parameter 309 shows 0 Hz.
* Slowly vent the chamber by unscrewing the vent screw located on the turbo pump (behind the chamber)
  * Try to increase 1 order of magnitude every 10 seconds
* Open the chamber, and peel the tape off with your chip.
* Use polymer tipped tweezers to grip the sides of teh chip, then use separate pair of tweezers to peel the tape off the chip.
