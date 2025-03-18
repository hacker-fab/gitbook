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

### Week 5

This week we got good detection performance using a deep learning model.

I presented my initial work on Tuesday. I described how we could get decent results — much better than previous results — with the new work I had done. But we still had problems with false positives and in other cases, like when alignment markers were darker. As a result, I suggested that we try to use a more modern approach, i.e. training a DL model.

I trained a model and it seems to work great so far. Here's what I did:

I first used Roboflow to label the data that I had collected.

<figure><img src="../../.gitbook/assets/Screen Shot 2025-02-23 at 10.20.12 PM.png" alt=""><figcaption><p>labeling data in Roboflow</p></figcaption></figure>

Roboflow has a good free tier, which is why I chose it, but there are other options for data labeling as well.

I then augmented our dataset using standard image augmentation techniques, i.e. varying brightness and adding noise, to create a larger dataset that we could use for training.

Then I finetuned a 2.6M parameter YOLOv11 model on the dataset. This is a powerful and fast object detector that I expected to perform well in our setting. In particular, this is the smallest pretrained YOLOv11 release.

Below are some performance metrics. The most relevant is mAP. We see that the model is almost always correct after training for 100 epochs, which took less than 5 minutes on GPU.

<figure><img src="../../.gitbook/assets/Screen Shot 2025-02-23 at 10.25.46 PM.png" alt=""><figcaption><p>performance results</p></figcaption></figure>

The next image shows results on a batch from the train set. We always get the markers when they are in frame. In particular, it doesn't matter if the markers are bright, dark, straight, or slightly misshaped. The model has learned a representation that lets it generalize to the different looking alignment markers. In particular (I also noted this in my presentation), with this approach we have a much easier process to improve our performance, which is just: if we're doing poorly on some samples, add them to the train set. This removes the need to pattern match to specifics, which can vary and be hard to pattern match to.

<figure><img src="../../.gitbook/assets/Screen Shot 2025-02-23 at 10.27.20 PM.png" alt=""><figcaption><p>train set predictions</p></figcaption></figure>

The below image shows predictions on some validation images. Note that we have high confidence and no false positives, as in the train set images. The model does fail to detect the marker in the bottom left corner of the bottom image, which I suspect is due to the marker being out of focus. The solution here, if this we expect input like this, is to add more such images to the training set.

<figure><img src="../../.gitbook/assets/Screen Shot 2025-02-23 at 10.30.37 PM.png" alt=""><figcaption><p>validation predictions</p></figcaption></figure>

After training the model, I started writing code that shows the predicted markers in real-time in the GUI. I think this is a good first sanity check before we start aligning to the predictions. I pushed code to the [rt-detect branch](https://github.com/hacker-fab/stepper/tree/rt-detect).

I also made some small PRs ([1](https://github.com/hacker-fab/stepper/pull/8), [2](https://github.com/hacker-fab/stepper/pull/9)) that I think will make working with the codebase more pleasant, now that I am beginning to work on integrating the detection into the GUI.

This coming week, I want to have the real-time detection integrated. Then, if we're seeing good results, I'll be working on alignment! I think we are in a good place — we're ahead of the schedule we outlined and I am looking forward to seeing how this approach performs.



**Week 5 Feedback (Kent Wirant):**

* Amazing progress this week! It's really exciting to see how well this model is performing.&#x20;
* Integrating real-time fiducial mark detection is a great next step and follows a good pace.&#x20;
* It is okay if the out of focus example of the alignment mark isn't detected. When patterning, the image should be clear anyway, and we don't want to significantly increase the chance of false positives.
* Nice work on the PRs that improve the code quality.&#x20;
* The information you have about the model training methodology (e.g. training/validation/evaluation sets) and their respective performances (false/true positive/negative rates) would be great to include in the next demo.
* Looking forward to your next developments!

### Week 6

This week I merged and tested the PRs I mentioned earlier. I also wrote and opened a [new PR](https://github.com/hacker-fab/stepper/pull/11) that lints and formats the current GUI code. I think that this PR makes the code much easier to understand and work with. I used ruff for linting and formatting and made a few manual changes as I saw fit.

I had discussions about adapting our model to the new alignment markers — I think that we will be able to use the same object detector model, trained on both types of markers. We forwarded our recommendation of collecting \~30 samples for an initial proof of concept.

I unfortunately didn't finish implementing real-time detection, but hope to do so next week. I found (and find) it harder than I would like to make changes in the GUI code, and I hope that incorporating the style changes in the new PR will make it easier.



**Week 6 Feedback (Kent Wirant):**

* Testing the PRs was good to do (thank you for finding a couple pre-existing bugs along the way!), and linting the existing code is also good to see.
* Real-time detection in the GUI is still a good target. Let's make sure we have that implemented and evaluated for next week.
* Please keep the [GitHub Project Tracker](https://github.com/orgs/hacker-fab/projects/21) and [Stepper Development Log](https://docs.google.com/document/d/1lmj-RURCDAT1qwImlVe1WH-Jx4YZXjfJlRWllqi0GPk/edit?tab=t.0#heading=h.cbgl0vcggmd4) up to date. It is also important to push any software progress, even if unfinished, to a development branch (labeling the commit as a WIP) for these weekly updates so we can accurately gauge progress.

### Week 7

This week we:

* disabled use of the green channel during autofocus (this improves performance)
* fixed the problem of the GUI hanging when X'ing out
* got a better sense for the bazler camera settings and set certion pyplon constants in the code (i.e. exposure time and frame rate)
* linted, formatted, and improved the code

We merged all of the above.

We also completed the big tasked that we had set out to complete: getting real-time detection working in the GUI. This is implemented in the [rt-detect branch](https://github.com/hacker-fab/stepper/commits/rt-detect/).

The videos that demonstrate this are in the discord. We detect the markers using the YOLO model previously trained, and use cv2 to display the predicted bounding boxes on screen.

Now that we have the model trained and real-time detection implemented, our remaining goal is to use our predictions for alignment. In the coming weeks, I plan to get this working.

This next week, I will be traveling from Wednesday to Sunday and, as a result, don't expect to make much progress. But I will be thinking about how to best implement alignment. After I'm back, I hope to implement a working solution within two weeks, leaving us the remaining time in the semester to make small improvements and tackle other problems.

**Week 7 Feedback (Kent Wirant):**

* Good enhancements for code quality and performance
* Real time fiducial mark detection is a great milestone, and it is visibly working very well too!
* Thank you for communicating your travel plans; since we've been maintaining a good pace, it is okay if there is a little bit less progress this week. A good target could be working out a theoretical approach/procedure for translating alignment mark positions into fine-grained alignment and/or tiling within a layer. It would be good to consider how many alignment marks are visible, where the projected image will land, and a convergence procedure for motor movement. Safe travels!

