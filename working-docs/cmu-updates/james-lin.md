---
description: >-
  My name is James and I will be working on the ALD and IC Packaging this
  semester :3
---

# James Lin

ALD Project Proposal: [https://docs.google.com/document/d/1hN6o0-Mjtj6w6XVKbcjDsQGZm-uqVoWmuRubTbs2fYQ/edit?usp=drive\_link](https://docs.google.com/document/d/1hN6o0-Mjtj6w6XVKbcjDsQGZm-uqVoWmuRubTbs2fYQ/edit?usp=drive_link)

Packaging Project Proposal: [https://docs.google.com/document/d/1mPezRVWu7PNa3ggTOlxjDEdb9D6B84CEXgIU-5ACNHs/edit?usp=drive\_link](https://docs.google.com/document/d/1mPezRVWu7PNa3ggTOlxjDEdb9D6B84CEXgIU-5ACNHs/edit?usp=drive_link)

***

## Weekly Update #11

### ALD:

Progress:

* got the push to connect for valve gas and its connected to lab supply!

<figure><img src="../../.gitbook/assets/image (255).png" alt="" width="301"><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (256).png" alt="" width="375"><figcaption></figcaption></figure>

Challenges:

* nothing so far, just tight ish timeline for the rest of integration until end of sem

Plans:

* meet with Viswesh and Matt in the coming week to plan out exhaust for ALD
* buy exhaust tubing
* work out kinks with heating tape once test happens

## Packaging

Progress:

* Altium for both resistor chip and motherboard done and will be ordered on Monday!!!
* McMaster and Digikey parts on purchase tracker
* Talked to Joel a bit about packaging for next sem and had a few areas of interest:
  * Wafer cleaving solution:
    * currently chip is very big and we dont have guarantees that we can cleave them very accurately by hand
    * this increases parasitic resistance by making the bonding wires a lot longer than they should be
    * Making a cleaving jig with small diamond disk attached to a high speed motor?
    * Plasma etching to cut dies?
  * Look into flip chip on board via reflow:
    * would need updates on nickel plating and verification that we can grow tall aluminum pads
    * we also have not verified that our chips can withstand reflow temps
  * look into chip in package:
    * if we can cleave chips accurately, then a we can size for chip in package with more certainty
    * another possibility is copper/nickel plating onto 3D printed resin parts, which may be a solution to the lead frame problem
* Brief summary of boards:
  *   The packaging solution we have uses a chip on board approach and is separated in 2 parts:

      1. the actually package that has the chip in the center of the board and uses aluminum wire bonding to connect IO pads to the PCB
      2. a motherboard with 2 package slots that has IO for the Anolog Disovery 3 ([https://digilent.com/shop/analog-discovery-3/](https://digilent.com/shop/analog-discovery-3/)) we will be using for electrical characterization tests

      The current resistor chip package is just 8 rows of doped Si resistors with varied widths to help us test for overall contact and parasitic resistances of our wire bonding connections. Each pin has a 0.1 uF decoupling capacitor as well The motherboard has a pull up or pull down resistor slot for each pin in the case that we will be doing toggling for logic circuits in the future, and I've also added decaps near the output pins
* Board PDFs:

{% file src="../../.gitbook/assets/Motherboard.pdf" %}

{% file src="../../.gitbook/assets/ResistorChipPackage.pdf" %}

<figure><img src="../../.gitbook/assets/image (257).png" alt="" width="563"><figcaption><p>2 Packages on Motherboard</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (258).png" alt="" width="563"><figcaption><p>Resistor Chip Package PCB Layout</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (259).png" alt="" width="375"><figcaption><p>Resistor Chip Package PCB Front</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (262).png" alt="" width="375"><figcaption><p>Resistor Chip Package PCB Back</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (263).png" alt="" width="563"><figcaption><p>Motherboard PCB Layout</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (260).png" alt="" width="375"><figcaption><p>Motherboard PCB Front</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (261).png" alt="" width="375"><figcaption><p>Motherboard PCB Back</p></figcaption></figure>

Challenges:

* boards took a longer than anticipated to do partially due to school work and partially due to wrestling with Altium
* Had to keep pin labeling super vague since we expect to be putting different packages on this&#x20;

Plans:

* look into resin printing material and see if we can minimize the package cap melting if we need to put soldering iron near package to make modifications to passives
* print package cap
* maybe make a platform out of PLA to hold motherboard
* wait for board and parts to arrive
* add to metrology project description for next sem

***

## Weekly Update #10

### ALD:

Progress:

* wrapped 4ft heating tape around the manifold line and verified that 2ft heating tape works for our ampules
  * turns out we ordered the wrong quantities for the two heating tape lengths lol
  * new heating tape has been ordered
* cylinder is fixed/replaced, carrier gas supply is fully integrated with system
* Viswesh tested vacuum of the whole line, after some time with vacuum on, we were able to reach 3 mTorr/min of loss, which was decided to be acceptable during actual use

Challenges:

* we never found the last push to connect fitting to integrate N2 gas for ALD valves, had to order that as well
* the heating tape and push to connect may not be ready by demo 2

Plans:

* secure heating tape more tightly
* finish valves gas supply and troubleshoot
* presentation 2

<figure><img src="../../.gitbook/assets/image (213).png" alt="" width="563"><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (214).png" alt="" width="563"><figcaption></figcaption></figure>

### Packaging:

Progress:

* footprint for our 16 pin chip is created in altium!&#x20;
  * specs:
    * pink sq is the maximum allowed chip size (14mm x 14mm)
    * yellow sq is the theoretical chip size (10mm x 10mm)
    *   each pad is 1.5mm x 0.5mm with 0.5mm gap between each other

        (reccomended pad width and spacing is \~0.38mm but i wanted to be safe)
    * the two rows of pads are set to leave a 2mm gap to the pink sq

<figure><img src="../../.gitbook/assets/image (215).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (216).png" alt="" width="372"><figcaption></figcaption></figure>

* schematics are also mostly done
  * need to add pull down resistor slots and decoupling capacitor slots and need help with understanding what best fits our chip testing application
    * Pull up/down resistors: [https://eepower.com/resistor-guide/resistor-applications/pull-up-resistor-pull-down-resistor/#](https://eepower.com/resistor-guide/resistor-applications/pull-up-resistor-pull-down-resistor/)
    * Decaps: [https://resources.altium.com/p/what-size-decoupling-capacitor-should-i-use-my-digital-ics](https://resources.altium.com/p/what-size-decoupling-capacitor-should-i-use-my-digital-ics)
* our pads will need to be ENIG plated&#x20;
  * explanation of the plating here: [https://pcbtrace.com/enig-plating/#:\~:text=For%20Chip%20on%20Board%20(COB)%20assembly%2C%20manufacturers,protecting%20layer%20preventing%20the%20Nickel%20from%20oxidizing.](https://pcbtrace.com/enig-plating/)
  * unsure how gold is conducive to a good electrical bond for AL wires, will need to look more
* Also took pictures of wire bonds on my resistor lab chip
  * was not able to make a fully successful bond, pads were too weak, and short bond distance lead to breaking at the joint

<figure><img src="../../.gitbook/assets/Broken Pads.jpg" alt="" width="375"><figcaption><p>Broken pads and bonds</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/Long Bond 5X.jpg" alt="" width="375"><figcaption><p>Longer bond on sheet aluminum</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/Single Bond. 5Xjpg.jpg" alt="" width="375"><figcaption><p>Somewhat Successful Bond across pads</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/Single Bond.jpg" alt="" width="375"><figcaption><p>Same bond with higher magnification</p></figcaption></figure>

Challenges:

* Carnival week meant not as much work was done was planned :<
* lead time for PCBs might be too long :sob:
* wire bonding will be very finicky to do

Plans:

* LOCK IN on Altium and get a workable file sent out as soon a possible
* figure out how to specify ENIG finish to digikey
* presentation 2

***

## Weekly Update #9

### ALD:

Progress:

* H2O ampule delivered from Swagelok!
* The line is connected to both the chamber and the N2 cylinder
* Final steps for ALD valve gas is still waiting on McMaster push to connect fitting
* Viswesh did vacuum test with line connected today, we can reach 20 mTorr pressure but loses at 3 mTorr per minute



Challenges:

* Identifying leaks in the line will probably not be trivial

Plans:

* Will be working with Viswesh for vacuum stuff&#x20;
* Look for/reorder push to connect to finish up the ALD valve gas line

<figure><img src="../../.gitbook/assets/image (192).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (193).png" alt="" width="375"><figcaption></figcaption></figure>

### Packaging

Progress:

* We were able to talk to Jim Bain after during his guest lecture:
  * He basically gave approval of the chip on board concept for this semester, he also came to the conclusion that chip in package would be too finicky and hard to replicate for other people
  * He strongly suggested that we just order the boards for packaging as opposed to making it ourselves, mainly due to wire bonding needing a specific coating on PCB pads to work reliably (prob something like this that Icey sent but need it for aluminum specfically: [https://www.protoexpress.com/kb/enig/](https://www.protoexpress.com/kb/enig/))
  * he also seems fairly confident about our IO pads just being 3um thick AL pads, since AL is fairly reactive and prone to form oxides (good for adhesion) and its ductility will help prevent pad cracking and the wire from pushing beneath the pad
* Made some progress with Altium schematics, got the connectors and netlists figured out
  * need to figure out how to make the custom footprint for the wire bond pads
* Also did a wire bonding test with my group's resistor lab chip, will get microscope pics in a few days but here are some main takeaways :
  * The 0.48 um aluminum pads are way too small and lifts up fairly easily (though I was able to make first bond with one of them)
  * the wire pulling is very scuffed, and the bonder can only pull in one direction
    * we probably wont have problems with this, but the joint will snap super easily if ur wire bond is too short&#x20;
    * the wire in general snaps super easily at the joint if the wire is dragged off axis during the bond
  * if the pad comes off during bond, clogging the machine is likely, which may be painful to fix&#x20;
  * also took a pic of some recommendations for bonding surfaces in the lab

<figure><img src="../../.gitbook/assets/image (189).png" alt="" width="375"><figcaption><p>Manual in MEMS Lab</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (190).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (191).png" alt="" width="354"><figcaption></figcaption></figure>

Challenges:

* Thermal fluids experimentation continues to make me hate my life, but there will be less deadlines for me leading up to carnival, so I am really hoping to be more productive with packaging work for this coming week

Plans:

* take microscope pics of the resistor lab chip wire bond test
* finish out the Altium schematics and layout to hopefully get some feedback by end of week
* figure out the specific PCB pad finish that will be compatible with AL wire bonding

***

## Weekly Update #8

### ALD:

Progress:

* Mid sem documentation finally done last week
* ALD valve gas line sucessfully integrated into the lab, and we get  sufficient pressure without leaks!
* Yippie delivery storage mostly assembled
  * modifications on the floor made - 3 new holes were made
  * retaining plates waterjetted - manifold is well secured now
* Two stage regulator installed with Viswesh, need help with opening the cylinder to verify it actually works :sob:
* Still waiting on empty cylinder but confirmed with Zach that they have started manufacturing

<figure><img src="../../.gitbook/assets/image (183).png" alt="" width="375"><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (184).png" alt="" width="375"><figcaption></figcaption></figure>

Challenges:

* Matt wasn't able to get us the tube bender before the conference, but shouldn't be a big deal for us
* I anticipate that we will run into the most issues with routing tubing to the regulator and with wrapping the heating tape going forward
* otherwise progress for delivery storage is in a pretty good place&#x20;

Plans:

* get tube bender and figure out how we will connect cylinder to MFC to manifold
* work on presentation two
* talk to Matt to move along plan with exhaust for overall ALD system (storage and vacuum)
* not much else due to lead time on ampules

### Packaging:

Progress:

* Again not much :(
* Finished mid sem documentation as well last week
* Heard from Joel that Jim Bain has some ideas for packaging

Challenges:

* been swamped with school work, but will be able to put more time into packaging now that a good chunk of physical work for ALD is finished

Plans:

* Get Altium chip on board package design to a good place this week
* Dig into literature on wire bonding and start organizing research
  * Need to create list of failure modes to look out for
  * Create a much better supported justification for our wire bonding decisions
* Talk to Matt and Joel on Tuesday about packaging ideas

***

## Weekly Update #7:

### ALD:

Progress:

* Empty cylinder for H2O finally ordered today after the long saga
  * The cylinder assembly ended up being \~1.75in longer than CAD, so we are going with the hole underneath the water ampule
  * We were also able confirm SC-11 cleaning for the cylinder, but this is not promised as welding cannot be done in clean room
  * The final price also increased to $483.52 and will arrive in 1-3 weeks

<figure><img src="../../.gitbook/assets/image (181).png" alt="" width="375"><figcaption><p>Swagelok Quote</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (182).png" alt="" width="563"><figcaption><p>Swagelok Drawing</p></figcaption></figure>

* Sheet metal parts arrived!&#x20;
  * The parts seem to fit well with each other

<figure><img src="../../.gitbook/assets/image (180).png" alt="" width="188"><figcaption></figcaption></figure>

* Everything seems to fit&#x20;
* otherwise not much

Struggles:

* Documentation is late, had less time over break than anticipated from family matters
* Need try squeezing out time for fabrication and assembly work&#x20;
* Relatively long lead time for the empty ampule may put a wrench in testing the overall ALD system

Plans:

* Finish documentation ASAP
* Waterjet retainer plates in TechSpark or elsewhere
* Cut hole in storage floor for water ampule
* Storage assembly and test for interference
* Work on integrating the N2 gas line for the ALD valves

### Packaging:

Progress:&#x20;

* Unfortunately I was not able to get a lot done over break :(

Struggles:

* Same deal as ALD, documentation is behind, but since ALD is my main project I will be prioritizing that first
* A lot of work for ALD will be done this week, but will try to make as much progress on Altium design as I can this week

Plans:

* Also documentation ASAP after ALD one is done
* Altium Altium Altium, preferably in a good place by end of week
* Get some spare time to compile some wire bonding failure modes that we should be looking out for and include in documentation

***

## Weekly Update #6:

### ALD:

Progress:

* Some more orders for valves gas line assembly

<figure><img src="../../.gitbook/assets/image (148).png" alt="" width="563"><figcaption><p>ALD Valve Gas Schematic</p></figcaption></figure>

* got quote from Swagelok that offers cylinder assembly for half of STREMS price
  * $800 -> $400 yay
  * assembly is 2.6" too long and unsure if the cleaning standard matches&#x20;
  * sent email back to check if can shorten by 1"

<figure><img src="../../.gitbook/assets/image (149).png" alt="" width="563"><figcaption></figcaption></figure>

* Also made retaining plates for clamping down manifold

<figure><img src="../../.gitbook/assets/image (146).png" alt="" width="563"><figcaption><p>Retaining Plate</p></figcaption></figure>

Struggles:

* Possible problem with waterjets, but can use CMR waterjet as a backup if techspark is still not up
* Possible inconvenient design changes may be needed due to the water ampule being too long
  * we either move manifold up: requiring making two holes bigger, redesigning chamber tube, and cutting extrusions shorter
  * or we cut a hole under the water ampule

Plans:

* Continue to communicate with Zach from Swagelok and figure out the plans for water ampule
* Waterjet the retainer plates when come back to school
* Documentation

### Packaging:

Progress:

* Learned a lot from Prof. Radway's packaging guest lecture
* Found some documents talking about IO pad design:
  * [https://www.we-online.com/files/pdf1/design-rules-wire-bonding-cbt-en.pdf](https://www.we-online.com/files/pdf1/design-rules-wire-bonding-cbt-en.pdf)
  * [https://nrf.aux.eng.ufl.edu/\_files/documents/3201.pdf](https://nrf.aux.eng.ufl.edu/_files/documents/3201.pdf)
  * [https://www.edaboard.com/threads/information-about-designing-io-pads.186647/](https://www.edaboard.com/threads/information-about-designing-io-pads.186647/)
* Meeting with Icey to discuss plans for IO pads
  * Plan to use first resistor testing chip as a trial to identity possible failure modes for wire bonding
  * We will do regular aluminum IO pads and see how well it works&#x20;
  * Did some math to figure out that chip cannot exceed 14mm x 14mm for wire bond clearance

<figure><img src="../../.gitbook/assets/image (150).png" alt="" width="563"><figcaption><p>Meeting Note</p></figcaption></figure>

* Joel and I also found out that the MEMS lab PCB mill doesn't work, but we can try to use the one that has been sitting in Techspark for a long time

Struggles:

* there are lots of uncertainties about how our wire bonds and IO pads will perform, so will need to have a well researched set of failure modes to look out for

Plans:

* do more research on IO pads and wire bonding failures
* aim to have PCBs designed by Monday 3/10
* PCB mill the week of school starting
* Wire bonding around 1.5 weeks after school starts again
* Documentation&#x20;

***

## Weekly Update #5:

### ALD:

Progress:

* Delivery storage design finalized
* All delivery system fittings are ordered&#x20;
* All hardware in tracking sheet, unfortunately sheetmetal wont be here by start of spring break

<figure><img src="../../.gitbook/assets/image (135).png" alt="" width="563"><figcaption><p>Onshape Screenshot of Latest Design</p></figcaption></figure>

Plans:

* get retaining plate for U bolts designed in CAD, planning on water jetting the 0.1" AL left over from substrate heater right after spring break, aim to have design finished by end of week
* need to also order LED strips for delivery storage
* also need to get the empty ampule ordered :sob:

Struggles:

* school work is keeping me really busy and I'm pretty exhausted in general
* should've gotten the orders in sooner, but given that sheetmetal won't arrive on time, we should be ok

### Packaging

Progress:

* Finally decided on doing chip on board packaging

<figure><img src="../../.gitbook/assets/image (133).png" alt="" width="563"><figcaption><p>18-469D/669D - S25 - Presentation 1</p></figcaption></figure>

* I have a finally made a design concept for the packaging in CAD

<figure><img src="../../.gitbook/assets/image (134).png" alt="" width="563"><figcaption><p>18-469D/669D - S25 - Presentation 1</p></figcaption></figure>

Plans:

* find time to make the Altium design for package
* To Joel: is Thursday ok to do PCB mill?
* work on getting the mother board and encapsulation ready over spring break

Struggles:

* school work is pretty bad this week, not sure how much time I can put into this but will try

***

## Weekly Update #4:

### ALD:

Progress:

<figure><img src="../../.gitbook/assets/image (113).png" alt="" width="563"><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (115).png" alt="" width="563"><figcaption></figcaption></figure>

* Grinded out design for delivery storage, some major design elements and specs:
  * Previously unused 1/2" section removed to prevent precursor mixing
  * Box made of 4 piece 1.6mm thick bent sheet metal
    * Bolted together with M3 screws
  * Manifold supported by ALD valve collar with 3/8"-16 U bolts mounted to box ceiling
  * Single hinge and latch using #6 screws
  * Mounts to 8020 stand with M5 screws
  * Cutouts for:
    * Inlet and outlet for carrier gas and precursors&#x20;
      * 1/4" steel tubes wrapped with heat tape
    * 3 sets of heat tape and thermocouple
      * 1 for manifold and outlet line
      * 2 for TMIn and TDMSn ampules
    * ALD Valves power and control wires
    * ALD Valve N2 supply
    * Exhaust for KF40 bulkhead flange
    * Vent holes on 2 sides for exhaust airflow
* Submitted safety review of earlier prototype to Matt
* BOM:

<table><thead><tr><th>Item</th><th>Supplier</th><th width="217">Link</th><th width="56">Quantity</th><th width="137">Price</th><th data-type="checkbox">Ordered</th></tr></thead><tbody><tr><td>Sheet metal</td><td>Send Cut Send</td><td><a href="https://cart.sendcutsend.com/d1ktsjxjut64">https://cart.sendcutsend.com/d1ktsjxjut64</a></td><td>1</td><td>$319.00</td><td>true</td></tr><tr><td>1/4" VCR Caps</td><td>Swagelok</td><td><a href="https://products.swagelok.com/en/c/caps/p/SS-4-VCR-CP?q=:relevance:connection1Size:1%2F4+in.:connection1Type:VCR%C2%AE+Metal+Gasket+Face+Seal+Fitting">https://products.swagelok.com/en/c/caps/p/SS-4-VCR-CP?q=:relevance:connection1Size:1%2F4+in.:connection1Type:VCR%C2%AE+Metal+Gasket+Face+Seal+Fitting</a></td><td>3</td><td>$47.7</td><td>true</td></tr><tr><td>1/4" VCR Gasket</td><td>Swagelok</td><td><a href="https://products.swagelok.com/en/c/gaskets/p/SS-4-VCR-2">https://products.swagelok.com/en/c/gaskets/p/SS-4-VCR-2</a></td><td>20</td><td>$38.00</td><td>true</td></tr><tr><td>1/4" FVCR to 1/4" Tube</td><td>Swagelok</td><td><a href="https://products.swagelok.com/en/c/straights/p/SS-4-WVCR-6-400">https://products.swagelok.com/en/c/straights/p/SS-4-WVCR-6-400</a></td><td>1</td><td>$50.60</td><td>true</td></tr><tr><td>U bolts, 1-1/8" ID</td><td>McMaster</td><td><a href="https://www.mcmaster.com/8880T955/">https://www.mcmaster.com/8880T955/</a></td><td>3</td><td>$5.64</td><td>true</td></tr><tr><td>Hinge</td><td>McMaster</td><td><a href="https://www.mcmaster.com/1586A34/">https://www.mcmaster.com/1586A34/</a></td><td>1</td><td>$7.15</td><td>true</td></tr><tr><td>Latch</td><td>McMaster</td><td><a href="https://www.mcmaster.com/1766A2/">https://www.mcmaster.com/1766A2/</a></td><td>1</td><td>$15.20</td><td>true</td></tr><tr><td>10-32 Screws, 3/8" long</td><td>McMaster</td><td><a href="https://www.mcmaster.com/91251A340/">https://www.mcmaster.com/91251A340/</a></td><td>6</td><td><p>$14.86 </p><p>(1 pack x100)</p></td><td>true</td></tr><tr><td>10-32 Drop in T nuts</td><td>McMaster</td><td><a href="https://www.mcmaster.com/4976N25/">https://www.mcmaster.com/4976N25/</a></td><td>6</td><td><p>$4.88 </p><p>(2 packs x10)</p></td><td>true</td></tr><tr><td>M3 screws</td><td>McMaster</td><td><a href="https://www.mcmaster.com/91290A113/">https://www.mcmaster.com/91290A113/</a></td><td>46</td><td><p>$12.52 </p><p>(1 pack x100)</p></td><td>true</td></tr><tr><td>M3 nylon lock nuts</td><td>McMaster</td><td><a href="https://www.mcmaster.com/90576A102/">https://www.mcmaster.com/90576A102/</a></td><td>46</td><td><p>$4.82 </p><p>(1 pack x100)</p></td><td>true</td></tr><tr><td>#6 screws, countersunk</td><td>McMaster</td><td><a href="https://www.mcmaster.com/91263A514/">https://www.mcmaster.com/91263A514/</a></td><td>6</td><td><p>$8.26 </p><p>(1 pack x25)</p></td><td>true</td></tr><tr><td>#6 screws, flat head</td><td>McMaster</td><td><a href="https://www.mcmaster.com/91251A146/">https://www.mcmaster.com/91251A146/</a></td><td>6</td><td><p>$11.90 </p><p>(1 pack x100)</p></td><td>true</td></tr><tr><td>#6 nylon lock nuts</td><td>McMaster</td><td><a href="https://www.mcmaster.com/90631A007/">https://www.mcmaster.com/90631A007/</a></td><td>12</td><td><p>$3.93 </p><p>(1 pack x100)</p></td><td>true</td></tr><tr><td>3/8" Lock Nuts</td><td>McMaster</td><td><a href="https://www.mcmaster.com/90630A121/">https://www.mcmaster.com/90630A121/</a></td><td>1</td><td>$4.5<br>(1 pack x20)</td><td>true</td></tr></tbody></table>

Struggles:

* balancing time with school work to get design finished
* we planned to order last Friday but wasn't able to get that ready in time

To do for this week:

* Confirm inlet and outlet configuration&#x20;
* Make any final adjustments to sheet metal
* Finalize BOM and order everything before Tuesday&#x20;
  * still need to set up a Send Cut Send Quote
* Work on presentation

### Packaging

Progress:

* Informed Icey about the recommended 3 micron AL pad thickness from this article
  * [https://lnf-wiki.eecs.umich.edu/wiki/Wire\_bonding#Design\_considerations](https://lnf-wiki.eecs.umich.edu/wiki/Wire_bonding#Design_considerations)
* Also got registered to work in MEMS lab&#x20;

<figure><img src="../../.gitbook/assets/image (116).png" alt="" width="563"><figcaption><p>Email reply from Fan</p></figcaption></figure>

* Joel and I have been thinking that jumping to chip on PCB packaging will be much eaiser to implement bc we can reduce the complexity and number of process steps in packaging manufacturing
* we should be able to cover up the chip with lower risk of contamination by 3D printing a cap that is much larger than the chip itself and screw mount to through holes on the board
* I don't think this will change anything on EDA's side but ran it by Icey to check

Struggles:

* making enough time for packaging due to time spent on school work and trying to make ALD deadlines

To do this week:

* work on presentation
* should be able to start PCB design once we get the thumbs up from Icey and EDA team
  * need to get footprint of analyzer connector
  * create footprint for wire bond pad pattern
  * consider things like decaps for the board...?
* hoping to mill the board this weekend and be ready for resistor lab chip to be made

***

## Weekly Update #3:

### ALD:

* Ordering for sealing unused section:

<table><thead><tr><th>Item</th><th data-type="number">Quantity</th><th>Cost</th></tr></thead><tbody><tr><td>1/2" VCR face seal metal gaskets</td><td>4</td><td>$ 8.80</td></tr><tr><td>1/2" Plug VCR Face Seal Fitting</td><td>1</td><td>$ 15.80</td></tr><tr><td>1/2" Cap VCR Face Seal Fitting</td><td>1</td><td>$ 33.60</td></tr></tbody></table>

* Planned out rough cutout locations for delivery storage
* Created rough CAD for delivery storage
  * Have a rough concept for fixturing the manifold by holding onto the unused section
  *

      <figure><img src="../../.gitbook/assets/image (97).png" alt="" width="342"><figcaption></figcaption></figure>
  *

      <figure><img src="../../.gitbook/assets/image (98).png" alt="" width="375"><figcaption></figcaption></figure>


* Had a rough week with school work so challenge has been to get good progress on CAD :(
* Planning to get the design to have finalized dimensions and complete for manufacturing this week
  * Need to add concept for holding the bottom of ampules as well&#x20;
    * will have to think a lot about how tool access will be like given limited space
  * Really hoping to make the Friday ordering deadline for SendCutSend
  * Also need to double check dimensions of hardware and communicate with Viswesh to make sure that routing will be successful

### Packaging:

* Worked with Icey and EDA team on plans for first package:
  * Will design and build a 16 pin DIP package for 2 major uses:
    * Wire bond resistance testing
    * MOSFET testing
* Wire bond test:
  * Basically a similar setup to resistor lab, except the N channel conduction path width is being varied in order to keep wire bond pad locations roughly similar
  * Will consist of multiple patterns on the chip for both yield issues and for testing different pad sizes for performance
    * Gave them at least 200um x 200um pads and 300-500um spacing
    * the package for resistance testing will be open top so we can wire bond to different patterns with varying pad sizes by snipping and rebonding after each CV test
  *

      <figure><img src="../../.gitbook/assets/image (99).png" alt=""><figcaption><p>Credit: Sandra You</p></figcaption></figure>


* MOSFET Testing:
  * will have 5 NMOS requireing 15 I/O and 1 GND
  * still in the planning and design stage but can use the same package as resistance testing
* Meeting notes:
  * collaborations between Metrology and EDA group:
    1. (Gina Seo and Sandra You) DRC provides Resistor lab pattern but with pads added on at the peripheral ( pad size > 200umx200um and 300um-500um spacing between pads)
    2. (Gongwei Wang) I/O information (numbers and types of pad for future circuit design, atm: 3 terminal MOSFET 16(5mosx3pads+1gnd) ),
    3. (James Lin) provides some footprints info, and a sketch of pad locations. Research on different IO pad structures.
* Things to do this week:
  * give EDA pad thickness to design for&#x20;
    * Need to read over this: [https://lnf-wiki.eecs.umich.edu/wiki/Wire\_bonding#Design\_considerations](https://lnf-wiki.eecs.umich.edu/wiki/Wire_bonding#Design_considerations)
  * Come up with a lead frame and encapsulation design&#x20;
* Things I am struggling with:
  * having enough time to focus on this since am behind on ALD&#x20;
  * Jaci sent me the wrong file so i have to keep waiting to get MEMS lab access :sob:
  * also the ebay lead frame got rejected but it should be ok cuz we have to make our own anyways



***

## **Weekly Update #2**

### **ALD:**

* Confirmed that current heating tape can be used and need programmable AC power supplies after some research
* Ordered 2 stage regulator for N2 tank: [https://store.mathesongas.com/3120a-series-dual-stage-high-purity-regulator-brass/](https://store.mathesongas.com/3120a-series-dual-stage-high-purity-regulator-brass/)
* For CAD:
  * Made a table spaceclaim based on measurements in the lab to help the ALD team plan positioning and pipe routing&#x20;
    *

        <div align="left"><figure><img src="../../.gitbook/assets/image (81).png" alt="" width="369"><figcaption></figcaption></figure></div>
  * Created a rough model of the ALD manifold to reference for mounting ideas
    *

        <div align="left"><figure><img src="../../.gitbook/assets/image (80).png" alt="" width="375"><figcaption></figcaption></figure></div>
  * Talked with Viswesh about possible concepts for supporting the ampules
  * Also considering just switching to AL sheet metal that is a bit thicker than what we have to do away with floppiness concerns - don't anticipate a huge increase in cost
* Currently trying to get CAD ready as soon as possible but currently a bit short on time to head down to lab frequently
* Over the next week I will be trying to get models of ampules and ALD valves in CAD so I can begin work on the enclosure and support structures
* Also need to get the heat tapes out and figure out how exactly we will wrap the manifold

### Packaging:

* Currently in process of getting MEMS lab access and took a bit of time to know how to use the wire bonder with Joel
* Ordered some sample leadframes and PCB SMD breakout module
  * [https://www.ebay.com/itm/256227046773](https://www.ebay.com/itm/256227046773)
  * [https://www.amazon.com/Custom-Circuit-Solutions-Integrated-Capacitor/dp/B09XLSY9GJ?source=ps-sl-shoppingads-lpcontext\&ref\_=fplfs\&smid=A2I1FZB08726AV\&gQT=1\&th=1.](https://www.amazon.com/Custom-Circuit-Solutions-Integrated-Capacitor/dp/B09XLSY9GJ?source=ps-sl-shoppingads-lpcontext\&ref_=fplfs\&smid=A2I1FZB08726AV\&gQT=1\&th=1.)
* Tentative decision is PCB mill for lead frame and resin 3D printing for encapsulation
* Confirmed that Ideate offers resin 3D printing and curing for students&#x20;
* Had a meeting with Icey to discuss plans for working with packaging:&#x20;
  1. @Gina Seo @Sandra You | EDA DRC provides Resistor lab pattern but with pads added on at the peripheral ( pad size > 200umx200um and 300um-500um spacing between pads)
  2. @Gongwei Wang I/O information (numbers and types of pad for future circuit design, atm: 3 terminal MOSFET 16(5mosx3pads+1gnd) ),
  3. @James Lin \[ALD] \[Packaging] provides some footprints info, and a sketch of pad locations. Research on different IO pad structures.
* Also got info from Jay that we may need packages for 2 terminal devices
* Going forward I will be looking into possible packages to reference for the resistor lab pattern and 5 MOS pattern and start thinking about how best to distribute pad locations

***

## **Weekly Update #1**

### ALD:

{% file src="../../.gitbook/assets/James Lin ALD Project Proposal.pdf" %}

* Got my project proposal for precursor delivery system finished and received feedback on it. Will be waiting on revision from my lead later this week.
* Over the upcoming week I will focus on getting the remaining components for delivery system ordered (KF25 tube fitting, 2 stage regulator, heating tape). Hopefully by Tuesday. I will also find time to figure out the physical design space for the ALD system in our lab in so I can make a general space claim in CAD.
* I'm currently trying to figure out uncertainties with requirements for heating tape and what option would be best for our controls team to interface with. I've added some links in the master doc from this preliminary research.



### Packaging:

{% file src="../../.gitbook/assets/James Lin Packaging Project Proposal.pdf" %}

* Got my project proposal for IC packaging finished and received feedback on it. Will be waiting on revision from my lead later this week.
* I will be working with Joel to get familiarity with the wire bonder in the upcoming week. I will also start picking a suitable package for the planned 1cm x 1cm chip size,
* Currently I'm trying to narrow down manufacturing methods for the lead frame and encapsulation
  * Lead frame:&#x20;
    * TechSpark has confirmed that we cannot use their laser cutter for copper,
    * Joel said that he has seen people using the CNC mill for this, so I will be waiting on details regarding that.
  * Encapsulation:&#x20;
    * 3D printing seems like an attractive option due to high resolution and low complexity.
    * Joel said that we can set up the resin printer in his office.&#x20;
    * I also know that IDEATE does resin printing but need to go down there to confirm availability for non IDEATE students.&#x20;
    * Still a bit concerned about whether 3dp material can withstand soldering, but there might be workarounds like using sockets

***

## **Weekly Update #0**

### ALD:

* I went through the primer and documentation to understand the basics of the project. I selected the delivery system as my main project for the semester. Current struggle is going to be tracking down CAD that was previously done for the project. I plan to read more into the specific design requirements for the delivery system and look through the CAD to understand what models of existing parts I will need to source/create.

### Packaging:

* We started with a rough idea to build our own wirebonder, but after the meeting with Icey from the CMOS team, we decided that using the exisiting one in the MEMs lab is sufficient for this semester. So instead I will be working more on a solution to package our silicon chips for this semester. After talking to Joe, we decided to start by purchasing lead frames for testing and we are having trouble finding a complete DIP package that we can buy online.
* Link to DIP lead frame on ebay: https://www.ebay.com/itm/256227046773
* Some notes from Friday's meeting with Icey:
  * pads will be done with thermal evaporator - has AL capacity
  * we should watch out for resistance at connection
  * at MEMs lab pads are 200umx200um (larger is reccomended), need at least 300um-500um ish between each pad
  * our chips are currently 1cmx1cm
  * bond wires can extend to a few cm long
* Going forward I will look into different options for packaging (pads on PCB or attempt to replicate DIP package from industry) I will also start to explore manufacturing methods and some design requirements for our IC package.
