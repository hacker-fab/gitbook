---
description: HackerFab DIY Low-Cost Atomic Layer Deposition Tool - Progress as of Dec. 2024
---

# ⚛️DIY ALD

{% @github-files/github-code-block url="https://github.com/hacker-fab/ald" %}

**For a description of what the team at CMU is working on in Spring 2025, check out** [**this document**](https://docs.google.com/document/d/1hN6o0-Mjtj6w6XVKbcjDsQGZm-uqVoWmuRubTbs2fYQ/edit?usp=sharing)**!**

## Bill of Materials

A complete list of parts and components used in making the DIY ALD system can be found [here](https://docs.google.com/spreadsheets/d/197pMBbWlABzj44jjp_owc5-I_hZhAVBunhPJlZiwtF0/edit?usp=sharing).

## Introduction

We are building a low cost Atomic Layer Deposition machine for the Hacker Fab to achieve improved gate dielectrics, which will help us achieve our goal of a 10 micron CMOS process as well as improve our capability in performing thin-film research. Our design work on it will be all open source, and we hope other labs can use our work to make their own ALDs at a fraction of the cost of commercial alternatives. We are building our ALD to fit 4" wafers so that it can be brought into the nanofab, which will  help us lower the barrier to entry for researching thin film deposition and new materials. Although 4" is much larger than anything we are currently using in the Hacker Fab at CMU, this larger size will make it useful to a larger audience.&#x20;

Our work thus far has been focused on machine design, largely drawing from two papers on “DIY” ALD machines; [“Design Of Atomic Layer Deposition Reactors For The Deposition Of Nanoparticle Embedded Thin Films](https://scholarly.cmich.edu/?a=d\&d=CMUGR2011-79.1.53\&e=-------en-10--1--txt-txIN%7CtxAU%7CtxTI--------)” by Michael Lubitz, and “[Homebuilt Reactor Design and Atomic Layer Deposition of Metal Oxide Thin Films](https://www.diva-portal.org/smash/get/diva2:1567530/FULLTEXT01.pdf)” by Pamburayi Mpofu. Each of these papers describes their machine design followed by some process development where they describe the settings (ie. temperatures and precursors deposition times) used in their initial depositions.

This document will present the current proposed machine design plan  and the work completed to date for our vertically aligned, cold-walled reaction chamber ALD machine for the Hacker Fab.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXfGEA2ge76Ug5VYrrEUXQVPkmGxAkSsFNQRsP_ExbUplk3XmULc1PfGS7NXwYY04U56aEVdUGoV-Zj3FgiVi8JXVb9aOxFnSuCSNAWuBtcAAQdtQXW8V9VN45B9TP-sMSlerOVevQ?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt=""><figcaption><p><em>A schematic of a general system overview of the ALD machine’s subsystems and components</em></p></figcaption></figure>

### Precursor Selection

**Oxide of interest**

For the current system we aim to deposit Indium-Tin Oxide. Indium Tin Oxide (ITO) is a versatile material widely recognized for its excellent electrical conductivity and optical transparency. These properties make ITO a promising candidate for advanced applications, particularly as a channel material in thin-film transistors (TFTs). Its high carrier mobility and tunable electrical characteristics offer significant potential for improving TFT performance in display technologies and flexible electronics. Additionally, ITO thin films are of great interest in materials and thin-film research due to their unique combination of metallic and semiconducting properties. This makes them an ideal system for exploring novel deposition techniques, optimizing film uniformity, and investigating structure-property relationships.&#x20;

The precursors for the metals were chosen based on their feasibility to react with water vapor as the oxidizer. The precursors chosen are Trimethyl Indium (TMIn) for Indium and Tetrakis(dimethylamino) Tin (TDMASn) for Tin with Nitrogen carrier gas. They have been shown to be used for ALD and CVD processes with water as the oxidizer in literature. As a starting point our aim would be to reproduce the results achieved in \[Zhang et al.]. The process parameters highlighted in the paper are as follows _(substrate temperature: -225C)_:

| Oxide | Bubbler temperature | Pulse time | Co-reactant pulse time | Process pressure | Purge time |
| ----- | ------------------- | ---------- | ---------------------- | ---------------- | ---------- |
| In2O3 | 60oC                | 0.625s     | 0.75s                  | 100 mTorr        | 10s        |
| SnO2  | 60oC                | 2s         | 1s                     | 100 mTorr        | 30s        |

**Safety Considerations**

Most precursors and specifically metal organic precursors used for CVD and ALD processes tend to be pyrophoric (i.e. thermally unstable and spontaneously ignite on exposure to air) thus necessitating safety measures.&#x20;

**Material Considerations**

Compatibility with the precursors and byproducts produced during reaction are important to consider when selecting components for the delivery system. For our given precursors the chemical groups for which we checked compatibility are: 1) ability to handle pyrophoric materials, 2) ability to resist corrosion due to water vapor, 3) compatibility with methane (by product of TMIn reaction with water) and dimethylamine gas (by product of TDMASn reaction with water)

The compatibility of o-ring materials was checked on the following sources: [(1) ](https://www.marcorubber.com/o-ring-chemical-compatibility-chart.htm#chemId=702)[(2)](https://www.calpaclab.com/content/chemical-charts/Viton.pdf?srsltid=AfmBOopyameT2zvZmpAXXrtGtFDTGRPDOtgCQlMOpx0zRFcJjbQj2GMl)

Specific choices:

* Stainless Steel Tubing
* Aflas O-rings - conventionally used Viton O-rings are incompatible with dimethylamine&#x20;
* Aluminum vacuum chamber
* Stainless steel bellow hose
* Vacuum pump - Although the vacuum pump manufacturer warns against using the pump with pyrophoric gases, this caution can be safely disregarded in our case. Since we will be working with extremely dilute concentrations of these gases, the risk of combustion or hazardous reactions is significantly minimized. The low concentration ensures that the gases remain well within safe limits, allowing for the pump's use without compromising safety or performance.

**Sourcing Precursors**

Given the safety considerations involved in handling the pyrophoric precursors, the sourcing of materials for ITO deposition is managed by the Claire & John Bertucci Nanotechnology Laboratory staff. They ensure that all necessary precautions are taken during the procurement, handling, and storage of the chemicals. The required precursors have been ordered from Strem Chemicals, a trusted supplier known for providing high-quality materials for advanced research and industrial applications. [TMIn](https://www.strem.com/product/98-4068), [TDMASn](https://www.strem.com/product/98-4050)

### DIY Substrate Heater

The goal of the DIY substrate heater is to develop a cost-effective, replicable ALD wafer heater to support thin-film deposition processes for materials research. Commercial solutions for wafer heating are often prohibitively expensive, making this tool an accessible alternative for Hacker Fab and other researchers. Existing solutions do not meet specific size, temperature, or vacuum compatibility requirements at an affordable price. By designing this tool, we contribute an open-source option tailored for ALD processes. This supports the open-source nature of Hacker Fab by enabling other researchers or users to replicate and build their own wafer heaters. It allows for a more cost-effective approach to ALD, contributing to the open-source knowledge base by providing detailed, replicable build instruction.

**Heating Element Setup**

* Use 22-gauge nichrome wire to create a heating coil.
* Arrange the wire in a zigzag pattern to cover the area of the heating plate (approximately 4.5-inch diameter).
* Place the nichrome wire between two boron nitride plates (each 0.1-inch thick). Boron nitride provides electrical insulation while allowing efficient heat transfer.

**Construction of Heating Plate**

* Mount the heating element (nichrome wire and boron nitride assembly) onto an aluminum disk (4.5-inch diameter, 0.1-inch thick). The aluminum disk acts as a heat spreader, ensuring uniform heat distribution to the wafer.
* Secure the boron nitride plates with aluminum bolts to ensure tight contact and structural integrity.
* Ensure that the wire ends extend outside the assembly for electrical connections.

**Assembly and Connections**

* Position the aluminum plate so that it faces upward, serving as the surface for the wafer.
* Connect the nichrome wire ends to a DC power supply. This power supply should allow adjustable voltage (up to 30V), which will control the current and regulate the temperature of the nichrome wire.
* Attach a thermocouple to the aluminum plate for temperature monitoring. This will help ensure the wafer reaches and maintains the target temperature (300°C).

**Operation**

* Gradually increase the voltage on the DC power supply to heat the nichrome wire. Use the thermocouple reading to fine-tune the voltage for achieving the desired temperature.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXe7lVhMLKh3p5izu4gLIUJTsyg3Xyjw_QrdcRln8zImAotdejRleuLOD-xiQKs2eRqYFJ1JjbuelsZkOVlvY8IziyKIOeduSbqEwMBDjsbs2YSOKGv5S-KxfdtMQa-R9fJeG-A_jg?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt=""><figcaption><p><em>Heating module assembly</em></p></figcaption></figure>

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXc0DOH6CyCsV3sTOFFfHrlR9ZIMuBLaqE5DKScqaDxYpO7_J4e3Sq1UdhulC0SYaxcrISo_TQetwS662BfKlzOmgXcY8T3S-eYQ9dsAx7Nwe_leySEKapkY7deeNd6GLILxu_lHzQ?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt=""><figcaption><p><em>Annotated view of Heating module assembly</em> </p></figcaption></figure>

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXcpZo--YVLrQo3yTTFC1nby9rU4btGze-sFXk6ZnC017E1b3k_ZemJD3Ogs-_wGx3Hs_d4bZVLfh6NIgQX34fmsgBG4N4b5YdhQCxBFL_usb-fmbFxqeSQRfmuSPfCR8sm9qgCr6A?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt=""><figcaption><p><em>Exploded view of module assembly</em></p></figcaption></figure>

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXeXd__mqaPMEScdSTVWxWaKrWHplI9OI45FWdY8OdjrQF5v5EIbs-QnJyqavKFqQPeJZr0RUCABxKsbPKpAJZ__oL0FjKJgJ10f93XLF56SjFZbKn7mYtsy-UNeCLHtX_8nfH9sUg?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt=""><figcaption><p><em>Drawings for Aluminum and Boron Plate( Both have the same dimensions, change size of hole to ¼”)</em></p></figcaption></figure>

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXezZleO0gYHcW_12v8zzlngz8-e-bp2BgzGgMpCH1kca8l5UGRcvOSSTb3_aU8GSFfyhxzuwQWX0VNT11cX-5GZ65V_F4BeXXapQs_DxOJibHqFrvK-mElDq-m4rhGhNeLZ2WbSCw?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt=""><figcaption><p><em>Heating test set-up</em></p></figcaption></figure>

**Specifications**

* Temperature Range: 300°C to 500°C
* Material Compatibility: The heating element is designed to be compatible with a 4-inch wafer and is placed between aluminum and Boron Nitride plates.
* Voltage: The heater operates with a maximum input voltage of 30V.
* Power Requirements: The heater needs a stable DC power source capable of delivering sufficient current to reach the target temperature.
* Thermal Uniformity: The temperature should be uniformly distributed across the wafer, verified using a laser thermometer to ensure consistent heat application during ALD processes.
* Size: The heating element is sized to fit a 4-inch wafer, ensuring full coverage.

| Parameter            | Value                    |
| -------------------- | ------------------------ |
| Wafer Diameter       | 4 inches                 |
| Temperature Range    | 300°C-500°C              |
| Power Supply Voltage | 30V (max)                |
| Heater Material      | Nichrome wire (22 gauge) |
| Heat Transfer Medium | Boron nitride            |
| Structural Material  | Aluminum disk            |

_Voltage and temperature data_

| Wire Length(in) | Temperature(C) | Voltage(V) | Time to reach temp(s) |
| --------------- | -------------- | ---------- | --------------------- |
| 14              | 650            | 14         | 35                    |
| 14              | 295            | 7          | 30                    |
| 14              | 300            | 8.5        | 30                    |
| 14              | 400            | 8.5        | 40                    |

**Select Vacuum-Compatible Feedthroughs**

Feedthroughs are specialized components designed to pass electrical, thermal, or other signals through a vacuum boundary. For your heater, an electrical feedthrough is required.

**Key Features:**

* Vacuum Compatibility: Ensure it is leak-tight, rated for the vacuum level (e.g., high vacuum or ultra-high vacuum).
* Temperature Compatibility: The feedthrough must withstand high temperatures near the heater.
* Electrical Capacity: Rated for the current and voltage requirements of the nichrome wire.

**Common Materials:**

* Metal-to-ceramic seal feedthroughs: These use materials like stainless steel and alumina ceramics for high durability and vacuum compatibility.
* Glass-to-metal seals: Suitable for lower voltage and current applications.

**Vendors:**

Feedthroughs are available from companies such as:

* MDC Vacuum
* Kurt J. Lesker
* Conax Technologies
* Allectra

Mounting the Feedthrough:

* Install the feedthrough into a flange on the vacuum chamber (e.g., CF, KF, or ISO flange systems).
* Use O-ring seals (Viton or Buna-N) for lower vacuum applications or indium gaskets for ultra-high vacuum.

#### Wire Connections

* Inside the Chamber:
  * Connect the nichrome wire to the internal terminals of the feedthrough using vacuum-compatible connectors (e.g., nickel or stainless steel).
  * Ensure insulation with high-temperature, vacuum-compatible materials such as ceramic or polyimide.
* Outside the Chamber:
  * Connect the power supply to the external terminals of the feedthrough.
  * Use shielded cables if electromagnetic interference is a concern.

### Detailed Instructions for Assembling the Substrate Heater Component

**Materials Required**

* Nichrome wire (22-gauge)
* Boron nitride plates (2, 4-inch diameter, 0.1-inch thick)
* Aluminum disk (1, 4-inch diameter, 0.1-inch thick)
* Thermocouple
* Bolts and nuts (compatible with boron nitride and aluminum plates)
* Insulating washers (if needed, for vacuum compatibility)
* DC power supply
* Wire connectors
* Heat-resistant adhesive (optional for securing wires)

_**Assembly Steps**_

**Step 1: Preparation**

* Cut the wire to the appropriate length (as per your design, typically around 14 inches).

**Step 2: Setting up the Heating Element**

* Wire Arrangement:
  * Lay one boron nitride plate flat on a stable surface.
  * Arrange the nichrome wire in a zigzag pattern across the surface, ensuring even coverage. Leave wire ends long enough to extend outside the assembly for electrical connections.
* Layering:
  * Place the second boron nitride plate on top of the first, sandwiching the nichrome wire between them. Ensure the plates align perfectly.

**Step 3: Mounting onto Aluminum Plate**

* Place the boron nitride and nichrome assembly onto the aluminum disk.
* Align the pre-drilled bolt holes in all three layers (aluminum, boron nitride plates).
* Insert bolts through the assembly, using insulating washers if needed to maintain electrical isolation.
* Secure the bolts with nuts, tightening evenly to ensure good thermal contact without over

**Step 4: Electrical Connections**

* Attach the thermocouple to the aluminum plate using thermal paste or tape for accurate temperature monitoring.
* Use a multimeter to check for electrical continuity and verify there are no short circuits.
* Attach the nichrome wire ends to the wire connectors and connect them to the DC

**Step 5: Final Assembly**

* Seal the feedthroughs to maintain vacuum integrity.
* Route wires for the power supply and thermocouple through vacuum chamber feedthroughs.
* Use vacuum-compatible connectors.
* Position the entire assembly inside the vacuum chamber

_**Future Testing Tasks**_

* Initial Power Testing:
  * Gradually increase the voltage while monitoring the temperature using the thermocouple.
  * Record the time required to reach target temperatures (e.g., 400°C, 500°C).
* Thermal Uniformity Testing:
  * Use a thermocouples to verify uniform heat distribution across the aluminum plate.
* Vacuum Compatibility:
  * Test the system under vacuum conditions to ensure no leaks in the feedthroughs and proper operation of the heater.
* Optimization of Wire Length and Voltage:
  * Experiment with different lengths of nichrome wire to find the optimal balance between power efficiency and heating uniformity.
* Long-Term Durability Testing:
  * Run the heater for extended periods to evaluate its stability and reliability.
* Temperature Controller Integration:
  * Test the system with a PID temperature controller to automate heating and maintain stable temperatures during operation.
* Documentation of Results:
  * Plot temperature vs. time, power vs. temperature, and voltage vs. temperature graphs based on experimental data.
  * Note any issues or observations to refine the design.

_**Challenges**_

* Wire Placement: Achieving uniform heating is dependent on precise placement of the nichrome wire.
* Vacuum Constraints: The vacuum environment imposes limitations on assembly and temperature uniformity
* Optimization of Power and Heating Time: There is a need to balance the wire length for optimal performance. A longer wire enhances heating uniformity but consumes more power and increases the time required to reach the target temperature.

_**Future Improvements**_

* Alternative Materials: Testing circular mica heaters or other heating elements for improved thermal response times.
* Optimization Studies: Verifying whether the aluminum disk is essential. Direct placement of the wafer on boron nitride could simplify the design without compromising functionality.
* Enhanced Efficiency: Refining nichrome wire routing to minimize heat loss and enhance system efficiency.
* Parameter Tuning: Finding the sweet spot between nichrome wire length and power consumption to maximize performance while minimizing energy usage and heating time.

### Delivery System

**System Design**

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXe7SfDObffP3QlXUflDZBnD6lVIQ91sufuGO0_8hHuq0QRxfvt2frQs1kc29yGg3bx6nh0nQZWQfO1ueRSCN9rRUYby17Ss3SJdVdOVm_t7IQrtsEUYhfBzDcV20VgMMBWZPbyC?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt=""><figcaption></figcaption></figure>

For the delivery system we chose VCR connections for the gas lines in our vacuum system to ensure a reliable, leak-tight seal, essential for maintaining system integrity. These metal-to-metal sealing connections are ideal for ultra-high vacuum (UHV) and high-purity gas applications, reducing the risk of leaks, outgassing, and contamination. Their robust design and reusability also made them a practical choice for our setup, where frequent assembly and disassembly are required. We use a two-stage regulator at the carrier gas cylinder as it ensures consistent and precise pressure control, reducing the high-pressure gas from the source to a stable, manageable level for downstream components. This stability is essential for maintaining uniform gas flow in the system. The gas at the correct pressure is then delivered through a mass flow controller that regulates the flow rate of gases entering the system, providing precise control to meet process requirements. It ensures accurate delivery of gases to the precursor manifold. We are receiving a precursor manifold having three Swagelok ALD3 valves donated by the Claire & John Bertucci Nanotechnology Laboratory at CMU. The precursor manifold serves as a distribution hub, directing gases to valves. It includes multiple inlets for the precursor bubblers and an outlet to lead to the chamber, enabling the mixing or isolation of various precursors before delivery to the reaction chamber. The ALD valves in the manifold are high-speed, precise valves that control the pulsed delivery of precursors into the vacuum chamber. These valves are critical for achieving the sequential gas flows required in ALD processes. The line finally leads to the vacuum chamber designed to be a cross-flow reactor.

Components requiring connection for delivery line:

* Chamber precursor inlet: KF25 flange fitting
* Precursor Manifold:
  * Inlet: ¼” female VCR
  * Outlet: ¼” male VCR connector
* MFC inlet and outlet: ⅛” NPT female connectors
* Dual stage regulator: reduces cylinder pressure (\~2000 psi) to operating pressure for Mass Flow Controller (<70 psi)

### **Control Systems**

**Components/Hardware Requiring Control**

Parts to be controlled:

1. Mass Flow Controller - Controls the amount of carrier gas flowing through the tubing per time. Requires an analog signal 0-10Vdc and power supply of 12-24 Vdc, 250mA&#x20;
2. ALD valves - Controls the duration for which precursors are open to the carrier gas line. Works on a pneumatic valve that is actuated by solenoids. Requires N2 gas input for pneumatic actuation and square wave signal of 24 Vdc with wave width equal to valve open time.&#x20;

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXfzD8Wk5fpW_ltmQXlS2PWxVAGrakM2j1IugFM5Zah1xWDNkbMudnQnXsyQ3uICiFP1uC_V6K_bNgA7FZVAGZ_h1thGVOLBEtQhs94YIu8o5HhXlOXmM_hFxRJrI-XTMmfU8PEqKw?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt=""><figcaption></figcaption></figure>

3. Delivery line and substrate heaters - Controls the temperature of the gas lines and substrate holder surface. Requires control of voltage and current being delivered to the heating element to modulate based on reading from the thermocouple.
4. Throttle Valve - Controls the pressure of the vacuum chamber by modulating the evacuation rate of the pump based on current pressure.&#x20;

**Outline of controls**

Control parts using LabVIEW and RaspberryPi (given the number of different signals and components we decided to use a Pi instead of using an Arduino)

[LabVIEW](https://www.ni.com/en/shop/labview.html) is a graphical programming environment designed for system control, data acquisition, and automation. Easy to use for engineers and it provides the  ability to quickly prototype control systems for complex setups.

RaspberryPi is  great for handling low-level hardware tasks, such as controlling valves, relays, and sensors. It can read analog or digital signals, control actuators (e.g., motors or heating elements), and interact with sensors that LabVIEW can’t interface with directly.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXfOCygik8xCktNZlxDKdjwu9HFk80GmPGCslpDY9NpjcdQy2TwB24XjFhp0gSgy5qEsuJiPbJiYalLn2RisabS3YSAfzeaKIjjO6u3er5rbq6QGaKR0auDuC-z1NM2Hzd6FbNw6?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt=""><figcaption></figcaption></figure>

**Progress**

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXfauhthmggH_y41SS73I-caP7vORjznIlCywQuamnsVmJ1QDvsMTT9-HwrWi6-I9yTU0dQa56qV7W4sBYR1dEiwK8EixRUYqJ-HBhZYjP-DvOAkcCgWCyduQy6iLod8NhjeoI0P?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt=""><figcaption><p><em>Block diagram of ALD valve control</em></p></figcaption></figure>

The ALD valves are controlled based on their status in a truth table, where each row corresponds to a specific step of the ALD cycle. The truth table defines the ON/OFF state of each valve, with True indicating the valve is ON and False indicating it is OFF. The appropriate row of the table is accessed dynamically, depending on the current step of the cycle.

To implement this control, a relay board is used to interface the ALD valves with a 24V DC wall adapter. The relay board switches the power supply to the valves according to the truth table commands, ensuring precise timing and coordination for each step of the ALD process. For depositing Indium Tin Oxide (ITO), which requires two metal precursors, the ALD valve operation is determined by the desired ratio of the two precursors. To achieve this, a sequential block is used to calculate the current cycle number in the ALD process. Based on the cycle number and the specified precursor ratio, the sequential logic selects which metal precursor valve to open. This setup allows for reliable and automated control of the gas delivery system during operation.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXcodqYWYt4aiSAGRbD2mjnS_PShX1_BWeYazb56mBapXfJyGPyIDVjaTd9ua5Rq_GXmakT-l50uP0W-x7fYPEe79Cti7DWLRF9VByud8YPl1nQ_OKOLrl5IEiKNFjSYXGDLx3zLeg?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt=""><figcaption><p><em>Block diagram of PID control for heating elements</em></p></figcaption></figure>

To control the heating elements, temperature data is collected from thermocouples at a specified sampling rate and frequency using a DAQ (Data Acquisition) system. The measured temperature readings are averaged to calculate a mean temperature, which provides a stable input for feedback control. The mean measured temperature and the target temperature are then fed into a PID (Proportional-Integral-Derivative) controller. The PID computes the required voltage adjustment to maintain the target temperature by supplying the appropriate voltage to the resistive heating elements. This feedback loop ensures precise temperature control, critical for maintaining process stability and uniformity during operation.

We are still in the process of testing this and are currently figuring out how to use DAQ hats on Raspberry Pi to collect the data at a given frequency.

**Challenges**

RaspberryPi 5 does not come with Python 2; hence, getting LabVIEW to run on it is still something we are figuring out. ([link](https://kreiseder.org/2024/02/raspberry-pi-5-and-labview))

### Vacuum Chamber + Vacuum Pump

**Motivation**

The vacuum chamber and the vacuum pump are the foundation of the ALD machine, providing the controlled environment necessary for thin-film deposition on the 4 inch diameter wafer. Initially, the idea of machining the vacuum chamber in-house was considered, but quickly decided against due to the precision needed to manufacture a reliable vacuum chamber, and given that the ALD machine project is on a quickly-moving timeline, This project addresses these gaps with a cost-effective and adaptable design, which was easily outsourced and purchased, for academic and research settings.

**Technical Requirements**

* Vacuum Pump Range: The vacuum pump and chamber should be able to reach mTorr levels of vacuum to reach precursor baseline pressures.
* Temperature Requirements: The vacuum chamber should be able to withstand temperatures up to 500°C, in order to align with precursor pressures and thermal evaporation benchmarks, and to keep the wafer at 300°C
* Vacuum Chamber Material: Aluminum for affordability and compatibility with high vacuum and temperature conditions.&#x20;
* Port Configurations: Modular design to accommodate multiple gas inlets and precursor integration.

**Design Process**

With the technical requirements in mind and once the precursors were selected (and ITO was decided upon), the design process for the vacuum pump and vacuum chamber evolved quickly over the first half of the semester. Originally, the vacuum chamber had a technical requirement of being made of only stainless steel, avoiding aluminum due to concerns about compatibility with the gases. Eventually, aluminum was reconsidered to be a vacuum chamber material option, after double-checking its compatibility with the gases.&#x20;

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXccZoJb-46YV0jOLcTOV4TMc7_VKmQGq0E968iQRac8t1be4oz5pQ77m-dXgVDTxVIDJK_PU5Rf9YmSCRNE2S1lMaqySY9yI_1P2qZR5h89qMauANbgmdj68REjtkKhLXSlUmQ7iA?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt=""><figcaption><p><em>A conceptual sketch of the vacuum chamber when a cooling system for a successful cold-walled reactor was considered</em></p></figcaption></figure>

**Vacuum Pump Selection + Design Choices**

For the vacuum pump, extensive research was conducted to identify a pump capable of maintaining the desired vacuum range without overloading the budget. It was necessary to ensure compatibility with the fact that it would be used with gases as well. Despite initial hesitation due to the high cost of some components, we finalized the order for the Edwards nXDS6i Dry Scroll Vacuum Pump, as it has been used for other DIY ALD machines in the past and is known to be reliable for these purposes. This step was crucial to ensuring the entire vacuum system could function as intended without compromising the ALD process's precision.

**Vacuum Chamber Selection + Design Choices**

A major milestone was sourcing the 9x9x9 modular vacuum chamber from Ideal Vacuum, initially inspired by using the 6x6x6 Ideal Vacuum chamber that’s used for the thermal evaporator. We noticed that the inside temperatures of the thermal evaporator reach even higher temperatures than needed for ALD, even though on the Ideal Vacuum site, the specs say it isn’t rated for that high of a temperature. This milestone, though, was guided by its versatility, as the modular port placements allowed for customizable configurations. Additionally, this chamber offered a practical balance between cost and performance, addressing both budget constraints and functional needs. To further refine this selection, the 9x9x9 pre-selected component kits were compared with the individual necessary components (with itemized lists of those individual components), weighing the trade-offs between cost savings and assembly complexity. All individual components ordered are listed in the BOM shown in the Appendix.

As shown in the BOM for vacuum chamber components, the 6 sides to the modular vacuum chamber from Ideal Vacuum which were ordered, with reasoning as to why, were:

1. One (1) plate with a viewing window and door hinge, to easily place and remove the 4” diameter wafer.
2. One (1) plate with four (4) KF16 inlets  in order to connect the pressure gauge, temperature probe, and electrical lead. Each of those three components connected to the ALD account for one KF16 inlet, leaving a single KF16 inlet covered by a blank flange, and reserved for if future leads are needed.
3. Two (2) plates with single, centered KF25 inlets, to be placed on the top and bottom of the cube, with the top inlet being the gas inlet, or the gas entering the vacuum chamber, and the bottom outlet being the vacuum chamber’s connection to the dry scroll vacuum pump and throttle, or where the gas will exit the chamber. This top-to-bottom placement is to prompt laminar flow of the gases and increase chances of even deposition throughout the wafer. The gas flow is depicted below.
4. Two (2) blank plates

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXcCvlkA0lPDdDVvXsHjMHB_fUTBLDvXmBFOKkjtAn0cT5F9u7V9eCqWpW4lC-zDQPH4t1AsP2MAdH2Ax2GN3lNTpDJHVZ4hPKg3ssR6sFEPdO0XBUo3tmrMhLCia5Ub0LdItbJsYw?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt=""><figcaption><p><em>A picture of the fully assembled Ideal Vacuum 9x9x9 chamber</em></p></figcaption></figure>

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXdHBVvyOo3ELsfFn8j_VPQBubjNw9vcnnFTmEYm6Wg3FkuuA6dheREu5H1s2Lnov0RanFHFuQCAO7zCQFGVVZhmrQhlD-WjP0Ju35IN1T0LQTJBZegfhYG8K_gNYIaTmRpf8HkqhA?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt=""><figcaption><p><em>A schematic displaying the laminar, top-to-bottom gas flow and even dispersion on the wafer in the vacuum chamber, and feedthrough port connections</em></p></figcaption></figure>

&#x20;**Vacuum Chamber + Vacuum Pump Baseline Test**

As of the end of the Fall 2024 semester, the vacuum chamber has been fully assembled, using only parts provided by Ideal Vacuum including Viton o-rings and o-ring fittings, and connected to the pressure gauge and vacuum pump. It’s important to note that this vacuum chamber assembly is only temporary, as Viton is not compatible with the gases used for the Hacker Fab ALD machine. A baseline vacuum test was conducted with the Viton o-rings overnight to see how much of a vacuum could be achieved with the standard assembly, and a rough vacuum of <100 mTorr was achieved. There are numerous reasons as to why the vacuum chamber wasn’t able to reach the single digits of the mTorr range during this baseline test, such as the fact that the pressure gauge we used was powered by a cord rated for half of the required voltage to power the pressure gauge.

**Vacuum Chamber O-ring Material Compatibility**

Since incompatible Viton o-rings were included with the hardware kit for assembling the Ideal Vacuum chamber, Aflas is currently being considered as a possible replacement option, due to its compatibility and temperature rating. Extreme Viton could also be considered, as it’s also compatible, but for o-ring replacement testing, only Aflas materials have been ordered. Since the extra large o-rings that are used to seal the vacuum chamber plates themselves (not the feedthrough ports) are so specific in dimension that they would need to be custom-made, which is a costly to schedule and budget, Aflas cording with similar thickness was ordered and can be cut to size. Aflas o-rings for KF16 and KF25 fittings were also ordered from McMaster to eventually replace in the vacuum chamber. The efficiency of replacing the Viton seals with Aflas cording and slightly smaller Aflas o-rings has yet to be determined and tested.&#x20;

**Next Steps**

* Replace incompatible Viton o-rings with Aflas o-rings to ensure compatibility and improve system reliability.
* Conduct a new baseline vacuum test using Aflas o-rings for comparison with initial tests conducted with Viton o-rings.
* Install a KF25 elbow-shaped connector to reduce the tubing bending radius and prevent stress on connections.

**Future Improvements**

* Design some type of stand below the vacuum chamber to incorporate additional space beneath it, allowing better accommodation of stiff tubing leading to the vacuum pump, if KF25 elbow connector still leaves a tight fit.
* Explore alternative compatible sealing solutions or materials to simplify the process of replacing the Viton o-rings, if the Aflas cording and current Aflas o-rings are insufficient in reaching vacuum specs.
* Optimize the vacuum chamber setup to ensure sustained performance at rough vacuum levels (<100 mTorr).

### Precursor Delivery Storage

**Motivation**

Safe and efficient storage and handling of ALD precursors are critical to ensuring consistent thin-film deposition. An existing precursor storage solution for the specific requirements of Hacker Fab’s ALD machine doesn’t exist on the market, at least not at any reasonable price point. While other DIY ALD machines don’t include any housing for the precursor ampoules at all, and are simply attached to only the ALD valves and tubing themselves, those same DIY ALD machines normally don’t handle pyrophoric precursors. Since the Hacker Fab ALD Machine is for ITO deposition purposes, and the precursors aren’t as inert, designing a precursor delivery storage, which the gases can travel through, and be directly connected to an exhaust, is a good preventative measure to take (to minimize risk with possible combustion/flames).

**Technical Requirements**

* Storage Capacity: Holds the precursor manifold with three ALD valves and three gas ampoules. Potentially has room to store the mass flow controller at some point when incorporated:
* Inlets and outlets: Contains holes to attach proper fittings for an exhaust connection, carrier gas inlet, and a gas outlet.
* Materials: Made out of aluminum for precursor compatibility.
* Miscellaneous: Ampoules should be easy to access in order to for simpler replacement when necessary.

**Design Process**

The precursor storage design process began by defining the requirements for safely and efficiently housing three precursors, each with dedicated gas lines and secure connections to the vacuum chamber. Aluminum was selected as a precursor delivery storage material for its corrosion resistance and ease of machining, ensuring compatibility with the chemicals and the system's operational conditions.

[Precursor Case Ideation Document](https://docs.google.com/document/d/1jIJHOCpGwz2Hahb5p47Cp-PXYGIF3fCqiWKc2BtbcpE/edit?usp=drive_link): This document explains the initial thought and design process for this delivery storage.

The initial design concepts, shown below, were sketched to visualize how the ampoules would be held and integrated into the vacuum chamber setup. These sketches evolved into more detailed CAD models (shown below), created in SolidWorks, with a focus on designing for sheet metal fabrication, since that would be the most cost effective. The flat pattern designs incorporated fold lines for easy assembly, allowing the components to be cut using waterjet or manual machining methods.&#x20;

<img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXdQ_TAJxkY4NI5xt9XmzJbEW5TqOAFFguI7r3Ew5djgCKe0qC8lQOvOTHf6jVOrGxzxGSWmEHybB3QehfZTY6M9_FPhrv8B0iwlstRpYvnIW0Le4XH-2YhXf--0-bb7YCPYvq8ZhA?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt="" data-size="original"><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXd9YrcTMsMqX2pVEVjKROOzLbMoNdvkUqV4lCbsLm5tozHUW0v-CS4MBz6C2xg3n6i_RUg0OPYJT-1dnABNybVnTS6rZlOnxDiAMIyX6mjPi_sUNFQg2hVsEhBuhAOJKgQQiUpGKA?key=QQPBc4Ozd0oiz1Y6TLHcAr9d" alt="" data-size="original">

_Initial conceptual design sketches of the precursor delivery storage system_

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeo45aaSMaYKC_KkRMLV_KPOyLsQhXwW1XKRC2jjuQS_eaoBPUSOg6L_pBU7dR7dnPz2bMVJ-DxqQkeQ0dVJg2aBThXU3rR2PrPrwEhE5MVrfcCgLqeSmVzCJ0g_q0B3IEDJTkLHw?key=QQPBc4Ozd0oiz1Y6TLHcAr9d)![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXfgcpmxcuAsV8H2PeUOSug-6BsbBMDgMtRa8pfvV9o-MYo_XFOuNXK67SgrO9f1_d4_2xKBnCMzXY2mHDOVxvfc6eSB8ZtUYdvbLghhe7XkodIC7rsaNFULEv_9Ry4EdtJ6RQbsTg?key=QQPBc4Ozd0oiz1Y6TLHcAr9d)

_Initial CAD screenshots of the precursor delivery storage system assembly_\
_(left), and an example of one of the components from the assembly folded and unfolded (right)_

Since the TechSpark makerspace's water jet was out of order, we considered outsourcing the water jetting for the sheet metal. An initial quote from Atomatic for waterjet cutting parts at $130 per piece (ridiculously overpriced) prompted a pivot to sourcing 5052 Aluminum sheet metal with a thickness of 0.05”, from McMaster-Carr, since 5052 Aluminum is an easy-to-bend metal. I was able to begin the fabrication and assembly process and complete fabrication of 3 components, leaving the door and manifold shelf to be fabricated and assembled next semester. Using the CAD designs as a rough guide, and adding a few extra inches in every direction to ensure there was enough space, I cut the sheet metal to size using either the shearer or the bandsaw. I then bent right angles where necessary using the bending machine at Techspark, and then holes were drilled and parts were riveted together manually using aluminum rivets. While this reduced costs drastically while maintaining functionality, the fabrication and assembly process (mainly the manual riveting) was extremely time consuming and physically exhausting.&#x20;

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXfpKb_540Fj30kOuyDf8KQ7B8Px5hOEhewf3QpV7SOEiTSyIv12DY2E55HaWQmKwGZU1_rK74CQZzyi4irD4WMXqEqqH3oiTF9gfTw2kvnZO5Zm0yKoRlpTYSyT3KxzjFNi6nA7MA?key=QQPBc4Ozd0oiz1Y6TLHcAr9d)![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXdmVoVvCARzM64j4bBT5bkX3x4TzKLP5r2kWKxjJxNTJzYTC6kxvMDhwtq7Yeni3A9wYzWPBGintaONOx_jtosHLXpxD5kgrKeMFti0gNz8YuM7Rq_IWjwQ1VsSwMrhQh-_4YjJcQ?key=QQPBc4Ozd0oiz1Y6TLHcAr9d)![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeOkq95xIS-UA_lRPXrYSFoan0q32OCEtPg75O5EzqFO_UJByDkdzKoPabqXI-p3bOkPjvaFfcbsKUxDSFiioMTW0W4dldFF70tOJ56wyr1rh8UU5vNbSa97biiQwpGOvepH46R?key=QQPBc4Ozd0oiz1Y6TLHcAr9d)![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeqeah6PS3w4F7dqCzdqaHrToiB_wq5J8uEAAGpKjlR3mqJQO3pQ18bSYH-txBtz7W6DlYHDb8_lTeZ2qAJ0XZsaEkO2JTHEceaY69qYwemAe4l32UQl1-kkcoIdeYMobIk_8MU0Q?key=QQPBc4Ozd0oiz1Y6TLHcAr9d)![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXfPcRj1a0JN7GvoSoM2zUL4KEIWObPW1Zdl3ZoK0yT9rcRuRBx0eLrmdKDF4Qruf7jdPGqlCptqmErf-mYmwfzY6jq8JcZjNlW0Ma1ZcCOMw_e5Tai8LYlnle95-z0rmve6cslW?key=QQPBc4Ozd0oiz1Y6TLHcAr9d)

_Images of the fabrication and assembly process of the first few components of the storage assembly_

Due to time constraints, we weren't able to complete the entire assembly, but believe that this is for the best, as I’m sure many design improvements will be implemented next semester. One example of this is for redesigning the shelf which holds the manifold and ampoules. Next semester’s ALD team should consider whether or not the heating block is either usable (we don’t know if it’s programmable currently), or if heating tape would suffice. Due to the heating block’s heft (it’s made out of solid metal), it would be beneficial to consider removing it if possible. Shown below are a few quick sketches of possible shelf redesigns depending on if the manifold’s heater block is incorporated or not.

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXceOa2nRJU3reB39mj8Txp0lOhvo2QkLKeNLriYjNXgNnyCA7LTzr4g7J0cG1SHPEAqAln569pUrdSNnatEAc7FBD_1-IN0sp94N3bZz-eGT-BDqSY5TT3GnQsvVTJ_6HcvYBbUcw?key=QQPBc4Ozd0oiz1Y6TLHcAr9d)![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXeqiKOf_aXDBzr__zJGxIghjDicZRjXdMJBmj1EIbdx74NIrGDy2OHu7TwWzEjqNlb0_CE3h8tgMM1WOwYtIb30ZsCs2c3gf-RT-MWPt4lErUxF44Dzq0ZgyD4j7hT6K07lnEPV?key=QQPBc4Ozd0oiz1Y6TLHcAr9d)![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXd5ly0qd-TPI5jI4dOcIUO8vfv4Vrd7Tlx842yMEste8qQ-KZEnOxg7hDwXnYuCfOo-jgijIbiUq8YHxghilako71zfVUbCxzcBOzDzr2QB68mdonwMo1zdQ_3ve7LztcfnSRvm?key=QQPBc4Ozd0oiz1Y6TLHcAr9d)

_Conceptual sketches displaying the various options for shelving manifold, ALD valves, and precursor ampoules_

[ALD-precursor-storage](https://drive.google.com/drive/folders/1GBTolRZP9CBpwKCqBbN-XGgZQ41YbTB0?usp=drive_link): This folder contains all SolidWorks CAD files and assemblies used to plan the storage design more accurately, get outsourced water jetting quotes, and to begin the in-house fabrication process.

[Atomatic quotes](https://drive.google.com/drive/folders/1EqnVR9RTrw9D8t4gi83TWiqhBkdKYVrS?usp=drive_link): This folder contains screenshots of the outsourced waterjet quotes from Atomatic, which we decided not to go through with, but are reference points as to why we decided to attempt manufacturing in-house.

**Next Steps**

* Complete the remaining assembly for the precursor delivery storage system, addressing any precision or alignment issues from the manual fabrication process.
* Evaluate the usability and efficiency of the manifold's heating block in the current setup to determine its suitability for sustained operation.
* Investigate alternative heating solutions, such as heating tape, to replace the manifold's heating block if it proves impractical due to its weight or solid metal construction.

**Future Improvements**

* Refine the design for easier replication and modularity, considering lessons learned during manual fabrication.
* Reassess shelf configurations in the precursor storage system to accommodate potential design changes stemming from heating block decisions.
* Incorporate design elements that improve manufacturing precision and reduce the labor-intensive nature of assembly.

## References

Z. Zhang et al., "Atomically Thin Indium-Tin-Oxide Transistors Enabled by Atomic Layer Deposition," in IEEE Transactions on Electron Devices, vol. 69, no. 1, pp. 231-236, Jan. 2022, doi: 10.1109/TED.2021.3129707.

[“Design Of Atomic Layer Deposition Reactors For The Deposition Of Nanoparticle Embedded Thin Films](https://scholarly.cmich.edu/?a=d\&d=CMUGR2011-79.1.53\&e=-------en-10--1--txt-txIN%7CtxAU%7CtxTI--------)” by Michael Lubitz

“[Homebuilt Reactor Design and Atomic Layer Deposition of Metal Oxide Thin Films](https://www.diva-portal.org/smash/get/diva2:1567530/FULLTEXT01.pdf)” by Pamburayi Mpofu

\
