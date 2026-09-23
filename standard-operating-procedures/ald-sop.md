---
description: >-
  Contacts: Matt Moneck (mmoneck@andrew.cmu.edu), Jay Kunselman
  (jskunsel@andrew.cmu.edu), Joel Gonzalez (bgonzale@andrew.cmu.edu)
---

# ALD SOP

## System Description and Diagrams

Before operating this system, you should familiarize yourself with ALD and the documentation for the build of this system. This will let you get a working understanding of the system so that you understand the operating procedure.&#x20;

<img src="../.gitbook/assets/unknown (210).png" alt="" height="646" width="582">

<div><img src="../.gitbook/assets/unknown (211).png" alt="" height="297" width="269"> <img src="../.gitbook/assets/unknown (212).png" alt="" height="294" width="338"></div>

<br>

<div><img src="../.gitbook/assets/unknown (213).png" alt="" height="352" width="264"> <img src="../.gitbook/assets/unknown (214).png" alt="" height="357" width="345"></div>

<div><img src="../.gitbook/assets/unknown (215).png" alt="" height="411" width="527"> <img src="../.gitbook/assets/unknown (216).png" alt="" height="349" width="527"></div>

<div><img src="../.gitbook/assets/unknown (217).png" alt="" height="255" width="314"> <img src="../.gitbook/assets/unknown (218).png" alt="" height="257" width="202"></div>

**Legend**

1. Exhaust line for scroll pump
2. Vent line for precursor box.
3. System control monitor with GUI displayed
4. Carrier gas + precursor delivery line
5. Precursor box
6. Vacuum Chamber
7. Vacuum Pressure Gauge
8. Control electronics housing
9. Computer
10. Emergency power off button and housing
11. Variac (for delivery line and ampule heating)
12. Storage container (replacement filter traps)
13. DC Power supply (for substrate heater)
14. Scroll Pump
15. Carrier Gas Cylinder (UHP Nitrogen)
16. Mass Flow Controller (MFC)
17. Dual stage pressure gauge for carrier gas
18. Pneumatic gas valve 1 (large)
19. Pneumatic gas valve 1 (small)
20. Pneumatic gas pressure regulator
21. Delivery line Thermocouple
22. ALD valve 1/3 (actuated with pneumatic gas)
23. Manual valve for precursor ampoule
24. Precursor ampule (DI water shown)
25. Flow sensor (for monitoring precursor box venting)
26. Substrate heater/stage
27. High current heating wire
28. J-type thermocouple
29. Ammonia sorbent filter trap (POSI-trap from Mass Vac Inc)
30. Activated charcoal filter trap (POSI-trap from Mass Vac Inc)
31. Stainless steel gauze filter trap (POSI-trap from Mass Vac Inc)
32. Blast gate for precursor vent line
33. Blast gate for scroll pump exhaust line

## System Performance Summary (Based on Validation Testing)&#x20;

The ALD system has been experimentally validated to operate within a pressure range of 250–1000 mTorr, with stable control achieved via N₂ mass flow controller modulation.&#x20;

Substrate heater stability of ±5°C has been demonstrated across 100–250°C.&#x20;

The system supports pulse-based operation with measurable pressure response for pulse durations as low as 50 ms, confirming suitability for ALD processes.

## Pre-Operational Safety Checks

* PPE: Put on nitrile gloves and safety glasses
* Fire extinguisher: Identify the nearest unit (mounted on the right-side wall next to the workstation table) and perform a visual check to ensure:
  * The pin and safety seal are intact
  * The inspection tag is current
  * The extinguisher is unobstructed and nothing is stored in front of it

<img src="../.gitbook/assets/unknown (219).png" alt="" height="238" width="204">

* Fire alarm: Familiarize yourself with the location of the closest building fire alarm pull station. The nearest fire alarm pull station to the REH204 is at the nearest exit. To get there, turn left when exiting REH204, go to the end of the hall, you will find the pull station next to the exit door.

<img src="../.gitbook/assets/unknown (220).png" alt="" height="279" width="624">

*   Precursor Box Inspection

    *   Heating tape and thermocouple adhesion: All heating tapes are properly wrapped around precursor ampoules and delivery lines, with thermocouples securely adhered beneath the tapes.

        * Visual inspection:
          * Ensure all heating tapes (up to 3 inside of the precursor box, 1 for heating line, two for precursors) are securely wrapped onto the precursor ampule or delivery line. There should be no loose heating tapes.
          * Ensure that each heating tape has an associated thermocouple securely taped to the corresponding ampule or delivery line.&#x20;
          * Inspect heating tape for fraying, tears, loose wrapping, or exposed wiring.
          * Check for discoloration or darkened areas, which may indicate overheating.
        * Example of properly mounted heating tape and thermocouple



        <img src="../.gitbook/assets/unknown (221).png" alt="" height="195" width="570">
    * Ensure all manual ampule valves are closed (knob should be horizontal as shown)



    <img src="../.gitbook/assets/unknown (21).jpeg" alt="" height="268" width="201">

    * Ensure thermocouples are electrically isolated from any metal surfaces (e.g., wafer plate). Direct contact can introduce electrical noise and lead to unstable or incorrect temperature readings.
    * Verify that all thermocouple attachments are secure and not loosely placed under heating tape.
    * Check for proper insulation of delivery lines and precursor heating zones to minimize heat loss and prevent control instability.
*   Venting and Gas Flow checks

    * Open the computer (password is written beneath the monitor). Open the app named “ALD GUI”. Press the "Connect" button to have the computer connect to the microcontroller and begin streaming data from the thermocouples.
      * Verify that all electrical connections, especially at the DC power supply terminals, are secure. Loose connections can result in fluctuating or incorrect temperature readings.
      * Ensure thermocouple wiring is intact and not in direct electrical contact with conductive components.
      * Inspect for any abnormal sensor readings before operation; unstable readings may indicate electrical interference or poor connections.&#x20;
    * The flow rate displayed on the mass flow controller for the carrier gas should be set to 0 SCCM.
    * Ensure the precursor box flow velocity is greater than 2 m/s (displayed on the GUI) , and that there are no alarms present on the GUI.&#x20;
    * Ensure the “blast gate” is in the open position for both the precursor box vent line and the pump exhaust line (as shown)

    <div><img src="../.gitbook/assets/unknown (22).jpeg" alt="" height="196" width="165"> <img src="../.gitbook/assets/unknown (23).jpeg" alt="" height="197" width="313"></div>

    * Confirm that pressure readings are stable at baseline before initiating any pulse or flow adjustments. Excessive noise in pressure readings may indicate sensor or signal processing issues.
    * If pressure signal fluctuations exceed expected pulse magnitudes (\~2–3 mTorr), consider verifying signal averaging or filtering settings in the control system (GUI)
* Vacuum Chamber and Scroll Pump Inspection
  * Open the chamber door. Ensure there is no obvious particulate on the o-ring that could prevent a good seal. Ensure the o ring is sitting within the groove along the door perimeter
  * Ensure the copper heating wires for the substrate heater are not making contact with any part of the chamber or bracket.
  * Ensure the substrate heater thermocouple is secure into the substrate heater.
  * Ensure that the scroll pump power cord is directly connected to a permanent electrical wall outlet and not a power strip.
  * Ensure that the scroll pump vent line (1)  is attached at the pump outlet and the blast gate (33).

If any of the above items are not satisfied, DO NOT operate the ALD chamber or any associated equipment until resolved. Please report them to the lab manager to be resolved.

## Loading the Substrate and Pumping Down

1. Use the “CMU Hacker Fab Lab/Tool Usage” shared Google Calendar to block out the time you will be using the ALD System. Label your calendar event “ALD\_name.” This should include the 24 hour pump down time, recipe execution, and removing the substrate (more detail below).
2. Put on nitrile gloves and safety glasses.
3. Open the vacuum chamber door, and place the substrate centered on the substrate heater.
4. Close the chamber door, then simultaneously/evenly tighten the door screw knobs until hand snug.
5. Turn on the scroll pump with the green button on the back of the pump.
6. Once the pressure is below 1 torr, re-tighten the door screw knobs (low pressure pulls door closed tighter)
7. Wait until the vacuum pressure gauge reads 50 millitorr or less. This will take \~24 hours.

**From now until the end of the substrate is removed, the system must be attended to at all times.** Lab members are expected to coordinate with each other to ensure that at least one person is in the lab throughout the process. It is recommended that at least two lab members are present so that one can leave to go to the restroom, take a break, etc. There is a zero-tolerance policy for leaving the ALD chamber unattended during deposition. This is due to the pyrophoricity of the precursors being used and the need for immediate intervention in the event of an emergency.&#x20;

## Turning on Carrier Gas Flow

1. Open the valve on the UHP Nitrogen Cylinder (lefty-loosey aka CCW)

<img src="../.gitbook/assets/unknown (222).png" alt="" height="322" width="192">

3. Ensure the gauge on the right side is >500 PSIG, and the left gauge is between 10 and 30 PSIG as seen below. If not, contact the lab manager.

<img src="../.gitbook/assets/unknown (223).png" alt="" height="225" width="300">

4.  Locate the Mass Flow Controller and follow the instructions below to begin flowing carrier gas.

    * Initial state - mass flow is 0 SCCM. Press on “set pt”:

    <img src="../.gitbook/assets/unknown (228).png" alt="" height="275" width="221">

    * Press on “select digit” to select which digit you're changing:

    <img src="../.gitbook/assets/unknown (229).png" alt="" height="259" width="222">

    * Once you have navigated to the correct digit you want to change, you can press the “up” and “down” buttons until you reach the desired setpoint. The desired setpoint is process dependent! Ensure you have planned out what flow setpoint you intended to use. This setpoint should be informed by literature review related to your process, as well as testing of pressure/flow relationship:

    <img src="../.gitbook/assets/unknown (230).png" alt="" height="281" width="220">

    * Press “set” to set the flow:



    <img src="../.gitbook/assets/unknown (231).png" alt="" height="308" width="217">
5. The MFC should now reflect the setpoint you entered, and the chamber pressure should increase. After a few minutes, the chamber pressure should be stable at your desired pressure. Again, the desired pressure is process dependent.

## Turning on Pneumatic Gas

Refer to the following instructions for how to turn on the pneumatic gas.

* Pull the large white lever (pneumatic gas valve 1) to the open position:

<figure><img src="../.gitbook/assets/image (471).png" alt=""><figcaption></figcaption></figure>

* Turn the small black knob (pneumatic gas valve 2) to the open position:

<figure><img src="../.gitbook/assets/image (472).png" alt=""><figcaption></figcaption></figure>

* Ensure the pressure regulator reads \~75 PSIG:

<img src="../.gitbook/assets/unknown (239).png" alt="" height="221" width="236">

## Turning on Heating Elements

1. Turn on the variac, and ensure it is set to 50V as seen below.

<div><img src="../.gitbook/assets/unknown (24).jpeg" alt="" height="272" width="319"> <img src="../.gitbook/assets/unknown (25).jpeg" alt="" height="273" width="204"></div>

2. Turn on the DC power supply. When it turns on, current should read 0 amps and voltage should read 15 volts. Later, when you set the substrate temp setpoint, the current will rise to 10 amps, or whatever current you're choosing to use.

<img src="../.gitbook/assets/unknown (26).jpeg" alt="" height="254" width="234">

3. Open the ALD GUI.
4. On the Control tab, entire the desired temperature setpoints for the precursor(s), delivery line, and Substrate heater. All of these setpoints are process dependent and should be informed by literature review.
5. The DC power supply should show 10 amps while the substrate heater heats up, as seen below.

<img src="../.gitbook/assets/unknown (27).jpeg" alt="" height="218" width="245">

6. Wait for all temperature setpoints to stabilize. There will be temperature overshoot at first due to the nature of the control system.
7. If temperature overshoots any setpoint by >50C, hit the emergency power off button and contact the lab manager.
8. If temperature does not rise or stabilize on any given element, contact the lab manager.
9. You may not leave the system unattended while waiting for temperature to stabilize!

## Deposition

1. Open the precursor box. Open the manual valve associated with each precursor ampule. Each knob should be parallel to the ampule as seen below. When opening the door, a loss of vent flow alarm should come on, and then turn off after closing the door.

<img src="../.gitbook/assets/unknown (28).jpeg" alt="" height="211" width="158">

2. Open the recipes tab. Build or open a desired recipe (process dependent).
3. Run the recipe. You should hear the ALD valves begin to actuate.
4. You may not leave the system unattended while the recipe is running! The deposition process must be attended at all times. Lab members are expected to coordinate with each other to ensure that at least one person is in the lab throughout the process. It is recommended that at least two lab members are present so that one can leave to go to the restroom, take a break, etc. There is a zero-tolerance policy for leaving the ALD chamber unattended during deposition. This is due to the pyrophoricity of the precursors being used and the need for immediate intervention in the event of an emergency.&#x20;

This image shows the precursor cylinder used during deposition tests, wrapped with insulation and heating tape to ensure stable temperature control and consistent precursor delivery.

<img src="../.gitbook/assets/unknown (240).png" alt="" height="383" width="510">

## Removing Substrate

1. After the recipe is complete, reset all temperature setpoints to 20C, and wait for them to cool to 30C or lower.
2. Turn off the Variac and DC power supply.
3. Open the precursor box and close all the manual ampule valves as shown.
4. Set the Mass flow controller back to 0 SCCM.
5. Close the UHP Nitrogen carrier gas cylinder valve (righty-tighty)
6. Close both the small back and large white pneumatic gas valves.
7. Close the GUI.
8. Turn off the Scroll pump with the red button on the back.
9. Once pressure has returned to 760 torr or above, open the chamber and retrieve your substrate.
10. Reclose chamber door.

<img src="../.gitbook/assets/unknown (29).jpeg" alt="" height="220" width="166">

### Precursor Gas Procedures (storage, handling, replacement)

* Precursors acceptable for use in this system:
  * Non-pyrophoric and non-chlorine based precursors
    * Pyrophoric precursors may be approved in the future, but must be pre approved by the ECE Nanofab and EHS.
* There is no location for precursor storage within the CMU Hacker Fab. There may only be precursors in the precursor box, which are hermetically connected to the ALD systems delivery line via a VCR fitting (prepared for use with the ALD system).
* Precursors are to be sourced from the CMU Bertucci Nanofab through Matt Moneck.
  * Handling / Replacement of Precursor Ampoules is only to be performed by Matt Moneck.

## Troubleshooting Guide

* The substrate heater won't heat up.
  * If the DC power supply does not show 10 amps after setting temperature, either...
    * The relay is not actuating, or
    * One of the leads is disconnected, making an open circuit
  * Otherwise...
    * Heating wire may be shorted to the chamber or thermocouple dislodged. Power off DC power supply. Open the chamber and check for any unintended contact between the heating wire and chamber. Check if the thermocouple is secured within the heater assembly.
* The chamber won't pump down.
  * Possible causes...
    * Leak: check seal cleanliness and retighten with even pressure on each screw knob.
    * Carrier gas not off: ensure MFC is set to 0 SCCM.
    * Vacuum gauge broken: if the door wont open, but the pressure is at atmosphere, then the gauge may be broken and should be reported to the lab manager.
    * Manual ampoule valve open: ensure all manual ampoule valves are closed.

### Emergency Response Procedures

There are two ways to stop the deposition process during an emergency. One way is through the GUI’s “emergency stop” button. This will shut off all electricity to the components, and in order to restart, you will have to close and re-open the GUI.&#x20;

<img src="../.gitbook/assets/unknown (241).png" alt="" height="197" width="514">

Another option is the physical emergency stop button (labeled “10” in system diagram). This button achieves the same goal as the GUI’s emergency button, but it is a physical button located next to the deposition chamber.&#x20;

<img src="../.gitbook/assets/unknown (242).png" alt="" height="182" width="244">

Below is a list of possible scenarios...

* Fire:
  * If safe to do so, press the Emergency Stop (E-STOP) button.
  * Activate the building fire alarm system using the manual fire alarm pull station in the hallway (at nearest exit, identified in pre-operational checklist).
  * If you have been trained to use a fire extinguisher and the fire is small, attempt to extinguish the fire (only if you are comfortable doing so). Use the nearest appropriate fire extinguisher.
  * Evacuate the building immediately, even if the fire appears to be out, and close the lab door behind you on the way out.
  * From a safe location outside the building, wait for emergency responders and contact University Police at 412-268-2323 to report the incident.
  * Do not re-enter the building until cleared by emergency responders.
* Gas leak (UHP nitrogen carrier gas or pneumatic gas) as signaled by gas escape noise, loss of carrier gas flow, or loss of pneumatic gas pressure:
  * Hit the emergency power off button (closes valves and stops heating).
  * Close UHP Nitrogen carrier gas cylinder.
  * Close pneumatic gas valve (large white lever).
  * If the leak cannot be stopped or is major, evacuate the lab immediately, close the door behind you, and activate the building fire alarm pull station.
  * Notify the EHS and the lab manager once in a safe location. Do not re-enter until cleared by emergency responders.
* Loss of precursor exhaust flow as signaled by precursor box exhaust/vent line alarm:
  * Hit the emergency power off button (closes valves and stops heating).
  * Close UHP Nitrogen carrier gas cylinder.
  * Close pneumatic gas valve (large white lever).
  * Shut down the system and close all manual precursor ampoules valves.
  * Post a notice to alert other users not to operate the machine.
  * Notify EHS and the lab PI.

## Management of Changes to the ALD Chamber

The ALD chamber and the associated deposition process is inherently hazardous. This chamber in its current configuration has been reviewed by multiple stakeholders, including staff from the ECE Nanofabrication Lab and Environmental Health and Safety (EHS). Any changes to the equipment used in this research must be reviewed by the ECE Nanofabrication Lab and EHS before being implemented.

## ALD Recipe Execution Guidelines&#x20;

* Reference HfO2 ALD Cycle:
  * H₂O pulse (\~0.015 s)
  * N₂ purge (5–20 s)
  * Hf precursor pulse (0.15–0.40 s)
  * N₂ purge (5–20 s)
* Growth rate: \~1 Å/cycle
* Delivery line temperature: 150C
* Substrate temperature: 250C
* Precursor temperature: 75C&#x20;
* H2O precursor temperature: 20C&#x20;
