---
description: Katie's weekly updates (Sputtering Process Project)
---

# Katie Eisenman

### <mark style="color:purple;">Update 3 - 2/9/2025</mark>

Accomplishments

This week, I:

* Did AFM training with Melinda (see pictures of notes). There are a lot of different settings we'll have to mess with in order to get good images, but I am confident we will be able to do so. Andrew in MCF is also super helpful, and I'm sure he could help us in our first few sessions if necessary. I think this will be a good sanity check to the results we get from XRR.

<figure><img src="../../.gitbook/assets/image (85).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (86).png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/image (87).png" alt=""><figcaption></figcaption></figure>

* Did XRR training with Jay and Melinda (see picture of my notes). Assuming we can actually get samples next week I'd like to start running trials right away because I think this will be able to provide us with a lot of good information about thickness and potentially density.&#x20;

<figure><img src="../../.gitbook/assets/image (84).png" alt=""><figcaption></figcaption></figure>

* I also helped run several different trials of the sputtering chamber this week.&#x20;
  * On Thursday, we discussed the new chamber development and the state of the current chamber. I suggested removing the top plate because based on my understanding, we were basically creating a second sputtering chamber on top of the one we wanted. I thought this because of the common occurrence of plasma appearing between the top two plates, and wondered if this could be pulling a lot of power and preventing significant sputtering on the chip. However, removing the top plate didn't work, as can be seen in the image below, because the plasma just kind of spread out even further.&#x20;

![](https://lh7-rt.googleusercontent.com/slidesz/AGV_vUcw5Lminl1TLZfnARGUrE7ruc0DeVW76zvUoR8n0ABiXsn0g8p0h1Y5J23TiIWFdP6YHChYdViVhfvftHoQuZ0X_5JNLzh7nGFI4DZ_TJ9Wp9BidBtNbXqiLb1o5jc03t04NW2T2g=s2048?key=48v1AKkrCJcYdo0ZtWLOCu8d)

* Melinda and I spent some time on Saturday reviewing literature to find examples of other sputtering trials, which can be found here: [https://docs.google.com/spreadsheets/d/1TKB6aHW9vdk9iT3zZkKUyYFrIMQ4lUR3xLNAh300AFA/edit?gid=465241598#gid=465241598](https://docs.google.com/spreadsheets/d/1TKB6aHW9vdk9iT3zZkKUyYFrIMQ4lUR3xLNAh300AFA/edit?gid=465241598#gid=465241598). We also were brainstorming what could be wrong with the chamber, then joined Jay and observed him running another sputtering trial. He figured out that our system was missing a blocking capacitor and that was likely why we hadn't been sputtering anything!!! Because (to my understanding, I still need to read into this more, ECE stuff is hard lol) the AC current will just resolve any charge buildup between the plates that causes sputtering within a few cycles.&#x20;

#### Roadblocks

* The main roadblock was the fact that the sputtering chamber has not been able to produce a sample for us to start testing yet... But hopefully with the addition of the blocking capacitor that will change!&#x20;

#### Plans

* Purchase AFM tips after Andrew gets back to us about the best ones to buy
* After the blocking capacitor is added, make some sputtered aluminum samples!!!
* Assuming we can successfully get samples, I'd like to perform a few XRR trials and practice quantifying thickness. I also want to do some AFM.
  * Even if we can't get samples, I'd like to take some chips with either spin on glass or some kind of patterning to practice looking at under AFM and getting rid of image artifacts.
* Read more about RF sputtering and how it works so I can solidify my understanding of the system and why we need a blocking capacitor.



#### Response - Jay

* Good job completing both AFM and XRR training, good job helping with sputter chamber debugging.Comment
* As discussed in person, RF sputtering test wont be fruitful until we implement a blocking capacitor. So I would prioritize XRR practice on oxide and evaporated Al samples.Comment
* Based on: [https://www.lesker.com/newweb/ped/rateuniformity.cfm](https://www.lesker.com/newweb/ped/rateuniformity.cfm) I worry that the oxide sputter test (hoping oxide acts a blocking cap itself) may not be a good use of time, since we may have to sputter for ridiculous amounts of time to see anything). Which is also another good reason to do Reactive Al Rf sputtering instead of Al2O3 target sputtering.Comment
* DC Al sputter tests may still be interesting this week.
* Please make sure github project tracker is accurate and updated

### <mark style="color:purple;">Update 2 (02/02/2025)</mark>

**Accomplishments**

* Met with Professor Sokalski to learn more about XRR and how it works. It seems like it will be the best tool to determine sample thickness and potentially density. I took notes during the meeting that can be found here: [https://docs.google.com/document/d/11MBv83tX0nFboJv7nk2iF1xpBTiB1wlXRQb5I7Rys-I/edit?tab=t.0](https://docs.google.com/document/d/11MBv83tX0nFboJv7nk2iF1xpBTiB1wlXRQb5I7Rys-I/edit?tab=t.0)
* Ran an RF trial on the sputtering chamber with Jay, Melinda, Rahim, and Ayan. We tested several different parameter combinations, starting by changing the frequency, then altering the argon pressure and thus chamber pressure. Unfortunately, nothing was sputtered onto the slide and a piece of the system broke during our test. I recorded observations and the parameters tested, which can be found here: [https://docs.google.com/document/d/1djYb2jFaWNsHtIddbWhw9eNRoR0uh7QR40o2pBkO11E/edit?tab=t.0](https://docs.google.com/document/d/1djYb2jFaWNsHtIddbWhw9eNRoR0uh7QR40o2pBkO11E/edit?tab=t.0)
* I did the first lab! (And only dropped the chip like three (?) times)

**Roadblocks**

* The main roadblock is that so far we haven't got the chamber to sputter an observable layer. Jay, Melinda, and I are going to scour the literature to try and determine the problem (maybe DC bias on the target, maybe something else) and find a solution.

**Plans**

* Do AFM training with Melinda this Thursday (it can complement XRR so I think it's worth having the option)
* Read more literature to try and find a solution to the lack of sputtered material
* Perform more RF trials and try to get samples to use for XRR/AFM so we can start developing a protocol
* Do the next part of the lab



#### Responses - Jay

* make ssure youre updating project tracker
* Good job finalizing choice of XRR for characterization

### <mark style="color:purple;">Update 1 (01/26/2025)</mark>

#### Accomplishments

* Saw and helped operate the sputtering chamber twice
* Developed proposal with Melinda for what we are going to accomplish for the sputtering process this semester
* Worked with Jay and Melinda to make our first samples
* Requested AFM training, scheduled a meeting with Professor Sokalski to discuss XRR/XRD for thin films

#### Roadblocks

* Nothing aside from being out of town this past weekend, which just meant I didn't have time to do much work

#### Plans

* Start reading literature on how to characterize thin films with XRR, AFM, and other techniques
* Perform more sputtering trials and get better at operating the chamber independently
* Do the first lab

### <mark style="color:purple;">Update 0 (01/19/2025)</mark>

#### Accomplishments

* Read sputtering documents from last semester, read project primers
* Did the prereadings and spent time making sure I understood the fabrication processes as this is mostly new information for me
* Met with my partner Melinda for the sputter process project and helped each other understand the current state of the project and our task
* Met the rest of the sputter team and saw the sputter chamber in person to see how it works

#### Roadblocks

* Nothing major so far,  there's just a lot of new content to learn quickly but I think I have a good handle on it

#### Plans

* Review external literature to prepare for project proposal
* Meet with Melinda to discuss our plans and split up responsibilities
* Draft project proposal

