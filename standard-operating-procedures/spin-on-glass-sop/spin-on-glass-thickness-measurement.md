---
description: >-
  *This only works with SoG on pure silicon and NOT polysilicon. Should work for
  both 700B/P5O4
---

# Spin on Glass Thickness Measurement

## **Purpose**&#x20;

The main purpose of this SOP is to describe a method that we can use to approximate the thickness of SoG. This is especially important in certain plasma etching processes, where removal of SiO2 is needed.

## **Tools**

* Spectrometer&#x20;
* Spectrogryph opened on computer connected to microscope view&#x20;
* [Calibration Graphs ](https://drive.google.com/file/d/1EVPOQWZP0WPVBpyYRbd6CC1ia3PgCf_a/view?usp=drive_link)(should end with .sgd, can only be opened in the Spectrogryph app)

Picture of Spectrometer Below:

![](https://lh7-us.googleusercontent.com/7bcU6rB13ou9UuXw4FxjdohlptQSUMc-eADOKFQQzt-MnrEwEuQYSnDOf59s_5rOqaT1XkPBtdrnHd9jzOsYxgGl6xxv9u-mtESnz48JDAmwy7Gr4T8FCbsDKeAKWyf3zK8IFGqrSYDTDgOVo8glr5E)

## **Materials**

* Silicon Chip with 700B/P5O4 SOG

## Steps&#x20;

## _**Setting up the software + obtaining spectrometer data**_

First, ensure that the spectrometer is connected to the computer.&#x20;

In addition, place SoG on silicon chip sample on the slide under the microscope.

1. Open Spectrogryph software on Computer&#x20;
2. Under Plot/Views, select “New Acquisition View”

![](https://lh7-us.googleusercontent.com/Q1K-3rK-Cbsco5YoB25xzqmXCCBboX7julnvLNz9Zb5s9-Za5v1EX7vpo0Z69P_fPwkwJ7QJotMhO6M0NT3Ea9ungN0zC-F1rOseMXZihRN3Nq1Mzsf4zPQjwGB8q5oKTUrEZNPsz_SIA4ejBjpKdhw)

After which, you should see something that looks like:

<figure><img src="https://lh7-us.googleusercontent.com/Z1dcEcov4nO-lv97aMwgIJnqIu014R0_j25biGVffsip0zr7hJqezHzn-lEhLJN7ifu_gwBmifqb24z505Ni65qk-864IjMdRWwG08oZ9dcDsfhp-31Yqg1uJApU51rGP_FjuSMEA7BKtsapR-Hf5hw" alt=""><figcaption><p>New Acquistion View</p></figcaption></figure>

3. In the upper left corner, select “Device Type” and select ASEQ. Then press connect.
4. Change exposure to 5000 ms (or more, if you want less noisy data)
5. Select single shot or continuous&#x20;
   1. Use Single Shot if you want to get one graph that is taken after 5 seconds of exposure
   2. Use Continuous if you want a graph that is constantly being recorded (hence changing)
6. Pressing “Acquire” would start the readings. Before pressing “Acquire”, ensure that the probe is connected to the microscope (will need to press the probe against the microscope to get good readings, as shown in picture below).

![](https://lh7-us.googleusercontent.com/GFY844auZeIk4UacQkH6urxxxpKzHpuHir5hlGTDf33AS48nEWXRhmuHSZsJvaJ1W4zT6JuhLURx6OXhuwZ_LAfl6KsJFE22kW0M9Xz02qsCuizYxXt20deOhAmNeFqVusQ2Y-k0HhyIRmkjbkK-qW0)

\
7\. Once a graph of Count against Wavelength is obtained,  we need to normalise the counts. This is done by clicking on "Process" and "Normalise (Peak)".

<figure><img src="../../.gitbook/assets/Screenshot 2024-04-29 at 11.46.50 AM.png" alt=""><figcaption></figcaption></figure>

8. Once normalized, we can now save this spectral plot in file (save it in the .sgd format, so that you can re-open it in spectrogryph later)&#x20;

\
&#xNAN;_**Determining Thickness of SoG**_

9. Create another New Acquisition View
10. Drag the [Calibration graphs file](https://drive.google.com/file/d/1EVPOQWZP0WPVBpyYRbd6CC1ia3PgCf_a/view) (should end with .sgd) into the New Acquisition View

You should see this:

<figure><img src="https://lh7-us.googleusercontent.com/55aNtqipf_dEpOzcunyTHmucByhvR3z_qe_p20nr3zwWB8LDl5fD0EubS2UFPfkgpgG4JBf9Rqpyvmve6oMpqp-bMo8udapjtdDHQ08YdXKG4vBIjdY395uiYB6KwLuuXZjazdIK4U0noKZhJYPlEXk" alt=""><figcaption><p>Calibration Graphs</p></figcaption></figure>

The color of the graphs correspond to the actual observed colors of the glass. This can serve as a good benchmark as to what the thickness of your glass might be.

As seen, the SoG with the lowest thickness (190 nm) had the maximum peak at a wavelength of \~590nm. As the glass thickness increases from 190 nm to 255 nm, the wavelength at maximum peak increased accordingly. Following that, from 255 nm to 276 nm, it can be seen that a second peak is starting to form (at a wavelength of around 480 nm). Finally, from 276 nm to 314 nm, the peak at 590 nm disappears, and now the peak at 480 nm becomes more distinct.&#x20;

11. Lastly, drag the .sgd file that you previously saved in Step 7 into the plot above.
12. Determine which shape your graph most closely resembles to determine SoG thickness.

**Also note that the color of your glass is a pretty good indicator of what thickness it will be.** So for instance, if your chip looks pink, just by looking at the calibration graphs, we can determine that thickness is around 270 nm.



## Useful Links

* Spectrogryph Manual Website: [https://www.effemm2.de/spectragryph/about\_help\_manual.html](https://www.effemm2.de/spectragryph/about_help_manual.html)
*

\


## &#x20;         

\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\
\




\
















