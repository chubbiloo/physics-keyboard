---
title: "Physics Keyboard"
github: "https://github.com/chubbiloo/physics-keyboard/"
description: "A 33-key mechanical keyboard for writing physics and math."
created_at: "2026-08-11"
---

By [Antony Zhang](https://github.com/chubbiloo) (A) and [Ryan Liu](https://github.com/noir-depresso) (R)

---

# Aug 11: Brainstorming symbols and keyboard layout

**Together (1 hour):** We started brainstorming which keys to include on the keyboard. We wanted it to be an add-on (like a macropad) to a standard keyboard, so we left out symbols that can already be typed easily (e.g. letters). Using a physics formula booklet as a reference, we started building a table of characters.

**A (2 hours):** Finished the list of symbols, which has 43 in total. We will add two shift keys so we need fewer keys. I also classified each symbol so that R can cluster similar symbols together.

**R (1 hour):** Came up with draft designs for the keyboard: how the keys are arranged and activated, and what the keyboard itself looks like.

![Character table](images/8-11-img1.png)
*Character table*

![Design 1](images/8-11-img2.jpg)
*Design 1*

**Total time spent: 4 hours**

---

# Aug 12: Schematic and starting the PCB

**A (2 hours):** Set up KiCad, finished the schematic and assigned footprints. The key matrix uses 12 GPIO pins for 6 columns and 6 rows. I also improved the keyboard design.

**A (2 hours):** Started working on the PCB. Setting the grid spacing to a factor of 19.05 mm let the keys snap to the grid so they line up. The PCB is square, with each side (19.05 × 6) mm long. A 55 × 25 mm protrusion makes room for mounting the Pico. At first the Pico was going to be centered above the keys, but we moved it to the upper left so the microUSB port is easier to reach.

![Design 2](images/8-12-img2.webp)
*Design 2*

![Placement of switch footprints](images/8-12-img1.png)
*Placement of switch footprints*

**Total time spent: 4 hours**

---

# Aug 13: Designing keycaps in Tinkercad

**Together (0.5 hours):** We called in the morning to figure out how to add text to keycaps in Tinkercad. We imported a blank keycap from Printables, added text, and aligned it with the keys so the symbol is embossed on top.

**R (3 hours):** Imported the keycap design and extruded the symbols in Tinkercad, learning how Tinkercad works along the way.

![Key cap design 1](images/8-13-img1.png)
*Key cap design 1*

**Total time spent: 3 h 30m**

---

# Aug 14: PCB routing and keycap progress

**A (1.5 hours):** Started routing the PCB. I changed the pin mapping so traces don't need to cross. We also decided to add a right shift key and a Unicode/LaTeX toggle key, which expanded the keyboard to a 6x6 grid.

**R (3 hours):** Nearly finished the keycap design in Tinkercad. Some special characters don't render properly, so they need to be built from other characters (or imported as SVGs).

![Final schematic](images/8-14-img1.png)
*Schematic after pin remapping*

![Key cap design 2](images/8-14-img2.png)
*Key cap design 2*

**Total time spent: 4 h 30m**

---

# Aug 16: Starting the keyboard case in Onshape

**R (3 hours):** Started making the keyboard case in Onshape, learning how to use Onshape in the process.

![Keyboard case 1](images/8-16-img1.png)
*Keyboard case 1*

**Total time spent: 3 hours**

---

# Aug 17: Finishing the PCB and the keyboard plate

**A (4 hours):** Finished routing the PCB. The stabilizer mounting holes didn't fit inside the original boundary, so I added a 1 mm margin to every side of the PCB. I moved the Pico slightly so the microUSB port sticks out. I added a ground fill to both faces, ran DRC and checked the 3D model. DRC flagged diodes that were too close to the edge, and the added margin fixed that.

**R (2 hours):** Made the keyboard plate in Onshape using the linear pattern tool.

![Stabilizer mounting holes not fitting inside original boundary](images/8-17-img1.png)
*Stabilizer mounting holes not fitting within original boundary*

![Final PCB routing](images/8-17-img2.png)
*Completed PCB routing. Red arrows show the DRC violation (diodes too close to the edge), which was fixed by adding the margin.*

![Final PCB with ground fill added](images/8-17-img3.png)
*Final PCB*

![Keyboard case 2](images/8-17-img4.png)
*Keyboard case 2*

**Total time spent: 6 hours**

---

# Aug 18: Final case assembly, keycap lettering, README and BOM

**A (3 hours):** Drafted the README and BOM.

**Together (4 hours):** Imported the STEP model of the PCB into Onshape and designed the case with standoffs for tray mounting. The standoffs take threaded inserts that fit M2x8mm screws. Each of the 5 holes is 3.2 mm in diameter × 4 mm long for the insert portion and 2.2 × 4 mm for the rest. We then mated all the parts in the assembly.

**Together (1 hour):** Fixed the lettering height and aligned the lettering with DSA keycaps, which we chose for the final design.

![Final CAD 1](images/8-18-img1.png)
*Final CAD 1*

![Final CAD 2](images/8-18-img2.webp)
*Final CAD 2*

![Keycap lettering](images/8-18-img3.png)
*Keycap lettering*

**Total time spent: 8 hours**
