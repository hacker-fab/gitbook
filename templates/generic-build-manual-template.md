# Generic Build Manual Template

| Title |
| ----- |

\
\


| Cost                  | $           |
| --------------------- | ----------- |
| Approximate Work Time | <p><br></p> |
| Performance spec 1    | <p><br></p> |
| Performance spec 2    | <p><br></p> |

\
\
\
\
\


Insert picture of completed hardware

\
\


Useful Links:

[Link to Operation Manual](https://docs.google.com/document/d/1WfECnmatf4ztq5hCbmSQNtmgw9UTvR6ndzOSvIV\_o5o/edit) and other related documents

## Hardware Description

Describe your hardware, highlighting the customization rather than the steps involved in the procedure. Explain how it differs from other hardware  and the advantages it offers over pre-existing methods. For example, how does this hardware compare to other hardware in terms of cost or ease of use, or how can it be used to develop further designs in a particular area?&#x20;

## [Tools](https://docs.google.com/document/d/1vQ3mLdk9Qs4jteeLivA5NhKBnKZaRAJCvF41PBNDRNI/edit#bookmark=id.e9qhfw513e84)

* Tool 1
* Tool 2
* Tool 3

## Bill of Materials

Stuff to buy. The BOM should include everything necessary to make the components in the next section, design files.

\


[Link to spreadsheet](https://docs.google.com/spreadsheets/d/1tM25RrjC127YzbMv5\_YfaZUyqUb6dUSwdO-u9tCkjsk/edit#gid=0) - edit sheet then update or copy table here

\


| Name        | QTY         | Cost per unit - USD | Total cost - USD | Purchasing Link                                 |
| ----------- | ----------- | ------------------- | ---------------- | ----------------------------------------------- |
| Item 1      | 10          | 0.01                | 0.1              | [McMaster](https://www.mcmaster.com/91251A051/) |
| Item 2      | 1           | 10                  | 10               | [Amazon](https://www.amazon.com/)               |
| <p><br></p> | <p><br></p> | <p><br></p>         | 0                | <p><br></p>                                     |

\


You can use this space for any additional descriptions of the materials used.

## Design File Summary

Stuff to make. Complete a separate row for each design file associated with your hardware (including the primary design files). Any empty rows should be deleted.

\


[Link to GitHub repository](https://github.com/orgs/hacker-fab/repositories)

\


| File Name w/ link                                                                                | Description                                                              | QTY | Tools Used                      |
| ------------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------ | --- | ------------------------------- |
| [Mechanical File 1](https://github.com/hacker-fab/lithography-stepper/blob/main/CAD/base.SLDPRT) | Housing for Electronics, connects to XYZ component. 3D printed from ABS. | 2   | 3D printer                      |
| Electronic File 1                                                                                | PCB that controls XYZ sensors and actuators. Controlled by XYZ component | 3   | PCB fab, pick and place machine |
| Software File 1                                                                                  | Firmware for XYZ microcontroller.                                        | N/A | Arduino Uno                     |

\


CAD files:

You are encouraged to use free and open source software packages for creating the files.  For  CAD files, OpenSCAD, FreeCAD, or Blender are encouraged, but, if these are not available, we accept source files from proprietary CAD packages, such as Autocad or Solidworks, and other drawing packages.

\


3D printing:

Supplementary files that facilitate digital replication of the devices are encouraged; for example, STL/3MF files for 3D printing components.&#x20;

\


Electronics:

PCB layouts and other electronics design files should be uploaded to Github.

\


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

\


### 3D Print Sub-assembly 1

1. Step 1
2. Step 2
3. Step 3

### Solder Sub-assembly 2

4. Step 1
5. Step 2
6. Step 3

\


\


\


## Validation and Characterization

Demonstrate the operation of the hardware and characterize its performance for a specific application.

* Highlight a relevant use case.
* If possible, characterize performance of the hardware over operational parameters.
* Create a bulleted list describing the capabilities (and limitations) of the hardware.  For example, load and operation time, spin speed, coefficient of variation, accuracy, precision, etc

\


## Safety

## Appendix
