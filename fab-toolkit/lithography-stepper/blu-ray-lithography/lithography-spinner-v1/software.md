# Software

## Introduction

The SW needed for this project can be broken down into the following subsections.&#x20;



### Pattern Capture

KLayout

OpenROAD



### CAM Translator

Computer-Aided Manufacturing software translates a 3D design into G-code instructions that a CNC machine (in this case laser burner) can understand, essentially "slicing" the design into smaller, machinable steps.&#x20;

This SW takes a file with the desired mask (Pattern Capture Output) as an input and translates it into a set of machine instructions.



### Burner Firmware

This software runs on the micro-controller that drives all the HW. It is responsible for taking sensor inputs and driving all output motors and lasers. This device also has an interface which can transmit all the data to/from the user.



### Device Driver

This software is responsible for general control of the laser burner from the PC side.&#x20;



### Graphical User Interface

This SW is responsible for the user facing interface which gives the user full control of the burner.





