# README.md update history:  
Readme Last Updated: 22 Oct. 2016  
By Gabriel Staples, http://www.ElectricRCAircraftGuy.com  
-My contact info is available by clicking the "Contact Me" tab at the top of my website.  

# Current Code Version & History:  
-see Arduino_TV_B_Gone.ino for version history 

# Description:  
This code is the TV-B-Gone library ported to run on the Arduino.  

# Background:
-see Arduino_TV_B_Gone.ino for latest version history & more details. 

Updated code to fix PROGMEM incompatiblities--now works with latest versions of gcc compiler & Arduino IDE
-with other improvements also
By Gabriel Staples (http://www.ElectricRCAircraftGuy.com)

This port to Arduino is by Ken Shirriff.  
For background details on the Arduino port, how to build it, and how to use it, see:  
 * http://www.arcfn.com/2009/12/tv-b-gone-for-arduino.html and here:
 * http://www.righto.com/2010/11/improved-arduino-tv-b-gone.html (newer)

For information on the original TV-B-Gone see:  
http://www.tvbgone.com/cfe_tvbg_main.php  

The original code is:  
TV-B-Gone Firmware version 1.2  
 for use with ATtiny85v and v1.2 hardware  
 (c) Mitch Altman + Limor Fried 2009  
 Last edits, August 16 2009  

Added universality for EU or NA,
and Sleep mode to Ken's Arduino port
 -- Mitch Altman  18-Oct-2010
Thanks to ka1kjz for the code for adding Sleep
    <http://www.ka1kjz.com/561/adding-sleep-to-tv-b-gone-code/>

With some code from:
Kevin Timmerman & Damien Good 7-Dec-07

# License:  
Distributed under Creative Commons 2.5 -- Attribution & Share Alike

# CIRCUIT:  
-NB: SEE "main.h" TO VERIFY DEFINED PINS TO USE  
The hardware for this project uses an Arduino:  
 Connect an IR LED to pin 3 (IRLED).  
 Connect a visible LED to the pin 13 (or use the built-in LED in many Arduinos).  
 Connect a push-button between pin 2 (TRIGGER) and ground.  
 Pin 5 (REGIONSWITCH) must be left floating for North America, or wire it to ground to have it output European codes.  

# User Manual:  
## Background Settings:  
 * The TV-B-Gone for Arduino can use either the EU (European Union) or the NA (North America) database of POWER CODES  
 * EU is for Europe, Middle East, Australia, New Zealand, and some countries in Africa and South America  
 * NA is for North America, Asia, and the rest of the world not covered by EU  
 * Let pin 5 float for NA codes, or wire it to ground to have it send EU codes  
 * Serial debugging output can be activated by setting "DEBUG 0" to "DEBUG 1" in "main.h"  
 * For 8 MHz Arduinos, define DELAY_CNT as 11 in "main.h," or use 25 for 16 MHz Arduinos.
  * Fine-tune if necessary  
 * All IR codes are defined in "WORLD_IR_CODES.h"  
  * We'd love to have you add more! Just be careful NOT to duplicate codes please!  
## Use:  
 * When the device is first powered on, it will quick-flash (30ms on followed by 150ms off) 3 times if set to output NA (North America) codes, or 6 times for EU (European Union) codes. See the end of the "setup()" function.
 * Once on, the device will enter sleep mode, where it will remain until a button press occurs on the TRIGGER pin, at which point it will wake up and send all of its power codes for the region set according to the state of the REGIONSWITCH pin.
 * Once you press the TRIGGER button (on pin 2), all power codes will be sent sequentially, one after the other. Note that the trigger button debouncing is done in a very primitive fashion, so quick button presses and releases (<200ms) may work best. 
 * Once all codes have been sent (may take around a minute or so), 8 quick flashes will occur to indicate that all power codes have been sent, then the device will go back into sleep mode until another TRIGGER button press occurs.  
 * Between individual power codes, the TRIGGER button is read one time. If it is read as pressed (LOW), it will restart the power code sequence from the beginning. This will be indicated by a ~705ms delay followed by 4 quick-flashes. Since the TRIGGER button is only read between individual codes, rather than continuously, you may need to hold down the button for a half-second to second or so for it to be read properly as pressed. Once the delay and 4 quick-flashes begin, you can release the button. The power codes will restart.




