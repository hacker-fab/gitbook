---
layout:
  title:
    visible: true
  description:
    visible: true
  tableOfContents:
    visible: true
  outline:
    visible: true
  pagination:
    visible: false
---

# 📽 Photo-Lithography Stepper

## _This Page is Work in Progress_

* will give detailed context for all quantifiable parameters of lithography steppers
* brief overview of where improvements can be made (make a clear path to stepper V3... Vn

## Background

#### Overview

A photolithography stepper is a machine that exposes a pattern of light onto a layer of photoresist chemical on the wafer, then ‘steps’ over to the next pattern. Before each exposure, it must align with previous patterns on the wafer so that each layer of the device is in the correct position relative to the previous. The accuracy with which it can do this is called “alignment accuracy”. Alignment accuracy and optical resolution are the two most important metrics of a stepper’s performance.

There are 2 main components of our stepper: the light source and optics, and then the mechanical micropositioning stage that moves the chip itself. Alignment accuracy is a function of both the mechanical micropositioning stage and the reliability of the projector’s optomechanical components.

#### Masked vs. Maskless Lithography Systems

Commercial lithography machines use photomasks to create the image, typically made of chrome on glass. Instead, our Maskless Photolithography Stepper uses a DLP projector to create a pattern. This allows us to change patterns instantly, opening the option up for advanced techniques like tiling (making a circuit larger than one exposure field).



## Quantifiable Parameters

Optical Resolution

* info about how to verify this

Mechanical Resolution

* step size
* repeatability (specific test we conducted, "repeatability" is vague)

Cost

Footprint

Weight

Automation capabilities

* what human actions are required: manual loading/unloading, choose the pattern, align manually or automatically with software,&#x20;

