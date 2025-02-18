---
description: I'm Justin. I'll be working on software for the lithography stepper.
---

# Justin Wang

### Week 1

This week I wrote a proposal for how I'm going to approach litho software this semester.&#x20;

The proposal is available [here](https://app.gitbook.com/invite/QZ6cJs5t3fpGoMOKzqNM/yN2mWWMV8Xs4tyqCR5eM).

Roadblocks: none, except for the lack of experience that I have in the lab. As I get more familiar with how the software is used in practice, I'll be able to develop quicker and make more informed decisions.

Plans for the week:

* implement automated photo collection when switching to UV mode
  * this will allow us to collect data automatically, which we can use when developing our approach to automatic alignment
* refactor the computer vision code (don't run on every frame), if allows

### Week 2

This week I opened a [PR](https://github.com/hacker-fab/stepper/pull/2) for automated photo collection when switching to UV mode. I still need to test how the change looks on the GUI on the laptop in the fab; Tkinter displays differently on my Mac.

Roadblocks: was sick this week so was not very productive. I am feeling mostly better now!

Plans for the week:

* check and merge the automated photo collection PR
* refactor the CV code as described above
* experiment with cross-correlation-based detection of crosses (fiduciary markers)

### Week 3

I had my above PR reviewed and then merged it, and fixed a subsequent issue.

Now we have autocapture, along with features in the UI for configuring it.

This week I also collected some chip image data. I ran initial tests of a few approaches — edge detection, template matching, and skeleton-based shape analysis. I haven't had good results with these but I think it is worth spending more time trying to get them to work before considering other options. In particular, I just need to take the time to try different settings and hyperparameters. I pushed the code to a [dev branch](https://github.com/hacker-fab/stepper/tree/auto-align).

The roadblock has just been time, as I have been in a busy season these past weeks, which should hopefully end after this week. I will have more time after this coming week — and I will make sure we have a working solution that is in use at least by the end of the semester.

This week:

* continue to experiment with detection + get something good enough to demo

### Week 4

This week I got something good enough to demo!

Building off of the work from last week, I achieved good results with thresholding and contour-based detection. For reference, here is the output of the detection code that was previously in the stepper repository (and still there) on a sample image:

<figure><img src="../../.gitbook/assets/Screen Shot 2025-02-16 at 11.12.17 PM.png" alt=""><figcaption><p>the output of the old code — this is bad, as you can see!</p></figcaption></figure>

And here is output of the new code I wrote:

<figure><img src="../../.gitbook/assets/Screen Shot 2025-02-16 at 11.13.17 PM.png" alt=""><figcaption><p>the output of the new code!</p></figcaption></figure>

Notice that we detect all four markers in this image.

What we have now is good, but it can be improved.

In particular, we still need to handle false positives better and output less of them. We also struggle when the markers are not as bright. Here's an example of a failure case:

<figure><img src="../../.gitbook/assets/Screen Shot 2025-02-16 at 11.15.08 PM.png" alt=""><figcaption></figcaption></figure>

In this case, the markers appear darker (as can be easily seen in the thresholded image) and we miss them. We want to be more robust than this.

I am starting to think that a convolutional-based detector that we finetune might be a better approach than using traditional techniques; although I think it's worth spending a bit more time trying to get template matching to work consistently, which I will do.

We made big improvements this week but we're not there yet. I want to have reliable detection by the end of the week. I'll be experimenting more with template matching and also YOLOv11, which is a real-time object detector that performs well in a wide variety of settings.

The only roadblack has been time, but this should be mostly unblocked after Tuesday for me.



**Week 4 Feedback (Kent Wirant):**

* These are some great results! Looking forward to seeing improved accuracy over a wider range of patterns as well.
* In the future, please make sure the GitHub repository is up to date with the changes you make to the code. Also be wary of documenting your process and thinking in the Development Log in the Master Document and task status in the GitHub project tracker (finer-grained tasks make this easier).&#x20;
* For future planning, convolutional based fiducial mark detection is worth considering, but some more detail and justification as to why and how you are implementing this is necessary.
