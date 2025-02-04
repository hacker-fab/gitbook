---
description: >-
  My name is James and I will be working on the ALD and IC Packaging this
  semester :3
---

# James Lin

ALD Project Proposal: [https://docs.google.com/document/d/1hN6o0-Mjtj6w6XVKbcjDsQGZm-uqVoWmuRubTbs2fYQ/edit?usp=drive\_link](https://docs.google.com/document/d/1hN6o0-Mjtj6w6XVKbcjDsQGZm-uqVoWmuRubTbs2fYQ/edit?usp=drive_link)

Packaging Project Proposal: [https://docs.google.com/document/d/1mPezRVWu7PNa3ggTOlxjDEdb9D6B84CEXgIU-5ACNHs/edit?usp=drive\_link](https://docs.google.com/document/d/1mPezRVWu7PNa3ggTOlxjDEdb9D6B84CEXgIU-5ACNHs/edit?usp=drive_link)

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

## Weekly Update #3:

### ALD:



### Packaging:





