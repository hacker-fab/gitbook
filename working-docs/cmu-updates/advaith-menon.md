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

***

## Week 3

This week, I made significant progress on the CAD design for the automated spin coater system. A major focus was refining the structural framework, ensuring that it is both rigid and modular. The design utilizes aluminum extrusions, which provide a strong yet lightweight foundation while allowing for easy adjustments and scalability.

One of the key developments this week was the integration of a linear rail system at the base of the structure. This rail serves as the foundation for the horizontal motion of the spin coater platform. To achieve this, I designed a custom carriage system that allows the spin coater to move smoothly along the rail with minimal friction, ensuring the liquid on it isn’t affected by the motion. The carriage is designed to accommodate precise linear motion, which is essential for avoiding uneven coating application.&#x20;

Additionally, I incorporated an infrared distance sensor into the design. This sensor will play a crucial role in detecting and monitoring the position of the spin coater platform, ensuring precise control over its movements. By providing real-time feedback, the sensor will help maintain consistency in the coating process, an essential factor for achieving reproducible results. The placement of the sensor was carefully chosen to maximize accuracy while minimizing interference from other components.

Beyond the core structural and motion system, I also worked on establishing a system for the CAD, including redesigning the 80/20 rail to be a bit simpler and work better in Onshape assemblies. While small, these changes make it monumentally easier for the team to design, and provide a standard that can be used in the future.

Moving forwards, my tasks will include designing the belting system used to drive the linear slides, as well as helping to design the element going on top of the cage, including the liquid handling system and the heat gun. Once these are accomplished, I have to test the spin-coater on the linear slides to determine what acceleration/ ramp-up is required to avoid messing up the liquid on the ASC.&#x20;

<div><figure><img src="../../.gitbook/assets/Screenshot 2025-02-10 at 2.11.36 AM.png" alt=""><figcaption></figcaption></figure> <figure><img src="../../.gitbook/assets/Screenshot 2025-02-10 at 2.21.12 AM.png" alt=""><figcaption></figcaption></figure></div>

***

## Week 4

\
This week, I focused primarily on the project presentation for Tuesday. However, I also tested the IR sensor using an Arduino. This involved setting up the hardware on a breadbaord, writing the necessary Arduino code, and debugging any issues that arose during the process. A few issues arose with random jumps appearing the return values, but I discovered that this was due to a bad soldering connection. Next week, I should have all the parts necessary to begin building a first prototype of the linear slide mechanism, which I can also test with the new infrared.



<figure><img src="../../.gitbook/assets/Untitled design.png" alt=""><figcaption></figcaption></figure>

{% include "../../.gitbook/includes/line.md" %}

## Week 5

This week, I focused on refining the CAD model, making sure everything fits together properly and functions as intended. I also spent a lot of time researching different ways to move the linear slide system, looking into lead screws, rack and pinion setups, chain drives, and even pneumatic and hydraulic options. Each method had its own advantages and trade-offs, so I considered factors like precision, load capacity, ease of assembly, and long-term maintenance.

After comparing all the options, I decided on a belt system because it’s the most practical choice. We already have the necessary parts and experience working with belts, which makes implementation much easier. Belts also provide smooth and reliable movement without adding unnecessary complexity. With this decision finalized, I can now focus on optimizing the design and moving forward with the project.

***

## Week 6

This week, my primary focus was designing the belting system for the automated spin coater, a crucial component that will allow for smooth and controlled rotation of the sample during the spin coating process. Since the system needs to be both precise and reliable, I spent a significant amount of time brainstorming potential configurations and sketching out different layouts to determine the most efficient design. One of my key challenges in this phase was deciding whether to use a belt or a string for transmitting motion from the motor to the rotating stage. Initially, I was uncertain about the benefits of using a belt over a string, particularly regarding factors such as tension management, durability, and especially slippage. However, after discussing the pros and cons with others and considering the mechanical implications, I gained a much clearer understanding of why a belt would work just as well as a string, if not better. Belts generally provide more consistent force transmission, reduce the chances of slippage, and are easier to control in terms of tensioning and alignment.

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXcFxEyJ71yNgYeSGsi5wAHLNiPpwXyDA1UbVUoVvkhc1kpcV9gckCFNQqsBMeH7rPayDY0bFqQjvSbiFEwmzT9q4d486_6z8vFWvg1T3gttd0KUsx-BMfbh-tnkTu01AiFTRLRmLA?key=FWIacl3KTLTfg-fEaG5lgXWM" alt=""><figcaption></figcaption></figure>

Once I had settled on the belt-driven approach, I began thinking about how best to integrate this system into the existing spin coater design. Initially, my plan was to incorporate the entire CAD model of the belting mechanism directly into the current spin coater CAD assembly. However, after further analysis, I realized that doing so might not be necessary and could even make modifications and testing more cumbersome. Instead, I opted to design a set of modular, custom parts specifically for the belt system, which would allow for easier adjustments and refinements. Some of these custom components include a motor holder to securely mount the motor in the correct position relative to the belt and stage, as well as other structural supports to ensure proper belt alignment and tensioning. By keeping these components separate from the main CAD model, I will have more flexibility when iterating on the design, making it easier to test different configurations and troubleshoot any issues that arise.

\


<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXc9yM1aBTuPecIVHAQ6WHaBY2HChqVkqF9pR69nNBSwnP86FlbE7K-Phf2qnx8tGCHyyIDgBqGbWJeQSqvPg-aJ1jDerrRG4DvHPFjKQGK2dt96nXhjLnwsv7he4fm5iKImFVTqHw?key=FWIacl3KTLTfg-fEaG5lgXWM" alt=""><figcaption></figcaption></figure>

The above is one of the potential configurations for the belting system, which I believe would be the most effective. This is primarily because the belts are centered on the plate, helping to ensure the movement is smooth. Additionally, it takes up less space, because the motor goes under the cage, so there is less strain on the feet. Finally, the system is relatively simple compared to other solutions, which would require flipping the axis of the belt or angled gears.

Beyond the technical aspects of the belting system, I also completed my required lab safety training, which is essential for working in an environment that involves hazardous materials. This week, I finished the hazardous waste training as well as the hydrofluoric acid (HF) safety training, both of which are critical for safely handling chemicals in the lab. I have another safety training session scheduled for next week, specifically covering general lab safety procedures, which will help to ensure that I am fully prepared to work in a HackerFAB lab without unnecessary risks.

Looking ahead, my next steps will involve moving from the design phase to the fabrication and assembly phase of the belting system. This means sourcing the necessary materials, machining or 3D-printing the custom parts, and carefully assembling the entire mechanism to ensure proper fit and function. I believe we should have a majority of the required parts required, so this shouldn’t be an issue. Once assembled, I plan to conduct some tests to evaluate the performance of the belting system, focusing on factors such as smoothness of operation, consistency of rotation, and overall stability. One of the critical aspects to assess will be whether the belt maintains a firm grip without excessive tension, which could cause unnecessary strain on the motor or lead to premature wear. Additionally, I will need to verify that the belt-driven system does not introduce unwanted vibrations or inconsistencies that could affect the uniformity of the spin coating process.

If any issues arise during testing, I have already identified a few potential improvements to explore. One option would be revisiting the idea of using a string instead of a belt if the belt proves too rigid or difficult to maintain at optimal tension. Another possible improvement would be refining the mounting system to create a more secure and adjustable connection between the belt and the motor-driven components. This might involve adding more tensioning mechanisms, such as adjustable pulleys or idlers, to fine-tune the belt's position and force distribution. Additionally, I will be considering different belt materials to see if alternative options provide better flexibility, durability, or grip.

This phase of the project is particularly important because the reliability of the belting system directly impacts the overall functionality of the automated spin coater. If the belt-driven mechanism fails to operate smoothly, it could lead to inconsistent spin speeds, affecting the quality and reproducibility of the coated films, as well as potentially causing the liquids on the chip to fall off before being annealed. Since automation is a key goal of this project, I need to ensure that the belting system is not only effective but also robust enough to handle repeated use without frequent maintenance or manual adjustments.

\
