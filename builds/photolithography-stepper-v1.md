# 📽 Photolithography Stepper V1

| Photolithography Stepper Build |
| ------------------------------ |

\
\


| Cost                  | $5,820.10 |
| --------------------- | --------- |
| Approximate Work Time | 5 hours   |
| Optical resolution    | \~2 µm    |
| Alignment accuracy    | 5 µm      |

\
\


<figure><img src="https://lh6.googleusercontent.com/1KIMYehNBbBQ8iq_3U8qa1g7al7p1vwc-5TvO1yMOO1bVdBxY_WEvbxH_SH45yAL9zIdaTxVQScf1mwRcRZY5z7acb74_I3l5kG7n2SBYfbVlpJ6JJiT-0ZVZCDpIDc-Sj27N4k9Q-IrxjpdS-6gjJg" alt=""><figcaption></figcaption></figure>

\
\


Useful Links:

[Patterning Manual (describes operation of stepper)](https://docs.google.com/document/d/117ejxaNEmL1WQMLLaWI0knCLCg0bC1RY5gcuUasADi8/edit?usp=share\_link)&#x20;

## Hardware Description

[A photolithography stepper is a machine that exposes a pattern of light onto a layer of photoresist chemical on the wafer, then ‘steps’ over to the next pattern. ](#user-content-fn-1)[^1]Before each exposure, it must align with previous patterns on the wafer so that each layer of the device is in the correct position relative to the previous. The accuracy with which it can do this is called “alignment accuracy”. Alignment accuracy and optical resolution are the two most important metrics of a stepper’s performance.

There are 2 main components of our stepper: the light source and optics, and then the mechanical micropositioning stage that moves the chip itself. Alignment accuracy is a function of both the mechanical micropositioning stage and the reliability of the projector’s optomechanical components.

Commercial lithography machines use photomasks to create the image, typically made of chrome on glass. Instead, our Maskless Photolithography Stepper uses a DLP projector to create a pattern. This allows us to change patterns instantly, opening the option up for advanced techniques like tiling (making a circuit larger than one exposure field).

Our design was based on [Sam Zeloof](http://sam.zeloof.xyz/maskless-photolithography/) and [Huygens Optics](https://www.youtube.com/watch?v=\_w0Z2Y5vaAQ)’ versions of this tool. Sam repurposed a vertical microscope for structure and laid out optics experimentally with a 5x reduction objective, whereas Huygens built his own horizontal structure, and used more involved optics with a 20x reduction. We took the middle road by combining a scratch built structure with ThorLabs optical and optomechanical components to ensure alignment. We use a 10x objective for demagnification. We also opted for a different mechanical XYZ stage.

Future versions of this tool will have better alignment accuracy and optical resolution, be more compact, cheaper, and capable of automatic alignment, exposure, and tiling. In the short term, we’re planning on replacing the projector with one of [TI’s DLP dev boards](https://www.ti.com/design-resources/embedded-development/dlp-chip/display-and-projection.html), which will remove the flimsy plastic projector housing and allow use of UV and red LEDs instead of the mercury lamp.

## Tools

* Water jet capable of cutting ¼” aluminum plate
* Manual milling machine and small end mill&#x20;
* Drill
* Screwdriver and metric allen key sets
* Glass scribe (tungsten carbide or diamond)
* 3+ large C clamps or similar.

\


## Bill of Materials

Stuff to buy. The BOM should include everything necessary to make the components in the next section, design files.

\


[Link to spreadsheet](https://docs.google.com/spreadsheets/d/15UpCxY\_nHekpnzOzCkFMUzXC7nv4dYn63xlU\_RhJFrs/edit#gid=0) - edit sheet then update or copy table here

\


Total Cost: $5,820.10

\


| Name                               | QTY         | Cost per unit - USD | Total cost - USD | Purchasing Link                                                                                                                                                                                                                                                                                                     |
| ---------------------------------- | ----------- | ------------------- | ---------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| ViewSonic PX-701 4k Projector      | 1           | $909.99             | $909.99          | [Amazon](https://www.amazon.com/gp/product/B08L9SM2DK/ref=ewc\_pr\_img\_1?smid=ATVPDKIKX0DER\&th=1)                                                                                                                                                                                                                 |
| Multiple Optical Components        | 1           | $3,796.97           | $3,796.97        | [ThorLabs](https://www.thorlabs.com/uploadcart/)                                                                                                                                                                                                                                                                    |
| ¼” x 12” x 12” 6061 Aluminum plate | 1           | $35.61              | $35.61           | [McMaster](https://www.mcmaster.com/8975K142-9246K13/)                                                                                                                                                                                                                                                              |
| ¼” x 6” x 18” 6061 Aluminum plate  | 1           | $40.54              | $40.54           | [McMaster](https://www.mcmaster.com/8975K437/)                                                                                                                                                                                                                                                                      |
| Amscope Camera MU2003-BI           | 1           | $841.99             | $841.99          | [AmScope](https://amscope.com/products/mu2003-bi-ck)                                                                                                                                                                                                                                                                |
| Manual XYZR Stage                  | 1           | $195.00             | $195.00          | [Amazon](https://www.amazon.com/Positioning-Bearing-Platform-Sliding-90mmx90mm/dp/B07H3L4FPG/ref=sr\_1\_10?crid=19OKCW3J2FD2Q\&keywords=xyz%2Btheta%2Bmanual%2Bprecision%2Blinear%2Bstage\&qid=1678826324\&s=industrial\&sprefix=xyz%2Btheta%2Bmanual%2Bprecision%2Blinear%2Bstag%2Cindustrial%2C84\&sr=1-10\&th=1) |
| Screws: mostly M3, M4              | <p><br></p> | $0                  | $0               | <p><br></p>                                                                                                                                                                                                                                                                                                         |

\


The complete list of ThorLabs parts is in the [second sheet](https://docs.google.com/spreadsheets/d/15UpCxY\_nHekpnzOzCkFMUzXC7nv4dYn63xlU\_RhJFrs/edit#gid=1946562564) in the Stepper BOM. To order all of these at once, download the [third sheet](https://docs.google.com/spreadsheets/d/15UpCxY\_nHekpnzOzCkFMUzXC7nv4dYn63xlU\_RhJFrs/edit#gid=2016434139) as a CSV and upload it to [ThorLabs Upload Cart](https://www.thorlabs.com/uploadcart/).

## Design File Summary

[Link to GitHub repository](https://github.com/orgs/hacker-fab/repositories)

\


| File Name w/ link                                                                                                              | Description                                                                                                                                                                                             | QTY | Tools Used             |
| ------------------------------------------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --- | ---------------------- |
| [Base.SLDPRT](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/base.SLDPRT)                                     | Water jet from ¼” x 6” x 18” aluminum plate. Serves as a flat surface on which everything is mounted.                                                                                                   | 1   | Water jet              |
| [Projector back plate.SLDPRT](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/projector%20back%20plate.SLDPRT) | Water jet from ¼” x 12” x 12” aluminum plate. Holds the projector via vertically slotted holes. Connects to the base, triangle bracket, and support arm.                                                | 1   | Water jet              |
| [Triangle bracket .SLDPRT](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/triangle%20bracket.SLDPRT)          | Water jet from ¼” x 12” x 12” aluminum plate. Adds stiffness between base and back plate.                                                                                                               | 1   | Water jet              |
| [Support arm .SLDPRT](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/support%20arm.SLDPRT)                    | Water jet from ¼” x 12” x 12” aluminum plate. Connects back plate to the optics.                                                                                                                        | 1   | Water jet              |
| [Cube adjuster .SLDPRT](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/cube%20adjuster.SLDPRT)                | Water jet from ¼” x 12” x 12” aluminum plate. Connect the support arm to the optics.                                                                                                                    | 1   | Water jet              |
| [Bracket\_60mm.SLDPRT](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/bracket\_60mm.SLDPRT)                   | Machined from 1 ¼” aluminum angle iron.                                                                                                                                                                 | 1   | Manual milling machine |
| [Bracket .SLDPRT](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/bracket.SLDPRT)                              | Machined from 1 ¼” aluminum angle iron.                                                                                                                                                                 | 2   | Manual milling machine |
| [Bracket\_adj .SLDPRT](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/bracket\_adj.SLDPRT)                    | <p>Machined from 1 ¼” aluminum angle iron.</p><p>Use an ⅛” end mill for the slot.</p>                                                                                                                   | 1   | Manual milling machine |
| [Projector coupler .SLDPRT](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/projector%20coupler.SLDPRT)        | 3D printed part for connecting the optics to the projector. Not load-bearing, mainly serves to dampen vibrations and aid alignment.                                                                     | 1   | 3D printer             |
| [Projector assembly .SLDASM](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/stepper\_assembly.SLDASM)         | Assembly containing all projector parts, obtained from [ViewSonic documentation](https://www.viewsonic.com/global/products/projectors/PX701-4K#downloads). Used for geometry of the 3D printed adapter. | 1   | <p><br></p>            |
| [\_optics\_assem .SLDASM](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/Thorlabs/\_optics\_assem.SLDASM)     | Assembly of all ThorLabs components. Original part files from [thorlabs.com](https://www.thorlabs.com/).                                                                                                | 1   | <p><br></p>            |

\


Most of the water jet components can be cut from a single 12” square aluminum plate. Water jet layout.SLDASM provides the pattern for this. The base needs a separate 18”x6” plate.

##

## Build Instructions

The following steps do not need to be completed in order, except for the last three sections (assembling the structure, stepper, and alignment).

### Fabricate the structural parts

![](https://lh6.googleusercontent.com/A0e-M6N0xIyiIb\_-N1xGd5af-Xunsm0Qhgc5uGjDB0bMLCbrtiXdOWOWGCjalShsOc5tqEMqRdgcZMlzJ5jNX-UEMQkxBIj10zzQnq8oD1NzleMnLi5uMit-QiIEJaAFZJw246X9Vwe6k\_KAoRqaOg4)![](https://lh5.googleusercontent.com/eWxdJLN4QbO3\_lc3ZZXuYlHaYEpSJenY7tztOOoUgHEgpkyeCi\_z\_uLDl7YTdWGSfm5nM71REetRFPNhnCMxIlgR6h3XKXn5MpccwAHA\_t\_hAk5Ao6i92d9eJE6f1zYF0UAKm1MO\_BGwhKJUwIr\_qH8)

\


1. Export “Water jet layout.sldasm” and “base.sldprt” to the appropriate 2D vector format for your water jet (likely .DXF).
2. Water jet these two files, following the instructions for your specific machine. A CNC router may also work.
3.
   1. Be aware that the “base” part takes up the full 6”x18” plate, so no need to cut the outside edges. You may need to adjust the kerf settings so your water jet cuts on the inside of each hole.
4. Countersink all the holes on the bottom of the base plate.
5. 3D print the [projector coupler](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/projector%20coupler.SLDPRT) with default settings.
6. Cut the angle iron into three 80 mm long pieces and one 60 mm long piece using a saw.&#x20;
7. Cut the slot in the adjustable bracket using a 4mm or slightly larger endmill (3/16” works). None of the dimensions of the slot need to be precise. The holes in all the brackets will be drilled during the assembly process.

### Assemble the optics

![](https://lh5.googleusercontent.com/eTcJvKAJ6w8EWJ0mgrlGyDV18WBSYd-0CrG\_fKVorn1XMnGDRToJN8y4ZAB51XC8KAn1fHxCAw6MOjlRCoB6E7hg1JDEIPoQx65-0bfcL2eu03MsSXfI9DCtKaWkfoZNpR8laZDqKa9Z7PsvkRA7oTY)

1. Open “[\_optics\_assem.sldasm](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/Thorlabs/\_optics\_assem.SLDASM)” for reference during assembly. The cutaway view may be helpful.
2. Unscrew the set screw on the [cage cube](https://www.thorlabs.com/newgrouppage9.cfm?objectgroup\_id=6079) to remove the filter mount. Insert the beamsplitter into the mount so that the text on the beamsplitter reads forwards when viewed from the projector.&#x20;
3. Bolt the two filter holders together using four M3x20 or similar screws and washers.

\
![](https://lh3.googleusercontent.com/e1ldpBIDme4R9EYHC0vAA\_ronNn-YaK4MpDbpO7ieCjVnkC8HOh1TwLAkbX\_sUdugXGV\_zxokoEQrIbLkjT6TbnDzF6qkJsUmgjO42sF89azf7YwBhisYL94AKDhhuwqQrPJEBUGkXl2a16yo1dh2wY)

4. Use SM1 locking rings to mount the UV bandpass and red longpass filters in the two [filter holders](https://www.thorlabs.com/newgrouppage9.cfm?objectgroup\_id=1575). Make sure the filters are inserted in the correct direction. Label the filter holders “red” and “UV”.
5. Screw together the rest of the optics, paying attention to the direction of the tube lenses.

![](https://lh3.googleusercontent.com/91WsZQpvAJ5s7HHuhTNp5QgPMpLFpdv\_Omu0tHsDGOn8OMFpoU1-fujYtEAf3vtyhVTklgtyed-oX1p3qKNsH9bAP0DmnUgKrZXf5YlatOqlpL2EXcb\_ykGWNPopeapTPDPv-tF0TKD5Jz6I4bHmjIQ)

![](https://lh5.googleusercontent.com/j8Y\_7cqve6g3n8dH--wLQ3LVpRrV-QGU3JRDPSQuVPhXVewbLs5f70\_OQDTm2n-P0TRX-A17HqG6Y5lAsI21JKk70gTwQAM6Nuow9y-2JlJy3ZEagDzOZtWYnJP\_YBtbZi2FTihxq7uO4lSP5Z\_vgL8)

6. Use calipers to adjust the length of the vertical SM2 tube so that the distance between the tube lens and the camera flange is exactly 134.3 mm. This value is calculated by subtracting the standard [C-mount flange focal distance](https://www.thorlabs.com/newgrouppage9.cfm?objectgroup\_id=14066) (17.526 mm) from the [TTL-200A](https://www.thorlabs.com/newgrouppage9.cfm?objectgroup\_id=5834) tube lens’ working distance (151.8 mm).

### Prepare the projector

7. Unscrew all available philips screws in the projector.
8. Use a small flathead screwdriver to pry open and remove the top projector housing. This takes some rough handling.
9. Remove the front foot by removing the metal pin as shown below, then unscrewing the foot out while pushing the tabs in.

![](https://lh3.googleusercontent.com/InaWms7aL5YtXen0YHY3o3QFTY0rPhaCnkICutfMBCfCOST9Vn02cGXExdfnTdF8jPyb2SobmqAtsOO9Tb\_s\_G8K8GsxoxLJmFacD1qBDd6J0zAwXSKae9MxJYsZVj9zIot3lbA\_iQmqAh4IkGOvlcE)

10. Unscrew the three screws that hold the stock lens assembly to the projector and remove the lens.

![](https://lh4.googleusercontent.com/ByIomK5K8BMv5By8UCDKmf51LJ01A9vm1CUNeOQyols8Fx7IeyIXAXTEydfpAhyh2Odv-juNfOI--ZrQtI27GKtu6YIeRLlmb16xFfq14orB6d4PXrN0FH6ndbFfSWsmyIyyqpjkUokucnlLHz5sKSc)![](https://lh3.googleusercontent.com/hT31KPcOp1b-Wq8dv7wvp-\_HDN\_HTS5p\_NYue-J5y-EPFeswDsbH0Ocpm4EXc1uideIJHEBWViBZTBlkZ9\_tGCSf5NxfIhUkkrqryq\_wKL8oZvbscqwtQ7Os4x0eQxIJqoTE9x59FHsJ-3UDDeeqVxE)

11. Remove the plastic half-lens cover and cut the top housing as shown above.

![](https://lh3.googleusercontent.com/Nj5vAVeEatOGqlqnGK-JDF5X9vv5TKtI9kibR2gK1h2SfPu79A3Zx2p07B2CvX3NMDn-ffsKxiHatvU13DY-Y6DfJ9gi2U8OeU3HVWCJlHEksT2ca2fbb5nD81ldbbzMlxOd6IPjHg4XDiCwyx4-Qcw)

12. Unscrew and detach the lamp assembly (screw circled).

\


13. Remove the metal clip and the stock hot mirror from the lamp assembly. The stock hot mirror blocks ultraviolet light, so it needs to be replaced.![](https://lh5.googleusercontent.com/k6RM27wZr1YXaI3bQXiwNZEDHPoOUaM2jngAjST2-fDFawTRKKz48wmhi\_8oabfTaOZ\_9qbILGMLwbV1JZiPV\_FE3XmIsUaQt0pRv-QMNVa7H--r-ZpgyETNmB8pgzJf3K2OIB-7Q9sIXnGGkhvRlkw)

\
\
\
\


![](https://lh4.googleusercontent.com/Qpmq12kCq4QLHbZGYyMYWPGg5X-4jf9T22pIURQxhroP5DUtk5PMx2Aflj4q3liucKEZBLNGUCLF3Gs8eQyECwxuItJat7e13O-VLzN771KKWv903OcvWIX5AcluxfPRbXZs\_pgadlUUNpK0d91KarA)![](https://lh3.googleusercontent.com/26sFAyBfKSXkVY1TE9gKQcVQbX36FjQn6WIsWAqPA9iYjQBkABmSxFZ0u8vP540IQw1ulmgI2gJy9wOyHE21BJ\_ZTxQCgjtFnmWEyn-EmM9F6iktY4jH9yOap1b6rTuRvrZ6QCjGsVbxgSZwu-7-ois)![](https://lh5.googleusercontent.com/SZfccRTwm-0IK4OvCnoUcgQF4HHahOHl-1jal-s2y6zmglqkTrUKaMUFECGB8f-AEdU\_5ot0odDtaiaL4lREvvb7egu7Tnc9fb5UHo-lQ9LtWVBXlaC-FTxvxAnruCUdLTcCxryzWcoSm4jE95EA0cI)

14. Cut the Thorlabs [UV-pass hot mirror](https://www.thorlabs.com/thorproduct.cfm?partnumber=FM01R) to the same width as the stock hot mirror.
15.
    1. Use a scribe to mark the correct width on both sides of the UV-pass hot mirror.
    2. Use a straightedge to scribe a deep groove in the hot mirror. Use a lot of force and several passes.
    3. Apply bending pressure to the hot mirror with the groove facing away from you until it breaks.
16. Put the new hot mirror in, replace the metal clip, and replace the lamp. Make sure the alignment peg at the bottom of the lamp is properly seated.

### Assemble the structure

The following steps will benefit from having two or more helpers. In the images below, the red arrows indicate applied pressure for ensuring parts are correctly mated. Green arrows indicate clamps. Yellow dots indicate tightened fasteners. For all drilling steps use the largest drill bit available that freely fits inside the holes for the brackets.

![](https://lh3.googleusercontent.com/TnG2oSE1G5d2Y\_Mfqqqf0HPCjwYrvMVbmt7ReY1qhfZtJB9vNVUCqWEyZ48QNzca7iXHvD-iA79KLKEztfn226V86iBrEJiyebv\_0NZVgjWdAOQdD6qWb529591WX6n3O5vX87H498B-3HQ5B5D9oR0)

16. Put the projector back plate and triangle bracket into their slots in the base. Apply pressure as shown so that both parts are flat against the base and in the corner of their grooves.

![](https://lh5.googleusercontent.com/nfXpk-xH3jeZ1p3ISfnlo3cN2h86E9rV4ugFi9eWIkx29Wpus-a0qUfDLFCdkKEt\_JQjuAJMlgs9J\_nxMsTRTOzq3zVU\_12TqUulI6ZXLs\_7gHCZ6rpWA-eyym8\_0mDEdf7Ss5rF1SPOCKoeyw7aVuI)

17. While maintaining pressure, place one 80mm bracket between the triangle and the back plate and clamp it to the triangle.

![](https://lh6.googleusercontent.com/\_4OuQHroTzuErHNxMu9naNB4cAjoUongj6BTMo51TdQuPMV1duo1bC0cVz4c0BzWXGxooE-7f-Ot36vZ8LnPtDtTZugROfFNXS2ED6eQs-FAapd88L3ElufWKzi8uQY6SIKu2hDcnilU9Ia1\_v3tPBA)

\


18. With the clamp still attached, drill through the bracket using the holes in the triangle for alignment. Use M5 nuts and bolts to fasten the two parts together. Put the nuts on the outside to avoid interference with the projector.

\
\
![](https://lh6.googleusercontent.com/KBWogXthpIUE\_87Zq7kR8KM6w\_2BeybI3bCf4IQFT1RBVEuhlygq3-6VmQn50nttnav\_tHWblBUxSyjn7Yri8Kt\_CmyThSYFfAEucGQesZzXG-ZBq190BIMIrCLb3oEIeemaZFSbZ0zjMrXtDtDLvkg)\


19. Return the parts to their previous position, apply pressure, and clamp the bracket to the back plate.

\
\
\
![](https://lh6.googleusercontent.com/PMIlKkBZafooMmX8LjLnuEOExsUsP6hxB9g288hcTeprWeaN5KnPfxr\_jwh7qruUGa9SxhN0UhYA9wSy3sN\_bV7QTAfri6vRJwmy07KJXj4ylHadD7H7EyXU-m4\_9IxJdnmn4zw448ia17-peld7MyU)\
\
\
\


20. With the parts still clamped, drill two holes and fasten. Depending on the size of your drill, it may be necessary to unbolt the triangle first.

\
![](https://lh3.googleusercontent.com/t26hGAFz8gq8qsQHDpk2uhwj3jH0-1cZj\_JBzs77E8VR99501dXvju8Sxt2MfOO8q2GtpmtamTZoler6SnW7B7eULlrlsLbQqIZJkAgxHS\_4\_QSC8E7W2bwF7sTMReWzFUW6a\_i4o1t4pbuff8k3Z18)\
\
\


21. Clamp the other 80 mm bracket to the back plate. Clamp the 60 mm bracket to the triangle. Ensure the brackets lay flush on the base.

\
\
![](https://lh6.googleusercontent.com/VUWHnXXtJZIy6f5NSpT9r0QIXqMGtjU3lQfSnrqg6xcJTFvNxo5CP5Sh5SUTre4V3v8dMC4hsoDlaZWZ1nrRnvwMCo1yXOnryZUp9xonEsPbAHScXa5eBfANzkhbThPrwAFp0w6-UVjHyG3tl0UaMBs)\


22. Drill into the brackets using the holes in the back plate and triangle for alignment. Fasten with any protruding screws on the outside to avoid interfering with the projector.

\


![](https://lh6.googleusercontent.com/sB6OGwOCJslG3v3L-VPI8tXgI-Vv2TCsvdmpMhz12mrf-Nfvo75TOqVPTYhVs84w6rIKmlF2LVjfPkaGByljRN9IOhfKU08eiY496axypN8O7c2N-XsHWjIrIco\_6kc3JrQkMVi4kMEyzpWuyF8-exM)

23. Place the assembly back into the grooves on the base, again pushing them into the corner. Clamp both brackets to the base.

![](https://lh4.googleusercontent.com/e\_l7BunNHukR2aUzK4KfPSSs\_wT-SeTToxojo\_5HfKlxk2-LuSjnGE1jw6BtkVdHogymT3Re7gCKDd7K2TSLZxORNcuQg2uKmiG\_RPs77cloDCcCgsQ-o9exe3oUJsu6pu24v0yOLy9ucdjYWPDhOzI)

24. Flip the base upside down and use the holes on the bottom to drill into the brackets.

![](https://lh4.googleusercontent.com/5ZTg-Rj0AzgYcntJYPfJQDNUQANhpc78YVT8\_QMX7Pyqf\_nsZEJulk3UtdNUN7EyyZIF3865hElHqGq6qqDtPOTHl-OTUU1R5d1pOhdzRP3OprPRpG4XrsuW3RNrk6pbd5KTI\_oskJyOUx9-eWUhiJc)

25. Attach all three brackets and plates.

![](https://lh4.googleusercontent.com/SPB47GNZBBaZUQBRp26xGeMPyQvLBDZ2hF2AAsD9mkNNt3iGRowg7301qg38n0LSH1K-GMOfGxqC8wlbftHR79nR1zXhmPux2bgiXVmCZ8L8sh1\_fq0Usb1vF4Z60tbm2BDaF4F9tJ8mb2LuWOw8AH8)

26. Use three M4 screws to attach the support arm. Use a straightedge to ensure that the top edges of the support arm and back plate are parallel.

![](https://lh4.googleusercontent.com/Y0J6mfEKElMNfyIB0a0Z5CcU7CXJtHg28oKUEJrHtj0UbdYncsiPsmc0r0jJht4JZ5MlcOI90M1F6D4KYe9uoIUq72rJBXLVZLfs5FK6DY911AwkJ8goFEyEPHSGd1UA7XuFJ1xCiP6cvJIGTZhkv1o)

27. Clamp and drill holes in the adjustable bracket. Make sure the top surface of the bracket is flush with the support arm.

![](https://lh4.googleusercontent.com/Mq3Gy0kpQfU-csE-KjE8L1NSPBdYC-\_Izjdj6J-o-3QFZlrjTkNvb1nK65LHy0M8m1AfBbMZjR9dWj3jNwAZIphAHbaUS\_-\_Hsxts7n0YM3410fSTlQQlo79pvIUQXzEzACQkzUiz5LdAYHrWk-Ni7o)

28. Structure is complete and ready for further assembly.

\


### Assemble the stepper

\


29. Screw the[ manual XYZR stage](https://www.amazon.com/Positioning-Bearing-Platform-Sliding-90mmx90mm/dp/B07H3L4FPG/ref=sr\_1\_10?crid=19OKCW3J2FD2Q\&keywords=xyz%2Btheta%2Bmanual%2Bprecision%2Blinear%2Bstage\&qid=1678826324\&s=industrial\&sprefix=xyz%2Btheta%2Bmanual%2Bprecision%2Blinear%2Bstag%2Cindustrial%2C84\&sr=1-10\&th=1) into the base plate using countersunk screws.

\


![](https://lh6.googleusercontent.com/IDrPYpvv9bk9t9g000ZTyjIdk2CeU0rprWKmG21uGZLlqy3WKDEl-24uKeC6-Wx-yCykfOrNRPSymWuYBEUu6x9T1\_PW9Q1SgaHXTZtsvRVgFkLMTvuzcEDSy8\_BLhfBbhszc5GL8B8XFQUbT7NxK5M)

30. Screw the 3D printed [projector coupler](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/projector%20coupler.SLDPRT) into the projector with three M3x? screws.&#x20;
31. Push the optics onto the projector coupler. You may need to temporarily detach the vertical parts of the optics assembly. This part was designed iteratively and may not fit perfectly because the true position of the DLP chip inside the projector is unknown. In that case, it can be modified or removed as needed.

\
\
\
\
![](https://lh3.googleusercontent.com/kqz28DlY1IN8R0Pm\_ubopGRJLd5JgD7R\_lHHYKp7n6EWa6l-8H-2xEdxxUCHCGRqk4tmEYNiCEbMnSPXqFJhHQUL8Cet9HwxnlYTzgu\_Mob5xEz4O1Ab6E3pr8\_WAHSifpB4tJwY4MCC08GUKQIRIM0)\


32. Attach the [cube adjuster](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/cube%20adjuster%203.SLDPRT) to the [cage cube](https://www.thorlabs.com/newgrouppage9.cfm?objectgroup\_id=6079) with 4-40 screws. Attach the cube adjuster to the adjustable bracket with M3 screws and washers on both sides.

\
\
\


33. Screw the camera onto the C-mount threads at the top of the optics.&#x20;

\


### Alignment

34. Go to [this link](https://amscope.com/pages/software-downloads) and install the correct Amscope software for the camera MU2003-BI and your operating system.
35. Connect the camera to your computer with a USB 3.0 cable.
36. Connect the projector to your computing using an HDMI cable.
37. Put in the UV filter. Remove the red filter.
38. Turn on the projector.
39. Open AmScope. Select the camera in “camera list”. If everything is working an image should appear (might be black).
40. Place a flat mirror-like object on the stage. This can be a bare silicon chip.
41. Adjust the height of the microscope objective to approximately 16 mm.
42. Focus the image using the Z-axis on the stage. You should see your projected screen. Try projecting some [patterns](https://docs.google.com/presentation/d/16H1Pf2Zkq9nyL4HAj6gduJSA1r-k2tIijDcd4yQjXhY/edit#slide=id.g22b2e9f3b01\_0\_6) to test the focus.
43. Adjust the [lens tube coupler](https://www.thorlabs.com/newgrouppage9.cfm?objectgroup\_id=2704) so that the projected image is square inside the camera frame.

![](https://lh5.googleusercontent.com/ytVDeoX0pea\_WBuzkcSVUsSf4kjQBbEXuZPWGQuvm0vqL2PxFBwHJHmrzUwAOX0byj6ULG9Yvd\_Y42peXMJIIWb0mOYRskK1Ja8JHQWoi\_UGclmubCzqPsvXAVPg2DSGG9kb-2XR\_VvMXcwndRiXFKw)![](https://lh6.googleusercontent.com/oCQBxWxn7E3pDm0JZ4T7aW-\_MK2r8MGVQrbfHlnALRxYyN8JTOxNoZ6-h4T\_jsvncL\_4PdCOkwM1ysUo4QVeV3JdkKotjPUfx6vjAZHesqenzVjxsGoZ7jegdChZpXdfUnOc-L6GENx\_hgGQ6Abjt0Q)

Default configuration Without objective

44. Unscrew and remove the microscope objective. You may still see an image. This is because if the two tube lenses are in the correct positions they will perfectly focus the collimated light between them. We will use this to our advantage by translating the entire optical assembly towards/away from the projector until the image is focused. When this step is complete, we know that the first tube lens is 151.8 mm from the DLP chip.

\


![](https://lh3.googleusercontent.com/V0j9MqKqCDLYdw7mATEXUW3BLmBjszuame0NRXPjQhjlUMUI9T0LdLssR26tBHz6ADPpRXvU0SYckjv25XoJdbo6O8rSbCkXOOsLZl\_y5YP591yGfQZnq0uVzmZBWXa038JJlO52POBoDfU3Wx3Bxcw)![](https://lh3.googleusercontent.com/JVMfjXkiiEL5r1zEu\_vPl5TdIshh9S6XW6mnAXylTozArUs7uTdP6xN4hAC9O9oHumxAbO342xjkRCTfpP7tVWLKHNsdmWgV8cU7j25H-RoJlbx53RnjZZXNE89kEr1DfljnsGzDWiUdqL78CcFaaRo)

45. We can also use the no-objective configuration to check the stage’s orthogonality relative to the vertical axis of the optics. When aligned, the image will be centered in the camera frame. Any offset (shown below) can be fixed by adjusting the structure in the angles labeled A and B above. This correction fixes the planarity of the focal plane, visible in the images below. Rotation in A moves the image vertically and rotation in B moves the image horizontally in the camera frame.

To add: details about how to mechanically execute alignment, including shims.

![](https://lh3.googleusercontent.com/HS5iySvTfVtSZKggqauNZyyYcH5k1TOMaFjxsSrUOkvDZkwKDqUytdB8Z85-0gI2ngHibpUrGxlddZaSsBepC3BizmRJmzQbuSRdhVObtSTMVqk7HUN4MjQSZ37MPYpSTiqfkrbQ6fQYYP6MsQz1H3w)

No objective, before alignment

\


![](https://lh5.googleusercontent.com/NufMH\_epgHR7-O3AN3d3ja7qsQSXJ6ZJjh67nJHGfv-M6VxQBkFhzvuutXkQ-8vGgaCfO5AFhQsQsAyrxcgpSCnaBujBQEb8UQkvTeinrwAoUSWFqlr8brz3U6KZ0rCrOmIvBNbCMuAajXQ973pQGB8)

With objective, before alignment. Non-uniform focus is apparent in the top left corner.

![](https://lh6.googleusercontent.com/nWrBcrhG7YciAGVJ4452lMpnV2bZ2yZlpbDetDqZybenDqOWpSzkvSCWgFSUHCvm41snch1D405npnneRV6Bxr8Hc\_-9b6d0fut3uLiiGfSn3ZhfKJPe4rmNoHNf9cmKCsdlOM6ZDBzRsJ5Yr0ogKC4)

No objective, after alignment. The projected image (purple) is centered in the camera frame.

\


![](https://lh4.googleusercontent.com/-NiXTpzVTLLry4WCDEHWV2FRmrLKkA0e-lLzFHSF9WMGCpVEADVy5m5YpYHYQF280T\_Kiw46AF42cT76-TdWRfiMZtdf4UiIZbhi0HqPNkDPTxuZCCZVIu8\_LgheX8AtN\_dhyTRNBkT\_AUp4NGg4Hdw)

With objective, after alignment. Focus is much more uniform.

\
\
\
\
\
\
\


## Validation and Characterization

### &#x20;

Demonstrate the operation of the hardware and characterize its performance for a specific application.

* Highlight a relevant use case.
* If possible, characterize performance of the hardware over operational parameters.
* Create a bulleted list describing the capabilities (and limitations) of the hardware.  For example, load and operation time, spin speed, coefficient of variation, accuracy, precision, etc

\


## Safety

Wear [UV-blocking glasses](https://www.amazon.com/Tool-Klean-Safety-Glasses-Protection/dp/B081BHTJT8/ref=sr\_1\_5?crid=38LVX5C7MIN2M\&keywords=uv+protection+glasses\&qid=1674228429\&sprefix=uv+protection+%2Caps%2C96\&sr=8-5) whenever light leakage from the projector is possible.

## Appendix

[^1]: testing
