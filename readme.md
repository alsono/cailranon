# introduction
a little wee railgun design i've came up with theres a 5% chance this thing explodes every time you shoot with it <br>
![fih](https://github.com/alsono/cailranon/blob/main/resources/fullbuild.webp) <br>
# how to use
load it up like a musket with the metal pellets they use for slingshots, aim at your target and press the trigger, it should make a loud ass beep as it shoots <br>
# what to use this for?
- NOT killing people 
- shooting at soda cans
- killing tomatoes/ref
# warning i am not legally accounted with any harm caused from this outside its intended use or during malfunction
## tools you'll need
- soldering iron and solder
- superglue (bear with me)
- hot glue gun (bear with me here)
- acess to a 3d printer (you can use jlc3dp)
## parts you'll need
check out the bom  (bill of materials)
## how to build
## software
setup steps:
- download arduino ide
- download the file in railgunsoftware
- run it with arduino ide
- attach your arduino nano to your pc
- press the checkmark on the top left and wait for it flash
### printing
first set (or order) these parts to 3d print while you work on the hw:
- the main body with the cover <br>
![mainbody](https://github.com/alsono/cailranon/blob/main/resources/gun.webp) <br>
- the barrel (if your printer is too small you can split it into 2 and glue it together) <br>
![barrel](https://github.com/alsono/cailranon/blob/main/resources/barrel.webp) <br>
note: ideally you should print the barrel laying down so its way more sturdy and doesn't break off <br>
### soldering
solder the components so it looks like this (arduino nano on the bottom) <br>
![pcb3d](https://github.com/alsono/cailranon/blob/main/resources/pcb.webp) <br>
now solder a wire to each of these <br>
![solder 2 wires](https://github.com/alsono/cailranon/blob/main/resources/solder%202%20wires%20to%20these%20parts.png) <br>
run said wires through here <br>
![run them switch](https://github.com/alsono/cailranon/blob/main/resources/run%20them%20through%20here.webp) <br>
and then solder them to the switch like so <br>
![solder them to switch](https://github.com/alsono/cailranon/blob/main/resources/and%20then%20solder%20them%20to%20the%20switch%20like%20so.png) <br>
 next solder a 5v battery to the 5v pin on the nano (run the connection through here) <br>
 ![porp](https://github.com/alsono/cailranon/blob/main/resources/run%20usb%20here.png) <br>
 and (bear with me) hot glue it to the side <br>
 next grab the 3 relays and wire them to these (relay part pointing down from it) <br>
![wire them relay](https://github.com/alsono/cailranon/blob/main/resources/wire%20them%20to%20this%20(relay).png) <br>
run the cable through these <br>
![holerelay](https://github.com/alsono/cailranon/blob/main/resources/through%20this%20relay.png) <br>
and (bear with me) hot glue them here <br>
![to this](https://github.com/alsono/cailranon/blob/main/resources/to%20this.png) <br>
grab 2 12V batteries and wire them in series and then wire them here (- is down + is up) and make sure the wire is long enough for you to carry them in a bag <br>
![24v](https://github.com/alsono/cailranon/blob/main/resources/battery.png) <br>
last step: <br>
grab 3 of the longest copper wires you can find ideally 1.25mm and run the following equasion <br>

the more wire you have the better just don't over do it <br>
pass the 3 wires from the front through these two holes <br>
![wire through this coils](https://github.com/alsono/cailranon/blob/main/resources/wire%20through%20this%20coils.png) <br>
solder said wires here <br>
![coilshidiodeside](https://github.com/alsono/cailranon/blob/main/resources/coilshidiodeside.png) <br>
run [(your wire length) - 1612mm]/192.71786 on your calculator <br>
the number you get is the amount of turns each coil gets, hope you got a lot of wire!! <br>
do the amount of turns you got on these with the topmost wire you soldered to the diodes around these parts <br>
![wraparoundwire1](https://github.com/alsono/cailranon/blob/main/resources/wraparoundwire1.png) <br>
drip down superglue onto each coil to both lock it in place and make sure it doesn't short out if the wax layer is burnt off due to usage <br>
now after running it back through the same hole solder it to this part <br>
![coil1torelay](https://github.com/alsono/cailranon/blob/main/resources/coil2relay.png) <br>
repeat the above 2 more times for the other 2 wires (don't put the coils on top of eachother i meant put wire 2 on every 3rd spot without wire already starting from the 2nd)
# qna
"why don't you hold stuff down with bolts?" gun explodes <br>
"whys there no relay module in the demonstrations?" i could not for the life of me find one and i've spent too much on this project to make one 
## stuff for nerds
the schematic used you can find it in pcb <br>
![dsa](https://github.com/alsono/cailranon/blob/main/resources/schem.webp)<br>
the pcb design wiring <br>
![cbp](https://github.com/alsono/cailranon/blob/main/resources/pcb2d.webp)<br>
# demo links
- [onshape 3d model](https://cad.onshape.com/documents/b5d65689f200aad3e485e3da/w/5ed7d26aa7ff4d9a5b7cf364/e/11ed56f53a2aa773af70aec3)
- [pcb](https://kicanvas.org/?repo=https%3A%2F%2Fgithub.com%2Falsono%2Fcailranon%2Fblob%2Fmain%2Fpcb%2Frailgun.kicad_pro)
