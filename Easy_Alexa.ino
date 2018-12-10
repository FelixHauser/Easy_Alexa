/*
 To keep in mind when using

Obviously to use this Sketch template you need to have the ESP8266 board definitions on your Arduino IDE.
It has been already reported that in order to be able to use the ESP8266 module family in combination with Alexa's
ecosystem, the board definition on the Arduino IDE has to be 2.3.Any further version will result on the sketch
not working properly.
*/

#include "Alexa.h"
#include "Configuration.h" 

AlexaSetup alexa; 


void setup() {
  
  alexa.initializeDevices();

}



void loop() {
  
  alexa.alexaLooping();

}
