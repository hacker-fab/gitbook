---
description: 2D Crystal Stacking Bot Submodule
---

# Microscope Focus Module

The microscope allows the user to have a look at the process and the stacked layers. However, this observation requires a focus on the object observed and so a system that changes the focal point is needed. This is the goal achieved by this module: it moves the microscope on the vertical absciss to obtain a clear observation of the process.

## Assembly of the microscope focus system

#### Bill of parts

3D printed parts

{% file src="../../../.gitbook/assets/system_mount.stl" %}

{% file src="../../../.gitbook/assets/microscope_holder.stl" %}

{% file src="../../../.gitbook/assets/transmission.stl" %}

{% file src="../../../.gitbook/assets/square_motor.stl" %}

{% file src="../../../.gitbook/assets/link_part.stl" %}

{% hint style="info" %}
The last STL part is useful if we want the microscope to be lower.
{% endhint %}

Screws

* 4x M2.5x6 screws
* 4x M2.5 washers
* 3x M3x12 screws
* 4x M3 washers
* 2x M2.5 screws and wahers (microscope)
* 5x M5 screws

Motor

* 1x [Nema11 (28mm frame, 1.8° step angle)](https://bearingscanada.com/fr/products/nema-11-stepper-motor-28mm-body-18-stepper-angle-0?variant=52260223254847\&utm_source=chatgpt.com\&utm_medium=feed)

Positioning stage

* 1x [XYZ 3 Axis Manual Precision Linear Stage](https://www.amazon.com/Precision-Trimming-Platform-Micrometer-Accuracy/dp/B0DCNXFCD3) (only Z axis part)

Electronic parts

* 1 Arduino UNO board
* 1 Adafruit shield v3
* 4x male to male wire

#### Assembly steps



1. Print all the 3D printed parts, order the motors and the positioning stage, and get the necessary screws to attach the parts together. All 3D printed parts need to be printed one time.
2. Fix the transmission part to the scroll wheel of the positioning stage. It should fit tightly so the transmission part can turn with the scroll wheel but it can vary according to the 3D printer settings. However, some tape can be used to have the desired assembly between the two parts.

<figure><img src="../../../.gitbook/assets/IMG_0161.png" alt="" width="375"><figcaption></figcaption></figure>

3. Attach the positioning stage to the mount using three M3x12 screws.

<figure><img src="../../../.gitbook/assets/IMG_0162.png" alt="" width="375"><figcaption></figcaption></figure>

4. Fix the square 3D printed part to the shaft of the stepper motor. Again, this assembly should be tight.

{% hint style="info" %}
Be careful to verify (turning the piece with hands) that the square part turns with the shaft and cannot freely moved compared to the shaft, because if it's the case, the system won't work. Verify the same relation between the transmission part and the scroll wheel of the positioning stage.
{% endhint %}

<figure><img src="../../../.gitbook/assets/IMG_0163.png" alt="" width="375"><figcaption></figcaption></figure>

5. Bring the square part into the other side of the transmission part so the motor is placed at its right position.

<figure><img src="../../../.gitbook/assets/IMG_0164.png" alt="" width="375"><figcaption></figcaption></figure>

6. Attach the stepper motor to the mount using four M2.5x6 screws and four M2.5 washers.

<figure><img src="../../../.gitbook/assets/IMG_0165.png" alt="" width="375"><figcaption></figcaption></figure>

7. Fix the microscope holder to the positioning stage with only four M3x12 screws and M3 washers.&#x20;

<figure><img src="../../../.gitbook/assets/IMG_0166.png" alt="" width="375"><figcaption></figcaption></figure>

8. Attach the microscope to its mount with M2.5 screws and washers.
9. Finally, attach the system to a beam using the M5 screws

#### Electrical connections

1. Connect the motor's pin with male to male wire and fix it with simple tape so the wires are holded together.

<figure><img src="../../../.gitbook/assets/IMG_0167.png" alt="" width="375"><figcaption></figcaption></figure>

2. Branch the Adafruit shield on top of the Arduino UNO board.
3. Connect the wires of the stepper motor to the port M3 (grey and purple wires) and to the port M4 (brown and white wires) of the shield, as in the photo below.

<figure><img src="../../../.gitbook/assets/IMG_0171.png" alt="" width="375"><figcaption></figcaption></figure>

4. Power the shield with a 5V DC power supply.
5. Branch the Arduino board to the computer.

## Module Operation

#### How te module works

The Z axis precision linear stage is very useful for the focus of the microscope because it allows to do really little movements on the Z axis while preventing any other movement on the other axis. This positioning stage is in metal so it's very robust and very precise. The scroll wheel is used to change the vertical position of the positioning stage and it's movement is perfectly translated to the stage meaning that a certain shift on the scroll wheel is the same vertical shift on the stage.&#x20;

<figure><img src="../../../.gitbook/assets/Capture d&#x27;écran 2026-04-02 003035.png" alt=""><figcaption></figcaption></figure>

Usually this scroll wheel is rotated by hand since it's a manual stage initially but this module is designed so that a stepper motor can turn it. The transmission part is the key part for that: one side of it is gripped to the scroll wheel to it can turn with it and the other side, with its square shape, can be fitted on the squared shaft of the motor. So the motor, with its squared shaft, can turn the scroll wheel via the transmisson part that can translate on the motor's shaft.

<figure><img src="../../../.gitbook/assets/IMG_0169.png" alt="" width="375"><figcaption></figcaption></figure>

For one rotation of the scroll wheel, the stage translate of 0.5 mm (500 µm) and the stepper motor has 400 steps per rotation. Therefore, the precision of the final system is 500/400 = 1.25 µm, meaning the smallest movement the system can produce on the vertical axis is 1.25 µm.

The movement of the positioning stage has been designed to be in a range of 7 mm, so its minimum position and maximum vertical position are respectively 2.5 and 9.5 mm on the scroll wheel, with a zero position at 6 mm (see the photo below).

<figure><img src="../../../.gitbook/assets/IMG_0170.png" alt=""><figcaption></figcaption></figure>

#### Software

Here is the code for the microscope focus module:

{% file src="../../../.gitbook/assets/microscope_focus.ino" %}

🚨IMPORTANT🚨 As mentioned earlier, the initial zero position of the positioning stage is 6 mm on the scroll wheel so before starting the program, the positioning stage has to be at that position.

Upload the program on the Arduino UNO board and open the Serial monitor. The user have the possibility to enter the shift desired on the vertical axis.&#x20;

{% hint style="info" %}
The shift that the user enter is in micrometer (10^-3 a mm)
{% endhint %}

The program keeps track of the position of the microscope and a verification system of the input is implemented so the microscope doesn't go beyond the range of movement decided.

<figure><img src="../../../.gitbook/assets/Capture d&#x27;écran 2026-05-01 162357.png" alt=""><figcaption></figcaption></figure>

#### System Validation Videos

Here is a video that shows how the system is working.

{% file src="../../../.gitbook/assets/microscope_Zaxis.MOV" %}

This video proves the point detailed earlier, that the shift produced on the scroll wheel of the positioning stage is exactly the same as the vertical shift. When entering a value of 1000 we can see a shift of 1 mm on the ruler.

{% file src="../../../.gitbook/assets/microscope_test.MOV" %}
