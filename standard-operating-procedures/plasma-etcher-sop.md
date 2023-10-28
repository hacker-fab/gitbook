# 🕳 Plasma Etcher SOP

| Plasma Etcher Manual |
| -------------------- |

\


| Thickness             | 300 nm      |
| --------------------- | ----------- |
| Total Time            | 15 min      |
| Other key parameters? | <p><br></p> |
| <p><br></p>           | <p><br></p> |

![](https://lh4.googleusercontent.com/pPaaBVAtB1Mnz4C\_L9cdem5p9aHJb0411cJ\_2VdJ16rvECSafzF4JRYZ3eiozuibjHBbcAUm9uDSTJUOwTGQ95CW9VAHM8OBvtmOr-3VwSYWy0xZKAwD6\_C8ZomFtDrnifE\_0MzwY78hKjCWaNx4aK8)

\
![](https://lh6.googleusercontent.com/9DIDYjKQxIAkMApXhTK4v82aV0Y\_UZYmZ-2diw42qgRGYkEICZdVnBY6gYq6bi8F5WamMKn8u2PdpKKuF7JwrPIEEmyf54YYz5jEoaXHQPzst\_xbppUCuo2rXH597Dn1vMVBv\_QOVT5Bb5PdQqmganA)![](https://lh3.googleusercontent.com/j6yMsMF-LVl71qCtKmZYmdGAGZ5gTmTMtrddLXYZt7Ug5cg3mI4sVixhNHRpDFTJhYt5VGtVetw9EDD\_OMrV7GxHNrQqvm3EGl2h1r6A\_aegcfZ1XEKlfIfsrNIMFM\_oYPcJERrJJNkWxZhV4G7HZGY)\


## Purpose

This first etch step creates the transistor’s gate by etching away almost all of the polysilicon and gate oxide, except for the islands covered by patterned photoresist. We use plasma etching (AKA dry etching) for two reasons:

1. Plasma is capable of etching silicon, whereas HF is not.
2. The anisotropic (vertical) etch profile is capable of transferring smaller patterns than isotropic etches.

![](https://lh3.googleusercontent.com/uXX\_gQv5tF0iwjYCRM9nW\_y9nMgJCNZmh8gX29XNLdeLtO6x3n9puJvh6JQcOweAe7BCvqSRlumfoE9QHpgLBnno\_xR1J2g9ds98vu9Jzm3mJxINpDpTekGtgIgwqyIC9AKQbG7ALmC13QHoKvhVg84)

The plasma etcher breaks down the normally inert SF6, creating a fluorine ion containing plasma on the surface of the chip. A combination of physical bombardment and chemical reaction removes material from the surface. Physical bombardment occurs when the pressure is low (<\~.1 Torr) and results in an anisotropic (vertical) etch. This allows for precise transfer of a photoresist pattern onto the underlying material. Chemical etching dominates at higher pressures and results in an isotropic etch. Fluorine reacts more quickly with Si than SiO2, resulting in high selectivity.

## Tools

1. PE-25 Plasma Etcher

## Materials

1. Chip with patterned resist on Si
2. Acetone
3. Isopropanol

## Procedure

### Preparation

1. Open [this spreadsheet](https://docs.google.com/spreadsheets/d/1R2Vo\_7094C-6gZt-e7njSJjOSsOZwEWKLs6w-fmdoSk/edit?usp=sharing) and record all values and results. Also record any steps that went wrong and how they went wrong.&#x20;
2. Turn on the etcher via the switch on the back panel.
3. Turn on the laptop and open the Plasma Etch app.
4. Turn on the RF power supply on top of the etcher.
5. Open the chamber and place your chip in the middle of the rack. Close the chamber.
6. Set O2 flow, SF6 flow, power, time, vacuum setpoint in Sequence screen (shown below). Save your sequence.

### Etching

1. Go to power and turn on RF and vacuum. The pump will start.
2. Wait until the pressure is below .1 Torr.
3. Go to commands > cycle off. This will purge the chamber for three seconds with nitrogen in order to remove H2O. If any water is in the chamber during the plasma it will react with fluorine to make HF. Very bad.
4. Commands > standby. This will start the pump again.
5. Repeat steps 2-4 to purge again. This makes sure no water is in the chamber.
6. Open the valve on the cylinders of gas that you are using. Lefty loosey.

![](https://lh3.googleusercontent.com/z-K7CU-RkI2anr8zqe7FrCUV2ncA2f-2\_0wO40aaPKTE1MMkd\_EI4sQSiZCDjC\_NAQeo96zIVi0B\_\_DF\_9CsLVZFN43jFutxQ4\_XQatcErRQGp6GarRT4gpPbWzosOydO5L1pO9fojQrCcltEL4rqwY)

7. When you are ready to start etching, select commands > plasma.&#x20;
8. During the etch, monitor the pressure on the screen (should be at your setpoint) and the outlet pressure on the regulator (should be around 5 psig). Look in the window for pretty plasma!
9. SHUT THE GAS CYLINDER. RIGHTY TIGHTY
10. At the end of the cycle, the etcher will purge itself once, pump down, then purge again. To be safe we’ll purge a third time:
11. Commands > standby. This will start the pump again.
12. Wait until the pressure is below .1 Torr.
13. Commands > cycle off. Lets gas in for 3 seconds
14. Commands > standby.
15. Wait until the pressure is below .1 Torr.
16. Commands > shutdown. The chamber will come to atmosphere in 30 seconds, at which point you can open it.

### Inspection

1. Take pictures, upload them, and link them in the spreadsheet.

\


## Safety

SF6 is not toxic, but fluorine is. By purging before and after the plasma, we’re trying to prevent two things:

1. Purging before removes all water from the chamber. This prevents any HF from being formed, which would otherwise corrode the pump and exhaust. If the exhaust hose connected to the pump turns green, this is an indication that HF is being formed.
2. Purging after removes all reaction products from the chamber. This includes SiF4 and various other sulfur oxides.

***

\
