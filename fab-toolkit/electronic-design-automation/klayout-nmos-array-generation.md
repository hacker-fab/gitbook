# KLayout NMOS Array Generation

This script automates the generation of NMOS transistor arrays in KLayout for testing diffusion-to-diffusion spacing variation. It instantiates a grid of NMOS devices with systematically varied horizontal spacing between cells, enabling process characterization of contact formation across different diffusion separations.

#### How It Works

The script places a 4-row × 5-column array of NMOS devices by calling the existing NMosfet PCell from the design library. Each row contains 5 instances with increasing diffusion-to-diffusion spacing: **2, 4, 6, 8, 10 µm.**

For each device instance, contact holes are automatically inserted into both the source and drain diffusion regions. Contacts are placed at fixed local offsets (±4.5 µm from the center) and tiled along the channel width direction at a pitch of 2 µm.

**Device parameters used:**

| Parameter               | Value           |
| ----------------------- | --------------- |
| Channel Length (L)      | 5 µm            |
| Channel Width (W)       | 50 µm           |
| Diffusion Length        | 40 µm           |
| Contact size            | 0.4 µm × 0.4 µm |
| Contact pitch (along W) | 2 µm            |
| Row spacing (Y)         | 100 µm          |

#### Usage

1. Open KLayout and load your layout with the NMOSFET [PCell library](https://drive.google.com/file/d/1JijkHoVu9quq9iSQ7Mib-bWBgk_0gCtn/view?usp=sharing) loaded
2. Open the Ruby macro editor (Macros → Macro Development)
3. Paste the script — [Array.lym](https://drive.google.com/file/d/1sHIxVvulFolX-yR0vw4UT16fFuowBmVC/view?usp=drive_link)
4. Modify the spacing parameters at the top of the script to suit your experiment:

all\_spacings = \[\
\[2.0, 4.0, 6.0, 8.0, 10.0], # Row 0\
\[2.0, 4.0, 6.0, 8.0, 10.0], # Row 1\
\[2.0, 4.0, 6.0, 8.0, 10.0], # Row 2\
\[2.0, 4.0, 6.0, 8.0, 10.0], # Row 3\
]

5. Run the script. The layout will be cleared and regenerated as `CONTACT_MASK_DESIGN`

#### Output

The script produces a single top cell named `CONTACT_MASK_DESIGN` containing the full array. The view automatically fits to the generated layout upon completion.

<figure><img src="../../.gitbook/assets/截屏2026-05-01 下午4.00.25.png" alt=""><figcaption></figcaption></figure>

#### Limitations

* Contact positions are hardcoded relative to the cell center and may need adjustment if the PCell geometry changes.
