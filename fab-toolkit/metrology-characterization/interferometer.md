# Stepper V3 - WIP
The third iteration of the lithography stepper prioritizes implementing low-cost nanoscale alignment towards enabling smaller and complex devices, through the main changes:
 1. **Piezo nanopositioner** for small-scale movement
 2. **Laser interferometer** for precise displacement measurement and feedback to the nanopositioner

Additionally, the DLP projector has been replaced with the less expensive [# DLPDLCR3310EVM](https://www.ti.com/tool/DLPDLCR3310EVM) projector evaluation board which sacrifices the 4K resolution of Stepper V2's projector for 1080p. With improved alignment, the extra resolution becomes a smaller advantage as the same pattern can achieved with multiple exposures.

## Piezo nanopositioner

## Interferometer (WIP)
![](https://github.com/hacker-fab/gitbook/blob/main/fab-toolkit/metrology-characterization/interf_diagram_0.png)
Stepper V3's interferometer in the Michelson configuration relies on a 593 nm laser diode in a 5.6mm package. Due to the diode laser's short coherence length on the order of millimeters, an external cavity in the Littrow configuration is constructed to increase the coherence length to be usable on the stepper stage to at least 2cm. 
To reduce feedback to the laser and to isolate the interfering beams from the interferometer arms, the initial input to the beam splitter is passed through a linear polarizer, and are rotated at both arms (using a wave rotator as a cost effective alternative to a half-wave plate).
The mirror on one arm is attached to the stage, and the output is measured using a photodiode passed through a transimpedance amplifier so that the minuscule changes in the photodiode current can register on an Arduino Nano.
