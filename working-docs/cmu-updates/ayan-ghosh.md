# Ayan Ghosh

**Update 0**



**Update 1:**

I have taken the measurements of the build plate and started CAD for the cable fixture. Unfortunately I can't figure out how to attach it here but it is waterjetted aluminum. I will in the coming week look for stock in TechSpark and fabricate it.



**Update 2:**

Not part of my core work but will be helpful in the future: I have made CAD of the chamber. I will post the drawings in the Discord, unless there's a better place to put them.&#x20;

I was planning to waterjet the fixture for the cathode cable, but I didn't see any stock of a good size in Techspark; may end up ordering them. The other part of the shielding I'm fairly certain can be done with just a bunch of teflon and more RG400 cable. (The fixture will clamp on to the cable.)

So to get started I need some thin aluminum sheets, a couple thin nuts and bolts (I can adjust the holes to match whatever's available), some more RG400 and a bunch of teflon sheets; I suspect most of these we already have at the build meeting on Monday I'll look for these. That being said, all of these are pretty basic, I even saw a significant length of RG400 for <$6 ([https://www.dxengineering.com/parts/dxe-rg400-ctl?srsltid=AfmBOoqpcVcfdrx0d7jDs5ido94fmxBubg6Uw7K3ME8gJ8qZkJ\_Yp7dr](https://www.dxengineering.com/parts/dxe-rg400-ctl?srsltid=AfmBOoqpcVcfdrx0d7jDs5ido94fmxBubg6Uw7K3ME8gJ8qZkJ_Yp7dr)) so just buying would be OK to.

Just a quick note, I've been finding it a little annoying to trawl through the documentation to find the relevant info; the documents are rather long and often I scroll so long I forget what I'm looking for. This was part of the motivation for making the CAD. (I just kept measuring stuff on the chamber.)

Goals for this week are to order the materials and waterjet, I think it'll be possible to get this shielding issue done around Saturday, but we'll see.

_Update 1 feedback:_

_Thanks for the update. For the future, it would be great if you can add some more detail in what progress you have made as well as list specific tasks you plan on working on in the next week so we can ensure we are staying on track. Please also include if you have any setbacks (or mention that there are none) in your updates._

_For any CADs or diagrams, it's fine if you just include a screenshot or link to a drive or something just so we can see what you're working on. Thanks_





**Update 3:**

In general, I'm making some pivots. We'll be making minor upgrades to the sputter chamber version 1, but the more important task is designing and building version 2.

For the minor upgrades to the V1 chamber, we're ordering some new components. This includes a new feedthrough (using a double-ended MHV connector), a new RG400 cable, and a ring of aluminum to surround the cathode (for better shielding). However, these were made less important due to some modifications made by Jay, such as adding viton spacers around the cathode, as those reduced the excess plasma formation. (We probably will still implement the upgrades this coming week.)

I am approximately \~85% on CAD for chamber version 2; I should be done by around Tuesday and will ask others on the sputtering team for feedback. This is important to hit so that we can order components for V2. I'm hoping to already start ordering some components for V2 as early as tomorrow. Besides this, the big goal for this week is to implement the V1 upgrades.

Also, please let me know if I'm doing these wrong.





**Update 4:**

So, it has been a bit difficult to find a cylinder of glass without the bases as needed for our new form factor. There's of course good old McMaster-Carr ([https://www.mcmaster.com/1176K312/](https://www.mcmaster.com/1176K312/)), but it only has diameters up to a maximum of 5 inches. There are similar things that are meant as glass vases and the like (https://www.amazon.com/WGV-Cylinder-Glassware-Container-Terrarium/dp/B07YN9CSJW/) but these seem like a bad idea for our application. There are some acrylic chambers (https://www.amazon.com/BACOENG-Chamber-Acrylic-Degassing-Silicone/dp/B0CWLDKGVS, https://www.amazon.com/Acrylic-Stabilizing-Degassing-Silicones-Cylinder/dp/B0BNJQVSCP/) that would be large.

Seemingly exactly what we're looking for can be found at https://jskindustrial.com/product/diameter-transparent-glass-cylinder-tube-high-quality-quartz-tube-orifice-type/; they go up to 400 mm diameter. Plus they're made in INDIA, which will make my grandparents happy. However, I couldn't figure out how to order from them?

I also found a company called Greatglas Pyrex Cylinders; I called them and they said they can do 300 mm, 250 mm, and some lower diameters and would cut to the length we ask for. We can place an order at greatglas@greatglas.com; on th one hand they were very helpful but on the other hand they said an estimate of like $1000 or something very big like that with a 3-4 week lead time.

Other than that, based on Professor Matt's recommendation I found some _really_ strong magnets for the magnetron, as a matter of fact we should be careful when we get them so as to not accidentally crush any fingers.

There's also some other parts that are perfect for our purposes such as the ring clamp.

However, I did see Jay made some purchases; I will have to ask for some clarification regarding these.

I am a bit worried about timeline; on the purchase tracker the V1 upgrades have been marked as purchased but not arrived. I am currently feeling a bit under the weather so if this worsens then I might not be able to get the necessary work done on time.



Here's some screenshots of the CAD; apologies it looks so terrible (you can't edit part appearance in an assembly for some reason):![](<../../.gitbook/assets/Screenshot 2025-02-17 at 12.23.08 AM.png>)

![](<../../.gitbook/assets/Screenshot 2025-02-17 at 12.15.09 AM.png>)

I will have to update this based on Jay's purchases.

p.s. I may just be blind, but I think this is the first time I'm being able to see the feedback you all left?



_Feedback:_

_Thanks for the update! I know we've made a lot of changes to our chamber subgroup's plan for the rest of the semester, so some shifts have been made to make sure we are on track to complete v2 by the end of this semester. For the updates, please do mention if you have encountered any setbacks (or mention if there are none), and include any diagrams or CAD (a screenshot is fine), even if it's incomplete/imperfect, so we can see your progress. Also, please remember to update any progress on our devlog (masterdoc) and github progress tracker!_



**Update 5**:

I've been talking to Tom and Ed regarding the machining to do. Using the manual mill is a bit difficult for two reasons: one, it is difficult to clamp our piece and two, it is quite difficult to edge find. This is due to the size and circular shape of the base plates. For this reason, I decided to instead machine it on the CNC. This helps eliminate some difficult and potentially erroneous manual work. All operations used are simple drilling operations; a picture of the CAM verification can be seen below (apologies for the low quality). Besides programming the CNC, I got some training on edgefinding for this piece; unfortunately it is a bit of a tedious process and there's no way around it. While doing this I also dial indicated the plates for a vague idea of surface roughness; it actually isn't too bad. I wasn't able to get to machining last week, but that's probably actually for the best so that we can discuss the plan of action as a group. Unfortunately I am kind of cooked tomorrow and Tuesday so just for safety I'm going to say that I'll target having machining done by Wednesday with assembly on Thursday. I also worked on designing a mechanical feedthrough similar to Jay's idea; again, see image below.

<figure><img src="../../.gitbook/assets/IMG_5788.HEIC" alt=""><figcaption></figcaption></figure>

_Feedback:_

_Thanks for the update! Now that parts have arrived, it's time to get machining. CNC is perfectly fine for machining our parts just to make our lives easier (none of this seems too difficult to do manually). This CAD looks fine, and Jay just sent the dimensions to be added ASAP. Please make sure to share the CAD if possible (onshape should have sharing options), and let us know if you need any help machining!_&#x20;





**Update 7** (I guess):

Big thing this week is that I got the top plate machined.&#x20;

<figure><img src="../../.gitbook/assets/image (165).png" alt=""><figcaption></figcaption></figure>

Of course, because nothing could be that easy, it turns out the stock provided by McMaster-Carr is a little bit thicker than ½ in, so the through holes didn't punch all the way through. To rectify this, I will put it in a manual mill and shave off a little bit of material from the bottom; it shouldn't be too bad. I have adjusted the bottom plate G-code to avoid this issue for it. Of note is that on Ed's suggestion I increased the depth of the holes in order to have more length available for threads. I have also started tapping the threads on the top plate.

I will still aim to have both plates done before class on Tuesday, but this may be a bit tricky; the TechSpark staff are rather occupied with flood-related issues as well as fixing the waterjet machine.

I plan to have all other parts machined by Friday; there isn't too much more to do.

Besides that, I did a bit of reading last week, especially on magnetron design. I found the articles which I posted on the Discord ([https://www.sciencedirect.com/science/article/pii/S0257897200009452](https://www.sciencedirect.com/science/article/pii/S0257897200009452), [https://iopscience.iop.org/article/10.7567/JJAP.53.088001/pdf](https://iopscience.iop.org/article/10.7567/JJAP.53.088001/pdf), [https://www.sciencedirect.com/science/article/pii/S0040609005013404](https://www.sciencedirect.com/science/article/pii/S0040609005013404), and [https://www.google.com/url?sa=t\&source=web\&rct=j\&opi=89978449\&url=https://pubs.aip.org/avs/jva/article-pdf/12/3/886/12059855/886\_1\_online.pdf\&ved=2ahUKEwiYgd2hr4KMAxVZEFkFHVSXLOEQFnoECBcQAQ\&usg=AOvVaw0Ny1ZoKMGYCqnpJtQ8jSWk](https://www.google.com/url?sa=t\&source=web\&rct=j\&opi=89978449\&url=https://pubs.aip.org/avs/jva/article-pdf/12/3/886/12059855/886_1_online.pdf\&ved=2ahUKEwiYgd2hr4KMAxVZEFkFHVSXLOEQFnoECBcQAQ\&usg=AOvVaw0Ny1ZoKMGYCqnpJtQ8jSWk)). I still have to digest these a little fully but they seem to have implications for magnet choice.







**Update 8**:

This week, I faced off the top baseplate (resolving the issue of the thru holes not going all the way thru),  and did the holes on the other side manually (with an asterisk regarding this). I also did the same for the bottom plate; I would have done the CNC operations for the bottom plate as well but didn't get to it due to my and Ed's commitments on Friday running longer than expected. I'll probably do this Tuesday morning.

&#x20;![](<../../.gitbook/assets/image (220).png>)![](<../../.gitbook/assets/image (221).png>)

So, I did have some issues when manually adding holes on the top plate. The 4-40 holes use a very small drill bit and I went aggresively leading to the drill bit snapping, but I did not realize this until the end due to the cutting oil. This lead to most of the holes being rather mangled. This was my oversight, my apologies. It seems Jay has rebored these slightly larger. This shouldn't be an issue going forward, but I will be vigilant just in case.

Besides machining the bottom plate, there are only a few more small things to machine. Those should be done by the end of the week. Right now, the big thing we're waiting for is the glass chamber. I think it may be a good idea to start wiring up as much as possible on, say, Friday in preparation for that to arrive; we can schedule this per other sputter team members' availability. I know Jay has ordered some equipment for polishing the parts, at the moment (if I understand correctly) we just are waiting for those to come. I may also start looking into the mechanical feedthrough and QCM this week, but most likely next week.







**Update 10**????:

OK so first of all, I can't see updates #6, #8, or #9. Please advise.

At the beginning of the week, I tapped the the bottom plate holes. When I used the M8x1.25 tap in TechSpark, the tip was hitting the bottom of the holes, so I had to ask Tom to shave some of it off. This may have tilted the tap's bite, and in conjunction with the fact that I was in rather a rush to tap these, the taps ended up being a bit crooked. Accordign to Jay it's not too bad but just for my sense of pride I may end up fixing these.

There was some mention of making a "Faraday cage" to keep in the EM radiation, but the wavelength (which is speed of light divided by frequency) for  stuff on the order of 10 MHz is in the 10s of meters.

On Saturday Jay and I assembeled the chamber.&#x20;

<figure><img src="../../.gitbook/assets/IMG_6055.HEIC" alt=""><figcaption></figcaption></figure>

We couldn't find the shaft collars so we used wing nuts to support the scaffold plates. To attach the heat sink to the top of the magnetron assembly we used conductive tape. It was pretty easy to knock the target & whatnot out of place; this at one point led to a short which required re-centering everything.

In the end, we did sputter.

![](<../../.gitbook/assets/image (225).png>)

<figure><img src="../../.gitbook/assets/image (223).png" alt=""><figcaption><p>courtesy of Jay</p></figcaption></figure>

Besides this, I've been looking at QCM & mechanical feedthrough. These should be relatively straightforward.

I might make a scaffold to hold the magnets & whatnot more precisely in place. In this coming week, I hope to get some preliminary film characterization from Melinda & Katie; this will inform if we need to work on stuff like purity (there's a few sources of potential contamination, especially Fe) or deposition profile.



**Update 9**:

_First of all, I can't see my Update 8? Is this an error? I'm pretty sure that I submitted it..._

Anyways, this week I finished the major machining of the bottom baseplate.

<figure><img src="../../.gitbook/assets/image (237).png" alt=""><figcaption></figcaption></figure>

This got done a little later than I intended because during the beginning of the week Ed was ill and throughout the entire week TechSpark and in particular the pro shop (where I've been machining the baseplates) have been oddly busy. It didn't matter too much because we're still waiting on the cylinder tho. The holes still need to be tapped; the holes for the vacuum pump are M8x1.25 which is a bit unusual but John said that TechSpark has taps for them, so I'll look again tomorrow. If not, we might have to order a tap.

Besides that, I started reading a little about QCM and have been nailing down the design of the mechanical feedthrough. I also realized that the steel ring we're using to hold the target up might influence the magnetic field; I think that broadly this shouldn't affect whether it's balanced/unbalanced it might give more sputtering off the steel ring.

Given Jay has received the polishing tools, the next step would be to polish the baseplates. This should be done by Tuesday night. After that, I'll focus on QCM.







**Update 11**:

_Hey! I don't see feedback for the last one? Nor Update 9? I can see the others tho._

I did a bunch of reading on deposition monitoring. From what I found ([https://iopscience.iop.org/article/10.1088/0034-4885/68/2/R04/meta](https://iopscience.iop.org/article/10.1088/0034-4885/68/2/R04/meta), [https://pubs.rsc.org/en/content/articlelanding/2006/jm/b506228d/unauth](https://pubs.rsc.org/en/content/articlelanding/2006/jm/b506228d/unauth)) it seems that QCM is the favored method for thin film deposition monitoring, with optical measurement also being possible. However, optical methods are best applied to thin film optical devices ([https://opg.optica.org/ao/abstract.cfm?uri=ao-14-4-962](https://opg.optica.org/ao/abstract.cfm?uri=ao-14-4-962)). Hence, I focused on reading up on QCM. It seems relatively straightforward? I just need to better understand why the cooling is necessary as that constrains things mechanically. The original paper  on QCMs ([https://pubs.acs.org/doi/abs/10.1021/ac60215a012](https://pubs.acs.org/doi/abs/10.1021/ac60215a012)) is actually from 1964!

In addition, I worked on the overheating issue. Consensus seems to be that the temperature isn't so hot the magnets will immediately demagnetize but we still should fix this. I checked with the TechSpark people and it seemed that machining copper should be doable.

![](<../../.gitbook/assets/Screenshot 2025-04-14 at 12.15.20 AM.png>)

I found some copper blocks ([https://www.mcmaster.com/8312K72-8312K12/](https://www.mcmaster.com/8312K72-8312K12/), [https://www.mcmaster.com/2554T521/](https://www.mcmaster.com/2554T521/)) that we can machine holes for the magnets into. These are OFHC, hence they are rather pricey. I would recommend the sheet for cost-effectiveness and ease of fixturing for machining. I also did some back-of-the-napkin math and it seems like this should be able to fix the issue.

This week I will work on nailing down the overheating issue. I will check my assumptions and do a more proper analysis on Monday and if that's all good I hope to order stuff and get it machined by the end of the week.
