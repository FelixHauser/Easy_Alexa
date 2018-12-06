
#include "Alexa.h"
#include "Configuration.h" 

AlexaSetup alexa; 


void setup() {
  
  alexa.initializeDevices();

}



void loop() {
  
  alexa.alexaLooping();

}
