---
description: Weekly Updates for Alex Echols (ALD Project)
---

# Alex Echols

## Update 2 (02/02/2025)

### Progress Updates

#### Chamber Exhaust Part Sourcing

* Created CAD of the ALD chamber and the chamber to pump line

<figure><img src="../../.gitbook/assets/image (74).png" alt=""><figcaption><p>Chamber CAD made from models from IdealVac website</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (75).png" alt=""><figcaption><p>Chamber to pump assembly</p></figcaption></figure>

* Sourced parts for the chamber to pump line from IdealVac

| Part                  | Qty Purchased | Price   |
| --------------------- | ------------- | ------- |
| KF-25 Hinge Clamp     | 2             | $23.98  |
| KF-25 Centering Ring  | 3             | $29.79  |
| KF-25 90 Degree Elbow | 1             | $71.92  |
| -------               | -------       | ------- |
| Total                 | -------       | $395.69 |



#### Substrate Heater Design

* Updated CAD of substrate heater
* Designed substrate heater mount

The substrate heater (pictured below) is very similar to the one which was designed during the F-2024 semester. The primary differences in the heater itself are:

* Countersink the holes in the upper plate to accommodate a #6-32 flat head screw. The plate thickness of 0.1" will just allow the bolts with a head height of 0.097" to fit without interfering with any wafers that may be placed on the surface
* Modify the bottom plate to add 3 slots, spaced 60 degrees radially apart, which are used from alignment.

<figure><img src="../../.gitbook/assets/image (77).png" alt=""><figcaption><p>Bottom plate (showing slot arrangement)</p></figcaption></figure>

In addition to the substrate heater modifications, a mounting bracket was designed, which will hold the substrate heater into the chamber.  In order to minimize thermal conduction paths between the heater and the chamber walls, 3 silicon nitride balls will be used for alignment. This material should be compatible with our precursors, and has a thermal conductivity of approximately 20% of the aluminum plates. The mounting bracket has 3 holes which locate the balls, which then line up with the slots in the heater plate. Taking inspiration from the concept of exact constraint design, the balls contact the heater at exactly 6 points, constraining the heater in 6 DOF, and making removal easy in the event that the heater needs to be serviced. Additionally, the very low contact area of the lower heater plate with the balls, and the balls with the mounting bracket should further limit heat transfer by conduction, which is the primary vector that we are worried about.

<figure><img src="../../.gitbook/assets/image (76).png" alt=""><figcaption><p>Section view of chamber, showing the substrate heater and mount</p></figcaption></figure>

* Sourced parts for substrate heater and mounting assembly

<table><thead><tr><th>Part</th><th width="121">Qty Needed</th><th>Vendor</th><th width="109">Est. Price</th><th>Notes</th></tr></thead><tbody><tr><td>#6-32 Flat Head Screw</td><td>4</td><td>McMaster (90585A215)</td><td>$5.23</td><td>Secures heater assembly**</td></tr><tr><td>#6-32 Hex Nut</td><td>4</td><td>McMaster (91841A007)</td><td>$4.04</td><td>Secures heater assembly**</td></tr><tr><td>#6 Lock Washer</td><td>4</td><td>McMaster (92146A540)</td><td>$1.78</td><td>Secures heater assembly**</td></tr><tr><td>Heater Top Plate</td><td>1</td><td>SendCutSend</td><td>$7.51</td><td>Could make in Techspark (if waterjet is working)</td></tr><tr><td>Heater Bottom Plate</td><td>1</td><td>SendCutSend</td><td>$10.30</td><td>Could make in Techspark (if waterjet is working)</td></tr><tr><td>#8-32 Standoff</td><td>1</td><td>McMaster (91115A843)</td><td>$5.53</td><td>Mounting Bracket Stability</td></tr><tr><td>#8-32 Socket Head Screw</td><td>2</td><td>McMaster (92196A192)</td><td>$9.95</td><td>Mounting Bracket Stability**</td></tr><tr><td>SiN Balls</td><td>3</td><td>McMaster (9576K46)</td><td>$42.81</td><td>Alignment</td></tr><tr><td>Mounting Plate</td><td>1</td><td>SendCutSend</td><td>$31.59</td><td>I would recommend getting this made externally, as SendCutSend can bend the part for us</td></tr><tr><td>1/4-20 Socket Head Screw</td><td>4</td><td>McMaster (92196A537)</td><td>$20.71</td><td>Mounting Bracket Mounting**</td></tr><tr><td>-------</td><td>-------</td><td>-------</td><td>-------</td><td>-------</td></tr><tr><td>Total</td><td>-------</td><td>-------</td><td>$139.45</td><td>-------</td></tr></tbody></table>

\*\* This item can almost definitely be sourced cheaper individually (i.e. from BoltDepot or similar), but it comes down to a question of lead times at some point

#### Chamber Stand Design

* This is currently in beginning stages, but some basic cad of a simple chamber stand has been made

<figure><img src="../../.gitbook/assets/image (78).png" alt=""><figcaption><p>CAD of chamber on aluminum extrusion stand</p></figcaption></figure>

* This needs to be modified slightly from the simple box design to avoid some collisions with the line to the vacuum chamber

### Roadblocks

* No major roadblocks to report

### Plans

* Review substrate heater design with project leads
  * If approved, finalize sourcing and order parts
* Finalize design for chamber stand and source parts
  * Time permitting, review the design and order parts
* Once design work is finished on the substrate heater and parts are being ordered, begin research on creating Aflas O-Rings from the cording
  * Some preliminary googling indicates that a solvent weld with acetone might be possible, but I feel somewhat skeptical of the sealing quality of these O-Rings and feel that it's important to figure out how possible this sealing method is ASAP

## Update 1 (01/26/2025)

### Progress Updates

* Created experimental design for profiling substrate heater
* Began updating 3D CAD of the substrate heater and ALD chamber
* Reviewed literature on material compatibility with precursor materials (for heater parts)
* Drafted and submitted semester project proposal

### Roadblocks

* No major roadblocks to report

### Plans

* Continue to work on CAD of the chamber assembly
  * Preliminary designs for the entire heater stack, including chamber mounting by EOW
* Begin research on compatible tubing and passthroughs
* Create plan for making Aflas O-Rings from cording

## Update 0 (01/19/2025)

### Progress Updates

* Reviewed documentation from the Fall 2024 semester
* Had initial group meeting with ALD team to delegate roles and discuss next steps
* Began planning for ALD chamber passthroughs and substrate heater thermal characterization

### Roadblocks

* No major roadblocks to report

### Plans

* Review literature on material compatibility with precursor chemicals and vacuum design
* Detail experimental procedure for substrate heater characterization
  * Understand the relationship between input voltage/current and output temperature/temperature rate
  * Ensure heater uniformity
* Draft project proposal

##

