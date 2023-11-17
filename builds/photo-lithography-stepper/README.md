# 📽 Photo-Lithography Stepper

## _This Page is Work in Progress_

* will give detailed context for all quantifiable parameters of lithography steppers
* brief overview of where improvements can be made (make a clear path to stepper V3... Vn

A photolithography stepper is a machine that exposes a pattern of light onto a layer of photoresist chemical on the wafer, then ‘steps’ over to the next pattern. Before each exposure, it must align with previous patterns on the wafer so that each layer of the device is in the correct position relative to the previous. The accuracy with which it can do this is called “alignment accuracy”. Alignment accuracy and optical resolution are the two most important metrics of a stepper’s performance.

There are 2 main components of our stepper: the light source and optics, and then the mechanical micropositioning stage that moves the chip itself. Alignment accuracy is a function of both the mechanical micropositioning stage and the reliability of the projector’s optomechanical components.

Commercial lithography machines use photomasks to create the image, typically made of chrome on glass. Instead, our Maskless Photolithography Stepper uses a DLP projector to create a pattern. This allows us to change patterns instantly, opening the option up for advanced techniques like tiling (making a circuit larger than one exposure field).

Our design was based on [Sam Zeloof](http://sam.zeloof.xyz/maskless-photolithography/) and [Huygens Optics](https://www.youtube.com/watch?v=\_w0Z2Y5vaAQ)’ versions of this tool. Sam repurposed a vertical microscope for structure and laid out optics experimentally with a 5x reduction objective, whereas Huygens built his own horizontal structure, and used more involved optics with a 20x reduction. We took the middle road by combining a scratch built structure with ThorLabs optical and optomechanical components to ensure alignment. We use a 10x objective for demagnification. We also opted for a different mechanical XYZ stage.

Future versions of this tool will have better alignment accuracy and optical resolution, be more compact, cheaper, and capable of automatic alignment, exposure, and tiling. In the short term, we’re planning on replacing the projector with one of [TI’s DLP dev boards](https://www.ti.com/design-resources/embedded-development/dlp-chip/display-and-projection.html), which will remove the flimsy plastic projector housing and allow use of UV and red LEDs instead of the mercury lamp.
