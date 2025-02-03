# Advaith Menon

## Week 1

This week, I dedicated time to writing up the proposal for changes to be made to the spin coater, ensuring that all necessary modifications were clearly outlined to improve its efficiency and functionality. I had planned to coordinate with Anirud on a call to discuss dimensional specifications, but unfortunately, scheduling conflicts prevented the meeting from happening. However, despite this setback, I was able to make progress in other areas by joining the Fusion file and actively working on the prototype for versions 2 and 3. This stage of development is crucial as I refine the design and implement improvements based on previous iterations. Moving forward, I plan to continue prototyping while also rescheduling the call with Anirud to finalize key specifications and ensure that everything is on track.

***

## Week 2

This week, I was focused on material selection and design considerations for the Spin Coater, particularly evaluating options for the transparent lid and non-transparent body. A key part of this process involved comparing thermal resistance, transparency, impact resistance, machinability, and cost for different materials to ensure the chosen components can withstand the operating conditions of the spin coater while maintaining affordability and ease of fabrication.

Additionally, I began research on a linear slide system to improve precision in the spin coating process. The goal is to enable controlled movement of the actual spincoater, allowing it to switch from the liquid handling system to the annealing system. This research involves evaluating different slide mechanisms, materials, and motion control methods to integrate with the spin coater effectively.

### **Material Selection & Properties Analysis**

To ensure the spin coater operates effectively under heat and mechanical stress, I analyzed various polymers based on their deflection temperature, melting point, and durability. This was necessary for choosing materials that will not degrade under repeated exposure to heat and solvents during the spin-coating process.

#### **Polymer Property Comparison**

| **Polymer Type**                 | **Deflection Temperature at 0.46 MPa (°C)** | **Deflection Temperature at 1.8 MPa (°C)** | **Melting Point (°C)** |
| -------------------------------- | ------------------------------------------- | ------------------------------------------ | ---------------------- |
| ABS                              | 98                                          | 88                                         | -                      |
| Acetal Copolymer                 | 160                                         | 110                                        | 200                    |
| Acrylic                          | 95                                          | 85                                         | 130                    |
| Polycarbonate                    | 140                                         | 130                                        | -                      |
| Polyethylene Terephthalate (PET) | 70                                          | 65                                         | 250                    |
| Polypropylene                    | 100                                         | 70                                         | 160                    |
| Polystyrene                      | 95                                          | 85                                         | -                      |

#### **Key Observations:**

* ABS and Acetal Copolymer offer high durability and machinability, making them strong candidates for structural components.
* Polycarbonate and Acrylic provide clarity for transparent parts but differ in heat resistance and durability.
* Quartz, though more expensive, offers the highest thermal stability and optical clarity, making it a strong contender for the lid.

### **Lid Material Selection**

Since the lid must be transparent, I evaluated Acrylic, Quartz, and Polycarbonate for their infrared transparency, impact resistance, and heat resistance.

#### **Lid Material Comparison**

| **Property**         | **Quartz (Fused Silica)**          | **Acrylic (PMMA)**            | **Polycarbonate (PC)**                     |
| -------------------- | ---------------------------------- | ----------------------------- | ------------------------------------------ |
| IR Transparency      | 250 nm – 3,500 nm (excellent)      | 750 nm – 2,000 nm (good)      | 700 nm – 1,100 nm (limited)                |
| Visible Transparency | High (clear)                       | High (clear)                  | Slightly less clear                        |
| Thermal Stability    | >1,000°C (excellent)               | \~100°C (softens)             | \~120°C (better than PMMA)                 |
| Impact Resistance    | Brittle                            | Moderate                      | High                                       |
| Durability           | Scratch-resistant but fragile      | Easy to scratch               | Scratch-resistant but softer than quartz   |
| Machinability        | Difficult (requires special tools) | Easy (drill, cut, laser)      | Easy (similar to PMMA)                     |
| Chemical Resistance  | High (resists acids, alkalis)      | Moderate (resists weak acids) | Poor (degrades with solvents like acetone) |
| Cost                 | Moderate (\$$)                     | Low ($)                       | Moderate (\$$)                             |
| Weight               | Heavy                              | Lightweight                   | Lightweight                                |

#### **Final Decision:**

* Quartz is the best choice for thermal stability and optical properties, ensuring it can withstand long-term usage without deformation.
* Acrylic is the most affordable but softens at high temperatures, making it a risky choice for prolonged exposure to heat.
* Polycarbonate is more impact-resistant than acrylic but does not handle solvents well, which is a drawback.

I believe that for an initial prototype, acrylic would be best

### **Non-Transparent Parts: Structural Material Selection**

The non-transparent parts of the spin coater need to be rigid, durable, and easy to manufacture. After comparing various options, ABS was selected for the following reasons:

* Cost-Effective – It is inexpensive compared to alternatives.
* 3D Printable – Allows for rapid prototyping and customization.
* Durable and Heat Resistant – Withstands mechanical stress and moderate heat exposure.

### **Material Procurement**

To move forward with testing, I compiled purchase links for the different materials:

* **Acrylic Sheet:** [Amazon Link](https://www.amazon.com/Egofine-Plexiglass-Transparent-Crafting-Replacement/dp/B099DVY8BJ)
* **Quartz Sheet:** [Amazon Link](https://amazon.com/Hitommy-Double-Polished-Silica-Quartz/dp/B07CHBJNGX)
* **Polycarbonate Sheet:** [Amazon Link](https://www.amazon.com/Polycarbonate-Plastic-Shatter-Resistant-Document/dp/B094F4D8CY)

## **Current Research: Linear Slide System for the Spin Coater**

To enhance the precision and automation of the spin-coating process, I am investigating a linear slide system. This system will allow controlled movement of the sample stage or dispensing nozzle, ensuring uniform coating thickness and reproducibility.

#### Key Design Considerations for the Linear Slide System

**1. Motion Mechanism**

* Linear Rails with Bearings → Provide smooth, low-friction movement.
* Lead Screw System → Ensures precise motion but is slower.
* Belt-Driven System → Faster but less precise.

**2. Actuation & Control Options**

* Stepper Motor Control → Allows programmable movement and precision control.
* Servo Motor Control → High precision, but more complex and expensive.

**3. Integration with the Spin Coater**

* The system must be **rigid enough** to prevent vibrations.
* Motion must be precise yet smooth to avoid uneven coating.

#### **Next Steps in Slide System Development:**

* Test off-the-shelf linear rail systems to compare smoothness and precision.
* Design a mounting system to attach the slide to the spin coater frame.
* Evaluate stepper motor vs. manual control for better precision.

## **Conclusion & Next Steps**

This week’s work has brought significant progress in:

* Material selection for both transparent (lid) and structural (non-transparent) components of the spin coater.
* Comparing key properties like heat resistance, impact strength, and machinability to optimize design choices.
* Beginning research into a linear slide system to improve precision in the coating process.

####



