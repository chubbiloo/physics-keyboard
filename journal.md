## Journal

By [Antony](github.com/chubbiloo) and [Ryan](github.com/noir-depresso)

8/11 (1 hour)
together: Today we started brainstorming what keys we wanted to include in the keyboard. We wanted to have it be an add-on (like a macropad) to a standard keyboard, so we decided to exclude symbols (e.g. letters) that could already be typed easily. By referring to a physics formula booklet, we started building this table:

![Character table](images/8-11-img1.png)

8/11 (2 hours)
A: I finished making the list of symbols. We have 43 in total. We will add two shift keys to the keyboard to reduce the amount of keys needed. I also classified each symbol so that R can arrange them so that similar symbols are clustered together. 

8/11 (1 hour)
R: came up with draft designs of the keyboard, how keys are arranged and activated. also how the keyboard itself looks like.
![design 1](images/8-11-img2.jpg)


8/12 (2 hours)
A: set up KiCad, finished schematic and assigned footprints. The key matrix uses 12 GPIO pins for 6 cols and 6 rows. improved keyboard design
![design 2](images/8-12-img2.webp)

8/12 (2 hours)
A: started working on PCB, setting the grid spacing to a factor of 19.05mm allowed alignment of keys by snapping to the grid. the PCB is square with each side being (19.05*6)mm long. A 55x25mm protrusion makes space for mounting the Pico.
Originally, the Pico was meant to be centred at the top side of the keys, but we moved it to the upper left for improved microUSB port accessibility.

![Placement of switch footprints](images/8-12-img1.png)


8/13 (.5 hours)
We called in the morning to figure out how to add text onto keycaps in Tinkercad. We imported a blank keycap from Printables, added text and aligned the text with the keys so that the symbol is embossed on top of it

8/13 (3 hours)
R: imported key cap design and extruded symbols in tinkercad, learning how tinkercad works in the process
![key cap design 1](image/8-13-img1.png)


8/14 (1.5 hours)
A: started routing the PCB. Adjusted pin mapping so that traces do not need to cross.
We also decided to add a right shift key and Unicode/LaTeX toggle key, expanding the keyboard to a 6x6 grid today
![Final schematic](images/8-14-img1.png)
Schematic after pin remapping


8/14 (3 hours)
R: finished key cap design in tinkercad
![key cap design 2](image/8-14-img2.png)



8/16 (3 hours)
R: making the keyboard case in onshape and learning how to use onshape
![keyboard case 1](image/8-16-img1.png)


8/17 (4 hours)
A: finished routing the PCB. Added a 1 mm margin to all sides of the PCB to fit stabilizer mounting holes. Moved the Pico slightly so that microUSB port sticks out. Added ground fill to both faces, ran DRC, checked 3D model

![Stabilizer mounting holes not fitting inside original boundary](images/8-17-img1.png)
Stabilizer mounting holes not fitting within original boundary

![Final PCB routing](images/8-17-img2.png)
Completed PCB routing. Red arrows showed DRC violation (insufficient spacing from edge for diodes) which was fixed by adding margin.

![Final PCB with ground fill added](images/8-17-img3.png)
Final PCB

8/17 (2 hours)
R: made the keyboard plate in OnShape with linear pattern tool
![keyboard case 2](image/8-17-img4.png)

8/18 (4 hours)
A: drafted the README. 

8/18 (3 hours)
together: imported step model of PCB to OnShape, designed case with standoffs for tray mounting that fit threaded inserts. reviewed design and mated all parts in OnShape
![final cad 1](images/8-18-img1.png)
![final cad 2](images/8-18-img2.webp)

8/18 (1 hour)
together: fixed lettering height; aligned lettering with DSA keycaps (our final choice)
![Keycap lettering](images/8-18-img3.png)
