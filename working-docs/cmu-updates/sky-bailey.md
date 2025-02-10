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
