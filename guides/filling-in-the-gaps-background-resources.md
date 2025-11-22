---
description: >-
  Semiconductor research has been around for decades, which means there are many
  people who can explain concepts better than we can. This is a collection of
  our favorite resources we've found.
---

# Filling in the Gaps - Background Resources

### Links and Videos

[Simple MOSFET intro video](https://www.youtube.com/watch?v=o3M2sOCGCKs\&list=PLfYdTiQCV_p7sDswtLZKK43BWOd2mTmHC\&index=19) (5 min)



[Sam’s Youtube video overview](https://www.youtube.com/watch?v=IS5ycm7VfXg\&t=177s) (5 min)

* Nearly identical to what we do
* What our work was based on



[Device Physics Overview](https://www.youtube.com/watch?v=-lHXZk5M6cI) (30 min)

* Electrons, bandgap, etc.



[Before we had transistors, we had lightbulbs](https://www.youtube.com/watch?v=FU_YFpfDqqA) (18 min)

* Then we moved to silicon
* This stuff is regularly communicated as complex [magic](https://www.youtube.com/watch?v=d9SWNLZvA8g), and requires the permission of [billionaires](https://www.technologyreview.com/2021/10/27/1037118/moores-law-computer-chips/) to work on it. We are starting from 1960’s level complexity and working our way up to modern complexity.&#x20;



[The creation of the blue LED ](https://www.youtube.com/watch?v=AF8d72mA41M\&t=610s)(30 min)

* Extremely well told story of the man who figured out how to manufacture blue LEDs
* We are not the first people to claim that innovation in the semiconductor industry requires intimate knowledge of the fabrication tools



[Fabublox](https://www.fabublox.com/) (∞)

* A fantastic tool being developed by friends at MIT. Overview of many processes, with each being a linear recipe
* Make an account, and go to “fabubase” in menu
* Check out our Hacker fab process, as well as others
* Go through and try to recreate our process from scratch without cheating. See how far you get, and write down things that don’t make sense (1 hour)



How do these things even make computers?

* [How we turn sand to intelligence](https://www.youtube.com/watch?v=m6pJNW_jpw0)
* [Making logic gates from transistors](https://www.youtube.com/watch?v=sTu3LwpF6XI) (13 min)



Transistor → [logic gates](http://hyperphysics.phy-astr.gsu.edu/hbase/Electronic/gate.html#c1) → basic logic circuitry (timers, counters, latches, shift registers, etc.) → [architecture abstractions that people made up over decades](https://www.researchgate.net/figure/Abstraction-layers-in-computing_fig1_27301366) → CPU



[TinyTapeout Video Example: Making ASIC](https://www.youtube.com/watch?v=DdF_nzMW_i8)&#x20;

* Application Specific Integrated Circuits

&#x20;

### Not all transistors are created equal&#x20;

Below: ideal transistor IV curve vs. our first curves.

<img src="https://lh7-us.googleusercontent.com/wFSbJyQXwtfcfYSyIkehjAiHllRqs8Rsp8PXw096SOrkVUPecLBEpp9YgzlObx45w3lzm0MVcWHWMfjBHWSFXk2tRUZvmIps7oTsInFhy9og7HN-LFcOz6HdrDfq9T_oY5vahCcHsJ5zeies2pka6Xg" alt="" data-size="original"><img src="https://lh7-us.googleusercontent.com/dQlviBnoo0HLcHTkxjPgtiFtE1tMML7RdFhXG9-NmxkeAaUvFXs0PZ1UBGs6CqjVEeD7nasGJ6Jmxh68uGLgGBkQzUkDnoYqGxqph5vU-FM6qfJ2dH0hO6pZ72gZdRzv3NntY2ShfQlm2MPrFeAcFn4" alt="" data-size="original">

These both exhibit transistor-like characteristics. Looking back at the Veritasium video about how the first computers were made with lightbulbs - a transistor really boils down to a repeatable switching action. When we look at our curve on the right, we see multiple issues:

* The curves don’t go through the origin, they start with a voltage offset
  * This means that when we apply a voltage to the gate (open the valve to allow current through), current doesn’t run through the drain to the source until we apply \~3V to the drain/source connection.
* The lines are all squiggly?

So we try to debug this by finding literature that debugged something similar, or often we simply design and run more experiments. Skim through pages 172-176 (bottom corner number, not pdf page number) of [this document](https://scholarworks.rit.edu/cgi/viewcontent.cgi?article=7498\&context=theses). Their transistors have very similar issues to ours. When you read this document, the answers are behind a huge layer of jargon and acronyms that make the barrier to entry for understanding extremely high.&#x20;

In reality here is what it is saying:

* Our source-drain is dominated by an aluminum metal-to-silicon [Schottky junction](https://www.electronics-tutorials.ws/diode/schottky-diode.html) instead of doping

Put simply, we just directly connected an electrical characteristic (IV curve) to a physical process parameter. We now have an exact experiment to try over the next week:

* Less metal annealing
* More Si02 etch before metal deposition (to ensure metal contacts Si instead of SiO2)



Right now it takes about 8 hours of work + waiting overnight to turn a blank wafer into one with NMOS transistors on it. Then we go to the probe station, test it, organize the data, look at the graphs, and think. That’s how long it takes to verify each new experiment. With each machine, script, or management tool we create, we push to significantly decrease this iteration cycle.&#x20;



We've only made NMOS devices so far, but there are [so](https://www.google.com/search?q=every+type+of+transistor\&rlz=1C1ONGR_enUS970US970\&oq=every+type+of+transistor\&gs_lcrp=EgZjaHJvbWUyBggAEEUYOTIICAEQABgWGB4yCAgCEAAYFhgeMggIAxAAGBYYHjIICAQQABgWGB4yCggFEAAYhgMYigUyCggGEAAYhgMYigUyCggHEAAYhgMYigXSAQgyNDQyajBqN6gCALACAA\&sourceid=chrome\&ie=UTF-8) [many](https://chat.openai.com/share/099cc03e-85a9-4d2f-b484-4c63acf42be2) [more](https://en.wikipedia.org/wiki/Image_sensor) [things](https://en.wikipedia.org/wiki/Moore's_law) to be made. That means our process data corresponds to NMOS only, but most process steps can be generalized to any process if documented properly.&#x20;

Each unique device can also use different materials entirely, which requires different machines.

* What metal are we depositing?
* What does the doping profile look like?
* etc.

<img src="https://lh7-us.googleusercontent.com/knJmZCIrFricqFfv40scdgntszazuSamAtSgOAnnB4X4PsxFmoV0dL6gjguZ3fsYwdQB0wRZE8hr-ZWIyUhoc7wEzOimKhfX3qBBN7wqGuJPq7dwqWlR-4AQ16WBRnM5PL0EhcqAYkBbFb9cPA6zX9w" alt="" data-size="original">

<br>
