# Patterning SOP- Stepper V2 (UWaterloo)

## Purpose

To transfer photomask patterns onto photoresist-coated wafers using the HackerFab custom DLP UV lithography system controlled via Raspberry Pi.

This SOP supports fabrication of microstructures targeting <10 µm feature sizes, as demonstrated in recent HackerFab calibration experiments.

<figure><img src="../../.gitbook/assets/WhatsApp Image 2026-04-26 at 5.26.48 PM.jpeg" alt="" width="375"><figcaption></figcaption></figure>

## Scope

Applies to:

* Photoresist-coated wafers
* DLP projector lithography system
* Raspberry Pi lithography controller

Used before:

* Development
* Etching
* Lift-off

## Equipment & Materials

### Equipment

* HackerFab DLP UV lithography system
* Raspberry Pi lithography controller
* Alignment stage + optics
* Computer terminal
* HDMI monitor (for troubleshooting)
* UV safety goggles

### Materials

* Photoresist-coated wafer
* Pattern image file (.bmp)
* Developer solution

## Safety Precautions

* Wear UV safety goggles.
* Avoid direct exposure to UV light.
* Handle wafers with tweezers.
* Follow the photoresist chemical SOP during development.

## Process Parameters

| Parameter           | Typical Value               |
| ------------------- | --------------------------- |
| Exposure Time       | 10s                         |
| Focus Distance      | Calibrated optics alignment |
| Feature Size Target | <10 µm                      |
| Image Format        | .bmp                        |

## Procedure

{% stepper %}
{% step %}
### Prepare Pattern File

1. Save pattern as .bmp image.
2. Place file on Desktop.
{% endstep %}

{% step %}
### Upload Pattern to Raspberry Pi

Open terminal and run:

```bash
ls

ls ~/Desktop

scp ~/Desktop/[image_name.bmp] hackerfab@10.37.69.0:~

ssh hackerfab@10.37.69.0
```
{% endstep %}

{% step %}
### Run Lithography Program

After logging into the Pi:

```bash
cd elegoo-mars-4-dlp-controller/src/

python3 litho_cli.py ../../[image_name.bmp] [exposure_time_in_seconds]
```

Example:

```bash
python3 litho_cli.py ../../hacker_fab_logo.bmp 8
```

This command projects the pattern onto the wafer.
{% endstep %}

{% step %}
### Exposure

1. Place the photoresist-coated wafer on the lithography stage.
2. Secure the wafer holder.
3. Use the alignment camera to center the wafer and pattern area.
4. Run the test pattern `focus_nologoa.bmp` for \~30 seconds.
5. Adjust the stage height until the projected image appears sharp and well-defined.
6. This step sets the correct wafer holder height for proper focus.
7. Upload and select the desired pattern image file.
8. Execute the lithography command with the chosen exposure time.
9. Wait until exposure completes.
10. Do not move the stage during exposure.
{% endstep %}

{% step %}
### Post-Exposure

1. Remove wafer.
2. Proceed to the development SOP.
3. Inspect the pattern under the microscope.
{% endstep %}
{% endstepper %}

## Troubleshooting

| Problem             | Cause           | Fix                                           |
| ------------------- | --------------- | --------------------------------------------- |
| Cannot SSH into Pi  | Pi IP changed   | Connect Pi to monitor via HDMI to find new IP |
| No projection       | File path wrong | Check bmp location                            |
| Blurry pattern      | Misalignment    | Refocus optics                                |
| Under/over exposure | Wrong dose      | Adjust exposure time                          |

{% hint style="info" %}
#### Important Network Note

If the terminal does not connect or respond:

The Raspberry Pi IP address may have changed.

To find the new IP:

1. Connect Pi to a monitor using HDMI.
2. Boot the Pi.
3. The IP address will be displayed on screen.
4. Use the new IP in the SCP and SSH commands.
{% endhint %}

## Expected Results

* Sharp patterned resist.
* Consistent exposure.
* Achievable <10 µm features with calibrated optics and spin-coated wafers.

