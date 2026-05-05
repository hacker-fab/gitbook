---
description: 2D Crystal Stacking Bot Submodule
---

# Carousel Module

The carousel is a subsystem of the project that enable the system to store chips and distribute them on a plate so it can switch between different chip materials. The carousel is a turning platform composed at its extremity of 10 chip holders to store the chips. A stepper motor is rotating the carousel while a linear actuator pushes the chips on the plate, the part of the system where the chip is used.

## Assembly of the carousel

#### Bill of parts

3D printed parts

{% file src="../../../../.gitbook/assets/chip_holder.stl" %}

{% file src="../../../../.gitbook/assets/mount_carousel.stl" %}

{% file src="../../../../.gitbook/assets/mount_linear.stl" %}

{% file src="../../../../.gitbook/assets/platform.stl" %}

{% file src="../../../../.gitbook/assets/push_part.stl" %}

Screws

* 4x M3x14 screw
* 8x M3x8 screw
* 4x M3 nut
* 8x M3 washer
* 20x M2.5x6 screw
* 20x M2.5 nut
* 24x M2.5 washer
* 4x M2.5x4 screw
* 4x M6x30 screw
* 8x M6 washer
* 4x M6 nut

Motors

* 1x [NEMA17 stepper motor](https://www.omc-stepperonline.com/fr/nema-17-moteur-pas-a-pas-a-boucle-fermee-45ncm-64oz-in-avec-encodeur-magnetique-1000ppr-4000cpr-17hs15-1504-me1k) to rotate the carousel
* 1x [Linear actuator (35mm stroke)](https://www.aliexpress.us/item/3256804629681694.html?gatewayAdapt=glo2usa4itemAdapt) to push the chips on the plate

Electronic parts

* 4x heat shrink
* 6x male to male wire
* 1 Arduino UNO board
* 1 Adafruit shield v3
* 1 Arduino MEGA board

{% hint style="info" %}
The last board can be different than Arduino MEGA, its goal is just to simulate an SPI connection between the carousel and the raspberry PI.
{% endhint %}

Additional equipment

* [5mm rigid flange coupling](https://www.amazon.com/uxcell-H12D10-Coupling-Coupler-Connector/dp/B07PLB2P4W) to link the NEMA17 and the carousel's platform



#### Assembly steps



1. Print all the 3D printed parts, order the motors and the flange, and get the necessary screws to attach the parts together. All 3D printed parts need to be printed one time except the chip holders that needs to be printed 10 times.
2. Put the motor into the hole designed for it.

<figure><img src="../../../../.gitbook/assets/IMG_0129.png" alt="" width="375"><figcaption></figcaption></figure>

3. Put the mount for the linear actuator above the motor with the four M3x14 screws to attach the two mounts together and fix the NEMA17 motor with the four M3x8 screws, all using M3 washers.

<figure><img src="../../../../.gitbook/assets/IMG_0131.png" alt="" width="375"><figcaption></figcaption></figure>

{% hint style="info" %}
Be careful to fix the linear actuator's mount to the NEMA17 motor's mount in the correct orientation!
{% endhint %}

4. Attach the pusher part to the linear actuator using two M2.5x4 screws.

<figure><img src="../../../../.gitbook/assets/IMG_0135.png" alt="" width="375"><figcaption></figcaption></figure>

5. Fix the linear actuator to its mount using two M2.5x6 screws and two M2.5 washers for each screw.

<figure><img src="../../../../.gitbook/assets/IMG_0137.png" alt="" width="375"><figcaption></figcaption></figure>

6. Fix the flange to the carousel's platform using the M3 nuts and the M3x8 screws.

<figure><img src="../../../../.gitbook/assets/IMG_0142.png" alt="" width="375"><figcaption></figcaption></figure>

7. Attach the 10 chips holder to the platform using two M2.5x6 screws, two M2.5 nuts and two M2.5 washers for each parts.

<figure><img src="../../../../.gitbook/assets/IMG_0139.png" alt="" width="375"><figcaption></figcaption></figure>

8. Paste numbered papers above the chips holders to indentify them. (_The example on the photo only shows three chip holders parts but it can welcome at most 10 chip holders)_

<figure><img src="../../../../.gitbook/assets/IMG_0144.png" alt="" width="375"><figcaption></figcaption></figure>

9. Attach the platform of the carousel to the shaft of the NEMA17 motor.

<figure><img src="../../../../.gitbook/assets/IMG_0145.png" alt="" width="375"><figcaption></figcaption></figure>

10. Attach the carousel to the structure using the four M6x20 screws and the height M6 washers.

#### Electrical connections



1. The NEMA17 stepper motor is delivered without any possibility to connect the wires to pins so we need to implement the pins.\
   Cut male to male wires in half and solder them to the motor's wires. Once done put a heat shrink on it to cover the soldered part.

{% hint style="info" %}
This part is important to have reliable connections and signals for the motor to work correctly.
{% endhint %}

<figure><img src="../../../../.gitbook/assets/IMG_0147.png" alt="" width="375"><figcaption></figcaption></figure>

Here is a youtube tutorial that can help for that step:&#x20;

{% embed url="https://www.youtube.com/watch?v=NSqPHQ1zQco" %}

2. Do the equivalent thing for the linear actuator motor but just connecting the motor with the male to male wires.

<figure><img src="../../../../.gitbook/assets/IMG_0149.png" alt="" width="375"><figcaption></figcaption></figure>

3. Branch the Adafruit shield on the top of the Arduino UNO board.
4. Connect the wires of the NEMA17 stepper motor to the M3 port (red and black wires) and to the M4 port (blue and yellow wires).

<figure><img src="../../../../.gitbook/assets/IMG_0148.png" alt="" width="375"><figcaption></figcaption></figure>

5. Connect the wires of the linear actuator to the M1 port (yellow and red wires) and to the M2 port (blue and black wires).

<figure><img src="../../../../.gitbook/assets/IMG_0150.png" alt="" width="375"><figcaption></figcaption></figure>

6. Power the shield with 5V DC power supply.
7. Finally, connect the pin 10, 11, 12, 13 and GND of the shield to the pins 53, 51, 50, 52, GND of the Arduino MEGA, respectively.

<figure><img src="../../../../.gitbook/assets/WhatsApp Image 2026-04-30 at 13.29.09.jpeg" alt=""><figcaption></figcaption></figure>

8. Connect both Arduino boards to your computer



## Module Operation

#### Software

Here is the code for the carousel:

{% file src="../../../../.gitbook/assets/carousel.ino" %}

Here is the code for the Arduino MEGA to simulate the SPI connection. Note: the same code can be used with different compatible boards.

{% file src="../../../../.gitbook/assets/spi_test.ino" %}

Upload the code for the carousel first. Once done, upload the code on the Arduino MEGA. You can then open the Serial monitor and enter the number of the chip you want in a range of 1 to 10 for the 10 chips holders.&#x20;

The initial position of the carousel can be decided physically according to what chip number the user put in front of the linear actuator. However, this information needs to be specified at the beginning of the code:

```
volatile int actual_pos = 2; // Specify the initial number here
```

Once a number entered, the carousel will turn to that number and activate the linear actuator to push the chip on the plate. A new number can be entered when the linear actuator is at its initial state.

#### System Validation Videos

Here is a video of the final version of the carousel distributing the chips on the plate.

{% hint style="info" %}
In the video, the chip is removed form the plate and placed in the chip holder by hand but this action is at the end done by the chip return stage (see next page).
{% endhint %}

{% file src="../../../../.gitbook/assets/Carousel_demo.mov" %}

## Note on the design

#### Mount of the carousel

The mount of the carousel is actually rotated with an angle of 61.35 degrees to be aligned with the nanopositioner. However, this value can be changed depending on the working position of the nanopositioner and its movements. Also, the length of the carousel can be tuned if the nanopositioner changes its height. The length of the NEMA17's mount can be changed or an additional piece can be placed below the mount to elevate it.\
These points are important because they need to be tuned according to the location of the other parts of the system.

<figure><img src="../../../../.gitbook/assets/Capture d&#x27;écran 2026-05-01 183616.png" alt=""><figcaption></figcaption></figure>

#### Design of the chip holders

The carousel has been designed so that the location where the chips are stored can be easily redesigned. Indeed, several samples have been made to obtain the actual shape of the chip holder but this design may not be the optimal one. Depending on how the chips are loaded and removed from the plate, the chip holder can be modified so it facilitates the process and improves the accuracy of the carousel.&#x20;

<figure><img src="../../../../.gitbook/assets/Capture d&#x27;écran 2026-04-21 152340.png" alt=""><figcaption></figcaption></figure>

For example, the roundy edges allows the chip to enter properly in the chip holder if it's a bit unaligned. Also, there is a space for the plate to be higher than the space where the chips is stored in order for the chip to be easily stored.
