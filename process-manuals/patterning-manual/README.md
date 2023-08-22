# Patterning Manual

| Patterning Manual |
| ----------------- |

Parameters\



1. HMDS Prebake Temperature
2. HMDS Prebake Time
3. HMDS Amount (Drops)
4. HMDS Spin Speed
5. HMDS Spin Time
6. HMDS Bake Temperature
7. HMDS Bake Time
8. Resist Amount
9. Resist Spin Speed
10. Resist Spin Time
11. Resist Bake Temperature
12. Resist Bake Time
13. Exposure Pattern
14. Exposure Source
15. Exposure Time
16. Exposure Dose
17. Developer Type
18. Developer Time
19. Developer Temperature\


\


![](https://lh6.googleusercontent.com/DepkhvSUzCDeyU\_a0egOWeGpcdrrztHBxgIZeENh5sU6voH4ozvRGiTDb5UImGJPz03\_xUMAsx-ZperZ\_6mPW3ZEX9NjODHHIeaLigTkDRkdpPAStGClewdI\_L5F\_xsDzeyROslLjKiXvwaTxeXgRQ0)

&#x20;  Substrate (varies)     Spin Coat![](https://lh3.googleusercontent.com/fVBs20cVgU51okQiSb0UXTraDnBpOqSPsuOtmAVHurukdNtNSDLSZSEIRNrXXx1iy\_PT0X22BVYNX2hN247JvBZ9rLJSn8xC-5X-33E2xabiTqBUnexg-w4j2K5mJsJHPAAkQsikit2IFtbE-OjlDFY)

\


![](https://lh3.googleusercontent.com/47dDWQ1z6xBtKTrF-hMjReifa7ZgT5GhnTstfFTeyg01AUnlxKTc0vdu323FuJNsnQu5SRUJYyITLwutEk1qkVBzvkmTfn-L8P8i762wupDAyt3w7xfyt04luRyIkrpkL\_Ed9b5atQAWep0pMushe64)

\


Expose Develop

![](https://lh5.googleusercontent.com/jFWgvfuvgMXopu3uWUsfHAT330iL-StVB1mmBmmA0zvtatYaRHARCf4XGf9IqAaKJ8qm2SULmIpW9N4WxPjZn9ZEuMNbHyzCKpwQanjYeqDUzspRALHZjyWe20gGtL-3HIrS8u-5I6wq8Td7ekM4\_RU)  ![](https://lh6.googleusercontent.com/Ui53PDFHKm9Oji6Wvf5w7AJXymV8ssERq3wZ9rsX50UYup86Xzuk4yEtP6AgKrMT\_0XcC2rTt1OR6izGoWJUsxjpPukyWc1C71vbecWyTTRkqkHFzWIZr7VlPBRq0gGWQUX1--T4z0iXGKPp3rwEHik)

\


&#x20; &#x20;

## Purpose

Patterning is the core of any micro/nanofabrication process, as it is used to mask etch and deposit steps. First we spin coat photoresist to deposit a thin layer. Then we use our maskless lithography stepper to expose our pattern in the resist with light. Finally we wash away the exposed region with developer. This leaves behind a resist pattern that is resistant to many types of acid and plasma etches. It can also be hard baked and used as a dielectric, or metal can be deposited on top of it for a lift off process. The procedure described here uses a positive resist, AZ-P4210, but negative resists also exist where unexposed areas become soluble.

\


See the appendix for useful resources about spin coating, our resist, and developer.

\


## Tools

1. [Spin Coater](https://docs.google.com/document/d/16tg5COz3QADQcWTJfgbuTBRsJrYIF2IFitKL2VLnr3I/edit?usp=sharing)
2. [Hot Plate](https://docs.google.com/document/d/14IZRb\_CLO6zwDDNvO9dSkzYD5jisfbr-6na2exCk-T0/edit?usp=sharing)
3. Flashlight Jig or Maskless Lithography Stepper

## Materials

1. [Hexamethyldisilazane (HMDS) adhesion promoter](https://docs.google.com/document/d/1Wtk8l1dXzwlhdUSQaCBSIJ00-sB0tanP0AOklIOY0Ik/edit?usp=sharing)
2. AZ-4210 positive photoresist ([specsheet](https://www.microchemicals.com/micro/tds\_az\_p4000\_series.pdf))
3. AZ-400K Developer
4. Acetone
5. Isopropanol
6. Deionized water
7. Evaporating dish

## Procedure

### Preparation

1. Open [this spreadsheet](https://docs.google.com/spreadsheets/d/1T9-kXXxdD9c6KZh\_iy1LGt8I8wGlmeVlIZmvBrkVQ2g/edit?usp=sharing) and record all values and results. Also record any steps that went wrong and how they went wrong.&#x20;
2. [Cleave](https://docs.google.com/document/d/1UWZ\_X2TpRqdOWOC8YGubfD7xW-dz4nRNzJk5c\_mo4w0/edit?usp=sharing) the Si wafer into a \~1 cm x 1 cm square.
3. Dust off the wafer with the nitrogen gun

\


Wafer Cleaning

1. In the fume hood, hold the wafer with tweezers over the sink.
2. Rinse the polished side of the wafer thoroughly with acetone, then isopropyl alcohol.
3.
   1. The acetone leaves a residue that must be removed by the isopropyl alcohol rinse.
4. Blow the wafer dry with the nitrogen gun.
5.
   1. Even when the wafer appears dry, there may still be moisture on the edges, so dry liberally.
6. Inspect with the naked eye and note any marks on the wafer.
7.
   1. Marks present after cleaning are likely scratches that need to be documented so we observe their effect on the process.

### Spin Coat

4. If previous steps required cleaning with solvents, pre-bake the wafer to dehydrate the surface.
5. If patterning on silicon, spin coat 1 drop of HMDS. Otherwise skip to 7.&#x20;
6.
   1. Choose Time and RPM from [patterning data sheet](https://docs.google.com/spreadsheets/d/1T9-kXXxdD9c6KZh\_iy1LGt8I8wGlmeVlIZmvBrkVQ2g/edit#gid=0)
7. Bake on the hot plate at 100°C for 30 seconds.
8. Spin coat as much photoresist as needed to mostly cover the chip, normally 2-3 drops
9.
   1. Choose Time and RPM from [patterning data sheet](https://docs.google.com/spreadsheets/d/1T9-kXXxdD9c6KZh\_iy1LGt8I8wGlmeVlIZmvBrkVQ2g/edit#gid=0)
10. Soft bake on the hot plate at 100°C for 90 seconds.

### Expose Using Maskless Photolithography Stepper![](https://lh6.googleusercontent.com/rN2HswTL3rTkrhE96V\_UChyl1EvvYTMRh7LrYaod65y1sQuYmfTMetf5ahwlpWZ2HDdwLPgl3uLJyCPmcksVdKQsGMUG2Y2gAHVWj50WWfWtaAoStkHEIWd4uk6ZnpN\_jDjurbdn9c0nmMKvXqXyB-I)![](https://lh3.googleusercontent.com/feOmT6ldGv9ecWx08YT12kbhHV3tMpaIUgp0nKF0uQ-8Ynx6bX6Y2S5aV6iXpFsGdZ8tM4IUzI5-ZVpkVoroLXqWToXUUpgVRmpTfslQ-xmbus3lloDhC40G2WK6RiVshBrp3-2vRwEaA5oyW27rVlM)

1. Turn on the projector. Plug in the HDMI cable for the projector and the USB camera cable.
2. Set up the projector as a second screen on your computer’s  display settings.
3. Put your image to be patterned in a Google Slides presentation. Example: [patterning](https://docs.google.com/presentation/d/16H1Pf2Zkq9nyL4HAj6gduJSA1r-k2tIijDcd4yQjXhY/edit#slide=id.p).&#x20;
4.
   1. Put a black screen as the last slide in your presentation. This will be the non-exposing/”off” slide.
   2. Put another black screen as the second to last slide, this time adding a dark gray plus sign or other easily focusable feature. Ensure this feature is in an area that will either get exposed or isn’t used.
5. Copy the flat field correction mask from here and paste it on top of your pattern in google slides. Select the mask and go to format options > set opacity to 50%.
6. Move the slideshow to your second (projected) desktop and press fn+f5 to present.
7. Check that the red filter is inserted and the bandpass (UV) filter is out.
8. Place the chip with soft baked photoresist on the stage.

![](https://lh6.googleusercontent.com/9uPJVGFYsM0O\_9eSTHUc5XmWndqLM7HFHuw\_IIwn\_mL4nsertKGQOKg5tSQJsOyLhXqmrktu4LiZTLpkMwXivTxCHepLq\_6gYmLWeQQknDNp\_qBLRyPEbfi6\_bTj30ni6f7QEToy6JDHYP5q4cF0FVI)

8. Open AmScope, find your chip, focus and align. The plus sign grid pattern is useful for accurate focus.
9. Switch to the black screen after your pattern in the presentation.
10. Move the Z stage by 7 ticks counter clockwise. This will switch from focusing in red to focusing in UV.
11. Alt tab and turn the exposure time to \~250ms and the gain all the way up on AmScope.
12. Use an opaque, flat object to block the light coming out of the objective while you remove the red filter and insert the UV filter.

\


![](https://lh4.googleusercontent.com/VRPyrQwK\_ADG1V1mm6Gq3nevMz1RwQthJSGqMHmDBNkvN7wKcdxvVOo7FLDYYKaxJ3y7e4pYb6rQNPHBZGWk6veKRw5Go66YUB0pdc2EbI1o3TmGdSScYsX3MeoUpHYj-lUFVIml6U2SRn-lfPZ5i5k)![](https://lh4.googleusercontent.com/VRPyrQwK\_ADG1V1mm6Gq3nevMz1RwQthJSGqMHmDBNkvN7wKcdxvVOo7FLDYYKaxJ3y7e4pYb6rQNPHBZGWk6veKRw5Go66YUB0pdc2EbI1o3TmGdSScYsX3MeoUpHYj-lUFVIml6U2SRn-lfPZ5i5k)

![](https://lh4.googleusercontent.com/VRPyrQwK\_ADG1V1mm6Gq3nevMz1RwQthJSGqMHmDBNkvN7wKcdxvVOo7FLDYYKaxJ3y7e4pYb6rQNPHBZGWk6veKRw5Go66YUB0pdc2EbI1o3TmGdSScYsX3MeoUpHYj-lUFVIml6U2SRn-lfPZ5i5k)![](https://lh4.googleusercontent.com/VRPyrQwK\_ADG1V1mm6Gq3nevMz1RwQthJSGqMHmDBNkvN7wKcdxvVOo7FLDYYKaxJ3y7e4pYb6rQNPHBZGWk6veKRw5Go66YUB0pdc2EbI1o3TmGdSScYsX3MeoUpHYj-lUFVIml6U2SRn-lfPZ5i5k)

\


13. Press the left arrow key once to switch to the focus pattern. Use the Z axis to focus. Try to do this as quickly as possible to avoid unnecessary exposure.
14. Expose your pattern for 4 seconds: press the left arrow key to switch to your pattern in the presentation. Switch back to the black screen when the timer elapses. Try to be precise.
15. Move on to your next pattern and repeat. If you’re aligning with an underlying pattern you need to switch back to red. Otherwise you can try stepping over and exposing in UV without refocusing.

### Develop

![](https://lh3.googleusercontent.com/8t0zai1N\_1MtZZVBasmZL4gZmv5d\_03e59O2BsVZ9JNt-ylC91mVcNbgqXdbFKIbLy2oZ4Kzq8kZqquSSTwBt5TntuPb6J8bEFKqD3WepFdiz0GFuKYJVpC4vSxnU4k4MLOUR2kesyK\_r4qKale1YFg)

9. Rinse the evaporating dish if needed.
10.
    1. Simply use the left-most tap on the sink in the fume hood at a low pressure to lightly wash the dish
11. Pour about 30 mL of pre-diluted 3:1 AZ-400K developer solution into the evaporating dish labeled “AZ-400L 3:1”.
12. Fill another evaporating dish halfway with DI water.
13. Start the timer at the same time as you drop the wafer into the developer, photoresist side up.

![](https://lh6.googleusercontent.com/snfdxSTrBxX73iTHVqxZWscye7x2K4JO3A5xEPVomLEZJ8wVO7zl\_dboK0qVMhZwpuzvQuc5CQDvNcf3uD8yK4AJaiViZ9e8iY-\_Sh613l7jQgcefMLX3GiK1oAcB5\_4zLKUnxxkO76eYl2g9Cl8d\_A)

13. Agitate the chip in the developer solution with quick, small circular motions. Watch [this video](https://drive.google.com/file/d/1C2APhZpUS7O2a-3hzmjMloyEuc7RCg1Z/view?usp=sharing) for proper technique.
14. 5 seconds before the end of the timer, pick up the chip and prepare to drop it into the water. The chip should hit the water exactly at 0 seconds.
15.
    1. Note that development time includes all the time that developer is touching the chip, not just during agitation
16. Dry off the chip with compressed air and/or blot it on a wipe.

### Inspect

16. Look at the chip with your bare eyes to help build an intuition for the process.
17. Put the chip under the microscope. Connect to the camera with your laptop and take pictures at 5X, 10X bright and dark field, 20X bright and dark field, and 50X.
18. Batch save then upload the folder to [Patterning Photos](https://drive.google.com/drive/folders/1-ON8-167CTyXiuhVdlI1\_WMpKkx0M0a8?usp=share\_link).
19. Paste a link to the folder in the last column of the patterning data sheet.
20. Put the chip away in a plastic box and label it with a serial number.

\
\


![](https://lh4.googleusercontent.com/9damakFFVRlaLSRXvMT-itCyaTfVh9tnMKHvQrELsXUR8L6qju3yoNbiU1jxSebu4H804kHAG\_8Nvwie5RfvVmxgSkvKQ3AT1IUs1SQEhu8LQS5UZJO\_guHfFWhb4QIfYQuGQE5yDluk3zA0wjWmcW8)

Features here are \~30 microns thick

\
![](https://lh6.googleusercontent.com/iZrUZfa513nnCB6LPkVacG9-XJnQdDhO1S513m9buJLM8qkPUhSz\_KM4lmHOuKrxI\_Vybxr1Xeg2VzrNezgZ7KgG3EBlaGa12xwTIPEw2dSgLyCZeSjGjxpEzP9YIBnWkfseiE3qCkLtqlFHez6ze5Q)

Right side: thicker lines and blurry edges. Left side: thin lines and sharp edges.

\
\
\
\
\


## Safety

1. HMDS is a toxic, volatile chemical that should only be used in the fume hood.
2. Photoresist, while not as bad as HMDS, contains some nasty solvents and should be cleaned with acetone if it gets on anything other than chips and the spin coater.
3. AZ-400K developer is a strong base containing KOH. Use the appropriate precautions for working with bases. Only agitate the developer inside the fume hood to reduce the chance of droplets.

\


***

\


## Appendix

### Additional Resources

See this webpage for in depth spin coating theory: [https://www.ossila.com/en-us/pages/spin-coating](https://www.ossila.com/en-us/pages/spin-coating)

[AZ-P4210 techsheet](https://www.microchemicals.com/micro/tds\_az\_p4000\_series.pdf)

[AZ 400K developer](https://www.microchemicals.com/micro/info\_az\_400k\_421k\_Developer.pdf)

### Alternative Exposure Technique: 365nm Flashlight

21. Put on UV protection glasses.
22. Before placing the chip under the exposure area, turn on the flashlight and adjust the position of the UV meter’s sensor head to maximize the reading.&#x20;
23.
    1. Depending on the battery level, this should be around 10 mW/cm2.
24. Turn off the flashlight, being careful not to move it out of position.
25. Place the chip on the plastic cap photoresist side up.&#x20;
26. Place the mask on the wafer. Gently press down to sandwich the two together.
27.
    1. If the ThorLabs logo is correctly oriented then the chrome is facing you. Put that side face down towards the chip.
    2. Try not to slide the mask on the wafer because you’ll damage the photoresist.
28. Place the cap with the wafer and mask on top of the UV sensor.
29. Turn on the flashlight for the desired exposure time.
30. Record the measured exposure time in the [spreadsheet](https://docs.google.com/spreadsheets/d/1T9-kXXxdD9c6KZh\_iy1LGt8I8wGlmeVlIZmvBrkVQ2g/edit?usp=sharing)
31.
    1. Does should be automatically calculated in the sheet based on exposure option used
