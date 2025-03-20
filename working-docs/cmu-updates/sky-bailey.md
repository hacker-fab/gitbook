# Sky Bailey

Hey, I'm Sky! I'm going to be working on the Litho Stepper team this semester.



## Weekly Update 1

1. This week I had many discussions with Joel, Kent, and Carson about my project for this semester, and what we settled on was pretty much "build a Stepper V2.1", with the goal of reusing most of the approach and design of Stepper V2, but reducing cost and hopefully improving results. My proposal is here (with the changes we discussed in class at the top): [https://docs.google.com/document/d/1Ep3-e0HO9AmtpUUeflvEykCd4FP-uaUSemOyMItGfMc/edit?tab=t.0](https://docs.google.com/document/d/1Ep3-e0HO9AmtpUUeflvEykCd4FP-uaUSemOyMItGfMc/edit?tab=t.0)
2. The main roadblock for me is time management: I'm juggling several project courses currently so hopefully I can get into the swing of things this coming week, now that eCTF's workload is starting to even out.
3. Next week I plan to formally take the ideas discussed after presenting my proposal to the team and make a concrete task list: one of those tasks will be working with Joel to order parts, which I also plan to do this coming week.

## Weekly Update 2

1.  This week, after talking with the professors and TAs on Tuesday, I've refined my project goals significantly. I'm still going to be building "Stepper V2.1", but now with the focus on "overall improvement", specifically in regards to how the actual stepper is assembled, while keeping the overall cost around the same. My 3 core goals with this are:

    1. rigidly mount all of the components on a frame rather than have them sit on a base plate: this will improve focus performance by ensuring the focus planes are parallel and also reduce vibrations by having the components rigidly coupled
    2. mount the optics vertically: this requires the former and allows us to make use of Carson's motion stage improvements (major increase in positional accuracy)
    3. make the exact model of projector not an integral part of the design: this could allow using cheaper EVMs and potentially even consumer projectors like in Stepper V1, and more importantly gives us recourse in case the DLPDLCR471TPEVM is discontinued.

    My main actual work this week was toward this last goal, where I disassembled our DLPDLCR3310EVM in order to measure the lens mount, so it can be adapted to our optics. This projector model is end-of-life unfortunately but by making sure that it can be used in addition to the much larger DLPDLCR471TPEVM will help for my 3rd goal. My notes on the disassembly process were added to the [master doc](https://docs.google.com/document/d/1lmj-RURCDAT1qwImlVe1WH-Jx4YZXjfJlRWllqi0GPk/edit?tab=t.0) under Feb 1, and here's my notes on the actual lens mount:
2. No current roadblocks, but a looming one that might be an issue is the fact that several of the DLP EVM modules including the DLPDLCR471TPEVM that Stepper V2 requires are very low stock. Not sold out, but still concerning.
3.  I'm going to talk to Joel over the next few days about ordering parts, and then start digging into the CAD for the frame. I have a few possible paths for the design that I've been considering:

    1. Like Stepper V1, with the projector at the side and the camera on top. V1 had the issue of this cantilevering causing bad vibration, but I think this can be avoided by rigidly mounting the optics on both sides.
    2. Like Stepper V2, but rotated 90° so that the projector is on top. This avoids the cantilevering entirely but at the expense of being top-heavy. I think this one also might be better for adapting different projectors, since the projector can be supported from the lens side.

    I'm going to create an initial design using the second option, but keep the first one in mind. I'm going to initially target making the frame out of laser-cut acrylic, and if that turns out to not be rigid enough then I could try aluminum. I know that acrylic can be super rigid if done right with ribbing though, so I'm hopeful that would work.

### Weekly Update 3

1.  This week, I put the part orders for V2.1 in. Having parts on the table is a hell of a motivator for me, so I'm excited to dig in more now.\
    \
    This week I also did a bunch more research on litho and microscope optics in general. I'm still not planning to make changes to the optics setup on V2.1 initially except for the camera, but it was still good to confirm the design decisions that went into it. One notable thing that I had been curious about in the existing design was was how we were able to see our UV LEDs with our standard color camera (which should theoretically filter that out). The answer is that our 410nm LEDs are so near-UV that the camera's "UV filter" actually barely attenuates them (maybe by a couple decibels but it's still well within the blue sensitivity range).\


    I also got started on the design for my frame. I chatted with a MechE friend of mine and we decided that the single M4 screw mount that the optics assembly has is not enough to support it (surprise surprise), so currently the plan is to have 2 parallel plates of 5mm acrylic with some arrangement of tube clamps to suspend the optics assembly in between them.\
    \
    I also got started on the CAD but I didn't make much progress... (look at roadblocks lol). \
    &#x20;<img src="../../.gitbook/assets/image (83) (1).png" alt="" data-size="original">
2. Currently my big roadblock is with the CAD setup: My original plan was to use Onshape, and to just base my design off the existing Stepper V2.1 CAD. However, in the course of getting started with it, I found that the Stepper V2.1 CAD references several objects in a _private_ Onshape document, which nobody seems to know who owns. This means I can't view any details or download the part, which is a problem! The part in particular I need to get out of that is the projector, the CAD for which doesn't seem to be listed on the TI site (if it ever was) - I don't know where the previous group managed to find it, but I need it and can't access it. This also points to a bigger issue with using Onshape for this stuff: **Onshape lets you have a completely public document that contains parts that are private**! This means, even if Hackerfab starts using the new Onshape "team", any contributor to it could add parts that nobody can access, and as far as I can tell, there's no way to check easily. This is disastrous for a supposedly open project.\
   \
   This gets into something I was talking to Joel about last week: for an open project, Hackerfab as a whole has a pretty bad track record with keeping their old work available. I've noticed in several places while trying to do research: the BOM links and the CAD on [photolithography-stepper-v1.md](../../fab-toolkit/patterning/photolithography-stepper-v1.md "mention") (the BOM links to a private Google Sheet, and the CAD links to a private Github repo)\
   \
   The CAD I have done this week has all been in FreeCAD. It works pretty well - the workflow is similar to Fusion. Stability needs improvement though. I have not made all that much progress, though, so if somehow some other option sorts itself out and people think I should switch, I don't have an issue with that.
3. Next week, I'm going to continue on the CAD and figure out a solution to how to actually mount the optics on the frame.

### Weekly Update 4

1.  This week I did a lot more planning and work on the CAD for my frame design. I had a couple important realizations:

    * Most experimental optical setups make use of an optical table or breadboard... although I want to design this stepper to not use a full optical table because of price, I can still use ours for prototyping (and especially for following the design of using a 1-inch grid.
    * Experimental optical setups also tend to use thick rods to offset planes. As long as the plates they're attached to are reasonably rigid, there shouldn't be shear problems with this. I'm going to do a bit more research into how to source these.
    * ^ Those 2 things also really help make the design process easier: now, rather than some custom frame arrangement with laser cut&#x20;

    Currently the design looks like this. It's still in FreeCAD, but I think now that I'm getting a better idea of how it's going to go together I will transition over to Onshape to be able to use their much better assembly environment. Also, I'm still working on how I will hold the weight of the projector: some of it will go through the optics setups which I've figured out how to secure well, but I don't think it's a good idea to have the optics support \*all\* of the projector's weight. I believe that since I've made sure the optics are the main focus of mounting, I should be able to be a lot less precise with the projector mounting, which should allow for using different types of projectors using i.e. a sliding plate.\
    ![](<../../.gitbook/assets/image (106).png>)
2. Somehow, the Thorlabs order that I put in originally had several parts missing and some parts arrived that I didn't order... I'm not sure what happened there, but I'm going to have to wait for another order to go through to get the missing parts.
3. Plan for this week is to get ready for the progress presentation! I'm happy with my progress so far but I need to actually condense this into slides to present. After that, I'll hopefully be able to finalize my frame design and order parts for it. Hopefully later this week I'll also have some more of my previously ordered parts arrive: mainly, I want to get access to the projector so I can figure out how I'm mounting it.

### Weekly Update 5

1.  This week I didn't get much in the way of actual work done: I prepped for and gave my demo 1 presentation, but then on on Wednesday I came down with a nasty cold and have been pretty knocked out because of that- and on top of that, eCTF has super ramped up so most of my time has been consumed by that.\
    \
    However, since I've been at home, I have been doing a whole load of research. As I mentioned in [this thread](https://discord.com/channels/1143959339179200562/1342611086897057935), it turns out that TI has a small series of DLP chipsets designed for near-UV 3D printer applications which are very affordable and far simpler to do DIY than the previous DMDs we had been looking at. On top of that, I've been learning about how DLP optical setups work and I'm fairly sure we should be able to build a minimal DLP setup from scratch with only a couple of optical elements: [this presentation](https://www.ti.com/tool/download/DLP-OPTICAL-DESIGN) is an amazing resource for understanding the optics, but a lot of the issues that are avoided with additional optics do not apply to us (for example, TIR/RTIR prisms are a workaround for the fact that the projection lens would obscure the incident illumination, which doesn't apply to us since our lens is 160mm away!) All in all, I'm pretty sure this is the entire optical setup for a DIY system: the only elements are the homogenizer, beamsplitter, and objective. Note that the 24° illumination angle assumes our DMD has a tilt of 12° - some of them go up to 17° which make the setup even easier.

    <figure><img src="../../.gitbook/assets/image (129).png" alt=""><figcaption></figcaption></figure>

    In the channel I did also mentioned that the most difficult-to-obtain component of this setup seems to be the DMD socket... I did manage to track down an obscure listing for some online so I ordered a few for myself so that they could probably arrive by whenever I actually start working on this new setup (whenever that may be)
2. Current roadblock is that I'm still sick and have been since Wednesday, so I generally less able to do work, especially anything on-campus. As I also mentioned, eCTF is very high workload currently so that might cause some trouble as well.
3. My hope is that my cold clears up by Tuesday so I can get to putting together the parts that have arrived (I think Joel said the LED boards and associated parts have arrived so I'd like to get that stuff done). The eCTF code freeze is tomorrow (Monday) and we're submitting our design on Wednesday so my time will most likely still be pretty consumed by that. However, I do still plan to get the CAD updated this week like I mentioned previously. As interested as I am in the new optics setup I have described, I definitely should focus on my existing project first.

### Weekly Update 6

1. This week I made a little bit of progress on Stepper 2.1, but not a whole lot because eCTF is still super high workload. I haven't ported the CAD over to Onshape yet, and I'm still missing several of the Thorlabs parts I need in order to finish the optics side of, but all the parts should be here by the time I get back from break. I did, however, begin setting up and testing the projector devkit for that.\
   I also helped Shayaan and Anirud with some debugging, and we were able to get the Alicat flow meter communicating over RS232 for ALD.\
   I also talked some more with John/Coin at UoU about the custom projector PCB plan, and he managed to talk to the connector manufacturer and get a small engineering sample that he'll send us a few connectors from - this is great news because it means I can actually target the DLP301s chipset for the projector PCB, which we were previously limited from because of the lack of availability of the connectors.
2. Current blockers is still just waiting for the Thorlabs parts, and the fact that eCTF is still very high workload...
3. I'm on break now, but I do plan on porting the CAD for my stepper 2.1 frame over to Onshape and doing some more research on the custom projector plan. When I get back from break the remaining Stepper 2.1 parts should be here, so I can actually put that thing together and hopefully have it all ready for the expo/conference thing that Joel and Kent mentioned.

### Weekly Update 7

1.  Finally done with my dry spell of progress! The rods for my frame arrived over break so I was able to put together a first version of the frame, and my god it is far more rigid than I had even anticipated. This thing is not going _anywhere_! If you try to shake it, the whole table shakes before you get any movement relative to the table. The is fantastic - it should reduce the vibration .

    Also note that this first version is laser-cut acrylic for prototyping - it might be rigid enough as-is but I'm not ruling out the possibility of switching to an aluminum plate.

    <figure><img src="../../.gitbook/assets/image (1).png" alt="" width="375"><figcaption></figcaption></figure>

    I'm still waiting on the final optics parts to arrive from Thorlabs (Joel said my previous attempt to get these never actually got ordered, but it's actually going through now....) but in the meantime I have assembled the parts I've received thus far to form the 3 branches of the optics setup:

    <figure><img src="../../.gitbook/assets/image (1) (5).png" alt="" width="375"><figcaption><p>Objective side</p></figcaption></figure>

    <div data-full-width="false"><figure><img src="../../.gitbook/assets/image (2).png" alt="" width="375"><figcaption><p>Camera side</p></figcaption></figure></div>

    <figure><img src="../../.gitbook/assets/image (3).png" alt="" width="375"><figcaption><p>Projector side</p></figcaption></figure>

    I also started on the projector modifications. One thing I always found odd about our previous steppers was that they kept the cases on the projectors after modifications despite the fact that they make mounting the projectors a massive pain. For Stepper V2.1, I removed the case from the projector to reveal 3 fantastic standoffs to mount to, which should allow me to fulfill my goal of rigidly mounting the projector: I'll just have another laser cut plate (less likely to need to be aluminum than the main plate) that these standoffs bolt to, which then sits on top of the main plate.

    <figure><img src="../../.gitbook/assets/image (4).png" alt="" width="375"><figcaption></figcaption></figure>

    Aside from working on the new stepper, I worked with Carson on getting the new Basler camera set up with the stepper software (it took like 10 minutes and it was working flawlessly) - it's been (hopefully temporarily) yoinked to be be part of the existing Stepper V2 due to overall just being _nicer_.
2. Still waiting on the Thorlabs parts.... other than that, no blockers.
3. Next week hopefully this last Thorlabs order should come in, and that'll let me finally assemble the whole optics setup! The only remaining design task is the projector mounting (I think it'll just be a vertical plate that notches into the main plate at a certain position) and the only remaining fabrication tasks are the same mounting and also the optics adapter plate (along with the 3d printed parts for the stage, but that's easy). All the rest is just assembly! I could see the whole thing being ready by next update, but no guarantee on that of course.
