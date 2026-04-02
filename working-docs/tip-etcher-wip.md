# Tip Etcher - WIP

This project is inspired by the open-source [Zyrus tungsten tip etcher](https://hackaday.io/project/191941-tungsten-tip-etcher-for-atomically-sharp-needles).

That design demonstrates a simple and effective way to produce extremely sharp tungsten tips using electrochemical etching, where the wire thins at the liquid interface until it breaks, forming a sharp apex.

Our goal was to build a more automated and reproducible version of this concept, with better control over the process and easier operation.

### What it is

Tip Etcher is a device designed for electrochemical etching of tungsten wires to produce sharp probe tips for high-precision measurements. It can be used for applications like scanning tunneling microscopy (STM), custom microelectrodes, and general lab experiments requiring fine conductive tips.

The system automates key parts of the etching process, allowing control over voltage, current, and probe position relative to the electrolyte surface. Motion is handled by stepper motors, giving micrometer-scale positioning resolution and decent repeatability for a setup in this class.

Current is monitored in real time using an INA219 sensor, which gives visibility into the etching process and can be used to detect key events (like tip drop or process completion).

Control is done through a simple user interface (OLED + encoder), supporting both manual operation and parameter configuration. The system is built around an STM32 microcontroller, with stepper drivers and communication over I2C and SPI.

Mechanically, the device is based on an aluminum profile frame with two main axes (vertical motion + wire feed). The design is intentionally simple and easy to modify, while still being stable enough for repeatable lab use.

<figure><img src="../.gitbook/assets/image (366).png" alt=""><figcaption><p>Device</p></figcaption></figure>

<figure><img src="../.gitbook/assets/image (365).png" alt=""><figcaption><p>Example Tips (SEM)</p></figcaption></figure>

### **Current Status**

This is the first working prototype. We are already able to produce tips that are good enough for actual measurements, so the core concept is validated.

That said, there are still clear areas for improvement. The PCB has already been redesigned, and we’re planning updates to the mechanical design and overall system layout to improve reliability, usability, and consistency.

### **Files & Access**

Current design files are available here: [https://github.com/KN-NaMi/Tip-Etcher](https://github.com/KN-NaMi/Tip-Etcher)

### **What’s Next**

Once the redesigned version is finished, we plan to release a full build guide with step-by-step instructions so others can replicate the system without reverse engineering everything.
