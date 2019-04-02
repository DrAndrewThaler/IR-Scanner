# IR-Scanner: A simple device to read codes from IR remote and output them to a small screen. 

This is a basic Arduino-powered device to quickly decode signals from infrared remote controls so that you can better understand how different devices talk to each other and create your own custom remotes. 

![]()*image goes here*

This simple device uses an Adafruit Feather M0 Proto Board and OLED display shield. Assembly requires basic soldering. House the entire unit in a handy 3D-printable case. 

## Bill of Materials

Note: I use Amazon Affiliate links because the small kickback helps me fund more projects like this, but almost everything can be sourced directly through [Adafruit](https://www.adafruit.com/) as well. Some of the items aren't explicitly necessary (you can use a standard mini-breadboard if you don't want to solder) and some only come in batches, so shop around first. These recommendations don't represent the cheapest prices.

|Item|Price|Link|Notes|
|---|---|---|---|
| Adafruit (PID 3403) Feather M0 Express | $25.68 | https://amzn.to/2uE6b2x | The beating heart of the machine |
| Adafruit Short Feather Headers Kit | $7.49 | https://amzn.to/2TSYiAu | stacking headers to connect the two boards |
| Adafruit FeatherWing OLED | $16.39 | https://amzn.to/2uIpvLY | The screen |
| Adafruit IR sensor | $5.03 | https://amzn.to/2WFkeAU | the sensor |
| Lithium Ion Polymer Battery 3.7V 100mAh | $12.95 | https://amzn.to/2Usgy84 | an itty bitty battery |
| Adafruit Breadboard-Friendly SPDT Slide Switch | $5.76 | https://amzn.to/2TPSrfp | you can definitely find this somewhere else cheaper |
| M3 Stainless Steel Nuts and Bolts | $10.99 | https://amzn.to/2LTsiKd | this little kit will see you through dozens of maker projects |

In addition, you will need a basic soldering set-up and a few short wires. 

## Build Guide

1. Solder the stacking headers face up to the Feather M0 board. 

![]()*image*

2. Solder the standard header face down to the OLED display board. 

![]()*image*

3. Snip the red battery wire halfway through it's length and solder it to the terminals of the slide switch (endure one end of the wire is soldered to the middle terminal. Use a little super glue to attach the seitch to the edge of the board. 

![]()*image*

4. Solder the IR sensor through the protoboard, so that the domed face faces out. Flipping the board over, solder the leg closest to the row of 16 pins to digital pin 6. Solder the middle leg to 3V. Solder the leg closest to the rox of 12 pins to 3V. 

![]()*image*

5. Sandwich the battery between the two boards and plug the JST connector in to the battery port. 

![]()*image*

6. Download the [IRLib2]() Library and install it in Arduino IDE. Flash the [IRSniffer.ino]() source code to the Adafruit M0. 

7. 3D print the case and seal everything in with M3 screws. Use a dab of super glue to keep everything from moving around. 

![]()*image*

8. Turn it on and read your remotes!

## Acknowledgements

Developed by [Andrew Thaler](https://twitter.com/DrAndrewThaler). Code adapted from ... Adafruit and IRLib2 ...

Please visit my [Patreon page](https://www.patreon.com/Andrew_Thaler) to support more weird and wonderful projects like this. 
