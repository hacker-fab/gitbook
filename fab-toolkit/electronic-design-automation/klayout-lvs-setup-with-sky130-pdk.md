# KLayout LVS Setup with Sky130 PDK

Install the Efabless Sky130 package through the KLayout Salt Package Manager. It provides the layer properties and technology files needed to map existing PCell scripts to standard GDS layers. This bridges the custom Ruby-based layout tools with the Sky130 fabrication standard.

<figure><img src="../../.gitbook/assets/unknown (148).png" alt=""><figcaption></figcaption></figure>

### **Sky130-Compatible PCell Library**

This KLayout PCell library implements NMOS, PMOS, substrate tap, and pin structures using official Sky130 layer definitions. It enables layout-vs-schematic (LVS) verification against the Sky130 PDK by ensuring that all drawn geometry maps to recognized layer indices.

#### Installation

1. Open KLayout and navigate to Macros → Macro Development.
2. Paste the script — [sky130\_pcell\_library](https://drive.google.com/file/d/1JrS10Yb_4Rh4jNhuuRIXCjsD_cUkphao/view?usp=drive_link).
3. Run the script. The library `Sky130_PDK` will be registered and available in the PCell browser.
4. To add PCell components, click “Instance.” To select cells from the PCell library, click “Library” and select “Sky130\_PDK - Sky130 Lib.”
5. If you run it again, the script automatically removes the previous version of the library.

#### Layer Mapping

All shapes are drawn on Sky130-standard layers:

| Layer Name | Layer/Datatype | Purpose                            |
| ---------- | -------------- | ---------------------------------- |
| Diffusion  | 65/20          | Active region (source, drain, tap) |
| Poly       | 66/20          | Gate electrode                     |
| NSDM       | 93/44          | N-type source/drain implant        |
| PSDM       | 94/20          | P-type source/drain implant        |
| LI Contact | 66/44          | Local interconnect contact         |
| LI         | 67/20          | Local interconnect                 |
| Mcon       | 67/44          | Metal contact                      |
| Metal 1    | 68/20          | First metal layer                  |
| M1 Pin     | 68/16          | Metal 1 pin                        |

#### **NMosfet**

Draws an NMOS transistor with diffusion, an NSDM implant, and a poly gate. The source and drain each connect through a contact stack (LI Contact → LI → Mcon → Metal 1). An optional `gate_tap` parameter adds a poly-to-Metal 1 connection above the gate.

**Parameters:**

| Parameter  | Default | Description               |
| ---------- | ------- | ------------------------- |
| `l`        | 0.15 µm | Channel length            |
| `w`        | 1.0 µm  | Channel width             |
| `dl`       | 0.5 µm  | Diffusion length          |
| `gate_tap` | false   | Add gate metal connection |

<figure><img src="../../.gitbook/assets/截屏2026-05-01 下午5.57.27.png" alt=""><figcaption></figcaption></figure>

#### **PMosfet**

This structure is identical to NMosfet but uses a PSDM implant instead of NSDM. The gate tap sits below the gate poly instead of above it.

**Parameters:** Same as NMosfet.

<figure><img src="../../.gitbook/assets/截屏2026-05-01 下午5.57.34.png" alt=""><figcaption></figcaption></figure>

#### **Tap**

Draws a substrate or well contact. A small diffusion rectangle uses either an NSDM or PSDM implant, depending on the `type` parameter, with a single contact stack at the center.

**Parameters:**

| Parameter | Default | Description                                      |
| --------- | ------- | ------------------------------------------------ |
| `type`    | "N"     | <p>"N" for nwell tap</p><p>"P" for pwell tap</p> |
| `w`       | 0.5 µm  | Width                                            |
| `l`       | 0.5 µm  | Length                                           |

<figure><img src="../../.gitbook/assets/截屏2026-05-01 下午5.58.11.png" alt=""><figcaption></figcaption></figure>

#### **Pin**

Places a Metal 1 pin marker (layer 68/16) with a text label for LVS port identification.

**Parameters:**

| Parameter | Default | Description     |
| --------- | ------- | --------------- |
| `label`   | "PIN"   | Port label text |

<figure><img src="../../.gitbook/assets/截屏2026-05-01 下午6.07.42.png" alt=""><figcaption></figcaption></figure>

#### Relationship to LVS

This library is a prerequisite for LVS in KLayout. By using Sky130-standard layer numbers, the generated GDS can be read by the Sky130 DRC/LVS rule decks. The `Pin` PCell is required for net extraction. The LVS tool cannot identify port connections without correctly placed pin markers on the appropriate layer.

#### LVS Verification

The following runscript [lvs\_script](https://drive.google.com/file/d/1NidiFJw1w8UakgCPoJxF5m18Xt7pnS3r/view?usp=drive_link) performs LVS verification in KLayout using the Sky130 layer stack. It loads a GDS layout, extracts a netlist, and compares it against a reference SPICE schematic.

**Layer Derivation**

The script derives device-relevant regions from the raw layer inputs:

| Derived Layer | Definition      | Meaning              |
| ------------- | --------------- | -------------------- |
| `n_diff`      | diff ∩ nsdm     | N-type active region |
| `p_diff`      | diff ∩ psdm     | P-type active region |
| `ngate`       | n\_diff ∩ poly  | NMOS gate            |
| `pgate`       | p\_diff ∩ poly  | PMOS gate            |
| `nsd`         | n\_diff − poly  | NMOS source/drain    |
| `psd`         | p\_diff − poly  | PMOS source/drain    |
| `ntie`        | n\_diff ∩ nwell | N-type well tie      |
| `ptie`        | p\_diff − nwell | P-type substrate tie |
| `psub`        | extent − nwell  | P-substrate region   |

**Connectivity**

The full metal stack connectivity is defined from poly up to Metal 1, with pin labels attached at the top:

&#x20;                                              poly → licon → li → mcon → m1 → m1\_pin

Metal 1 pin markers (layer 68/16) are read in as `m1_pin` and associated with `m1` via `labels()`, enabling the LVS tool to match net names between the layout and schematic. Substrate connections are handled globally: `psub` is tied to net `GND`.

**Device Extraction**

Two device types are extracted using Sky130 standard cell names:

| Device | Sky130 Name               | Bulk  |
| ------ | ------------------------- | ----- |
| NMOS   | `sky130_fd_pr__nfet_01v8` | psub  |
| PMOS   | `sky130_fd_pr__pfet_01v8` | nwell |

**Running LVS**

1. Update the file paths in the script for your GDS and SPICE schematic:

```ruby
source("/path/to/layout.gds", "TOP")
schematic("/path/to/schematic.spice")
target_netlist("/path/to/extracted_netlist.cir")
```

2. Open KLayout and run the script via Macros → Macro Development
3. Results are written to `lvs_result.lvsdb` and can be reviewed in the KLayout LVS browser
4. The extracted netlist is saved to the path defined in `target_netlist()`

**Results: CMOS Inverter LVS**

The runscript was validated on a CMOS inverter layout consisting of one NMOS and one PMOS.

<figure><img src="../../.gitbook/assets/截屏2026-05-01 下午8.18.09.png" alt=""><figcaption></figcaption></figure>

The reference schematic used for comparison:

<figure><img src="../../.gitbook/assets/截屏2026-05-01 下午8.18.52.png" alt=""><figcaption></figcaption></figure>

<figure><img src="../../.gitbook/assets/截屏2026-05-01 下午8.19.31 (1).png" alt=""><figcaption></figcaption></figure>

Extracted netlist output:

<figure><img src="../../.gitbook/assets/截屏2026-05-01 下午8.20.49.png" alt=""><figcaption></figcaption></figure>
