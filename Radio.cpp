#include "Radio.h"

#ifdef RADIO_PIN

#include <RCSwitch.h>

RCSwitch mySwitch; 

RadioSetup::RadioSetup (){
  
  setupSwitch();
  
 
  }

void RadioSetup::setupSwitch(){


  mySwitch.enableTransmit(RADIO_PIN);


  }

  

void RadioSetup::sendFrequency(unsigned int code){

  mySwitch.send(code, 24);
  Serial.println("Subroutine called upon");
  Serial.println(code);
  delay(50);
  
  
  }

#endif
