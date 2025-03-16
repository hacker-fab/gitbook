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

* Design an attachment to put magets to the bottom of the Amazon XYZ stage
* Design a vacuum chuck

### **Weekly Update #3 (2/3 - 2/9)**

#### Accomplishments

* Anirud and I procured [the Amazon XYZ stage](https://a.co/d/aHYNNB5), [Quater Research's needle and test arm](https://www.quater-research.com/all-products/20235-Needle-and-Test-Arm-p136536804), and [test arm holder (probe holder)](https://www.quater-research.com/all-products/20240-Test-Arm-Holder-p136536825). \
  ![](../../.gitbook/assets/PXL_20250210_000956698.jpg)
* I created [CAD models of the needle and test arm, and the test arm holder](https://cad.onshape.com/documents/fee12d8a7495391c1cc1a75e/w/288c070f2db1c77a6048584a/e/e1ec7cdf2dc20b8eaae96cf2?renderMode=0\&uiState=67a97e6692577636febb3fc3). I found a CAD model of [a similar XYZ stage on Misumi](https://us.misumi-ec.com/vona2/detail/221000831513/?HissuCode=LT-4047-S1), which has the same key dimensions as the one from Amazon.\
  ![](<../../.gitbook/assets/image (84) (1).png>)
* I added constraints ("mates") to the XYZ stage model to simulate the range of motion.\
  ![](<../../.gitbook/assets/image (85) (1).png>) ![](<../../.gitbook/assets/image (88).png>)

#### Roadblocks

* Camera selection

#### Plans for next week

* Create a CAD model of an attachment for the probe holder
* Design an attachment to put magets to the bottom of the Amazon XYZ stage
* Design or procure a vacuum chuck

### **Weekly Update #4 (2/10 - 2/16)**

#### Accomplishments

* I designed an attachment for the probe holder, a magnetic base for the XYZ stage, and created their CAD models.

<figure><img src="../../.gitbook/assets/image (104).png" alt="" width="563"><figcaption><p>Probe station design</p></figcaption></figure>

* I looked up and selected [a magnet](https://a.co/d/fau0k1t) and [a magnetic board](https://a.co/d/cXXv0Iq) on Amazon.
* I checked [the lab-made patterning stepper device](https://docs.hackerfab.org/home/archive/patterning-sop-stepper-v1), which our probe station would have a similar structure to. I found that this design is based on the idea that the micrometer handle of the XYZ stage is rigidly connected to the motor, without something springy such as couplers, while the motor is connected to the stage flexibly using a long, thin 3D-printed beam (the motor axis and the micrometer axis cannot be aligned perfectly, so either of them needs to be flexible). I guess, this is also because, for the patterning stepper we need to attach a motor for every X/Y/Z-axis and there is not so much space for it, so the beam needed to be thin. For the probe staion, we need automate only the Z-axis, so I think I would go with the opposite way (rigidly fix the motor to the stage, and flexibly connect the motor and the micrometer). I anticipate that this contributes to the overall stability of the positioner, because the motor would not wobble in that case (it still needs to slide in 1 DoF along with the micrometer handle).

<figure><img src="../../.gitbook/assets/PXL_20250212_190025175.jpg" alt="" width="375"><figcaption><p>Lab-made patterning stepper</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/PXL_20250212_185927252 (4).jpg" alt="" width="375"><figcaption><p>Lab-made patterning stepper</p></figcaption></figure>

* I checked [the motor](https://www.canadarobotix.com/products/2682?srsltid=AfmBOooUm0NnSnAPh-sQfM5d7ajIlJsF4AItUQzzjvZxIG14Fq03K1So) of the patterning stepper. It has 200 steps/rev resolution. If we use the same motor in the full step mode, and directly connect it to the micrometer without speed reduction, then the resolution of our device is 2.5 um. I discussed with Joel and confirmed that this is sufficient resolution for the probe station, because the pad size length and width will both be >100um.
* I discussed with Anirud and Joel whether our probe station needs proximity sensors like the patterning stepper. Because it does not need absolute positioning, we concluded that the sensors are not necessary.
* I had a discussion with Anirud and Joel about how to hold a chip on the XY stage. We are planning to use the piezo vibration sensor to detect the touch by the probe needle to the chip, for the auto Z-zero setting function. Also, the surface where a chip is put needs to be conductive for testing purposes. The problem is the piezo sensor is larger than regular chips and its face and back sides are not electrically connected. One idea is, if we use a vacuum chuck, to attach conductive tapes on the piezo sensor avoiding the vacuum suction hole so that the chip is positioned on top of the tape, and the bottom of the chip and the tape are electrically connected. Another idea is to use a double-sided conductive tape, instead of a vacuum chuck. In this case, we should fix the piezo vibration sensor using a regular tape, and attach the double-sided conductive tape on top of the regular tape, so the sensor will not be damaged when we replace the double-sided tape.

<figure><img src="../../.gitbook/assets/000.png" alt="" width="375"><figcaption><p>Sketch for the chip holding idea (vacuum chuck)</p></figcaption></figure>

<figure><img src="../../.gitbook/assets/001.png" alt="" width="375"><figcaption><p>Sketch for the chip holding idea (double-sided tape)</p></figcaption></figure>

* By checking the patterning stepper, I realized the vacuum chuck can be 3D printed. It doesn't have to be a machined aluminum part.
* I had a discussion with Anirud and Joel about the camera. A cheap USB microscope like [this](https://amscope.com/products/utp200x003mp) seems sufficient.

#### Roadblocks

* How to hold a chip on the XY stage (details above)

#### Plan

* 3D print the attachment for the probe holder and assemble
* 3D print the magnetic base for the XYZ stage and assemble
* Procure magnets
* Design a vacuum chuck / test double-sided conductive tape for holding a chip on the XY stage

### **Weekly Update #5 (2/17 - 2/23)**

#### Accomplishments

<figure><img src="../../.gitbook/assets/update-wk5.jpg" alt=""><figcaption></figcaption></figure>

* 3D printed the attachment for the probe holder and assembled\
  ![](../../.gitbook/assets/PXL_20250224_190441020.jpg) ![](../../.gitbook/assets/PXL_20250224_190603633.jpg)
  * It looks fine. No problem with assembly. We need to check if the tip of the probe needle moves correctly using a microscope (one of the probes of the probe station we currently use doesn't look moving orthogonally when we rotate the handles for X and Y axis, which makes manipulation difficult and annoying. We need to check if the one I just assembled does not move like that).
* 3D printed the magnetic base for the XYZ stage, procured magnets and assembled\
  ![](../../.gitbook/assets/PXL_20250224_190543702.jpg) ![](../../.gitbook/assets/PXL_20250224_190553222.jpg)
  * It looks fine. No problem with assembly. We need to check if the magnets are too weak or too strong on the magnetic board like [this](https://www.amazon.com/dp/B007UHG7KI).
  * I used [this magnet](https://a.co/d/aqNHS0h).
  * The base felt a bit too close to the micrometer handle and it was a little hard to rotate. I will probably modify the design.\
    ![](../../.gitbook/assets/update-wk5_stage-positioner.jpg)
  * (forgot to take a photo of the 3d printed part and the assembled device. I'll add it on Monday)
* Designed the chip fixture (vacuum chuck)
  * I designed the chip fixture. While I temporarily prepared a hole for a vacuum chuck, we are now leaning towards using double-sided conductive tape for chip holding instead. This is because we need to put conductive tapes on the piezo vibration sensor anyway to test the bottom of the chip, and we want to avoid a situation where the sensor is also sensitive to the vibration caused by the pump for the vacuum chuck, macaking it difficult to isolate the vibrations when the probe needle touches the chip surface. Also since double-sided tape is easier to test with than a vacuum chuck, we will start with double-sided tape.\
    ![](<../../.gitbook/assets/image (127) (1).png>)
* Ordered [double-sided conductive tape](https://discord.com/channels/1143959339179200562/1329845066033922069/1342269476732665999) and [camera (USB microscope)](https://amscope.com/collections/digital-microscopes-hand-held-microscope/products/utp200x003mp).
* Tested the piezo vibration sensor for multiple touches by probe needles
  * I had a concern on whether the sensor works well with a touch by a needle when another needle is already touching (there are four probe positioners). I conducted [a rough test](https://drive.google.com/file/d/1WGoAcgL6_hh3nQNotX5qRmlBqKc43kJo/view?usp=sharing). It seems working fine, but we need to test in an actual setting.
* Considered the motor attachment design for the auto Z-zeroing function.\
  ![](<../../.gitbook/assets/image (128) (1).png>)
* Modified [the project proposal](https://docs.google.com/document/d/1mPezRVWu7PNa3ggTOlxjDEdb9D6B84CEXgIU-5ACNHs/edit?usp=sharing) in accordance with the fixed schedule.
* Created [the 1st checkpoint slides](https://docs.google.com/presentation/d/1tlnXbdm_S4oZerqLOZx2ODcKvoIJ7EftKB4GgxjC8XI/edit?usp=sharing).
  * Feedback from the 1st checkpoint presentation:
    * Is the focusing distance of the USB microscope sufficient to allow it to be positioned above the probe needles while still maintaining focus?\
      -> The webpage says "the digital microscope can work from varying distances," sounding it would be fine (I can't find detailed information).
    * Does the pump for the vacuum chuck affect the piezo vibration sensor?\
      -> We should try the double-sided conductive tape first.
    * If the chip is tilted, the probe needle might accidentaly contact it while moving in the X or Y axis. How can we prevent this?\
      -> We should probably implement a function to sound a buzzer in such cases.
    * We should probably test the piezo vibration sensor on the off-the-shelf probe station we currently use to check if it works well.

#### Roadblocks

* None in particular

#### Plan

* After we procure the USB microscope, check if we need to design additional parts (since it originally comes with a stand, I don't expect anything else will be needed).\

* Select and order a magnetic board for the base of the probe station, like [this](https://www.amazon.com/dp/B007UHG7KI).
* Order [the measurement device](https://digilent.com/shop/analog-discovery-3/).
* Modify the design of the magnetic base for the positioners.
* Prepare 2 sets of the probe positioners and and 1 stage positioner (chip fixture) and test with the measurement device / a micrometer.

### **Weekly Update #6 (2/24 - 3/2)**

#### Accomplishments

* I modified the design of the magnetic base to make it easier to rotate the micrometer handle.\
  ![](<../../.gitbook/assets/image (141) (1).png>) \
  previous design\
  ![](<../../.gitbook/assets/image (143).png>)\
  new design
* I modified the design of the stage positioner to fit the vacuum pump tube (we are not sure yet whether to go with the vacuum chuck or the double-sided tape for chip holding, but adding the extrusion does not hurt anything).\
  ![](<../../.gitbook/assets/image (144).png>) \
  previous design\
  ![](<../../.gitbook/assets/image (145).png>)\
  new design
* I printed parts for one probe positioner and one stage positioner. Since I have already assembled one probe positioner, we can test a chip after assembling them.\
  ![](../../.gitbook/assets/PXL_20250303_024427149.jpg)
* I tested the procured USB microscope.
  * ![](<../../.gitbook/assets/スクリーンショット 2025-03-02 午後3.59.57.png>)\
    The display is colored red even when hue is set 0, and a little dim even when the light is on. I'll try to figure out how to fix them next week.
  * &#x20;![](../../.gitbook/assets/PXL_20250302_204114132.jpg)\
    I found the microsope stand to be a little cheaply made. Although it seems okay for testing, it tilts and wobbles, which might affect measurement. We need to design a fixture to hold the microscope ourselves in that case.
* I selected [a magnetic board](https://a.co/d/1YdDGTl) by checking the size of the USB microscope and positioners.\
  ![](../../.gitbook/assets/PXL_20250302_210708702.jpg)

#### Roadblocks

* None in particular

#### Plan

* Fix the hue and brightness issue on the USB microscope.
* Test how stably the probe needles move in X and Y- axis using the USB microscope.
* Assemble 1 probe positioner and 1 stage positioner.
* Measure an actual chip, the one we made in the resistor lab session, using the measurement device or a multimeter to check if our probe station works as well as the one we currently use (compare measured values between them).
* Test the piezo vibration sensor for the auto Z zeroing function. Manually rotate the Z-axis micrometer handle and check if it can detect the touch.
* Consider attaching a rotational stage to the stage positioner (I discussed with Icey and Joel that it could be more convenient to enable the stage positioner rotate).

### **Weekly Update #7 (3/10 - 3/16)**

#### Accomplishments

* I fixed the hue and brightnesss issue on the USB microscope. I downloaded and installed [the software](https://amscope.com/pages/software-downloads) (AmScopeAmLite for Mac, Microsope model #: UTP200X003MP) again then that just fixed the issue. The problem is that the magnification, 10X (and up to 200X digital zoom), is not sufficient for our chip (one pad: 181.48 μm \* 76.25 μm). Additionally, the LED lights reflect straight, which worsened the visibility of the pads. We should prepare a much better microsope.\
  ![](<../../.gitbook/assets/スクリーンショット 2025-03-14 午後7.44.15.png>) ![](<../../.gitbook/assets/スクリーンショット 2025-03-11 午後8.35.37.png>)\
  \
  ![](<../../.gitbook/assets/image (159).png>)\
  (^ This picture was taken using the better microsope in our lab.)
* I chatted with Sky about the microscope and he told me that the lab already has a spare C-mount camera (AmScope MU1603) and several lenses.\
  ![](../../.gitbook/assets/PXL_20250315_010057109.jpg)\
  I also found a lens and a camera(?) connected to it from previous semesters in the probe station box.\
  ![](../../.gitbook/assets/PXL_20250315_011359637.jpg) ![](<../../.gitbook/assets/PXL_20250315_011412336 (2).jpg>)\
  I will look into them up to prepare for a better microscope setup.
* I checked the stability of the X- and Y-axes movement of the stage (using the 10X USB camera for now). It looks working well. The X- and Y- axes look diagonal to each other.\
  [video](https://photos.app.goo.gl/BHYFQcSj3QxZCXi79)
* I assembled one probe positioner. The new design of the magnetic base, notched around the micrometer handle which was discussed in the prevous update, made it easier to manipulate the handle. The magnetic force felt just right, although it is much weaker compared to the one for the current probe station. I think this one is better since it makes it easier to move the positioners while still preventing them from moving too easily (Opinions from others should also be considered).\
  As for the stage positioner (chip positioner), which I originally planned to finish assembling this week, I found that we needed to order one more XYZ stage for it. Since we are discussing adding the rotational axis to the stage positioner as discribed in the previous weekly update, I'll order [the XYZR stage](https://a.co/d/4oJKznA) and modify the entire design. This week I assembled other part of the stage positioner for testing\
  ![](../../.gitbook/assets/PXL_20250314_235707990.jpg)\
  I tested a chip without XY stage for the stage positioner this week.
* I measured the actual chip we made in the resistor lab session using the 10X USB microscope and a multimeter. There seems no problem with probe positioners. The thing is that the chip was not stable and shaky. When the probe needle touches the chip surface while the other probe needle is already in contact, it seems that the second touch tilts the chip, causing the first needle to lose contact. I was using a multimeter to measure the resistance, and it showed a resistance very breifly and went overload. The shown values seem fine.\
  [video](https://photos.app.goo.gl/wNMgwTrKKmYp2jdN9)\
  Shown values: 100.7 ohms, 96.5 ohms, 107.3 ohms, 183.5 ohms, 132.3 ohms\
  Actual values (measured with the current probe station): 149 ohms\
  \
  Possible causes for the unstability are\
  1\. the surface of the 3D printed chip stage is not flat enough,\
  2\. the chip is not flat enough, and/or\
  3\. the entire testing setup is too unstable (the O-ring box was not stable at all).\
  I will order the XYZR stage anyway. I'll test with it and see whether it can imrove the stability. I'll also look into the current probe station and check how it allows chips to be placed stably.
* I tested the piezo vibration sensor on the chip stage part. It is working fine.\
  [video](https://photos.app.goo.gl/xVAVTerKq3uzjD4U9)
* I tested a vacuum pump with the chip stage. It's working well. This might improve the stability discussed above. I will test the resistance measurement using it next week.\
  ![](../../.gitbook/assets/PXL_20250314_224058600.jpg)\
  But with the piezo vibration sensor, the chip was unstable and shaking.\
  [video](https://photos.app.goo.gl/eD4Hwfh7nqAuAfRj7)\
  This must be because of the dents around the hole and maybe also because of the original flatness of the sensor. It would be difficult not to have the dent when drilling, we need to come up with some design to avoid this issue, such as attahcing some parts on the sensor, and placing the chip on these parts. We need to check if the sensor still works well in this setup. We are now prioritizing finishing the probe station without the auto Z-axis zerong function, so I'll give this issue a lower priority (but also I started thinking that it is really helpful to have the sensor with a buzzer or something even if we can't finish the auto Z function this semester).\
  ![](../../.gitbook/assets/PXL_20250314_230410427.jpg) ![](../../.gitbook/assets/PXL_20250314_230359830.MP.jpg)
* I found [a nice AmScope manual](https://mmrc.caltech.edu/Microscope_Camera_AmScope/Software/AmScopeSetup_v3/AmScope_enhelp.pdf) (haven't read through everything).

#### Roadblocks

* [The double-sided conductive tape](https://www.amazon.com/dp/B097JQQ7SC) we ordered 3 weeks ago (#205 of the [purchase tracker](https://docs.google.com/spreadsheets/d/1q8bCldE8gXcriELmI92WnKogdQQfaplEABGx0QJ8EXE/edit?usp=sharing)) has not arrived yet.

#### Plan

* Research cameras and lenses for a better microscope setup.
* Order XYZR stage and modify the stage positioner design to be attached to the R-axis stage.
* Conduct the chip measurement test using the vacuum chuck to see if it improves the chip placement stability.
* Modify the stage positioner design for chip to be placed more stably (if necessary).
* Conduct the piezo vibration sensor test using the vacuum chuck to see if the vibration from the vacuum pump affects the result.

