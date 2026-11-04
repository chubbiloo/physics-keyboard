---
title: "Physics Keyboard"
github: "https://github.com/chubbiloo/physics-keyboard/"
description: "A 33-key mechanical keyboard for writing physics and math."
created_at: "2026-08-11"
total_time: "35h 54m"
---

By [Antony Zhang](https://github.com/chubbiloo) (A) and [Ryan Liu](https://github.com/noir-depresso) (R)

---

# August 11, 2026: Brainstorming symbols and keyboard layout
<!-- fabricate:entry 1094 -->

**Together (1 hour):** We started brainstorming which keys to include on the keyboard. We wanted it to be an add-on (like a macropad) to a standard keyboard, so we left out symbols that can already be typed easily (e.g. letters). Using a physics formula booklet as a reference, we started building a table of characters.

**A (2 hours):** Finished the list of symbols, which has 43 in total. We will add two shift keys so we need fewer keys. I also classified each symbol so that R can cluster similar symbols together.

**R (1 hour):** Came up with draft designs for the keyboard: how the keys are arranged and activated, and what the keyboard itself looks like.

![Character table](https://fabricate.hackclub-assets.com/60696725fb1cc59b6f956d73d19a685fe6d2505026dc8e61877f0e6f5e20ebfc/image-png/8-11-img1.png)
*Character table*

![Design 1](https://fabricate.hackclub-assets.com/26f6aad5304e8c853ca9c5e487709c0d2a7aef9b0b614961747c2019fdd7373b/image-jpeg/8-11-img2.jpg)
*Design 1*


---

**Total time spent: 4h**

# August 12, 2026: Schematic and starting the PCB
<!-- fabricate:entry 1095 -->

**A (2 hours):** Set up KiCad, finished the schematic and assigned footprints. The key matrix uses 12 GPIO pins for 6 columns and 6 rows. I also improved the keyboard design.

**A (2 hours):** Started working on the PCB. Setting the grid spacing to a factor of 19.05 mm let the keys snap to the grid so they line up. The PCB is square, with each side (19.05 × 6) mm long. A 55 × 25 mm protrusion makes room for mounting the Pico. At first the Pico was going to be centered above the keys, but we moved it to the upper left so the microUSB port is easier to reach.

![Design 2](https://fabricate.hackclub-assets.com/5aa961121879472e151f8d9950de715d458ccf538939b85346f49ac443fd885e/image-webp/8-12-img2.webp)
*Design 2*

![Placement of switch footprints](https://fabricate.hackclub-assets.com/6f0088a95bb743f0e52248c96c819dbd30692d89c8bd247b40a2dcaf327a5a45/image-png/8-12-img1.png)
*Placement of switch footprints*


---

**Total time spent: 4h**

# August 13, 2026: Designing keycaps in Tinkercad
<!-- fabricate:entry 1096 -->

**Together (0.5 hours):** We called in the morning to figure out how to add text to keycaps in Tinkercad. We imported a blank keycap from Printables, added text, and aligned it with the keys so the symbol is embossed on top.

**R (3 hours):** Imported the keycap design and extruded the symbols in Tinkercad, learning how Tinkercad works along the way.

![Key cap design 1](https://fabricate.hackclub-assets.com/6d8d67f6c0fc3470979ad481d74a1c882533ce75611ddc09ae8fa5a5338032a7/image-png/8-13-img1.png)
*Key cap design 1*


---

**Total time spent: 3h 30m**

# August 14, 2026: PCB routing and keycap progress
<!-- fabricate:entry 1097 -->

**A (1.5 hours):** Started routing the PCB. I changed the pin mapping so traces don't need to cross. We also decided to add a right shift key and a Unicode/LaTeX toggle key, which expanded the keyboard to a 6x6 grid.

**R (3 hours):** Nearly finished the keycap design in Tinkercad. Some special characters don't render properly, so they need to be built from other characters (or imported as SVGs).

![Final schematic](https://fabricate.hackclub-assets.com/7b95751bec4365dadf56fe2134cba693c6a1b29423494825fb42d12309e87d70/image-png/8-14-img1.png)
*Schematic after pin remapping*

![Key cap design 2](https://fabricate.hackclub-assets.com/690f2a9c6cf37bbe29f5e43a165e6c582cacd44e0da50636d2259dd64c530917/image-png/8-14-img2.png)
*Key cap design 2*


---

**Total time spent: 4h 30m**

# August 16, 2026: Starting the keyboard case in Onshape
<!-- fabricate:entry 1098 -->

**R (3 hours):** Started making the keyboard case in Onshape, learning how to use Onshape in the process.

![Keyboard case 1](https://fabricate.hackclub-assets.com/212e6e3bab6c272aa153d21404037f2b31ce70f8811b7e3116f0a0707314f51e/image-png/8-16-img1.png)
*Keyboard case 1*


---

**Total time spent: 3h**

# August 17, 2026: Finishing the PCB and the keyboard plate
<!-- fabricate:entry 1099 -->

**A (4 hours):** Finished routing the PCB. The stabilizer mounting holes didn't fit inside the original boundary, so I added a 1 mm margin to every side of the PCB. I moved the Pico slightly so the microUSB port sticks out. I added a ground fill to both faces, ran DRC and checked the 3D model. DRC flagged diodes that were too close to the edge, and the added margin fixed that.

**R (2 hours):** Made the keyboard plate in Onshape using the linear pattern tool.

![Stabilizer mounting holes not fitting inside original boundary](https://fabricate.hackclub-assets.com/646b4e1c5e14bee943bcaa941aace80de06f913285cc5c67948476ef3062dc90/image-png/8-17-img1.png)
*Stabilizer mounting holes not fitting within original boundary*

![Final PCB routing](https://fabricate.hackclub-assets.com/af83bac86d2c4e478d3b343391a37253b5aa04284c1c734d1f428ef07d84ba04/image-png/8-17-img2.png)
*Completed PCB routing. Red arrows show the DRC violation (diodes too close to the edge), which was fixed by adding the margin.*

![Final PCB with ground fill added](https://fabricate.hackclub-assets.com/ef5791db6b68d09ded42ed00fcaefc25d303c1049f6316e3bd9e1f708845ef03/image-png/8-17-img3.png)
*Final PCB*

![Keyboard case 2](https://fabricate.hackclub-assets.com/e81b19ba280827c95614dea7e9d95e7dd99c67fde042e18616c04c906a4aa61b/image-png/8-17-img4.png)
*Keyboard case 2*


---

**Total time spent: 6h**

# August 18, 2026: Final case assembly, keycap lettering, README and BOM
<!-- fabricate:entry 1100 -->

**A (2.5 hours):** Drafted the README and BOM.

**Together (4 hours):** Imported the STEP model of the PCB into Onshape and designed the case with standoffs for tray mounting. The standoffs take threaded inserts that fit M2x8mm screws. Each of the 5 holes is 3.2 mm in diameter × 4 mm long for the insert portion and 2.2 × 4 mm for the rest. We then mated all the parts in the assembly.

**Together (1 hour):** Fixed the lettering height and aligned the lettering with DSA keycaps, which we chose for the final design.

![Final CAD 1](https://fabricate.hackclub-assets.com/ebe566ff58def5f2e08f0055afb41bcd31df570d60dde1de346921eaed184f76/image-png/8-18-img1.png)
*Final CAD 1*

![Final CAD 2](https://fabricate.hackclub-assets.com/879b41f077177f853ad932f10f17ced9dd2af898c2a3970a25464eb462b51e8f/image-webp/8-18-img2.webp)
*Final CAD 2*

![Keycap lettering](https://fabricate.hackclub-assets.com/9247b1888c605f25bd7f0ae62162f531baa0c4632d757ce47f2f73152552090f/image-png/8-18-img3.png)
*Keycap lettering*


---

**Total time spent: 7h 30m**

# November 1, 2026: Firmware
<!-- fabricate:entry 1820 -->

We originally submitted this project to the Keeb YSWS. After a 6-week pause, we were told to submit our keyboard under Fabricate instead, and that we needed to write firmware.

**A (3.2 hours):** I chose to use QMK because of its support for unicode input. I made a custom layout and a keymap with 4 layers: unicode, unicode-shift, LaTeX and LaTeX-shift. The built in LED on the Pico is turned on when LaTeX is enabled. I used macros for LaTeX output and UC() for unicode output. UC() supports code points up to 0x7FFF, which includes everything that we need. The firmware builds successfully, although we have yet to assemble the keeb and test it.

![Hackatime screenshot](https://fabricate.hackclub-assets.com/86f8fb3ffbc7a9a307e4e6b01e88544f6692179ff29fba4839fcfdc25985d6e1/image-png/11-1-img1.png)
![Hackatime screenshot](https://fabricate.hackclub-assets.com/b305786056789273f947c7b6bd0befe12538d486dff93e914ade526b6425d78c/image-png/11-1-img2.png)
*Hackatime screenshots*

![Building firmware](https://fabricate.hackclub-assets.com/9dfea4a2dffb144df1c6ed4c727fbeff361058c1531fac816a51642f2fb4345c/image-png/11-1-img5.png)
![Building firmware](https://fabricate.hackclub-assets.com/908c6172377573da20d5aae750a23a2762a735d41873928a27c42884a28ca064/image-png/11-1-img4.png)
*Building firmware*

**Total time spent: 3h 12m**

# November 4, 2026: Minor changes to GitHub repo
<!-- fabricate:entry 2163 -->

Changes based on reviewer feedback:
Added whole-assembly.step to the CAD folder to show how the plate, case, switches, keycaps fit together
Added images of schematic, PCB, full assembly to README

![New images in README](https://fabricate.hackclub-assets.com/5c81ac26ce506282d5df4a8c2d463788e9074adee1c339c8ebcbc173ee632164/image-png/image.png)

**Total time spent: 12m**

