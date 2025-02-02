---
description: My name is Yuichi and I will be working on the probe station this semester
---

# Yuichi Hirose

### **Weekly Update #0&1 (1/13 - 1/26)**

#### Accomplishments

* I was first assigned to the wire bonder development. I joined the wire bonder tutorial with Joe and Joel to get to know how to use it. I had a discussion with Icey, James, Joe, and Joel, and we decided to prioritize the probe station development and the other parts of IC packaging except DIYing a wire bonder for this semester. I was assigned to the development of a probe station.
* I had a discussion with Anirud and Joel to understand the current situation of the probe station (what have been finished, what not, and what I am supposed to do this semester). Anirud showed me the current prototype from last semester, which helped my understanding.
* I looked through [the documents and CAD from the last semester](https://drive.google.com/drive/folders/1IgyzVxSDXMU6CBSJqW16NdSuTSvhQFkJ) to understand the situation more.
* I created [a project proposal](https://docs.google.com/document/d/1_nHKy9RG0kd6QQrEui08GBJlWizaZtv6Z8CEiLkyzpo/edit?usp=sharing).
* I had a discussion with Anirud, Joe, and Joel again to review my project proposal.
  * We decided to use off-the-shelf XYZ positioners and work on a DIY XYZ positioner develepment only if time allows.
  * Because we are going to use off-the-shelf XYZ positioners, we can also use off-the-shelf probes. We don't have to design and DIY them.
  * The camera can be replaced with a USB camera. Another team is also procuring one, so it might be good to obtain the same one for us. C-mount cameras might be benefitial for easy design and assembly.
  * Vacuum chuck is necessary. Lab already has a vacuum pump. We need to obtain a chuck (the one procured last semester is too large).
  * We would like to automate the Z-axis positioning. We need to attach a motor to the Z-axis of the off-the-shelf positioner.
  * Priority: finishing a working DIY probe station > auto-Z function.

#### Roadblocks

* These tasks might already be underway by someone, but I'll write down for record
  * XYZ positioner procurement
  * Probe procurement
  * USB camera procurement
  * Vacuum chuck procurement
* How to implement auto-Z? (Force sensor? High-res encoder?)

#### Plans for next week

* Design of a metallic base which XYZ positioners can be attached with magnet.



### **Weekly Update #2 (1/27 - 2/2)**

#### Accomplishments

* I made drawings for the designs of the base.\
  ![](../../.gitbook/assets/probe-station-base.jpg)
* I looked up metalic boards which might work as the base. If they work, we don't have to make something like the ones above.\
  [https://a.co/d/2TJwnC9](https://a.co/d/2TJwnC9)\
  [https://a.co/d/78COEFO](https://a.co/d/78COEFO)
*   In order to set the state where the positioners are placed higher than the chip (the probes usually go downward from the positioners), we should either

    1. elevate some parts of the stage for the positioners like this:\
       ![](../../.gitbook/assets/silicon-testing-rf-probe-station.webp)\
       [https://www.ossila.com/pages/what-is-a-probe-station](https://www.ossila.com/pages/what-is-a-probe-station)
    2. or elevate the positioners themselves like this:\
       ![](../../.gitbook/assets/F9uVQ18XcAAf_Wd.jpeg)\
       [https://x.com/BreakingTaps/status/1719132030972182728](https://x.com/BreakingTaps/status/1719132030972182728)

    I assume the design 2 will cost less and will be much easier to make. I can't find any downsides of this design. So we decided to go with the design 2.
* Anirud and I decided to procure and try [the Amazon $125 XYZ stage](https://a.co/d/9o7FYxc) instead of [the $700 positioner](https://www.quater-research.com/all-products/XYZ-300-TEST-Micro-Positioners-p132789603) first, refering to [this design](https://x.com/BreakingTaps/status/1719132030972182728).
* I made drawings for the designs of the attachement to connect the Amazon XYZ stage with the [probe holder](https://www.quater-research.com/all-products/20249-Test-Arm-Holder-p136536837).\
  ![](../../.gitbook/assets/probe-station-xyz-positioner-probe-holder-connector.jpg)
* I discussed with Anirud about his idea on the auto-Z implementation using a piezo vibration sensor like [this](https://a.co/d/aGbvlkL). He drilled a hole in the center of the sensor, which is for the vacuum chuck, and it sill worked. He told me that the burrs around the hole can be a problem. I think putting a backup board (sacrificial board) under it when drilling might reduce the burrs. Or we can put a conductive spacer, with a larger hole avoiding the burrs, between the sensor and the chuck.

#### Roadblocks

* Camera selection

#### Plans for next week

* Design of an attachment to put magets to the bottom og the Amazon XYZ stage
* Design of the vacuum chuck
