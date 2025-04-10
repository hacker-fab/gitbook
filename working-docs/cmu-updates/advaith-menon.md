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

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXc9yM1aBTuPecIVHAQ6WHaBY2HChqVkqF9pR69nNBSwnP86FlbE7K-Phf2qnx8tGCHyyIDgBqGbWJeQSqvPg-aJ1jDerrRG4DvHPFjKQGK2dt96nXhjLnwsv7he4fm5iKImFVTqHw?key=FWIacl3KTLTfg-fEaG5lgXWM" alt=""><figcaption></figcaption></figure>

The above is one of the potential configurations for the belting system, which I believe would be the most effective. This is primarily because the belts are centered on the plate, helping to ensure the movement is smooth. Additionally, it takes up less space, because the motor goes under the cage, so there is less strain on the feet. Finally, the system is relatively simple compared to other solutions, which would require flipping the axis of the belt or angled gears.

Beyond the technical aspects of the belting system, I also completed my required lab safety training, which is essential for working in an environment that involves hazardous materials. This week, I finished the hazardous waste training as well as the hydrofluoric acid (HF) safety training, both of which are critical for safely handling chemicals in the lab. I have another safety training session scheduled for next week, specifically covering general lab safety procedures, which will help to ensure that I am fully prepared to work in a HackerFAB lab without unnecessary risks.

Looking ahead, my next steps will involve moving from the design phase to the fabrication and assembly phase of the belting system. This means sourcing the necessary materials, machining or 3D-printing the custom parts, and carefully assembling the entire mechanism to ensure proper fit and function. I believe we should have a majority of the required parts required, so this shouldn’t be an issue. Once assembled, I plan to conduct some tests to evaluate the performance of the belting system, focusing on factors such as smoothness of operation, consistency of rotation, and overall stability. One of the critical aspects to assess will be whether the belt maintains a firm grip without excessive tension, which could cause unnecessary strain on the motor or lead to premature wear. Additionally, I will need to verify that the belt-driven system does not introduce unwanted vibrations or inconsistencies that could affect the uniformity of the spin coating process.

If any issues arise during testing, I have already identified a few potential improvements to explore. One option would be revisiting the idea of using a string instead of a belt if the belt proves too rigid or difficult to maintain at optimal tension. Another possible improvement would be refining the mounting system to create a more secure and adjustable connection between the belt and the motor-driven components. This might involve adding more tensioning mechanisms, such as adjustable pulleys or idlers, to fine-tune the belt's position and force distribution. Additionally, I will be considering different belt materials to see if alternative options provide better flexibility, durability, or grip.

This phase of the project is particularly important because the reliability of the belting system directly impacts the overall functionality of the automated spin coater. If the belt-driven mechanism fails to operate smoothly, it could lead to inconsistent spin speeds, affecting the quality and reproducibility of the coated films, as well as potentially causing the liquids on the chip to fall off before being annealed. Since automation is a key goal of this project, I need to ensure that the belting system is not only effective but also robust enough to handle repeated use without frequent maintenance or manual adjustments.



***

## Week 7

After reviewing the design with my TA, we identified inefficiencies in the belt system that made it more complex than necessary. The initial design incorporated four to six idlers, which increased the system’s footprint and introduced additional mechanical challenges. This setup required precise alignment of multiple components, making assembly more difficult and increasing the potential for belt slippage or misalignment. To simplify the design and improve reliability, we decided to reduce the number of idlers to just two. However, this change required a complete reassessment of how the belt would be configured within the system.

One of the main challenges was determining the best way to secure the belt while maintaining proper tension. The original approach relied on a more intricate path with multiple points of contact, which was no longer feasible with fewer idlers. After exploring different configurations, we ultimately decided to rotate the belt orientation and use belt clamps to secure it in place (1). This adjustment allowed us to maintain a stable and controlled belt path while reducing the number of moving parts. Additionally, this approach simplified both installation and future adjustments, as the belt can be more easily secured or repositioned if needed.

Modifying the belt system also required adjustments to the spin coater carrier. Specifically, we had to increase its height to ensure the belt could pass underneath it without interference. Additionally, we designed holes to prevent the belt from hitting the pulley as it moved (2). These modifications ensured that the belt could operate smoothly while maintaining a compact and functional design.

Finally, we had to design a motor holder that would work for this new system. Both me and my TA created differing designs, so we plan on testing each and figuring out which on works better.

Since the parts for the revised design have not yet arrived, we have not been able to physically build and test the new configuration. However, based on initial design evaluations, the new approach is expected to improve both system efficiency and ease of assembly. The next step is to manufacture and assemble the updated components, at which point we will conduct testing to ensure that the belt remains stable under operational conditions. The goal for next week is to build and evaluate the new design, making any necessary refinements based on real-world performance.

Image 1: Belt Drawings

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXfbQvDbT_iXKVs3GQTeEnRbjAlhJ1u5cNeCABDa3_ieCGrezimpzctP1aX7ID_VvB4B1pwZXy1sRT3x10QuqBYmA-QUwpQ5wrusoiQQ7zX6R4_UNs_5dfCuqiNFHCcbUlOn2g1L?key=FWIacl3KTLTfg-fEaG5lgXWM" alt=""><figcaption></figcaption></figure>

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXdKYYmz0LZkyfaWNMA28ZAGTrhudz_pNlHzz_E7w4WsploKALW8wriQbbxZgDIhXB0U1APMfem-9EYpTzcetgHjP9MWBG069X2MP9TSJDrbhNPKLRnim8RGiE-eneM4cHTTWAOPHA?key=FWIacl3KTLTfg-fEaG5lgXWM" alt=""><figcaption></figcaption></figure>

Image 2: New Spincoater Design

<figure><img src="https://lh7-rt.googleusercontent.com/docsz/AD_4nXfx9cqWl6bR9tdFc0ZbEsda3RmZFfN-Kke-PtVPbXdTN8Ql-dHHVssMtsmPlDpCmYbwStbky1GUMrKQUdyeR0X-OEHYt4tUXnVqghtEZvql0Y0zBZ0BxW_Qa1Y_cxNAy3712ofd7g?key=FWIacl3KTLTfg-fEaG5lgXWM" alt=""><figcaption></figcaption></figure>

Link to Onshape (individual parts can be seen in the folder): [https://cad.onshape.com/documents/df908f0b0d36941a4736405d/w/3fc81265ae581f703ba36f23/e/fc64cbec930fd345cf081461](https://cad.onshape.com/documents/df908f0b0d36941a4736405d/w/3fc81265ae581f703ba36f23/e/fc64cbec930fd345cf081461)\


## Week 8

This week, we finally got all of the parts required, so we decided to finish building the full base of the system. Since the new motor mount altered our design, we had to redesign the distance sensor to fit around it. I determined that the simplest and most effective solution was to create an arch and mount the distance sensor at the top. After finalizing the design in CAD, I 3D printed the part and attached it to the ASC. With this, the bottom half of the spin coater assembly is officially complete.

Distance Sensor Mount:

![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXdcXH11KM6l4k96SBh2utw42lvWx2obA4kRfQ6Fg40TrSvdSVUOGvm_IZLHARip9qTTByNNyUKpdUTXt5sTuSoMlkd8Xtips33G8K6hruHPXvbmxIlTwmAlI5rWy25UYerKft37?key=FWIacl3KTLTfg-fEaG5lgXWM)

Full System (I forgot to take actual pictures):\
![](https://lh7-rt.googleusercontent.com/docsz/AD_4nXchFIaLdst8K7OpDbNxJIxeyE95Lhe-3hLg7sEiSXDzLpIRU2VWv9J4LLtYhDnfQnOFpCLw-LPhmAINBwVE0YURjeHJRrVtLi5xK92gK7kykjalxmvNO85qMvv8l7UnQdsml8uyIQ?key=FWIacl3KTLTfg-fEaG5lgXWM)

Initial tests I did at home showed that the motor responded correctly and the sensor provided accurate readings. However, I still need to confirm that the sensor performs reliably under the actual operating conditions, particularly when exposed to rapid movements and a non-direct line of sight.

For next week, I plan on coding the ASC to determine the required motor ticks needed to position the spin coater precisely under each of the liquid handling syringes and the heat gun. This requires calibrating the stepper motor movements to ensure accurate and repeatable positioning. I will write test scripts to determine the motor tick-to-distance ratio, accounting for any minor mechanical tolerances. Additionally, I will conduct extensive testing to ensure that everything functions correctly. This includes running trials with liquids of varying viscosities to analyze how the movements on the belt affect the distribution on the chip surface. I also plan to add logic that dynamically adjusts spin speed/acceleration based on viscosity inputs to improve coating uniformity.

My primary project thus far has been the base of the ASC, and after this week (hopefully sooner), this part should be almost completely finished. If time permits, I can work on integrating basic user interface elements for controlling the system. This could include a simple menu system for selecting spin parameters or a real-time display of sensor feedback.&#x20;

Onshape Link:

https://cad.onshape.com/documents?nodeId=13a6fba93f1b40244f3af04c\&resourceType=folder

## Week 9:

This week, I focused on making progress with both the hardware setup and presentation preparation. I started by connecting the distance sensor to the Arduino and confirmed that it was still functioning correctly. After wiring everything up, I ran a few test scripts to ensure the sensor readings were consistent and that communication with the microcontroller was stable. It was reassuring to see that this key part of the system remained reliable even after changes in the setup.

\[WILL TAKE PCITURE TOMORROW]

After verifying the sensor, I turned my attention to the motor system. I attempted to run basic movement commands through the Arduino, but the motor did not respond as expected. After some debugging, I concluded that the issue was most likely due to an insufficient power supply. The motor I’m using is rated for 9V, but during this phase of testing, I was only able to supply it with 5V. As a result, the motor either did not run at all or behaved erratically.

\[WILL TAKE PICTURE TOMORROW]

Thankfully, I believe this issue will be resolved once the custom PCB arrives. The ordered PCB includes an onboard buck converter, which is designed to regulate a higher input voltage down to the necessary 9V for the motor. This should allow the system to deliver the correct voltage and current without requiring an external power setup. With proper voltage regulation in place, I expect the motor to operate reliably and consistently, which will allow for more advanced testing of the motor control logic and sensor-motor interaction.

Ordered PCB:\


<figure><img src="../../.gitbook/assets/image (252).png" alt=""><figcaption></figcaption></figure>

In addition to the hardware work, I also spent time preparing for Presentation 2. I compiled the progress I’ve made so far, organized the technical developments, and clearly articulated the issues I’ve encountered and how I plan to address them. I aimed to structure the presentation to showcase not just the technical milestones, but also the problem-solving and iteration that have taken place along the way.

Overall, this week marked another important step forward. Although I encountered some obstacles, they led to a deeper understanding of the system’s power requirements and helped shape the design decisions that went into the PCB. I’m looking forward to receiving the final board and moving closer to a fully functional prototype with stable sensor input and reliable motor control.
