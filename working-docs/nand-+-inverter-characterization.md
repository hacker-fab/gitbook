# NAND + Inverter Characterization

Fabrication and Testing of Enhancement Load NMOS Inverter Based on HackFab’s Standard  Process Flow

1. Introduction

NOT gate or inverter outputs the opposite of its input as shown in Table 1 is a basic but crucial part of the digital logic circuit. An NMOS logic inverter normally consists of two parts, a resistive load connected between the supply voltage (VDD) and the output as the “pull up” part and a switching transistor as the “pull down” part. To save device area and fabrication cost, instead of using resistors for the load, an active load such as an enhancement load transistor is used in the design as shown in Figure 1 (left). Enhancement load means a transistor’s gate and the drain are both connected to the supply voltage and make the transistor always in the saturation region. However, this causes there will be a constant current going through the transistors even if it is not performing which makes NMOS logic technology have higher power consumption and eventually be replaced by CMOS technology.

| Input | Output |
| ----- | ------ |
| 0     | 1      |
| 1     | 0      |

Table 1. Inverter Truthtable



\
