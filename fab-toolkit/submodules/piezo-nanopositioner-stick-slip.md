---
description: >-
  Based on Original Paper Found Here:
  https://www.sciencedirect.com/science/article/pii/S2468067222000621
---

# Piezo Nanopositioner (Stick Slip)

***

## **Background**

**In this Document**

At its fundamental level, a piezo inertia actuator might seem quite simple: two contacting surfaces one of which alternates between moving slowly and quickly in alternating directions which, in turn, causes displacement on the other surface. However, there are many variables at play, all of which have significant effects on the efficacy of a piezo inertia actuator.

There is no single optimal solution to each individual variable, rather different combinations of variables function well together given specific piezo inertia actuator assemblies. Understanding the most impactful variables and their effects can simplify this process.

This document includes a list of specific variables broken down as closely to first principles as possible + a specific configuration that resulted in a working piezo inertia actuator.

**Background**

<figure><img src="../../.gitbook/assets/image (61).png" alt="" width="375"><figcaption><p>Source: <a href="https://xeryon.com/technology/how-do-piezo-motors-work/">Xeryon</a></p></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (62).png" alt="" width="375"><figcaption><p>Source: <a href="https://www.thorlabs.com/newgrouppage9.cfm?objectgroup_id=13790">Thorlabs</a></p></figcaption></figure>

Piezo actuators are tiny stacks crystals that respond to voltage by physically expanding in a very repeatable way. The simplest of these crystal stacks simply expands and contracts in one direction. The magnitude of this expansion can range from single nanometers to multiple microns.

Actuator assemblies have been made utilizing this crystal stack by amplifying it's small expansion. This can be taken a step futher - by applying a sawtooth wave function to the piezo crystal, it can be made to expand slowly, but contract quickly. This, in tandem with some clever friction interfaces and dynamics, can be utilized to make a separate stage move much more than just the short range of the piezo draw (expansion) distance. It can effectively be used to move an infinite range.

![](../../.gitbook/assets/0.png)

1. ### **Friction between A and B**

The friction force between A and B is determined by the **material choice**, **cleanliness**, as well as the **preload force** Fa.

Having too much friction makes it harder for the slip phase of the stick-slip cycle to work. When the friction force is too strong, the inertia of A is no longer enough to overcome the higher friction force and the and surfaces do not slip; the assembly simply vibrates back and forth.

However, when the friction force is too weak the contact between both surfaces becomes inconsistent. This can also result in the stick phase being only a fraction of the draw distance of the piezo. Similarly to when there is too much friction, the assembly mostly just vibrates. This makes this hard to diagnose the issue.

It is also desirable for the surfaces of A and B to be hard.

As the piezo expands a very small amount (microns) any imperfections or change in angle between the A and B surfaces can cause the stick-slip cycle to fail and the actuator to get stuck. Therefore, having smooth surface finishes is desirable and increases reliability. Keeping the surfaces clean from debris has the same effect and also prolongs the lifetime of the surfaces.&#x20;

Having a preload force between the and surfaces is paramount. If there were none, we would be relying on perfect alignment between the A and B surfaces throughout its range of motion.

Having a preload ensures that even if both surfaces are not perfectly aligned they maintain contact with each other. This preload force also and gives us control on the friction between A and B.

2. ### **Planarity of A and B surfaces**

<figure><img src="../../.gitbook/assets/image (63).png" alt=""><figcaption><p>Piezo mounted externally (to chassis) or on the stage itself</p></figcaption></figure>

If the piezo element is mounted on the chassis, and not the stage itself, then any slop in the stage mounting will propagate as the stage moves throughout its range of motion. This can increase or decrease the force between the magnet and the stage, as well as wedge the magnet's corner against the stage.&#x20;

This is very unpredictable for the stage dynamics. Making more precise mounting for the stage is also desirable for other reasons, such as wanting a very linear range of motion (assuming that the magnet interface is operating properly to begin with). This can be expensive however, as the tolerances are on the order of microns.&#x20;

A poorly mounted stage can be calibrated out when using a 3-axis system, curbing the finicky precise mounting and tolerancing.

3. ### **Mass of A (Inertia)**

The entire concept of a piezo inertia actuator relies on the fact that the momentum of the stage during the stick phase will continue and overcome the friction force between A and B during the slip phase. In other words, the piezo pushes the mass A some amount then quickly pulls back. Without sufficient A mass, the slipping phase becomes very difficult to achieve.&#x20;

Piezos can exert very high forces when expanding (stick phase), so increasing mass does not put significant strain on the piezo actuator itself. During the slip phase, we only require enough force to overcome the friction force between and B.

4. ### Slew Rate of Driver

The rate at which the piezo can slip is just as important as the momentum of the stage. This is dictated by the capacitance of the piezo stack itself, but we have found that the more impactful variable at play is the **slew rate of the driver**. A proper driver that can pump or deplete voltage from the piezo in a matter of microseconds is critical to get consistent slipping action.

This can also dictate the frequency at which you can drive the stage, defining the maximum speed the actuator can move.

5. ### **Waveform driving the piezo**

<figure><img src="../../.gitbook/assets/image (58).png" alt="" width="563"><figcaption><p>Screenshot of Googling "piezo stick slip" showing pure sawtooths everywhere</p></figcaption></figure>

Though a linear saw-tooth waveform is able to produce movement of the piezo inertia actuator, it is far from optimal. Using a linearly increasing or decreasing waveform is not ideal for the sticking phase, as the sharp changes in direction can make the stage slip before sticking action occurs.&#x20;

Using a gradually increasing waveform like the ones seen below is a more optimal solution.

The velocity of the waveform starts off slowly and gradually increases speed, which allows it to reach higher driving frequencies without slipping and even a greater velocity at the end of the sticking phase – which increases the momentum of the surface A.

<figure><img src="../../.gitbook/assets/image (59).png" alt="" width="375"><figcaption><p><em><strong>A is moving in the same direction as the piezo</strong></em></p></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (60).png" alt="" width="375"><figcaption><p><em><strong>A is moving in the opposite direction as the piezo (reversed direction)</strong></em></p></figcaption></figure>

Let Fcr be the maximum driving frequency at which there still is sticking: it is desirable that the rapidly changing portions of the signal (slipping phase) be **4 times** faster than Fcr and that the slowly changing portions of the signal be 4 times slower than Fcr.

6. ### **Stiffness / stability of the entire assembly**

Vibrations are naturally created by the piezo element. They are undesired and indicate lead to inefficiencies.

Manufacturing the chassis assembly out of a stiffer and heavier material and fixturing the assembly to a stable base reduces said vibrations and greatly increases the efficiency and reliability of the machine.

This is especially critical for stages with more than one axis stacked on top of one another. This is yet to be tested.

***

## PCB Files on Github

{% @github-files/github-code-block url="https://github.com/hacker-fab/piezo-nanopositioner" %}

[PDu150](https://www.piezodrive.com/product/pdu150-three-channel-ultra-low-noise-150v-piezo-driver/) with a regular STM32 ADC was used for the testing below

PCB files above are the 2nd iteration on a custom board, with higher resolution ADC



### **Example Configuration that Works**

[VIDEO OF THE STAGE MOVING](https://drive.google.com/file/d/1T9c2T80Upw-menAUSYJ7MKQZQuIeMHPR/view?usp=sharing)

[OLD DRIVER BUT A BUNCH OF WEIGHT](https://drive.google.com/file/d/1XJrpbyoGirXTm36EDpsmjcrc1NUZyWDf/view?usp=sharing)

1. **Friction between and**

We have a 3 mm square nickel-coated neodymium magnet and a precision ground stainless steel linear rail as the two surfaces causing friction.

2. **Preload**

We are using a 3mm square nickel-coated neodymium magnet that has 0.28kg pull and the magnetic attraction between the stainless steel linear rail and the magnet acts as the preload force.

3. **Finish & consistency of and surfaces**

We are using a 3mm square nickel-coated neodymium magnet as the surface and a stainless steel linear rail as the surface. The linear rail was chosen as the surface because it is precision ground and has an excellent surface finish and for the surface we are using the smoothest looking face of the magnet. Furthermore, both surfaces are handled with care to avoid scratches and burrs, kept clean, and cleaned with isopropyl alcohol.

4. **Mass of A**

The design starts performing the best when there is over 50g of mass on top of the carriage. If you are prototyping and just put something heavy on top of the carriage to test, certify the weight is properly fixed to the carriage and can’t move freely – which would just cause vibrations and a poor performance.

5. **Waveform driving the piezo**

The piezo element is driven with an 8 bit DAC and a [PDu150](https://www.piezodrive.com/product/pdu150-three-channel-ultra-low-noise-150v-piezo-driver/) piezo driver. The waveform used is the same shown in the images in section “5. Waveform driving the piezo”, it has a peak voltage of 120V and a driving frequency of 1,400 Hz.

Previously, we used the [BD150](https://www.piezodrive.com/product/bd150-dual-channel-150v-amplifier/) driver, however, its slew rate was extremely low and the upgrade to the [PDu150](https://www.piezodrive.com/product/pdu150-three-channel-ultra-low-noise-150v-piezo-driver/) driver showed very significant improvements.

BD150 slew rate = 12 V/us

PDu150 slew rate = 38 V/us

6. **Stiffness / stability of the entire assembly**

The most significant way this was handled was by attaching the piezo directly onto the linear slide and the magnet touching the rail. This ensures that all movement is directly transferred onto movement of the slide and less is lost due to compliance on other parts of the assembly.

Machining the main body of the actuator out of aluminum works well, however it is also working with a 3d-printed chassis out of PLA. Taping – or even just pressing down with your fingers – the assembly to a stiff plate or table solves vibration related problems.

[VIDEO OF 3D PRINTED VERSION – SIDE MOUNTED MAGNET](https://drive.google.com/file/d/18SRqigx62qSgzW3oG9dCKlq33cSTzdOr/view?usp=sharing)

[VIDEO OF 3D PRINTED VERSIon – TOP MOUNTED MAGNET](https://drive.google.com/file/d/1F-rFmb0HY8VqcwQd4WW1wQDVSczNiiwN/view?usp=sharing)

7. **Piezo element**

We used [this](https://www.mmech.com/tokin-actuators/nec-tokin-resin-coated/nec-ae0203d04f) 4.6um draw distance piezo stack.

8. **Linear rail and carriage**

We are using these [rail](https://www.mcmaster.com/6725K33/) and [carriages](https://www.mcmaster.com/8438K2/) from McMacter.
