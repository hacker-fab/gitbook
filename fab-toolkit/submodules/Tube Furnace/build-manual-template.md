# Build Manual Template

## Hardware Specs

| Cost                  | $           |
| --------------------- | ----------- |
| Approximate Active Build Time | <p>6 Hours<br></p> |
| Approximate Total Build Time    | <p>48 Hours<br></p> |
| Max Temperature    | <p>1200C<br></p> |
| Max Running Time    | <p>30 Minutes (TBD)<br></p> |

## Hardware Description

This DIY Tube Furnace provides an alternative to commercial tube furnaces, at a fraction of the size and cost. This version works with resistance heating, which allows for a compact design. \

![IMG_2331](https://github.com/hacker-fab/gitbook/assets/74506223/82ffe310-64e3-4a2d-bebc-953d48f2fe83)


Useful Links:

[Link to Operation Manual](https://docs.google.com/document/d/1WfECnmatf4ztq5hCbmSQNtmgw9UTvR6ndzOSvIV\_o5o/edit) and other related documents

## [Tools](https://docs.google.com/document/d/1vQ3mLdk9Qs4jteeLivA5NhKBnKZaRAJCvF41PBNDRNI/edit#bookmark=id.e9qhfw513e84)

* Tool 1
* Tool 2
* Tool 3

## Bill of Materials

Stuff to buy. The BOM should include everything necessary to make the components in the next section, design files.

[Link to spreadsheet](https://docs.google.com/spreadsheets/d/1tM25RrjC127YzbMv5\_YfaZUyqUb6dUSwdO-u9tCkjsk/edit#gid=0) - edit sheet then update or copy table here

| Name        | QTY         | Cost per unit - USD | Total cost - USD | Purchasing Link                                 |
| ----------- | ----------- | ------------------- | ---------------- | ----------------------------------------------- |
| Nichrome Wire 22awg      | 1          | 11.99                | 11.99              | [Amazon](https://www.amazon.com/Nichrome-80-Gauge-Resistance-Wire/dp/B07CHX2T52/ref=pd_bxgy_d_sccl_1/136-4311860-8506401?pd_rd_w=mXvnA&content-id=amzn1.sym.c51e3ad7-b551-4b1a-b43c-3cf69addb649&pf_rd_p=c51e3ad7-b551-4b1a-b43c-3cf69addb649&pf_rd_r=A4YSNT87EHM66DSPGVSH&pd_rd_wg=46Oul&pd_rd_r=80e8a761-f8df-4aab-ba5e-a662dc18b3fb&pd_rd_i=B07CHX2T52&psc=1) |
| Ceramic Wool Insulator      | 1           | 15.98                  | 15.98               | [Amazon](https://www.amazon.com/gp/product/B09R9NW7HG?ie=UTF8&th=1&linkCode=sl1&tag=projectsinfli-20&linkId=11036526d5c75fa2a69a66da4628a4e2&language=en_US&ref_=as_li_ss_tl)             |
| High Temperature TC Probe      | 1           | 9.89                  | 9.89               | [McMaster](https://www.mcmaster.com/3859K44/)             |
| Quart Aluminum Can      | 1           | 12.99                  | 12.99               | [Amazon](https://www.amazon.com/Empty-Quart-Paint-Unlined-Metal/dp/B015Y9OY4Y/ref=sr_1_3?crid=3VTGIYGJ30247&keywords=aluminum+can&qid=1707862429&s=hi&sprefix=aluminum+chan%2Ctools%2C123&sr=1-3)               |
| Fiberglass Insulated Wire      | 10ft           | 2.7                  | 20.70               | [McMaster](https://www.mcmaster.com/8209K15/)               |
| Test Tube      | 1           | 26.90                  | 26.90               | [Amazon](https://technicalglass.com/product/35cc-fused-quartz-test-tubes-w-lip/)               |
| Castable Ceramic Kit      | 1           | 10                  | 10               | [Amazon](https://www.amazon.com/)               |
| Viton O-Ring Set      | 1           | 10                  | 10               | [Harbor Freight](https://www.amazon.com/)               |
| <p><br></p> | <p><br></p> | <p><br></p>         | 0                | <p><br></p>                                     |



You can use this space for any additional descriptions of the materials used.

## Design File Summary

Stuff to make. Complete a separate row for each design file associated with your hardware (including the primary design files). Any empty rows should be deleted.

[Link to GitHub repository](https://github.com/orgs/hacker-fab/repositories)

| File Name w/ link                                                                                | Description                                                              | QTY | Tools Used                      |
| ------------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------ | --- | ------------------------------- |
| [Tube Furnace Assembly](https://cad.onshape.com/documents/7ca245ff5619be80b9b7c11c/w/72634921600cf05b54213a5d/e/d22908dc7684c4069f65515b) | Complete tube furnace assembly file | 1   | --                      |
| [Ceramic Cap Mould](https://cad.onshape.com/documents/279b6d9d916df77415a78659/w/fec5166005d12b217a27bd33/e/638f8ec910503f23116640b0) | Mould to cast ceramic cap with hole for thermocouple | 1   | 3D Printer                      |
| Power Management PCB                                                                                | PCB that steps down AC voltage and switches it for temperature control. | 1   | PCB fab, pick and place machine |
| Arduino Temperature Control Script                                                                                  | Firmware for arduino microcontroller.                                        | N/A | Arduino Uno                     |

\


CAD files:

You are encouraged to use free and open source software packages for creating the files.  For  CAD files, OpenSCAD, FreeCAD, or Blender are encouraged, but, if these are not available, we accept source files from proprietary CAD packages, such as Autocad or Solidworks, and other drawing packages.\


3D printing:

Supplementary files that facilitate digital replication of the devices are encouraged; for example, STL/3MF files for 3D printing components.&#x20;



Electronics:

PCB layouts and other electronics design files should be uploaded to Github.



Software and firmware:

All software files used in the design and operation of the hardware should be included in the repository. Provide a description of the software and firmware and use extensive comments in the code.&#x20;

## Build Instructions

Provide detailed, step-by-step construction instructions for the submitted hardware:

* Include all necessary information for reproducing it.
* Explain and (when possible) characterize design decisions. Include any design alternatives you created.
* Use visual instructions such as schematics, images and videos.
* Clearly reference design files and component parts described in the Design file summary and the Bill of materials summary
* Highlight any potential safety concerns.
* Tips and tricks to simplify the assembly process
* Possible errors that might occur during assembly and how to rectify them

### Build Main Tube Furnace Assembly

1. Create Insulation Layer Inside Can
  a. Cut rectangles of fiberglass insulation (5in height), any length.
  b. Fill inside of can with fiberglass insulation, leaving a ~1 in diameter cylindrical gap in the middle.
  c. TIP: if gap is too wide to leave as-is, but too small for a full layer of insulation, two alternatives:
    i. Press existing insulation against inner walls of the can, just enough to have layer fit (but not too much to remove air gaps in fiber)
    ii. Splice a new layer of insulation in two -- after creating a small cut, it should be possible to "peel" layers of insulation from the sheet.
2. Make and insert nichrome wire coil
   a. Tightly wrap 20 windings of nichrome wire around the test tube. The spacing between windings is not important in this step, so it could be between 0-10mm.
   b. Remove the coil from the test tube while compressing it. All turns should be touching at this point, and the spring should be fully compressed.
   c. Insert the compressed spring into the cavity previously made in the can, all the way to the bottom.
   d. Let go of the spring -- it should be tight enough against the insulation walls so that it doesn't decompress on its own.
   e. Pull the upper end of the spring upwards, so that the spring expands throughout the cavity of the furnace.
   f. Both ends of the nichrome should come out of the top of the furnace. For the end that comes from the bottom, use thinner pieces of fiberglass insulation to separate the vertical piece from the rest of the coil.
4. Make electrical connections
   a. Solder 1 ft of fiberglass insulated wire to each end of the nichrome wire.

### Cast Ceramic Caps

1. 3D Print Mould
2. Apply Mould Release Spray to the mould (thin layer, 10-12 in away from mould). Let dry for 30 minutes.
3. Fill mould up with castable ceramic mix (100:30 ratio base:activator). Please refer to castable ceramic kit for up to date instructions.
4. Let dry for 24 hours (or as directed by castable ceramic kit manual).
5. Release the mould.
  a. I found the easiest way to do this was to use a heat gun to slighly deform the mould, which made it much easier to release.
7. Post-process ceramic cap as directed by kit manual.


## Validation and Characterization

Demonstrate the operation of the hardware and characterize its performance for a specific application.

The DIY tube furnace is designed to operate under conditions that enable the process of diffusion.

* Operation time: 30 minutes.
* Max Temperature: 1200C.

## Safety



## Appendix
