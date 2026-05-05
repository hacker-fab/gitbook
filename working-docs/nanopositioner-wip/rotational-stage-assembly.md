# Rotational Stage Assembly

### Rotational stage <a href="#docs-internal-guid-9ebdc460-7fff-b296-e05c-d2be3f2bed08" id="docs-internal-guid-9ebdc460-7fff-b296-e05c-d2be3f2bed08"></a>

The entire rotational stage is a modified version of the original end-effector part and can be a drop-in replacement.

A full CAD preview:

<figure><img src="../../.gitbook/assets/Part Studio 1(1).png" alt="" width="375"><figcaption></figcaption></figure>

#### 1. Motor & main frame

The motor and two main frame parts are screwed together using M2 screws. The magnetic encoder and optical end stop are super-glued to the frame.

![](<../../.gitbook/assets/unknown (81).png>)

Blue: motor mount\
Red: connecting two mainframe parts\
Yellow: glue on optical endstop\
Green: glue on the encoder

The motor is the shorter version of the NEMA 8 stepper, with a body length of \~28mm\
![](<../../.gitbook/assets/image (403).png>)

The finished assembly should look like this:

![](<../../.gitbook/assets/unknown (82).png>)



**Make sure you screw on the motor and frame first**, as the encoder and endstop will make screwing difficult.

#### 2. Rotation platform

Super-glue the magnets onto the platform like this.

The magnet poles should be alternating, same as what the translational stage did (they should naturally attract and form a chain)

![](<../../.gitbook/assets/unknown (84).png>)

Note: The rotation platform should be printed using dark colored filament, as the tab on the side needs to block the IR light of the optical endstop. White PLA does not always work.

If dark filament is not available, glue a small piece of Aluminum foil onto the tab (red circled). Painting with black markers does not work; they are transparent to IR light!

#### 3. Attach to the motor

Plug the platform onto the motor like this:

![](<../../.gitbook/assets/unknown (85).png>)

The magnetic encoder is very sensitive to the distance to the magnets! Bring the magnets as close to the sensor as possible, without colliding. Example:

![](<../../.gitbook/assets/image (405).png>)

#### 4. Build the heater PCB

The heat conduction and vacuum mounting are sensitive to surface flatness. First, polish the PCB with sandpaper like this:

![](<../../.gitbook/assets/unknown (1).jpeg>)

Exposing the metal plate also helps heat transfer.

The pin connection for the heater PCB:

![](<../../.gitbook/assets/unknown (86).png>)

The two pins on the side are for the heater trace, the three in the middle are for the temperature sensor.

Also, solder the temperature sensor chip (MCP9700AT or compatible ones) on the back of the PCB.

![](<../../.gitbook/assets/unknown (87).png>)

#### 5. Build the vacuum connector

The vacuum tube is thin, making the connector tip hard to print by regular FDM 3D printer. So instead printing the entire thing, print the base only and glue a tip on. The tip can be cut from a pipette:

![](<../../.gitbook/assets/unknown (88).png>)

<img src="../../.gitbook/assets/image (406).png" alt="" data-size="original">

Make sure the tip is pointing to the same direction as the heater PCB cable, so the tube and cable can be ziptied together.

The pipette we used:

![](<../../.gitbook/assets/unknown (3).jpeg>)![](<../../.gitbook/assets/unknown (4).jpeg>)

The silicon tube we used has 1mm ID x 2mm OD

#### 6. Screw on Heater PCB

Mount the PCB on the rotational platform like this, using three 15mm M2 brass hex spacers:

![](<../../.gitbook/assets/unknown (5).jpeg>)

Route the cables through the hooks:&#x20;

![](<../../.gitbook/assets/unknown (89).png>)

Red: Encoder\
Green: Optical endstop\
Blue: heating PCB & vacuum tube

Remember to leave enough hanging cable & tube so the rotational platform can rotate 360 degrees (+-180) without interference.

![](<../../.gitbook/assets/unknown (6).jpeg>)

Now the rotational stage is ready to be mounted onto the translational stage!

### BOM

TODO
