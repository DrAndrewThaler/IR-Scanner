# IR-Scanner: A simple device to read codes from IR remote and output them to a small screen. 

This is a basic Arduino-powered device to quickly decode signals from infrared remote controls so that you can better understand how different devices talk to each other and create your own custom remotes. 

![](https://github.com/SouthernFriedScientist/IR-Scanner/blob/master/Images/IMG_20190329_184553.jpg)*IR Scanner reading a Visio Remote*

This simple device uses an Adafruit Feather M0 Proto Board and OLED display shield. Assembly requires basic soldering. House the entire unit in a handy 3D-printable case. This uses a universal library, so should be able to read most brands of remote control. 

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

![](https://github.com/SouthernFriedScientist/IR-Scanner/blob/master/Images/IMG_20190402_122241__01.jpg)*Adafruit M0 with stacking headers and IR sensor*

2. Solder the standard header face down to the OLED display board. 

3. Snip the red battery wire halfway through it's length and solder it to the terminals of the slide switch (endure one end of the wire is soldered to the middle terminal. Use a little super glue to attach the switch to the edge of the board. 

![](https://github.com/SouthernFriedScientist/IR-Scanner/blob/master/Images/IMG_20190402_122320__01.jpg)*Undersode of OLED shield showing wire routing, battery, and switch placement*

4. Solder the IR sensor through the protoboard, so that the domed face faces out. Flipping the board over, solder the leg closest to the row of 16 pins to digital pin 6. Solder the middle leg to 3V. Solder the leg closest to the rox of 12 pins to 3V. 

![](https://github.com/SouthernFriedScientist/IR-Scanner/blob/master/Images/IMG_20190402_122301__01.jpg)*Underside of M0 showing wire routing*

5. Sandwich the battery between the two boards and plug the JST connector in to the battery port. 

![](https://github.com/SouthernFriedScientist/IR-Scanner/blob/master/Images/IMG_20190402_124503__01.jpg)*Completed unit fully assembled*

6. Download the [IRLib2](https://github.com/cyborg5/IRLib2) Library and install it in Arduino IDE. Flash the [IRSniffer.ino](https://github.com/SouthernFriedScientist/IR-Scanner/blob/master/IRSniffer.ino) source code to the Adafruit M0. 

7. 3D print the case and seal everything in with M3 screws. Use a dab of super glue to keep everything from moving around. 

![](https://github.com/SouthernFriedScientist/IR-Scanner/blob/master/Images/IMG_20190402_124833__01.jpg)*IR Scanner in housing*

8. Turn it on and read your remotes!

## Acknowledgements

Developed by [Andrew Thaler](https://twitter.com/DrAndrewThaler). Code adapted from demo code provided by Adafruit and IRLib2. 

Please visit my [Patreon page](https://www.patreon.com/Andrew_Thaler) to support more weird and wonderful projects like this. 
