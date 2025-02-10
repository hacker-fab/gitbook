---
description: Haewon's weekly updates for the ALD and SOG.
---

# Haewon Uhm

## Update 1&#x20;

**Accomplishments**&#x20;

* Completed the project proposal and went over it with the TAs&#x20;
* Set up the reflux apparatus in the acid fume hood (SOG)
* Decided to start with replicating the ProjectsInFlight formulation with later tests of catalysts, altering the ratios of ethanol, phosphoric acid, and boric acid (SOG)&#x20;
* Learned in greater detail the systems involved with the ALD controls (ALD)&#x20;

**Challenges**&#x20;

* Still having trouble downloading LabVIEW onto my computer
* Will probably need assistance from Viswesh&#x20;

<figure><img src="../../.gitbook/assets/Screenshot_2025-01-26_at_3.38.36_PM.png" alt="" width="371"><figcaption><p>Issue that comes up when trying to download LabVIEW multiple times. </p></figcaption></figure>

**Future Plans**&#x20;

* Solidify the plans for SOG and get more acclimated to the lab overall
* Do more research on the chemicals involved, narrowing down the many possibilities of failure (especially the boric acid)&#x20;
* Download LabVIEW and start learning how to use the system&#x20;
* Gain access to the LabVIEW for the ALD&#x20;



## Update 2 (SOG)&#x20;

**Accomplishments**

* Ordered 95% ethanol that is needed to replicate the ProjectsInFlight formula&#x20;
* To start testing, decided to use isopropyl alcohol as an ethanol replacement
* Looked into the Filmtronics ingredient list for 700B and found it possible to test ratios in the future

<img src="../../.gitbook/assets/Screenshot 2025-02-02 at 11.16.38 PM.png" alt="" data-size="original">

**Challenges**

* Realized we did not order ethanol, which is a key ingredient in the ProjectsInFlight video, so I have to wait until that comes in&#x20;
* Already resolved with Jay and Daniel&#x20;

**Future Plans**&#x20;

* Start testing the formulation of the n-doped spin-on glass using TEOS or TMOS, water, isopropyl alcohol, and phosphoric acid (ratios based on the video)&#x20;
* Might not work due to the less polar nature of IPA than ethanol and therefore not provide the emulsification that is needed for the water and TEOS/TMOS



## Update 2 (ALD)

**Accomplishments**

* Got more adapted to LabVIEW and was introduced to the ALD valve and heating element control systems on my computer
* Used a YouTube video to try and connect the MC DAQ to LabVIEW directly

**Challenges**

* Couldn't directly download the LabVIEW file from the GitHub due to the different version that is available for Mac versus Windows&#x20;
* Resolved with Viswesh&#x20;

**Future Plans**&#x20;

* Continue to try and connect the MCC DAQ to LabVIEW&#x20;
* If that does not work, make Python code that will alternatively do the job

## Update 3 (SOG)

**Accomplishments**

* Tested the ProjectsInFlight recipe with the exclusion of ethanol in place of IPA.
* Procedure can be found under 2/5/25 in the following doc: [https://docs.google.com/document/d/1Zv89gYlrvVO8jFVvS3HTmG\_rJBMBwB7pDHd5lRpelhI/edit?tab=t.0](https://docs.google.com/document/d/1Zv89gYlrvVO8jFVvS3HTmG_rJBMBwB7pDHd5lRpelhI/edit?tab=t.0)

<figure><img src="../../.gitbook/assets/Screenshot 2025-02-10 at 12.42.13 AM.png" alt=""><figcaption><p>Formula of the recipe tested.</p></figcaption></figure>

**Challenges**

* After the heating, there was a residue inside the flask even after thoroughly washing (assuming it is glass).&#x20;
* The solution did not evaporate into the reflux apparatus and condensate back in to the flask at all (only condensate within the flask).&#x20;
* Our dopant on a chip was visibly darker in complexion in comparison to the commercial dopant on a chip.&#x20;
* More striations were present in the DIY SOG (not as smooth and might be due to the replacment of ethanol with IPA).

<figure><img src="../../.gitbook/assets/IMG_1161.jpeg" alt="" width="188"><figcaption><p>Shows the solution only condensing within the flask. </p></figcaption></figure>

<figure><img src="../../.gitbook/assets/IMG_1164.jpeg" alt="" width="188"><figcaption><p>Shows the residue that was present after cleaning the flask.</p></figcaption></figure>

**Future Plans**

* In the video, there is somewhat direct heat contact between the flask and the hot plate without the use of a water bath, so higher contact temperature with the flask for a shorter amount of time should be tested with the same recipe from 2/5/25.&#x20;
* Research a type of silicate polymer that is compatible with the other ingredients shown below, and add that, along with reagent alcohol, to the purchase tracker.&#x20;

<figure><img src="../../.gitbook/assets/Screenshot 2025-02-10 at 1.41.39 AM.png" alt=""><figcaption><p>Ingredient list on the Filmtornics website for 700B.</p></figcaption></figure>

* Vary the amount of 85% phosphoric acid by adding and subtracting 0.25 mL from the original 0.5 mL.&#x20;

## Update 3 (ALD)&#x20;

**Accomplishments**

* Found a way to connect the MCC DAQ to LabVIEW using InstaCal and ULx through this link: [https://files.digilent.com/manuals/QS%20ULx%20for%20NI%20LabVIEW.pdf?\_gl=1\*1oftj18\*\_ga\*MTU3NzI5NjAxMy4xNzM4NTcxMDcz\*\_ga\_YFKL15TK2S\*MTczODU3MTA3Mi4xLjAuMTczODU3MTA3Mi42MC4wLjA](https://files.digilent.com/manuals/QS%20ULx%20for%20NI%20LabVIEW.pdf?_gl=1*1oftj18*_ga*MTU3NzI5NjAxMy4xNzM4NTcxMDcz*_ga_YFKL15TK2S*MTczODU3MTA3Mi4xLjAuMTczODU3MTA3Mi42MC4wLjA)
* Instead of using the MCC DAQ to control the heating elements, relay hats and thermocouple breakouts will be connected to a Raspberry Pi 4 and the heating elements.&#x20;

<figure><img src="../../.gitbook/assets/1D4C252E-FC45-4466-90AC-F9D86BB4C8EA_1_105_c.jpeg" alt="" width="188"><figcaption><p>Control system diagram.</p></figcaption></figure>

* Connected the Pi 4 and tested the thermocouple relays with the python library and code provided by the adafruit: [https://learn.adafruit.com/thermocouple/python-circuitpython](https://learn.adafruit.com/thermocouple/python-circuitpython)
* Looked over the manual for the throttle valve software: [https://www.idealvac.com/files/manuals/CommandValve\_Generation\_II\_User\_Manual.p](https://www.idealvac.com/files/manuals/CommandValve_Generation_II_User_Manual.pdf)
  * DirectVac software only runs on windows
  * Open and close fully or open incrementally by 1º&#x20;
  * Any device capable of running a USB host and can communicate serial commands can precisely operate the CommandValve

**Challenges**&#x20;

* InstaCal and ULx only run on Windows, so I could not check it myself, but also later found out that LabVIEW is not compatible with the MCC DAQ, so we needed to find a new way.&#x20;
* Decided to scratch the use of a MCC DAQ as a whole.&#x20;

**Future Plans**&#x20;

* Look into how to run both ALD valves and the PID temperature LabVIEWs simultaneously once LabVIEW is downloaded onto the mini PC&#x20;
* Find the python block on LabVIEW and see if the python script runs on LabVIEW&#x20;
* Make python code that cycles through the thermocouples and averages the temperatures outputted, sending only one averaged value to LabVIEW&#x20;
* Need to transfer the temperature readings from the Pi 4 to a mini pc that is running LabVIEW (Pi 4 is quite slow).&#x20;
* Learn more about the adafruit library and code to accomplish the main task.&#x20;
