# LED_Colour_Sensor
An arduino based colour sensor made of one red LED, one green LED and one blue LED.

# Requirements
Arduino (any), red LED, green LED, blue LED Processing (for the front end, optional).

# Usage
LEDs must be as close to each other as possible. 

Red LED anode must be plugged into pin anolog pin ```A0```, and its cathode must be connected to ground. 

Green LED anode must be plugged into pin anolog pin ```A1```, and its cathode must be connected to ground. 

Blue LED anode must be plugged into pin anolog pin ```A```, and its cathode must be connected to ground.  

Run LED_TEST.ino on your Arduino. To calibrate, uncomment line 23 in ```LED_TEST```.ino and comment line 24 in ```LED_TEST.ino```. Shine a bright white light on to all three LEDs. Upload LED_TEST.ino to your arduino. Record down the readings in the serial monitor. Then, take these values, and replace: 

Line 20, with ```float rel_r = (r/<r value with white light>)*255;```

Line 21, with ```float rel_g = (r/<g value with white light>)*255;```

Line 22, with ```float rel_b = (r/<b value with white light>)*255;```

Once calibrated, comment line 23 in LED_TEST.uno and uncomment line 24 in ```LED_TEST.ino```. Upload ```LED_TEST.ino``` to your arduino.

For using the processing script, download Processing from processing.org, and then run the program called, ```coloursensorarduino.pde``` with processing. Be sure to change the port that your arduino is connected to in line 7. Using this program is optional. It simply helps visualise the output of the sensor.


