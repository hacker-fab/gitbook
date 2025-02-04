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
