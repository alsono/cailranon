# introduction
a little wee railgun design i've came up with theres a 5% chance this thing explodes every time you shoot with it <br>
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
### printing
first set (or order) these parts to 3d print while you work on the hw:
- the main body
![mainbody]()
- the cover
![cover]()
- the barrel (if your printer is too small you can split it into 2 and glue it together) <br>
![barrel]()
note: ideally you should print the barrel laying down so its way more sturdy and doesn't break off <br>
### soldering
solder the components so it looks like this (arduino nano on the bottom) <br>
![pcb3d]()
now solder a wire to each of these <br>
![solder 2 wires][]
run said wires through here <br>
![run them switch]()
and then solder them to the switch like so <br>
![solder them to switch]()
 next solder a 5v battery to the 5v pin on the nano (run the connection through here)
 ![]()
 and (bear with me) hot glue it to the side <br>
 next grab the 3 relays and wire them to these (relay part pointing down from it) <br>
![wire them relay]()
run the cable through these <br>
![holerelay]()
and (bear with me) hot glue them here <br>
![to this]()
grab 2 12V batteries and wire them in series and then wire them here (- is down + is up) and make sure the wire is long enough for you to carry them in a bag <br>
![24v]()
last step: <br>
grab 3 of the longest copper wires you can find ideally 1.25mm and run the following equasion <br>

the more wire you have the better just don't over do it <br>
pass the 3 wires from the front through these two holes <br>
![wire through this coils]()
solder said wires here <br>
![coilshidiodeside]()
run [(your wire length) - 1612mm]/192.71786 on your calculator <br>
the number you get is the amount of turns each coil gets, hope you got a lot of wire!! <br>
do the amount of turns you got on these with the topmost wire you soldered to the diodes around these parts <br>
![wraparoundwire1]()
drip down superglue onto each coil to both lock it in place and make sure it doesn't short out if the wax layer is burnt off due to usage <br>
now after running it back through the same hole solder it to this part
![coil1torelay]