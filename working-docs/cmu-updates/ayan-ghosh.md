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
