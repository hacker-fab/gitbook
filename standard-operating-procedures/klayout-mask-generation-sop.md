# KLayout Mask Generation SOP

KLayout is an open-source layout viewer and editor that offers advanced GUI, is scriptable in Ruby or Python, and has built-in DRC support. We will discuss installation, setup, and use of DRC and macros.&#x20;



KLayout Installation\



1. Go to [this page](https://www.klayout.de/build.html) and select the correct operating system for your laptop.&#x20;
2. Follow the installation wizard’s instructions, and leave all options as default.

WARNING: If you install KLayout in an existing folder, the uninstaller will erase this folder including everything else there is! There are reports of users who by mistake installed KLayout in the root of the "C:" drive and the uninstaller tried to wipe the whole disk.



Once installed, there should be three versions of KLayout: an “editor” version, a “default” version, and a “viewer” version. The “editor” version will be used when you create your own layouts, while the “viewer” version is pulled up when opening an existing GDS file. While in the “viewer” version, edits cannot be made to the layout. \


<div data-full-width="false"><figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-21-49.png" alt="" width="364"><figcaption></figcaption></figure></div>

## Setup of PCells, Macros, and DRC

You will need the files in [this folder](https://drive.google.com/drive/folders/10fb856yHOtwSbv5RT1vRa_qLb4SQHKYT?usp=drive_link).&#x20;



1. Open the “editor” version of KLayout.
2. In the top tab, click Macros >> Macro Development.&#x20;

<figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-24-28.png" alt="" width="563"><figcaption></figcaption></figure>

3. A new Macro Development tab should appear. Select Ruby >> Local in the window on the left.&#x20;

<figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-25-28.png" alt="" width="375"><figcaption></figcaption></figure>

4. Download [pcell\_library.lym](https://drive.google.com/file/d/1JijkHoVu9quq9iSQ7Mib-bWBgk_0gCtn/view?usp=sharing) in the folder. Inside the Local folder, right click and select Import, then select pcell\_library.lym. If there is another pcell file in the folder, delete it.&#x20;
5. Press the plain green Play button on the top right bar. This will instantiate the PCell Library, and you will now be able to use PMOS, NMOS, Resistor, and Template PCells.&#x20;
6. Now, click the Local - ruby branch folder in the left window (shown in the images above).
7. Download the [parse\_exposures.rb](https://drive.google.com/file/d/1VEl_1Nggwgb_9KoNtIeGUsoajrmQhJyJ/view?usp=sharing) file in the folder. Right click inside the left window, select Import, then select parse\_exposures.rb. Now you are able to use the GDS separating macro.&#x20;
8. Select DRC >> Local in the same left window&#x20;

<figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-26-30.png" alt="" width="375"><figcaption></figcaption></figure>

9. Download [drc.lydrc](https://drive.google.com/file/d/1xfUWRz4_kFF4GF3Jgdy9Ezh_oDb34M-c/view?usp=sharing) from the folder, right click inside the left window, select Import, and import drc.lydrc. If there is another file inside the DRC tab, delete it.
10. Press the plain green Play button on the top right bar (shown in a previous image). This will allow you to use the set of DRC rules you have defined.&#x20;



## Creating A New Layout



1. To create a new layout, open the “editor” version of KLayout.
2. Click File >> New Layout.

<figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-28-18.png" alt="" width="375"><figcaption></figcaption></figure>

3. Set the layer and database unit values in the popup window.&#x20;

Layers used for the PCell library written are: via (1/0), metal (2/0), poly (3/0), contact (4/0), ndiff (5/0), pdiff (6/0), nwell (7/0), psub (8/0)

Set the database unit to 1 um.

<figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-29-08.png" alt="" width="375"><figcaption></figcaption></figure>

4. A new layout tab should be added.&#x20;

<figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-29-40.png" alt="" width="375"><figcaption></figcaption></figure>

If you want to hide a layer, double click it in the Layers tab. If you want to adjust colors of each layer, go to View >> Layer Toolbox. To create a new layer, go to Edit >> Layer >> New Layer in the top left of the tab.&#x20;

<figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-30-20.png" alt="" width="563"><figcaption></figcaption></figure>

5. To draw shapes in KLayout, use the tools in the top tab.&#x20;

<figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-31-14.png" alt="" width="563"><figcaption></figcaption></figure>

“Box” will allow you to draw a box in the selected layer. “Polygon” allows you to draw a polygon in the selected layer. “Partial” allows you to drag and drop sides of your shape to change them.&#x20;

If you have a shape selected, pressing “q” will allow you to type in shape properties.

<figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-32-07.png" alt="" width="563"><figcaption></figcaption></figure>

6. To add PCell components, click “Instance.” This will open up a tab on the right side of the window.&#x20;

If we want to select cells from the PCell Library we wrote, Click on “Library” and select “Lib - My PCell Library with Resistor.”&#x20;

If we want to select a different kind of PCell, press the magnifying glass next to “Cell” and the image to the right will pop up as a window. Select the cell you want and press “OK.”

<figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-33-13.png" alt="" width="375"><figcaption></figcaption></figure>

7. To place a PCell, click on the grid where you want it to be placed. It will appear as a white box with text inside. If you want to view the layers, go to Display >> Full Hierarchy, and it will show the layers within the PCells.&#x20;

<figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-34-11.png" alt="" width="563"><figcaption></figcaption></figure>

8. To adjust PCell parameters, go to Select, then click the PCell you want to change. Press “q”, then go to “PCell Parameters” and adjust the values as needed.&#x20;

<figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-34-46.png" alt="" width="375"><figcaption></figcaption></figure>

## Designing and Exporting Masks



1. Open a new layout with the layer setup below.

via (1/0), metal (2/0), poly (3/0), contact (4/0), ndiff (5/0), pdiff (6/0), nwell (7/0), psub (8/0)\


2. Place a “Template” PCell instance where you want . This shows the size of one exposure and places the alignment marks. If your design has multiple exposures, place one “Template” PCell per exposure, like shown. Make sure the alignment marks are properly aligned. &#x20;

<figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-35-44.png" alt="" width="563"><figcaption></figcaption></figure>

3. Place components, boxes, shapes, etc. to create the circuit/device array you want, then save the layout as a GDS file. MAKE NOTE OF WHERE THE LAYOUT IS SAVED.&#x20;
4. Click Macro >> Macro Development.&#x20;
5. Go to the Ruby tab inside the Macro Development window, then open parse\_exposures.&#x20;
6. Click the green play button with a line through it (highlighted below).&#x20;

<figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-36-29.png" alt="" width="563"><figcaption></figcaption></figure>

This will run the macro, and create separate GDS files for each exposure (“Template” instance) inside the layout. The files will be titled template\_\<NUMBER>.gds, and will be stored inside the same folder as the original layout.&#x20;



7. Open the [Python GDS to PNG conversion code](https://colab.research.google.com/drive/1UIyKbsiybj_KhvRZ3DyzNe4eWdM8dEWq?usp=sharing).&#x20;
8. Upload all the template\_\<NUMBER>.gds files.
9. Adjust the parameters in the bottom-most block of code according to your Fabublox process.&#x20;

`num_exposures = 3 # List number of exposures in layout here`

`layers_dark = ["metal", "poly"] # List layers that blocks light where the pattern is`

`layers_clear = ["n+"] # List layers that lets light through where the pattern is`\


10. Click Runtime >> Run All. The mask PNGs will be generated inside the Files tab on the left.

<figure><img src="../.gitbook/assets/Screenshot from 2025-09-09 12-38-13.png" alt="" width="375"><figcaption></figcaption></figure>

To download a mask, hover over the file, press the three dots that appear on the right, and press “Download.”&#x20;

\
