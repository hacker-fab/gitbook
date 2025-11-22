# Malfunction Log

7/3 - Furnace 5 kanthal wire double twisted fried, had to reattached ceramic wire

<br>

7/14 - Furnace 5 ceramic wires fried, first attempt after previous repair, was running for 3+ hours

<br>

| Thermocouple side                                | Entry Side                                       |
| ------------------------------------------------ | ------------------------------------------------ |
| ![](<../../../.gitbook/assets/unknown (13).png>) | ![](<../../../.gitbook/assets/unknown (14).png>) |

<br>

Furnace 6 ceramic wires fried, first attempt, ran for 20+ minutes

<br>

| Thermocouple side                                | Entry Side                                       |
| ------------------------------------------------ | ------------------------------------------------ |
| ![](<../../../.gitbook/assets/unknown (15).png>) | ![](<../../../.gitbook/assets/unknown (16).png>) |

<br>

Ceramic coating on both furnaces was disintegrating where wires had contact

<br>

Ceramic beads seem a little burnt but otherwise intact, Furnace 5 and 6 each had one ceramic wire still in contact with kanthal, being held together with bead despite being fried → possible only the thermocouple wire side was completely fried through, however it’s clear that both wires are under severe heat stress during operation

\
\
<br>

7/15 - Discovered kanthal wire coil on furnace 6 had been burned and rusted through

<br>

To combat this, next tube was made with as few kinks in wiring as possible, and the kanthal wire is used as the connector to the motor control as opposed to ceramic coated copper

| ![](<../../../.gitbook/assets/unknown (17).png>) | ![](<../../../.gitbook/assets/unknown (18).png>) |
| ------------------------------------------------ | ------------------------------------------------ |

<br>

8/25 - Since switching wiring to full kanthal and using one solid piece of wire, shorts have been discovered in the machines after repeated use. Found out the cause was due to the weave casing of wiring was being shredded through

<br>

9/8 - Incorporating the PID controller with a lack of motor control results in too much current being drawn and the kanthal wires becoming so hot they burn through the insulation weave

![](<../../../.gitbook/assets/image (348).png>)<br>

9/9 - Incorporated motor control into PID wiring to control current, but creates a problem where current is not being drawn unless an additional element, such as a lightbulb, is incorporated to trick the system into powering on

<br>
