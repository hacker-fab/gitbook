# Semiconductor Parameter Analyzer

* high level: we can relate all the process parameters to electrical characteristics
* all the tests we can do
  * what they tell us, how many probes needed, etc.
  * example pictures, resulting curves
* lots of great diagrams from Anirud, Icey, Ahmet, Joel working docs we can update with



***



Semiconductor Parameter Analyzer

Not all transistors are created equal. There is an immense amount of information within the electrical characteristics of the device that helps with optimizing the manufacturing process (Read Peter Van Zant Chapter 14). Below is an example of an ideal IV curve from a textbook, and the first IV curves taken in the Hacker Fab. While our curves aren’t perfect, they do exhibit transistor-like-characteristics 🙂.

![](https://lh4.googleusercontent.com/TO-BNkJJrjvdKB81Rwn1\_xciK493V9YEacXnu233gGPBRo0boN5hlCqTW3QrC1b4sVYBqAI5k\_g-tpAhlbb94SStjW1EKimAC7r7o6CADYy-jtLWYjK\_INqA4Q9U8nau4uFKk6CgbtdA1XFBl2wU9co)![](https://lh5.googleusercontent.com/hfNnyOIjDT\_qX2SRvKOAAlnj2z13ZJuWdWe\_hWqJ1k8NLQdQcfC1KZ9a1LXTfdH-ZqTiP04G-bXyLuzI3xtXitrboDJHBnfZrNlwrl\_k2BLZM9k-5Qvfd3Bi\_sA7nQretKOu7pVyvPZIW6S02gK367c)

IV curves are not the only tests that can be done with a parameter analyzer. With enough data, trends in these different curves can be directly associated with process parameters.



Probe stations are traditionally heavy desktop machines that hold probe manipulators. The purpose of the probe station itself is to precisely move the tungsten probe in order to make contact with the contacts of the device. This typically means moving 3 individual probes to the gate, source, and drain contacts, and another to contact bulk.&#x20;

![](https://lh6.googleusercontent.com/tKsmi9ZKnm3XqztAIWaqwQDPJ0OAE6pehZmr2hGwpXW62-tJdnIz1cleXGTlhbo-0ayx7cWypwUhZEvsNfrvYyfqE9272x3VC9\_7D127NvE8KMA9XyJTSEffFAmgxy82zWvElDWdr2mTCrenl-dicmo)

Probe Station + simple diagram of contact locations

These probes are attached to the back of the Semiconductor Parameter Analyzer - precision instruments consisting of multiple SMUs (Source Measure Units) and a built-in computer to control them and store readings. Source Measure Units are glorified power supplies with built-in voltmeters and ammeters - they are very precise instruments that are able to supply voltage or current through the probes, and simultaneously read voltage or current.&#x20;

![](https://lh4.googleusercontent.com/Zbhzx4-IdzGv0wSauBI8PMjhUACRciYpn-VanipWloQzlokGKkhdOkRRD75bOI72J\_EXdUPT14ZOUjQOfdi4ErdwxH9S4HbTOisT\_I\_g0CViWonTXsRMoy2\_PjxniZFhZWhaKA5-JJmiXJKVygpak6M)
