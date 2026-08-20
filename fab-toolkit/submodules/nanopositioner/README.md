# Nanopositioner

## Introduction

Highly accurate positioning systems are integral for semiconductor manufacturing. Right now the HackerFab uses a custom version of the [Open Micro-Manipulator](https://github.com/0x23/MicroManipulatorStepper) with additional support for rotation, heating, and vacuum.

## Goals

| <h3>Feature</h3>                                                     | <h3>Objective</h3>       |
| -------------------------------------------------------------------- | ------------------------ |
| Positional Resolution                                                | <1um                     |
| Global Positional Accuracy (e.g. repeatability of 0,0 after restart) | \~5um after homing.      |
| Rotational Resolution                                                | 1/12 deg resolution      |
| Global Rotational Accuracy                                           | 1/2 deg resolution       |
| Heating Range                                                        | 50 - 200 degrees Celsius |
| Heating Accuracy                                                     | 0.5 degree Celsius       |
| Vacuum Strength                                                      | 50mN of holding force    |



## CMU Progress

### 2026 - Spring

#### Goal Status

| <h3>Feature</h3>                                                     | <h3>Objective</h3>       | <h3>Status</h3>                                                                      |
| -------------------------------------------------------------------- | ------------------------ | ------------------------------------------------------------------------------------ |
| Positional Resolution                                                | <1um                     | \~1um resolution but highly affected by vibration                                    |
| Global Positional Accuracy (e.g. repeatability of 0,0 after restart) | \~5um after homing.      | Not scientifically measured.                                                         |
| Rotational Resolution                                                | 1/12 deg resolution      | <= 0.01 deg                                                                          |
| Global Rotational Accuracy                                           | 1/2 deg resolution       | Not scientifically measured.                                                         |
| Heating Range                                                        | 50 - 200 degrees Celsius | Tested up to 150 degrees. Not externally validated.                                  |
| Heating Accuracy                                                     | 0.5 degree Celsius       | 0.5 degree accuracy up to 150 degrees (higher not tested). Not externally validated. |
| Vacuum Strength                                                      | 50mN of holding force    | 58nM of holding force                                                                |

#### Summary

During Spring of 2026 the CMU nanopositioner team was able to produce a working integrated system that contained all general features including 3 DOF movement, rotation, heating, and vacuum. However, there are still 3 main issues with the current implementation:

1. Vibration resilience
2. Packaging and Setup
3. Firmware reliability



#### Vibration Resilience

<figure><img src="../../../.gitbook/assets/Video Project 1.gif" alt=""><figcaption></figcaption></figure>

Due to the nature of moving at sub-micron levels the micro-manipulator is extremely sensitive to vibrations. The above gif was taken at a 10x object lens where each line is \~2um wide. As you can see the movement is significantly larger than the goal of 100nm movement accuracy.

We have many theories about what could be causing it but have not done enough scientifically rigorous testing. We were able to greatly improve the vibrations with tennis balls but it was not enough.

To analyze the vibrations and we used an opencv flow detector; however, we are limited by the fps of the recording camera.

#### Packaging And Setup

<figure><img src="../../../.gitbook/assets/image (470).png" alt="" width="375"><figcaption></figcaption></figure>

The current micro manipulator took over a month to be built and is very susceptible to things getting unplugged/twisted/broken/etc. The system should be more robust to handling and easier to put together

#### Firmware Reliability

Right now there are various firmware reliability issues which could be improved. They do not stop the device from functioning but make it harder to use and less reliable. So far we have found the following issues:

* Axis "freezing". Sometimes one of the axes will stop responding to commands
* Bad nano-positioner homing. Sometimes after homing a axis it will not respond to commands
  * This might be related to the above "freezing" issue
* &#x20;Improper rotation homing. Sometimes if the rotation stage is really out of alignment it will fail homing
  * This should be resolved but still to be fully tested

