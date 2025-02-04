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
