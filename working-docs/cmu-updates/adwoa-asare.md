---
description: I am in Lab Automation working on liquid handling and automated dicer.
---

# Adwoa Asare

## Update 0

### Progress

* Researched pinch valves for new system design and suggested to the team.
* Looked into high torque motors and stepper motors with gearboxes so I can increase the torque being applied on the peristaltic pump.
* Chose a new motor to order to revamp the system.

### Roadblocks

* None. I just to need to order parts.

### Plans

* I will update the peristaltic pump 3d model to be compatible with a stepper motor that has a gear box attached.
* I will order a stepper motor that has a gear box.
* I will work on code for making the stepper motor move more smoothly.

***

## Update 1

Our project objective has changed to a single integrated design for spin coater and heating since last week. I still am working on liquid handling, but Matthew is doing the On-shape CAD for the pump instead.

### Progress

* Researched fittings & valves that work with our chemicals.
  * Polypropylene will work for most of our chemicals. It is **very compatible** with HMDS, Acetone, IPA, AZ P4210 (Photoresist). It is **likely also compatible** with Spin-on-glass 700B and P504 based on their compositions.
  * There are **fully polypropylene valves** we can use and just attach an actuator to instead of making our own valves and I think we should pursue this if it will take up less space.
* Ordered a stepper motor with gear box and the appropriate components to drive and power it.
* Worked on stepper code.

### Roadblocks

* I am waiting for the parts I ordered to arrive.

### Plans

* Meet up with Matthew and 3D print the peristaltic pump CAD from On-shape.
* Test pump functions.
* Look into how we can order the fittings and valves.

***

## Update 2

### Progress

We can order propylene fittings and valves from:

* John Guest Push-to-Connect Fittings
* Jaco Kynar Compression Tube Union Tees
* SP Bel-Art T Shaped Tubing Connectors

I worked on CADfor holding the tubes over the frames. It is parameterized and you can change the number of tubes.

<figure><img src="../../.gitbook/assets/Screenshot 2025-02-09 220735.png" alt=""><figcaption></figcaption></figure>

I looked into position sensing methods for determining the location of the spin coater (ultrasonic, infrared, laser). We settled on infrared for the design.

Unrelated to automated spin coater, I investigated some ideas for Joshna regarding the automatic dicer. She brought to my attention that we could use fiber laser to cut the wafer to increase precision. The idea here is that with diamond scribing or even diamond cutting you get microcracking, microchipping, and lost material from klerf-loss. When you use laser to cut fully through a wafer there are micro warps from the melting and but not cracks and chips. You can avoid this warping by laser pulsing (see this article: [https://www.gmp.ch/htmlarea/pdf/GSI/JK100P\_app\_note.pdf](https://www.gmp.ch/htmlarea/pdf/GSI/JK100P_app_note.pdf)).&#x20;

To successfully laser cut a wafer we would need high powered lasers (100 W to 200W) depending on if we are using a fiber laser or Nd: YAG Laser. This would cost thousands of dollars just for the appropriate laser, so I don't think it will be worth it for our purposes. Also, a fume hood is not proper ventilation for laser cutting a wafer, so we would need to make a ventilation solution as well.&#x20;

We could get a weaker and cheaper laser and only use it for wafer scribing (in which case we would still separate the wafer using clean cut pliers). However, I think this would still result in kerf-loss. I think for our purposes (1 cm \* 1 cm chips), diamond scribing is good enough especially for a V1, but I would be curios to hear what other's think.

### Roadblocks

* The pump CAD was not finished this week, and our motor did not arrive yet.



### Plans

* I am working on a CAD to hold the heat gun, should be done by EOD Monday.
* Work on presentation and assembly with team.
* Hopefully motor will be here. If it is, Matthew and I will test the pump.
