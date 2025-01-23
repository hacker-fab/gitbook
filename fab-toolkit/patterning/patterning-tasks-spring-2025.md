# Patterning Tasks - Spring 2025

This page documents the current work being done on patterning systems and the goals of that work. If you want to start a new project or research related to patterning, add it here so we can keep track of what's being done!

| Task                  | Metrics                 | Timeline        | Task Lead                            |
| --------------------- | ----------------------- | --------------- | ------------------------------------ |
| Backlash Improvements | <2µm backlash           | Before February | Carson Swoveland (@\_salix)          |
| Absolute Positioning  | <5µm accuracy+precision | End of semester | <p>Carson Swoveland<br>(@_salix)</p> |
| Cost Reductions       | Stepper price <$2000    | End of semester | <p>Joel Gonzalez<br>Sky Bailey</p>   |
|                       |                         |                 |                                      |

## Backlash Improvements

The current design for stepper v2 involves having the micrometer-motor couplers slide along the shaft of the motor. This leads to wear in the 3D print and prevents the use of a rigid connection, leading to the coupler eventually becoming loose. This can cause \~30º of backlash in the rotation, which corresponds to about 15 microns.

Mounting the motors on the stage that they move, rather than on a (relatively) fixed stage allows for using a rigid coupling without significant modification to other parts of the design. These fixes should be applicable to any fab with an existing v2 stage. This is a major enabler for [#absolute-positioning](patterning-tasks-spring-2025.md#absolute-positioning "mention").

This may require redesigning the stage to be mounted upright, or the stage to be turned sideways.

The WIP CAD files are available on [Onshape](https://cad.onshape.com/documents/0649d732771a63bcb8e6be1d/w/408d85c155072764ebeaefad/e/73b84f12fd47d1787f4ee6f2?renderMode=0\&uiState=67914fa8750b6e7bcedb2639) and more information can be found [on Discord](https://discord.com/channels/1143959339179200562/1330950134942404769).

## Cost Reductions

The current optics system is not physically capable of handling the projector's resolution, i.e. some amount of detail is wasted in the optics system. This means that we can use a lower resolution (read: cheaper) projector.

TODO: Rest of section here?

## Absolute Positioning

In order to enable many features like automated or computer-assisted patterning, it must be possible to consistently refer to positions on a die. This requires being able to determine the absolute position of the stage.

There has been some experimentation with using inductive sensors for determining the stage position, though calibrating and mounting the sensors is difficult. The accuracy for a properly calibrated and mounted sensor may be sufficient, though. (TODO: Link inductive sensor notes once those get merged)

Currently, a design using simple limit switches is being developed (though blocked on [#backlash-improvements](patterning-tasks-spring-2025.md#backlash-improvements "mention")).





