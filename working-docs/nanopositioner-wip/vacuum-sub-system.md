# Vacuum Sub-system

The vacuum system is used to hold a chip on the nanopositioner end effector during alignment and stamping. It creates suction at the tool head so the chip stays in place while the robot moves and aligns it.

The system includes a [370 miniature diaphragm pump](https://www.dfrobot.com/product-2374.html?srsltid=AfmBOopQUF-vNVCZqL1GQVZNeb9UNw5lhxKV_Kf4uU9DkmleM29T2Jv8), tubing, a pump mount, and a PWM drive circuit controlled by an STM32 microcontroller (the same one that controls the rotational stage.) The pump is connected directly to the vacuum port on the end effector through tubing. When the pump runs, it draws air out of the line and creates the pressure difference needed to hold the chip.

The pump is powered from the main +5 V rail and switched through a MOSFET. The STM32 sends a PWM signal to control the pump speed. This makes it possible to balance vacuum performance and vibration instead of running the pump at full power all the time.

To reduce vibration transfer into the robot, the pump is mounted on a dedicated isolation structure. In the current design, the pump sits in a custom mount with vibration-damping support (i.e. sorbothane pads) underneath. This helps reduce the amount of pump vibration that reaches the nanopositioner structure.

![](<../../.gitbook/assets/unknown (72).png>)

The heating plate and vacuum mount are connected using thin tubing to keep the vacuum path compact and lightweight. In this build, a 2 mm OD, 1 mm ID silicone rubber tube was used. Because the vacuum connector needs a very thin tip that is difficult to produce reliably with 3D printing, the tip was made by cutting a section from a plastic pipette and gluing it onto the printed connector base. A similar approach was used on the pump side: a pipette tip was trimmed to the needed size and attached to create a simple, lightweight hose connection.

![](<../../.gitbook/assets/unknown (73).png>)

The vacuum pump is controlled by a simple [firmware](https://github.com/tianer2820/2DStackingBot-NanoPositioner/tree/main/rotation-stage-controller) state machine with three modes: OFF, PULLDOWN, and HOLD. When vacuum is first requested, the controller enters PULLDOWN and drives the pump at 100% PWM duty cycle for 800 ms to establish suction quickly. It then switches to HOLD, where the pump runs at 90% duty cycle (or 80% duty cycle with the smaller 030 pump)  to maintain vacuum while reducing vibration, noise, and heat. If vacuum is no longer needed, the controller returns to OFF and disables the pump. This approach gives fast initial hold-down while keeping the system quieter and more stable during alignment and stamping.

![](<../../.gitbook/assets/unknown (74).png>)

The vacuum system was considered under both internal and external load cases. Internal loads include forces from platform rotation, nanopositioner motion during alignment, and possible stamp peel-off during pickup. External loading is mainly bench disturbance, such as accidental contact or vibration transmitted through the lab setup. Among these cases, bench knock is the most severe and sets the required vacuum holding force. Stamp peel-off may also be important, but it depends strongly on process conditions such as temperature, contact time, and retraction speed, so it still needs further validation.

A simple slip-threshold test was used to measure vacuum holding force. In this test, a 1 cm × 1 cm bare silicon chip was attached to the vacuum platform and pulled using a wire with incrementally added weights. Two orientations were tested. In the vertical setup, the chip was pulled directly away from the platform to measure peel-off force. In the horizontal setup, the chip was loaded tangentially so the measured threshold also depended on friction between the chip and the contact surface.&#x20;

![](<../../.gitbook/assets/unknown (75).png>)

Holding force increased with PWM duty cycle, as expected. At the 90% hold setting, the platform provided 19.7 mN horizontal holding force and 45.3 mN vertical holding force. At 100% duty cycle, these increased to 58.2 mN and 110.9 mN, respectively. The ratio between horizontal and vertical force gives an effective friction coefficient of about 0.53, which is reasonable for dry silicon contact. Using the measured vertical force and vacuum port area, the effective pressure differential at 100% duty cycle was about 24.5 kPa, lower than the pump’s rated value because of leakage in the real vacuum path. Even at the 90% hold setting, the measured holding force remained well above the bench-knock requirement, giving about a 9× safety margin, so the vacuum system meets the holding-force specification.

![](<../../.gitbook/assets/unknown (76).png>)

A smaller [030 pump](https://www.amazon.com/StiNGZjdM-WPS12-5-Diaphragm-Self-Priming-Suction/dp/B0DMFJ33JQ?th=1) was also tested as an alternative to the original 370 pump in the Nanopositioner V4 vacuum platform. The main motivation was to reduce size, noise, and overall vibration while still keeping enough suction for chip handling. Based on its lower pressure rating, the 030 pump is expected to provide lower holding force than the 370 pump, roughly on the order of two-thirds under similar conditions, but initial testing suggests it still remains within the range needed for current operation. So far, it looks like a promising lighter and quieter option, although peel-off performance still needs to be verified experimentally. Because there is still some uncertainty around the force required during stamp peel-off, it was not recommended for now, and further evaluation was deferred until peel-off requirements are better understood.



The current isolation mount uses a simple 3D printed island-on-pad structure. The pump and its small printed island together place only a light load on the support, so a soft [30 duro Sorbothane pad](https://www.amazon.com/Isolate-Sorbothane-Vibration-Isolation-Circular/dp/B005H1485K) was chosen to provide meaningful damping under compression. A larger disc pad was then cut down into smaller pieces so the effective pad area better matched the combined load of the roughly 60 g pump plus the island, instead of leaving the material severely underloaded. In the final layout, the island rests on Sorbothane pads above a rigid base, while L-shaped corner posts constrain the island position without normally touching it, so the pads carry the load and the posts only act as guides. An earlier concept used spring support, but that approach was dropped for two reasons: it was difficult to find springs soft enough for such a small load, and the spring-suspended mount was too sensitive to external disturbances such as bench contact or general lab vibration.

![](<../../.gitbook/assets/unknown (77).png>)



A simple laser reflection test was used to compare vibration transmitted from the pump at different operating points and mounting conditions. A small mirror was attached to the pump body, and a laser was reflected from the mirror onto a whiteboard 6.0 m away. Pump vibration caused the reflected spot to move by a distance dx, giving a sensitive visual measure of angular motion. The test was used to compare the isolation mount against a rigid mount at both 90% and 100% PWM duty cycle. At 90% duty cycle, no visible spot motion was observed for either case. At 100%, the isolation mount reduced the measured spot motion from \~2 mm to \~0 mm, showing that the mount lowers vibration transmission to a sub-micron level after scaling back the optical lever.

![](<../../.gitbook/assets/unknown (78).png>)

Future work will focus on stamp peel-off testing. In particular, more extensive stamping experiments are needed to determine whether the viscoelastic adhesion of the heated stamp adds a significant peel-off force requirement during pickup and release. If the current vacuum margin turns out to be insufficient under these conditions, there are two straightforward fallback options. The first is to stay with the 370 pump and raise the PWM duty cycle during critical phases to maximize holding force when needed. The second is to add a sealing ring or gasket at the vacuum interface to reduce leakage and improve the effective pressure differential, which is expected to increase holding force by 50%.

<br>
