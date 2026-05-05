---
description: >-
  This page contains information about the state of the ALD project at CMU as of
  May 2026.
---

# Spring 2026 CMU Update

## ALD System: Chamber Validation and Process Preparation

> **Status: WIP** — Two HfO₂ deposition runs completed. The 4/23 sample shows Nanospec reflectometry readings consistent with film presence (\~23–26 nm). The 4/22 sample does not. Neither result has been confirmed with a calibrated instrument. MVP not yet reached.

Modified  [SOP](https://docs.google.com/document/d/1Lhq1zFw2XWxXYb8kmoDSSsILFoPW0SuX/edit?usp=sharing\&ouid=108450284267837984162\&rtpof=true\&sd=true)  (with updated reactor construction and process flow) is documented. All the code associated with the GUI and remaining elements are documented in the following Github. Prior build history including reactor construction, vacuum system assembly, substrate heater design, delivery system plumbing, and safety verification is documented in the pages for the previous semesters in the Gitbook. This page covers process development and system validation for HfO₂ deposition.

***

### System Validation Overview

Before any deposition could be attempted, the following needed to be demonstrated. This table summarizes what was targeted, what was tested, and the current result.

| Validation Task                          | Target                                           | Result                                                   | Status |
| ---------------------------------------- | ------------------------------------------------ | -------------------------------------------------------- | ------ |
| Chamber pressure control via N₂ MFC      | 250–1000 mTorr, stable and repeatable            | All 4 setpoints achieved within a few mTorr              | ✅      |
| Water vapor pulse detection              | Resolve 2–3 mTorr transients                     | Achieved after signal conditioning improvements          | ✅      |
| Pump-down to operating pressure          | Reach base below operating window                | 26 mTorr in 7.62 hours                                   | ✅      |
| Substrate heater stability               | ±5°C at 100, 150, 200, 250°C                     | Confirmed at 100°C and 150°C, 200°C and 250°C            | ✅      |
| Delivery line heater stability           | ±5°C                                             | ±5°C achieved after insulation + control strategy change | ✅      |
| Water vapor heater (TC3) stability       | ±2°C                                             | Target met                                               | ✅      |
| Precursor ampoule heater (TC4) stability | ±2°C                                             | Relay restored; extended stability confirmed             | ✅      |
| Multi-heater simultaneous operation      | No crosstalk between channels                    | TC2, TC3, TC4 and TC5 verified                           | ✅      |
| Electrical system reliability            | All relays functional; no thermocouple crosstalk | Resolved after full hardware reset                       | ✅      |
| Software: automated recipe execution     | >250 cycles without instability                  | Verified                                                 | ✅      |

***

### Recipe Selection

Before validating the chamber, a target ALD recipe was needed; a complete specification covering precursor chemistry, pulse and purge durations, temperature setpoints for every heated component, and the operating pressure range. Three candidate materials were reviewed: ZrO₂, HfO₂, and ITO. Each material's literature was reviewed independently, extracting precursor identity, pulse and purge durations, substrate temperature windows, bubbler temperatures, carrier gas flow rates, and expected chamber pressure ranges. These were then cross-referenced against on-site precursor availability and system safety constraints.

#### Why HfO₂

ITO is the long-term target for this system, but its precursors are pyrophoric, they ignite on contact with air, which adds significant safety complexity and was not appropriate for initial commissioning. ZrO₂ is chemically analogous (Group IV metal amide + H₂O) but is less commonly used as a baseline validation film. HfO₂ was selected: Hf(NMe₂)₄ was available on-site, the chemistry is extensively documented in the ALD literature, the process window is well-characterized, and substrate temperatures (100–250°C) are within the capability of the built heater.

| Criterion                           | HfO₂        | ZrO₂      | ITO     |
| ----------------------------------- | ----------- | --------- | ------- |
| Precursor available on-site         | ✅ Hf(NMe₂)₄ | ❌         | ❌       |
| Substrate temperature               | 100–250°C   | 100–300°C | Higher  |
| Delivery line cold-spot sensitivity | Low         | Low       | High    |
| Pyrophoricity risk                  | Low         | Low       | High    |
| ALD literature coverage             | Extensive   | Moderate  | Limited |

#### HfO₂ Literature Parameter Survey

Parameters were compiled from multiple published sources to show where variance sits across reactor designs and to justify the adopted baseline. All entries use H₂O as co-reactant.

| Source                                   | Precursor     | T\_sub (°C) | Hf Pulse (s)  | H₂O Pulse (s) | Purge (s) | GPC (Å/cycle) |
| ---------------------------------------- | ------------- | ----------- | ------------- | ------------- | --------- | ------------- |
| Hausmann et al., _Chem. Mater._ 2002     | Hf(NMe₂)₄     | 100–300     | 0.25          | 0.015         | 5–20      | \~1.0         |
| Kim, _JVST B_ 2003                       | Hf(NMe₂)₄     | 150–350     | 0.15–0.40     | 0.015         | 10–60     | 0.9–1.1       |
| Ritala & Leskëlä, _Handbook_ 2002        | HfCl₄         | 300–500     | 0.4           | 0.1           | 1–2       | \~0.5         |
| Puurunen, _J. Appl. Phys._ 2005 (review) | Various       | 150–400     | —             | —             | 5–30      | 0.5–1.5       |
| **This system (adopted)**                | **Hf(NMe₂)₄** | **100–250** | **0.15–0.40** | **0.015**     | **5–60**  | **\~1.0**     |

The HfCl₄ route (Ritala & Leskëlä) was reviewed but not adopted: it requires substrate temperatures of 300–500°C and produces HCl as a reaction byproduct, adding corrosion risk to the chamber \[Hausmann 2002].

#### Adopted Reference Cycle

Purge durations were set conservatively toward the longer end of the literature range to ensure complete clearance of the reaction byproduct dimethylamine (HNMe₂) before the next pulse, particularly important at lower substrate temperatures where desorption is slower.

| Step                          | Value        |
| ----------------------------- | ------------ |
| H₂O pulse duration            | \~0.015 s    |
| N₂ purge (post H₂O)           | 5–20 s       |
| Hf(NMe₂)₄ pulse duration      | 0.15–0.40 s  |
| N₂ purge (post Hf)            | 5–20 s       |
| Carrier gas                   | \~20 sccm N₂ |
| Precursor ampoule temperature | \~75°C       |
| Delivery line temperature     | \~150°C      |
| Substrate temperature         | 100–250°C    |
| Expected growth per cycle     | \~1 Å/cycle  |

ALD is self-limiting: each half-reaction saturates available surface sites before the complementary precursor is introduced, making growth per cycle independent of pulse time once the dose is sufficient \[George 2010; Puurunen 2005]. This means purge completeness and dose adequacy are as important as pulse duration, which is why those parameters had to be validated before deposition.

***

### Chamber Pressure

#### Operating Window

ALD oxide processes require viscous-flow conditions, typically 0.1–1 Torr, where carrier gas efficiently transports precursor vapor to the substrate and sweeps byproducts out during purge steps \[Puurunen 2005; Elam 2002]. Below this range (molecular flow regime), carrier gas loses its transport efficiency and purge reliability drops. Based on the recipe survey, the operating window was defined as **250–1000 mTorr**.

#### N₂ MFC Pressure Control

Chamber pressure is controlled by modulating N₂ carrier gas flow through the mass flow controller. Higher flow creates higher chamber pressure against the fixed pumping speed of the scroll pump. Four base pressures were tested, spaced approximately 250 mTorr apart across the operating window.

| N₂ Flow Rate (sccm) | Pressure Registered on GUI (mTorr) | Achieved on Pressure Gage(mTorr) |
| ------------------- | ---------------------------------- | -------------------------------- |
| _13.7_              | 281.73                             | 252                              |
| _34.50_             | 564                                | 499                              |
| _54_                | 855.6                              | 752                              |
| _79.70_             | 1145.82                            | 999                              |

#### Water Vapor Pulse Response

Water vapor was used to characterize pulse dynamics because it is safe, easy to handle, and is one of the two actual process precursors. Understanding pulse response, such as peak pressure, rise time, and decay time is necessary to set appropriate purge durations: if pressure decay is slow, longer purges are needed to ensure precursor clearance before the next pulse.

At each of the four base pressures, pulses were run at three durations (50 ms, 100 ms, 150 ms) with five events per condition. Rise time is defined as the time from valve open to peak pressure; decay time is the time to return to baseline.

| Base P (mTorr) | Pulse (ms) | Peak P (mTorr) | ΔP (mTorr) | Rise (s) | Decay (s) |
| -------------- | ---------- | -------------- | ---------- | -------- | --------- |
| 253            | 50         | 256            | 3          | 4.5      | 41.0      |
| 253            | 100        | 257            | 4          | 5.2      | 19.2      |
| 253            | 150        | 258            | 5          | 4.0      | 55.2      |
| 502            | 50         | 504            | 2          | 3.2      | 13.6      |
| 502            | 100        | 506            | 4          | 3.0      | 31.8      |
| 502            | 150        | 506            | 4          | 3.4      | 27.8      |
| 753            | 50         | 755            | 2          | 2.6      | 30.5      |
| 753            | 100        | 756            | 3          | 2.0      | 11.5      |
| 753            | 150        | 756            | 3          | 2.1      | 8.8       |
| 990            | 50         | 991            | 1          | 1.6      | 9.5       |
| 990            | 100        | 991            | 1          | 1.4      | 12.8      |
| 990            | 150        | 992            | 2          | 1.9      | 18.2      |

At higher base pressures, absolute ΔP per pulse is smaller, so both rise and decay times are shorter. Decay times did not scale cleanly with pulse duration since at 750 mTorr, average decay time actually decreased with longer pulse duration. These inconsistencies are attributed to manual timing inaccuracies and gauge instability at the original 1 Hz sampling rate. The gauge also occasionally failed to return fully to the original base pressure between pulses, stabilizing slightly above it.

Theoretically, pressure decay after a pulse follows: P(t) = P\_base + ΔP·e^(−t/τ), where τ = V/S\_eff (chamber volume / effective pumping speed) \[Elam 2002]. Resolving this exponential quantitatively is important for confirming purge durations are sufficient to prevent gas-phase reactions from the previous precursor.

#### Pressure Sensing — Original Limitation and Improvements

The original pressure sensing setup operated at \~1 Hz with 3-sample averaging per reading, producing \~8 mTorr peak-to-peak noise. Since expected pulse-induced ΔP is only 2–3 mTorr, the signal was undetectable.

A Welch power spectral density analysis of the raw signal showed no dominant frequency components; the noise spectrum was flat (broadband). This ruled out mechanical or pump-related sources and pointed to the sensor electronics and ADC circuitry as the origin. Since the noise was random, statistical averaging was the correct approach.

Initially, a Savitzky-Golay filter (window = 11 points, order = 3) was applied post-hoc to attempt to recover pulse shape from the noisy data. This was a workaround as it smooths while preserving peaks and slopes but does not improve signal quality in real time. The following improvements were then implemented:

* **Sample averaging increased from 3 to 100 per reading.** Noise scales as 1/√N; going from N=3 to N=100 gives a \~5.8× reduction, bringing noise below 2–3 mTorr.
* **Real-time moving average filter** implemented in Arduino code to further smooth the signal without post-processing delay.
* **ADC handling improved** to reduce quantization effects. The Arduino ADC is 10-bit, introducing ±Δ/2 quantization error per reading — a hard floor that averaging cannot fully eliminate, but which no longer dominates after the above improvements.

| Parameter                    | Before                           | After                                 |
| ---------------------------- | -------------------------------- | ------------------------------------- |
| Sampling rate                | \~1 Hz                           | Increased (fill from code)            |
| Samples averaged per reading | 3                                | 100                                   |
| Peak-to-peak noise           | \~8 mTorr                        | <2–3 mTorr                            |
| Pulse ΔP detectable?         | No; buried in noise              | Yes; across full 250–1000 mTorr range |
| Signal processing            | Savitzky-Golay filter (post-hoc) | Moving average (real-time)            |

After these changes, pulse-induced spikes are clearly resolvable across the full operating range, including at \~800 mTorr (worst-case signal-to-noise, where ΔP is smallest). The graph below shows the pulse read out for the water vapor line

<figure><img src="../../../.gitbook/assets/unknown (70).png" alt=""><figcaption></figcaption></figure>

#### Pump-Down

| Metric                  | Value                    |
| ----------------------- | ------------------------ |
| Starting pressure       | \~760 Torr (atmospheric) |
| Final pressure achieved | \~26 mTorr               |
| Total pump-down time    | 7.62 hours               |

The 26 mTorr base pressure is well below the 250–1000 mTorr operating window, confirming that working pressure is set by the N₂ MFC rather than the pump limit.

<figure><img src="../../../.gitbook/assets/unknown (71).png" alt=""><figcaption></figcaption></figure>

***

### Temperature Control

Every heated component must hold its target temperature within ±5°C for the chemistry to behave predictably. If the substrate is too cool, growth rate drops and film quality degrades. If the delivery line has any cold spot below the precursor dew point, Hf(NMe₂)₄ condenses and never reaches the substrate. If the water vapor temperature drifts, the oxidant dose per pulse becomes inconsistent. Four heaters were characterized and stabilized before deposition was attempted.

#### Substrate Heater

Tested at 100, 150, 200, and 250°C with multiple DC supply currents per setpoint. Higher current delivers more power (P = I²R; heater resistance R approximately constant at fixed temperature), giving faster rise time but larger overshoot; more thermal energy is stored in the heater assembly before the controller switches off. Lower current heats more slowly but settles more gently. The right current for operation depends on how much initial overshoot is tolerable for the specific process.

Rise time is defined as 10% to 90% of setpoint; settling time is the time to enter and remain within ±5°C.

| Setpoint (°C) | Current (A) | Rise Time (s) | Overshoot (°C) | Settling (s) | ±5°C met? |
| ------------- | ----------- | ------------- | -------------- | ------------ | --------- |
| 100           | 5.02        | 165.0         | 6.47           | 474.3        | ✅         |
| 100           | 4.69        | 128.7         | 5.75           | 279.3        | ✅         |
| 100           | 3.66        | 245.9         | 3.00           | 312.9        | ✅         |
| 150           | 6.08        | 191.0         | 8.80           | 379.3        | ✅         |
| 150           | 5.08        | 268.8         | 5.73           | 377.9        | ✅         |
| 150           | 4.50        | 315.5         | 6.75           | 420.4        | ✅         |
| 200           | 6.02        | 289.5         | 11.50          | 549.7        | ✅\*       |
| 200           | 4.12        | 641.6         | 3.50           | 799.6        | ✅\*       |
| 250           | 6.54        | 340.4         | 6.60           | 446.8        | ✅\*       |
| 250           | 5.03        | 595.9         | 3.57           | 746.7        | ✅\*       |

The tradeoff is visible in the data. At 200°C: 6.02A gives a 289.5s rise but 11.5°C overshoot ; more than double the ±5°C specification. Reducing to 4.12A cuts overshoot to 3.5°C but extends rise time to 641.6s. For processes where substrate temperature must not exceed the setpoint before steady state, the lower current is required despite the slower ramp.

\* **Only two valid trials at 200°C and 250°C.** During additional trials, the measurement system began producing erroneous readings where temperature continued rising after the system had stabilized, with growing offsets. Two hardware issues were identified:

1. **Loose DC supply terminal connection** causing intermittent contact resistance in the thermocouple signal path. Type K thermocouples produce only \~41 μV/°C; small resistance fluctuations are sufficient to corrupt readings.
2. **Thermocouple junction in direct contact with the metallic wafer plate**, creating a ground loop shared with the heater power circuit.

Both were resolved: the terminal was re-soldered and a ceramic insulating spacer was inserted between the thermocouple junction and the wafer plate to break the ground loop.

#### Delivery Line Heater

The delivery line carries Hf(NMe₂)₄ vapor from the ampoule to the chamber. The line must be held above the ampoule temperature (\~75°C) along its entire length as any cold spot below the precursor dew point causes condensation that blocks delivery. The rated maximum for this delivery line is \~150°C; the initial target setpoint was 120°C.

On first test, the line overshot by \~30°C, reaching \~150°C and oscillating rather than settling at 120°C. This resulted from four compounding factors:

1. **No external insulation:** heat lost rapidly to the environment, forcing the controller to run aggressively.
2. **Bang-bang control oscillation:** on/off switching at the setpoint with no anticipation of lag.
3. **Thermal lag between heater input and thermocouple feedback:** by the time the thermocouple registers the temperature, the line has already overshot.
4. **Heat loss to environment** from uninsulated sections causing the controller to re-engage earlier than needed.

Two fixes were applied:

* **High-temperature silicone foam tubing insulation** (ZUSASSR-T-23 / ZUSASSR-T-19 depending on line diameter) installed along the delivery line. Better insulation increases the thermal time constant, reducing the magnitude of control action needed and eliminating the aggressive overshoot.
* **Trend-based on/off control** replaced bang-bang. Instead of switching strictly at the setpoint, the controller uses the sign of dT/dt to anticipate thermal lag; it turns off slightly before reaching the setpoint and turns back on slightly below it.

|                    | Before                           | After                                   |
| ------------------ | -------------------------------- | --------------------------------------- |
| Setpoint           | 120°C                            | 120°C                                   |
| Rated maximum      | \~150°C                          | \~150°C                                 |
| Actual temperature | \~150°C (+30°C overshoot)        | Within ±5°C                             |
| Control strategy   | Bang-bang (switches at setpoint) | Trend-based on/off (uses sign of dT/dt) |
| Insulation         | None                             | High-temp silicone foam tubing          |

<figure><img src="../../../.gitbook/assets/IMG_2766.heic" alt=""><figcaption></figcaption></figure>

#### Water Vapor Heater (TC3)

H₂O vapor pressure varies with temperature via the Clausius-Clapeyron equation, where small deviations directly change the oxidant dose per pulse. The water vapor cylinder was wrapped with heating tape for active temperature control and insulation tape to reduce thermal gradients and heat dissipation. Thermocouple TC3 was attached directly to the cylinder surface with good thermal contact to ensure accurate readings. Target was 50°C , above room temperature for a stable vapor pressure, well below the 100°C boiling point.

<table><thead><tr><th width="354.1171875">Parameter</th><th>Value</th></tr></thead><tbody><tr><td>Target setpoint</td><td>50°C</td></tr><tr><td>Physical setup</td><td>Heating tape + insulation tape; TC3 mounted on cylinder surface</td></tr><tr><td>Measured range after settling</td><td>45.35–58.45°C</td></tr><tr><td>Stability achieved</td><td>±2°C</td></tr><tr><td>Target stability</td><td>±2°C</td></tr></tbody></table>

#### Precursor Ampoule Heater (TC4) — Hf(NMe₂)₄

The ampoule temperature must stay within a specific window. Below \~60°C, vapor pressure is insufficient to deliver a saturating dose within practical pulse durations \[Hausmann 2002]. Above \~100°C, Hf(NMe₂)₄ begins to thermally decompose before it can react with the substrate \[Hausmann 2002; Kim 2003]. The target of 75°C sits well within the window, providing a good margin below decomposition onset.

The delivery line minimum temperature (150°C) was set above the ampoule temperature (75°C) to ensure no cold spot between ampoule and chamber causes condensation \[Ritala 2002].

| Parameter                   | Value      | Basis                                                   |
| --------------------------- | ---------- | ------------------------------------------------------- |
| Target ampoule temperature  | \~75°C     | Adequate vapor pressure \[Hausmann 2002]                |
| Lower operational bound     | \~60°C     | Insufficient vapor pressure below this \[Hausmann 2002] |
| Thermal decomposition onset | \~100°C    | \[Hausmann 2002; Kim 2003]                              |
| Delivery line minimum       | \~150°C    | Must exceed ampoule temp throughout \[Ritala 2002]      |
| Relay status                | ✅ Restored | After hardware reset                                    |

#### Multi-Heater Simultaneous Operation

All heaters must operate simultaneously without interfering with each other's thermocouple readings. Earlier testing showed that activating one relay caused spurious temperature readings on other channels (crosstalk). After the hardware reset described in the Electrical System section, three channels were confirmed to operate independently:

| TC  | Function          | Setpoint (°C) | Result               |
| --- | ----------------- | ------------- | -------------------- |
| TC2 | Delivery line     | 120           | Stable, no crosstalk |
| TC3 | Water vapor       | 50            | Stable, no crosstalk |
| TC5 | Substrate heater  | 100           | Stable, no crosstalk |
| TC4 | Precursor ampoule | 75            | Stable, no crosstalk |

<figure><img src="../../../.gitbook/assets/unknown (69).png" alt=""><figcaption></figcaption></figure>

Control of all temperatures within target ranges.

***

### Electrical System

#### Failures and Resolutions

Several interconnected hardware failures occurred during testing and were resolved through a full hardware reset.

**Relay failures (TC3, TC4):** The TC3 and TC4 relays would not activate. Diagnosis pointed to faults in the Arduino pin-out controller and jumper wiring. Fix: Arduino replaced, all jumper wires replaced, wiring layout fully rebuilt. Relay function was restored for TC3 and TC4.

**Thermocouple crosstalk (TC3):** After relay function was restored, TC3 showed random fluctuations and crosstalk; readings shifted when its relay activated. This indicated relay-induced electromagnetic interference coupling into the low-level thermocouple signal lines. Most likely causes: improper grounding, relay EMI, or insufficient signal routing separation in the wiring layout.

**Full resolution:** After replacing all wires, switching the Arduino again, checking all shared grounds, and unplugging and replugging all connections, the system operated cleanly. All relays (TC2, TC3, TC5) function correctly and read independently without cross-channel interference.

| Failure                             | Root Cause                                       | Resolution                                                 | Status |
| ----------------------------------- | ------------------------------------------------ | ---------------------------------------------------------- | ------ |
| Relay failures (TC3, TC4)           | Arduino controller faults + jumper wiring        | Arduino replaced; wiring fully rebuilt                     | ✅      |
| Thermocouple crosstalk (TC3)        | Relay-induced EMI into thermocouple signal lines | Full hardware reset; signal routing and grounding improved | ✅      |
| Substrate heater measurement errors | Loose DC supply terminal + TC-plate ground loop  | Terminal re-soldered; ceramic spacer installed             | ✅      |

#### Wiring Diagram

The diagram below shows the current wiring layout after reconstruction. It maps the Arduino, 4-channel K-type thermocouple module, 8-channel relay board, screw terminal breakout, and three thermocouple breakout boards. Thermocouple channels are labeled DL (delivery line), PRC1, PRC2 (precursors), and SH (substrate heater). The side profile shows the physical stack: screw terminal → 4-channel K-type module → Arduino.

<figure><img src="../../../.gitbook/assets/image (402).png" alt=""><figcaption></figcaption></figure>

> This wiring diagram documents the connections within the controls section of the electrical system and serves as a reference for future troubleshooting, maintenance, and system modifications. The diagram is currently incomplete, as the right-side components - including the pressure gauge, DC power supply, voltage regulator for the precursors, and delivery line—are not shown. However, no wiring changes were made to these components during this semester, so future team members can refer to previous documentation if updates or modifications to that section are required later.

***

### Control Software / GUI

ALD recipes involve hundreds to thousands of cycles, each requiring precise timed valve actuation; manual operation is not feasible and introduces timing errors. The GUI was developed to support structured recipe definition and fully automated execution.

The user specifies all parameters upfront: temperature setpoints for delivery line, precursor ampoule, and substrate heater; pulse duration; purge duration; and number of cycles. The system then:

1. Brings all heated components to their setpoints and holds within the tolerance band before starting
2. Executes each cycle's H₂O pulse → N₂ purge → Hf pulse → N₂ purge in sequence
3. Repeats for the specified number of cycles without manual intervention

| Capability                                                                | Status |
| ------------------------------------------------------------------------- | ------ |
| Independent temperature setpoints for delivery line, precursor, substrate | ✅      |
| User-defined pulse duration, purge duration, cycle count                  | ✅      |
| System waits for all heaters to reach setpoint before starting recipe     | ✅      |
| Fully automated sequential execution — no manual steps mid-recipe         | ✅      |
| Extended run >250 cycles verified without instability                     | ✅      |

***

### Deposition Runs

#### Run Conditions

4 runs were performed targeting HfO₂ on 4-inch silicon wafers using the same recipe. We ran different cycle lengths for each deposition run:

* Deposition # 1 (4/17): 180 cycles
* Deposition # 2 (4/22): 103 cycles
* Deposition # 3 (4/23): 50 cycles
* Deposition # 4 (4/30): 70 cycles

| Parameter                       | Value                    |
| ------------------------------- | ------------------------ |
| Target material                 | HfO₂ on 4" silicon wafer |
| Number of cycles                | \~180                    |
| Run duration                    | \~4 hours                |
| Substrate temperature           | 200°C                    |
| Delivery line temperature       | \~150°C                  |
| Hf(NMe₂)₄ precursor temperature | \~75°C                   |
| Base chamber pressure           | \~265–300 mTorr          |

All three heated components held their setpoints stably throughout both \~4 hour runs. Chamber pressure showed regular pulse-induced spikes on every H₂O pulse step, confirming water vapor delivery. On the 4/17 run, no pressure transient was observed during Hf(NMe₂)₄ pulse steps;  the chamber pressure did not respond when the hafnium valve opened, indicating the precursor was not reaching the chamber.

#### Results and Observations

Four deposition runs were conducted throughout the semester to evaluate the thermal stability, precursor delivery behavior, and overall deposition capability of the ALD system. Across all runs, the temperature control and automated recipe execution systems generally performed reliably, with stable heater behavior and repeatable valve sequencing. The primary uncertainties observed throughout testing were associated with precursor delivery effectiveness and the true internal temperature of the precursor bubbler.

**Run 1 - Initial Deposition Trial (\~180 Cycles)**

The first deposition run was conducted under the supervision of Matt using the standard ALD recipe procedure at a precursor bubbler setpoint of approximately 75 °C for the hafnium precursor. During the run, both chamber pressure and temperature readings remained stable, indicating that the automated recipe execution and heater control systems were functioning as intended. However, post-process reflectometry measurements indicated that no measurable film had been deposited on the wafer.

The primary hypothesis following this run was that the actual internal temperature of the precursor cylinder remained below the required vaporization or reaction threshold despite the external thermocouple reading approximately 75 °C. Since the thermocouple was mounted externally near the heater coil, it likely measured the heater surface temperature rather than the true precursor temperature within the cylinder. This observation motivated later modifications to the heater geometry and operating temperatures.

**Run 2 - Increased Heating Coverage and Higher Bubbler Temperature (103 Cycles)**

For the second deposition run, additional heater coil coverage was added near the top region of the precursor cylinder to reduce potential cold spots and improve overall thermal uniformity. The precursor bubbler setpoint was also increased to approximately 85 °C to compensate for the suspected discrepancy between the measured external temperature and the true internal precursor temperature.

Throughout the first approximately 20 cycles, precursor pulses produced little to no observable chamber pressure response. However, beginning around the 21st cycle, the chamber pressure consistently increased by approximately 8 mTorr during each precursor pulse and maintained this behavior for the remainder of the deposition process. This sudden transition suggested that the precursor delivery conditions may have crossed a thermal threshold during operation. One hypothesis is that the precursor initially remained trapped behind a colder region or “cold spot” within the delivery path, and once sufficient heating accumulated internally, precursor vapor began flowing much more effectively, analogous to a river flow suddenly increasing after removal of a blockage.

Although reflectometry measurements indicated film thickness changes after the run, interpretation of these results remained uncertain because the wafer already possessed an existing film layer prior to deposition. As a result, it could not be conclusively determined whether the measured thickness increase was due entirely to new deposition from this trial.

**Run 3 - Repeat Trial Under Similar Conditions (50 Cycles)**

The third deposition run was performed under nearly identical conditions to the second run, including the increased precursor heater coverage and elevated bubbler temperature. In contrast to Run 2, precursor pulses produced much smaller chamber pressure responses, typically only around 1–2 mTorr per pulse rather than the earlier observed 8 mTorr increases.

This reduced pressure response suggested that precursor delivery into the chamber was occurring at a significantly lower rate than during the second trial. Possible explanations include depletion of readily vaporized precursor material, inconsistent internal heating behavior, or persistent cold spots restricting vapor transport. Similar to Run 2, interpretation of reflectometry data remained inconclusive because the wafer already contained a pre-existing film layer before insertion into the chamber.

**Run 4 - Bare Wafer Verification Trial (70 Cycles)**

The fourth deposition run was conducted under conditions similar to Runs 2 and 3, but this time using a bare wafer to eliminate uncertainty associated with pre-existing film thickness. During the deposition process, precursor pulses generated even smaller chamber pressure responses than the previous runs, often showing no measurable increase at all and only occasionally exhibiting pressure jumps of approximately 1 mTorr.

Following deposition, the wafer was analyzed using X-ray reflectometry (XRR). The resulting measurements displayed no clear interference pattern, leading to the reasonable conclusion that no measurable thin film had been deposited during the process. Based on these observations, two primary explanations are currently suspected: either insufficient precursor remained available within the bubbler system, or the system continued to experience cold spot limitations preventing adequate precursor vapor transport into the chamber.

As a result of these findings, the next planned experimental direction will involve operating the system in a more CVD-like regime using lower chamber pressure and longer precursor pulse durations. The objective will be to intentionally maximize precursor exposure and attempt deposition of a comparatively thicker film layer in order to definitively determine whether functional precursor delivery and deposition are occurring within the system.

#### Nanospec Reflectometry Results

Film thickness was measured at multiple spots per wafer using a Nanospec reflectometer configured to "thin oxide on Si" mode with a custom refractive index input of 1.9 (a reasonable estimate for HfO₂). A bare silicon reference wafer was measured alongside each sample. Units: Ångströms.

**Instrument limitations:** The Nanospec used does not have a UV light source, which this measurement mode expects. Additionally, the instrument applies the Cauchy dispersion equation for SiO₂ regardless of the custom refractive index input. At the expected HfO₂ thickness (\~10–30 nm), measurements are qualitative indicators only; sufficient to infer film presence or absence, not for accurate thickness values.

| Sample              | Spot Readings (Å)                     | Interpretation                                                                                                       |
| ------------------- | ------------------------------------- | -------------------------------------------------------------------------------------------------------------------- |
| Bare Si (reference) | 81, 83, 84                            | \~2 nm native SiO₂:  consistent with expectation                                                                     |
| 4/22 - Run #2       | 45, <20, <20, 124, 115, 173, <20, 270 | Highly non-uniform; several spots at or below bare Si baseline. Consistent with absent or non-uniform deposition.    |
| 4/23 - Run #3       | 257, 253, 248, 229                    | Consistent 229–257 Å (\~23–26 nm) across all four spots, well above bare Si baseline. Consistent with film presence. |

At \~1 Å/cycle × 180 cycles, expected thickness is \~18 nm (\~180 Å). The 4/23 readings of 229–257 Å are in rough agreement. A calibrated measurement (XRR or ellipsometry) is required to confirm thickness and composition. An available ellipsometer has not yet been identified on-site.

#### Potential Failure Modes — 4/17 Run

The absence of any Hf pressure transient throughout the 4/17 run is the primary diagnostic. Three explanations are consistent with this observation:

| Failure Mode                                        | Evidence                                                      | Physical Basis                                                                                                                                                                                                                                                     |
| --------------------------------------------------- | ------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| Insufficient precursor delivery: low vapor pressure | No pressure change during Hf valve open events throughout run | Hf(NMe₂)₄ vapor pressure \~0.1 Torr at 70°C \[Hausmann 2002]; if bubbler temperature was insufficient or carrier gas flow through the bubbler was inadequate, the delivered dose would be too low to produce a detectable pressure spike or saturate the substrate |
| Cold spots in delivery line                         | Unheated or inadequately heated sections present              | Any line section below precursor dew point causes Hf(NMe₂)₄ to condense, blocking vapor transport \[Hausmann 2002; Kim 2003]. Cold spots accumulate condensate over many cycles.                                                                                   |
| Precursor source depletion                          | No pressure response at any point in the run                  | Exhausted source produces the same symptom as insufficient delivery                                                                                                                                                                                                |

***

### Film Thickness Measurement

At \~1 Å/cycle, a 180-cycle run produces roughly 18 nm of expected film. Several common techniques have meaningful limitations at this scale. We explored two main methods besides eventually using Nanospecc

**Spectroscopic ellipsometry (SE)** measures Ψ (p/s amplitude ratio change) and Δ (phase shift) as a function of wavelength when polarized light reflects from the sample \[Fujiwara 2007]. A physical optical model of the film stack is fitted to the spectra using Fresnel equations; the thickness minimizing the model-data residual is the film thickness. Non-destructive and highly sensitive to nanometer-scale thickness changes. Requires a valid optical model and known optical constants (refractive index, extinction coefficient) for the film — these may not be established for early runs on a new system. Instrument availability on-site has not yet been confirmed.

**X-ray reflectometry (XRR)** directs a monochromatic X-ray beam at the sample at grazing incidence \[Kiessig 1931; Parratt 1954]. Interference between reflections at the film-air and film-substrate interfaces produces Kiessig fringes whose period directly gives film thickness: d ≈ λ/2Δθ. Full Parratt recursive fitting also extracts film density and interface roughness — useful for confirming the material is actually HfO₂ and not an oxide contaminant \[Daillant & Gibaud 2009]. Non-destructive; no optical model required. Unreliable for films thinner than \~10 nm (insufficient fringes to fit); requires a diffractometer.

<table><thead><tr><th>Method</th><th width="141.12109375">Principle</th><th>Advantages</th><th>Limitations</th><th>Status</th></tr></thead><tbody><tr><td>Nanospec reflectometer</td><td>Optical reflectance fit</td><td>Available; fast; non-destructive</td><td>No UV source for oxide mode; applies SiO₂ model; indicative only</td><td>Used</td></tr><tr><td>XRR</td><td>Kiessig fringe analysis [Kiessig 1931; Parratt 1954]</td><td>Non-destructive; direct thickness + density; no optical model</td><td>Unreliable &#x3C;~10 nm; diffractometer required</td><td>Planned</td></tr><tr><td>Ellipsometry (SE)</td><td>Polarization state change on reflection</td><td>High sensitivity; non-destructive</td><td>Needs optical model + constants; instrument unconfirmed</td><td>To confirm</td></tr></tbody></table>

***

### Bill of Materials

The following bill of materials summarizes the primary components ordered and evaluated during the Spring 2026 semester for the ALD system development project. The first two items are closed-cell silicone foam insulation tubes selected to thermally insulate the delivery line and precursor heating assemblies. These insulation layers were implemented around the heating coils to reduce heat loss to the environment, improve temperature stability, minimize overshoot, and help maintain more consistent precursor and delivery line temperatures during operation. Different inner diameters were selected to accommodate the varying tubing and heater geometries used in the system.

The third item is a precursor cylinder assembly that was identified as a suitable candidate for precursor delivery and storage within the ALD setup. This component was considered as a backup procurement option in the event that a compatible precursor cylinder was not available through existing cleanroom resources. Since a compatible cylinder was ultimately provided by Matt for testing purposes, procurement of this component was deferred.<br>

| # | Part No.     | Description                                                            | Material                  | Dimensions                  | Qty | Link                                                                                                       |
| - | ------------ | ---------------------------------------------------------------------- | ------------------------- | --------------------------- | --- | ---------------------------------------------------------------------------------------------------------- |
| 1 | ZUSASSR-T-23 | Silicone foam tube — delivery line insulation (larger diameter lines)  | Closed-cell silicone foam | 1.25" ID × 1.75" OD × 24" L | 1   | [fixsupply.com](https://www.fixsupply.com/zusassr-t-23-silicone-foam-tube-1-1-4-id-x-1-3-4-od-x-2-ft-long) |
| 2 | ZUSASSR-T-19 | Silicone foam tube — delivery line insulation (smaller diameter lines) | Closed-cell silicone foam | 0.50" ID × 1.00" OD × 24" L | 1   | [fixsupply.com](https://www.fixsupply.com/zusassr-t-19-silicone-foam-tube-1-2-id-x-1-od-x-2-ft-long)       |
| 3 | 98-4021-25G  | Hf(NMe₂)₄ precursor cylinder                                           | —                         | —                           | TBD | [strem.com](https://www.strem.com/product/98-4021-25G)                                                     |

***

### Future Work and Recommendations

Several areas for future improvement and continued development were identified throughout the Spring 2026 work on the ALD system. One major recommendation is transitioning from the current Arduino-based control architecture to a more robust microcontroller platform such as an STM32. While the Arduino provided a rapid and accessible development environment, ongoing electrical reliability issues were observed during operation, including relay-induced thermocouple crosstalk, intermittent noise in pressure measurements, and occasional timing inconsistencies during recipe execution. A higher-performance microcontroller with improved ADC resolution, faster processing capability, better interrupt handling, and more advanced filtering and isolation strategies would likely improve overall system stability and reliability.

Another important area of future investigation involves improving the thermal characterization and heating uniformity of the precursor cylinders. During testing, a discrepancy was observed between the temperature measured by the external thermocouples attached near the heater coils and the actual internal temperature conditions experienced within the precursor cylinder. Since precursor vapor pressure and delivery characteristics are highly temperature-dependent, future students should explore methods to better estimate or directly measure the true internal precursor temperature. Potential approaches include redesigning the heater geometry for more uniform heat distribution, improving thermal contact between the heater and cylinder, adding additional sensing locations, incorporating thermal insulation strategies, or developing calibrated thermal models relating external measurements to internal conditions.

Finally, a more permanent and electrically robust thermocouple isolation strategy should be developed, particularly for the substrate heater assembly. Current implementations rely partially on thermocouple tape and temporary insulation methods, which impose temperature limitations and may contribute to electrical noise or unreliable readings at elevated temperatures. Future work should investigate mechanically secure and electrically isolated mounting approaches using high-temperature ceramic spacers, insulated thermocouple feedthroughs, mica sheets, or alternative high-temperature insulating materials. Improving thermocouple isolation would increase measurement reliability and allow the substrate heater to safely operate at higher temperatures without concern for adhesive degradation or electrical interference.



### References

* George, S.M. _Chem. Rev._ 110, 111 (2010). https://doi.org/10.1021/cr900056b
* Puurunen, R.L. _J. Appl. Phys._ 97, 121301 (2005). https://doi.org/10.1063/1.1940727
* Hausmann, D.M. et al. _Chem. Mater._ 14, 4350 (2002). https://doi.org/10.1021/cm020357x
* Kim, H. _JVST B_ 21, 2231 (2003). https://doi.org/10.1116/1.1622676
* Ritala, M. & Leskëlä, M. _Handbook of Thin Film Materials_ vol. 1 (2002).
* Elam, J.W. et al. _Rev. Sci. Instrum._ 73, 2981 (2002). https://doi.org/10.1063/1.1490410
* Kiessig, H. _Ann. Phys._ 402, 769 (1931). https://doi.org/10.1002/andp.19314020702
* Parratt, L.G. _Phys. Rev._ 95, 359 (1954). https://doi.org/10.1103/PhysRev.95.359
