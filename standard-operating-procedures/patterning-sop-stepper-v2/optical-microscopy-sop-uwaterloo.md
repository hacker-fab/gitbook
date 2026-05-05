# Optical Microscopy SOP (UWaterloo)

## Purpose

To inspect patterned wafers using optical microscopy to verify feature quality, alignment, and dimensions after lithography and development.

Supports HackerFab fabrication workflows targeting <10 µm feature sizes using calibrated microscope measurements.

## Scope

Applies to:

* Wafers after development&#x20;
* Lithography calibration wafers
* Feature size verification and process troubleshooting

## Equipment & Materials

### Equipment

* Optical microscope (AmScope)
* Amscope measurement software
* Microscope stage
* Cleanroom wipes
* Computer for image capture

### Materials

* Patterned wafer
* Calibration slide (µm scale)

## Safety Precautions

* Handle wafers with tweezers only.
* Avoid touching lens surfaces.
* Do not drop wafers on stage.
* Turn off illumination after use.

## Calibration Requirements

Before measuring feature sizes:

1. Use a calibration slide with known µm markings.
2. Calibrate at each magnification level used.
3. Save calibration settings in software.

## Procedure

{% stepper %}
{% step %}
#### Setup

1. Turn on microscope illumination.
2. Select 5x magnification
3. Place wafer on stage.
{% endstep %}

{% step %}
#### Focus and Locate Pattern

1. Focus using the coarse knob.
2. Adjust fine focus until the pattern is sharp.
{% endstep %}

{% step %}
#### Inspect Pattern Quality

Check for:

* Clean edges
* No overdevelopment
* Uniform exposure
{% endstep %}

{% step %}
#### Measure Feature Size

1. Use a calibrated measurement slide.
2. Measure multiple features.
3. Record average feature size.
{% endstep %}

{% step %}
#### Capture Images

1. Save screenshots at 100% zoom (important for accurate scaling).
2. Include a scale bar.
3. Name the file with the date.

Example: 2026-03-02\_HFLogo\_8sExposure\_4000rpm.png
{% endstep %}
{% endstepper %}

## Expected Results

* Sharp, well-defined patterns.
* Feature sizes within the expected range.
* Verification of lithography calibration.

## Troubleshooting

| Problem               | Cause             | Fix                                |
| --------------------- | ----------------- | ---------------------------------- |
| Blurry image          | Out of focus      | Refocus stage                      |
| Wrong feature size    | Calibration error | Recalibrate microscope             |
| Uneven patterns       | Spin coat issue   | Check Spin Coating SOP             |
| Overdeveloped pattern | Too long dev time | Adjust photoresist development SOP |

## Notes

* Always recalibrate after changing magnification.
* Keep image records for process tracking.
* Use microscopy results to tune exposure dose and spin speed.
