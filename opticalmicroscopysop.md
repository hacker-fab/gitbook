# OpticalMicroscopySOP

**Document ID:** HF-QC-MIC-004\
**Prepared by:** Shreeja Gupta\
**Version:** 1.0\
**Date:** March 2, 2026

## 1. Purpose

To inspect patterned wafers using optical microscopy to verify feature quality, alignment, and dimensions after lithography and development.

Supports HackerFab fabrication workflows targeting <10 µm feature sizes using calibrated microscope measurements.

## 2. Scope

Applies to:

* Wafers after development (HF-PROC-DEV-003)
* Lithography calibration wafers
* Feature size verification and process troubleshooting

## 3. Responsibilities

* Operator: Inspect wafer and record measurements.
* Process Lead: Maintain calibration accuracy.
* Team Lead: Review results for process improvements.

## 4. Equipment & Materials

### Equipment

* Optical microscope (AmScope)
* Amscope measurement software
* Microscope stage
* Cleanroom wipes
* Computer for image capture

### Materials

* Patterned wafer
* Calibration slide (µm scale)

## 5. Safety Precautions

* Handle wafers with tweezers only.
* Avoid touching lens surfaces.
* Do not drop wafers on stage.
* Turn off illumination after use.

## 6. Calibration Requirements

Before measuring feature sizes:

1. Use a calibration slide with known µm markings.
2. Calibrate at each magnification level used.
3. Save calibration settings in software.

## 7. Procedure

{% stepper %}
{% step %}
#### 7.1 Setup

1. Turn on microscope illumination.
2. Select 5x magnification
3. Place wafer on stage.
{% endstep %}

{% step %}
#### 7.2 Focus and Locate Pattern

1. Focus using the coarse knob.
2. Adjust fine focus until the pattern is sharp.
{% endstep %}

{% step %}
#### 7.3 Inspect Pattern Quality

Check for:

* Clean edges
* No overdevelopment
* Uniform exposure
{% endstep %}

{% step %}
#### 7.4 Measure Feature Size

1. Use a calibrated measurement slide.
2. Measure multiple features.
3. Record average feature size.

Example:

* Measured smallest feature = 8.7 µm
{% endstep %}

{% step %}
#### 7.5 Capture Images

1. Save screenshots at100% zoom (important for accurate scaling).
2. Include a scale bar.
3. Name the file with the date.

Example:2026-03-02\_HFLogo\_8sExposure\_4000rpm.png
{% endstep %}
{% endstepper %}

## 8. Expected Results

* Sharp, well-defined patterns.
* Feature sizes within the expected range.
* Verification of lithography calibration.

## 9. Troubleshooting

| Problem               | Cause             | Fix                    |
| --------------------- | ----------------- | ---------------------- |
| Blurry image          | Out of focus      | Refocus stage          |
| Wrong feature size    | Calibration error | Recalibrate microscope |
| Uneven patterns       | Spin coat issue   | Check SC SOP           |
| Overdeveloped pattern | Too long dev time | Adjust DEV SOP         |

## 10. Notes

* Always recalibrate after changing magnification.
* Keep image records for process tracking.
* Use microscopy results to tune exposure dose and spin speed.

## 11. Revision History

| Version | Date          | Changes       |
| ------- | ------------- | ------------- |
| 1.0     | March 2, 2026 | Initial draft |
