# Mask Generation and DRC

Our Maskless Photolithography Stepper uses a DLP projector to create a pattern.&#x20;

To accelerate the mask generation process for the needs of massive iterations in test patterns/ device dimensions for process development purposes, and achieve cross-tile alignment in the tiling technique. We explored methods, from existing EDA tools (KLayout) to developing programs using open source packages (PHIDL), to improve mask designing tools to be scalable, optimized, and automated.&#x20;

Additionally, the masks created may not create components with the expected behavior. Design Rule Checking (DRC) is a crucial step when laying out circuits, and ensures the expected behavior of circuits by checking the distance, area, length, etc. of different blocks of material in different layers. For example, having metal blocks with different potentials too close to each other can lead to large parasitics, and having n-well taps too close to each other can result in them being combined.&#x20;

<figure><img src="../../.gitbook/assets/Screenshot from 2025-09-09 13-01-19.png" alt=""><figcaption></figcaption></figure>
