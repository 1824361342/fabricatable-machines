# Humphrito - Medium format CNC mill
*December 2017, by Jakob Nilsson and Jens Dyvik*

A **medium** sized gantry based CNC machine with a work volume of 63x610x1220mm. 
The work volume is choosen to be the area of a quarter of a standard 1220x2400mm plywood/MDF plate stock and to be able to mill standard  50 mm XPS insulation foam blocks.

**Machine sizes reference table:**
* [Hattori](https://github.com/fellesverkstedet/fabricatable-machines/blob/master/hattori-small-format-cnc/README.md)  - Small size
* [Humphrey](https://github.com/fellesverkstedet/fabricatable-machines/blob/master/humphrito-medium-format-cnc/README.md) - Medium size (this machine)
* [Humphrey](https://github.com/fellesverkstedet/fabricatable-machines/blob/master/humphrey-large-format-cnc/README.md) - Large size


### Latest developments:

**First version kit has been fabricated, not yet assembled**

#### Video of the parts in the kit

[![YOUTUBE LINK](img/youtube_link.png)](https://www.youtube.com/watch?v=Xjq5qzolGBw&t=1s)


#### Manufacturing pictures


![](img/foot.jpg "gantry foot")
![](img/gantry_back.jpg)
![](img/gantry_iso.jpg)
![](img/gantry_side_on_y_axis.jpg)
![](img/milling_16mm.jpg)
![](img/pinions.jpg)
![](img/torsion_box_wo_back.jpg)
![](img/electronics.jpg "Electronics")

#### Model files
##### Fusion 360
To view the .f3z fusion360 archive files: 
Open Fusion360. In the data panel, choose a project and upload the file with the "Upload button".
The files can now be opened as any other of your projects from your data panel

Alternatively: Use these links to view online
http://a360.co/2BbxOAL - Base and gantry 
http://a360.co/2DqlCCk - X-carriage, Z axis and POM parts 
http://a360.co/2Bdz5r2 - Full assembly with spindle and motors, also fully jointed

##### Other 3D software
Use the .step files

#### Whats in the files

![](img/assy_and_cut_sheet1.JPG "The base and gantry assembled and as cutsheets")
Please note that you need to add extra clearance to the 8 mm holes to make assembly easier. I reccomend doing that in CAM. 
The padding for all the holes in the 16 mm sheet is controled by a parameter called "finger_pad16" and the model updates if you tune it.

![](img/assy_and_cut_sheet2.JPG "The X carriage and the Z axis assembled and as cutsheet. Also shows all the POM parts.")
As you can see there is lots left of the 8 mm sheet that I made the Z-axis and X-carriage from. I made all the glide blocks and pinions from a 12 mm POM sheet of a peculiar shape. 
![](img/overview.JPG "Full assembly")

Full assembly with spindle and motors, also fully jointed
![](img/x-carriage.JPG "The X carriage")
The X carriage
![](img/z-axis.JPG "The Z axis with spindle mounting holes and trapped nuts on the back.")
The Z axis with spindle mounting holes and trapped nuts on the back.

### BOM
*(bill of materials)*

**Materials**
* 1.2x sheets of 8mm high quality MDF *(we like [Valchromat](http://www.valchromat.pt/distribuidores.aspx?menuid=338) and [Spanolux](https://www.spanolux.com/en/solutions/black-mdf))*
* 1x sheets of 16mm high quality MDF (can be replaced by more 8mm if you tweak the design)
* *Alternatively additional 8mm aluminum if you want make high quality long lasting chamfer rails. We recommend that you make the rails from HDF first, then replace them with aluminum versions if you meet performance limitations*
* 12mm POM/Delrin for milling pinions *(pinions can also be 3D printed, but precision and performance will be reduced)*
* Glideblocks can be milled from 8mm aluminum or HDF. Apply [PTFE tape](https://www.amazon.co.uk/gp/product/B00DE2RUMC/ref=oh_aui_detailpage_o00_s00?ie=UTF8&psc=1) to the glideblock surfaces for a smooth, wear resistant and replaceable bearing surface
* *Alternatively the glideblocks can also be milled from the same POM/Delrin plastic stock as the pinions*
* Small piece of aluminum for homing/probing milling bit with Z axis
* Some type of transparent plastic and wood sheets to build a safety enclosure

**Fasteners**
* 100 of 5x50 mm wood screw with 30 mm threads. Not fully threaded. For Gantry and Torison box. [link](https://www.clasohlson.com/no/Forsenket-treskrue-EFZ/Pr409566028)
* 50 of 5x25 mm wood screws, fully threaded. For X and Y Rails. [link](https://www.clasohlson.com/no/Forsenket-treskrue-EFZ/Pr409566028)
* 32 of M5x16 machine screws. For attaching motors and motor plates.
* 8 of M5x20 machine screws. For attaching the Z-rail. (Could be changed to wood screws.)
* 24 of M5x25 machine screws. For attaching the glide blocks.
* 12 of M5x10 set screws. For attaching the pinions. (12 mm is OK.)
* 50 of M5 nuts
* 60 of big M5 washers (max 15 mm outer diameter)
* 8 of M6x35 machine screws. For attaching the spindle.
* 8 of M6 nuts.
* Wood glue for the gantry and torsion box.

**Motors and end-effectors**
* 4x [JMC iHSS57-36-20](http://www.jmc-motor.com/products.php?cid=248&id=118) closed loop stepper motors - [Aliexpress link](https://www.aliexpress.com/store/product/NEMA-23-2N-m-283ozf-in-Integrated-Closed-Loop-Stepper-motor-36VDC-JMC-iHSS57-36-20/1932111_32712473144.html?spm=2114.12010612.0.0.652b10ccMEcLrM)
* 1x [800watt air cooled spindle](https://www.aliexpress.com/store/product/Square-0-8KW-Air-cooled-Spindle-motor-ER11-24000rpm-400Hz-ENGRAVING-MILLING-GRIND-6-5A/907217_32665487318.html?spm=2114.12010612.0.0.54a41c927Yz5F6)
* 1x [1500watt VFD](https://www.aliexpress.com/store/product/Variable-Frequency-Drive-VFD-Inverter-1-5KW-2HP-220V-7A/907217_695200328.html?spm=2114.12010612.0.0.3b24f1efj9cBe2)*(variable frequency drive)*
* *[Alternative spindle for high speed milling with small bits](https://www.aliexpress.com/item/250w-40000rpm-ER8-Brushless-spindle-motor-MACH3-driver-DC36V-for-CNC-drilling-milling-carving-kits/32757165445.html?spm=a2g0s.13010208.99999999.271.VrrmR0) (untested)* 

**Sensors**
* 3x [Proximity switches](https://www.aliexpress.com/store/product/10PCS-inductive-proximity-sensor-SN04-N-three-wire-NPN-normally-open-Waterproof/907217_1939241212.html?spm=2114.12010612.0.0.43e2fadfhDJbTT)*(10 pack)*

**Cables**
* Six lead wire for wiring motors and proximity switches to control board *(step, direction, enable, alarm, ground and proximty switch signal)*
* Two lead wire for carrying 36v power to motors and proximity switches
* Four lead VDF cable
* Single lead wire for aluminium homing plate and spindle circuit
* Two lead wire for carrying 220v from wall outlet to power supply and VFD *(via contactor for safety)*

**Safety**
* E-Stop
* Sensor on transparent door in front of the machine
* Contactor for killing power to Motors and VFD when the safety door is open
* Hinges for safety door
* Locking mechanism for safety door
* See our [European shopbot intallations](https://github.com/fellesverkstedet/European-ShopBot-installations) repo for ongoing research into safe and convenient installations of milling machines

**Controlling the machine**
* 1x [Arduino UNO](https://store.arduino.cc/genuino-uno-rev3) using the [grbl firmware](https://github.com/gnea/grbl/wiki/Connecting-Grbl). [Use this version of GRBL](https://github.com/fellesverkstedet/fabricatable-machines/raw/master/humphrey-large-format-cnc/GRBL_Spindle_ENABLE.zip)
* 1x [GRBL screw terminal shield](https://www.tindie.com/products/18robots/grbl-compatible-cnc-shield-for-arduino/) 
* *Alternative control board is the awesome [Replicape](https://www.thing-printer.com/product/replicape/), removes the need for a dedicated computer to run the machine*
* Use [Universal Gcode sender to control the machine](http://winder.github.io/ugs_website/)


**Miscellaneous**
* 1x Power supply (we recommended 36v for the iHSS57 steppers)
* 2x E-chains or peasant style flexible strip of plastic

### Wiring notes

* Spindle Power supply interface: Professional aviation Interface, Interface 1234 marked 123 respectively connected to the inverter output end of the (U, V, W), 4 ground wire this interface must be safe ground. 
* Suggestion: Diodes should be added to prevent flow of current from the proximity switches signal wire to the arduino. This will preventuse the LED on the switch to be always on instead of just when it detects something. The sensor will function correctly without doing this and the arduino seems to survive it but I think it's better to prevent it by installing a diode. Why I think this happens: The sensor signal wire is pulled high to 36V (or the power supply voltage) inside the sensor package and the arduino pins are pulled high to the USB 5V with 20kOhm internal pull up resistors. They share the ground.
* Wire the VFD to the arduino: VI to PWM, FOR to SPINDLE DIRECTION, ACM and DCM to GROUND.

![VFD](VFD_wires.jpg)
* **Set these parameters on the VFD*
 * pd000 = 0 
 * pd001 = 1 
 * pd002 = 1
 * PD005 = 400
 * pd007 = clear
 * pd014 = 2
 * pd015 = 2
 * pd070 = 1
 * jumper leftmost (VI to center)
 * PD011 = 0 Don't set a minimum frequency on the VFD, it will not allow it to turn off then. 
 * Don't set a minumum RPM in the firmware either, that moves the starting voltage of the PWM and messes up the RPM control.
 
### Screw-and-glue joints for Valchromat
I have deviced a way of removing the need for clamps when glueing milled valchromat parts together. The parts are slotted with the CNC so that you can screw them together from the side without them instantly cracking. Milled parts can be assembled using finger joints and then gently screwed together with a cordless electric screwdriver on a low torque setting. This screw joint will fail if you try to torque it very hard so only use it to provide a good clamping force for the glue to set.
![](img/experiment/screw_locked_finger_joint_test.jpg)
[Read more about screw-and-glue experiments](experiment.md)

## Future improvements
* Can the Y range be increased so that we have acces to the work area above the gantry in resting position?

## Safety and human interaction

The machine has many moving parts. It should be mounted inside an enclosure so that no-one can reach in and get fingers trapped or touch a powered spindle. All power should be cut when the enclosure is open. Cutting the power means that the gantry wants to slide down to the bottom, making tool change awkvard. Therefore a spring could be used to keep the gantry somewhere where the spindle end is easy to reach. (A counter weight increases the mass that has to be accelerated.)

**User safety rules:**
* Mount the machine securely so that it can not fall over under operation.  
* Needs to be safe when power is removed 
* Connect emergency stop button so that it cuts all power in an easy to reach place

## Concept Images

![stock.JPG](img/stock.JPG "top 8mm bottom 16 mm valchromat")
![front.JPG](img/front.JPG "front view")
![side.JPG](img/side.JPG "side view")
![assy.JPG](img/assy.JPG "top view")
![assy.JPG](img/humphrito-core-platform.jpg "Rhino model")
![assy.JPG](img/humphrito-sketch-on-pallet.jpg "Rhino model")
![assy.JPG](img/humphrito-sketch-on-pallet2.jpg "Rhino model")
