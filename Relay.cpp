#include "Relay.h"




RelaySetup::RelaySetup (){
  
  setupRelayPins();
 
  }


void RelaySetup::setupRelayPins(){

#ifdef RELAY_PIN_DEVICE_01
  pinMode (RELAY_PIN_DEVICE_01, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_01, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_02
  pinMode (RELAY_PIN_DEVICE_02, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_02, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_03
  pinMode (RELAY_PIN_DEVICE_03, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_03, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_04
  pinMode (RELAY_PIN_DEVICE_04, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_04, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_05
  pinMode (RELAY_PIN_DEVICE_05, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_05, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_06
  pinMode (RELAY_PIN_DEVICE_06, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_06, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_07
  pinMode (RELAY_PIN_DEVICE_07, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_07, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_08
  pinMode (RELAY_PIN_DEVICE_08, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_08, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_09
  pinMode (RELAY_PIN_DEVICE_09, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_09, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_10
  pinMode (RELAY_PIN_DEVICE_10, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_10, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_11
  pinMode (RELAY_PIN_DEVICE_11, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_11, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_12
  pinMode (RELAY_PIN_DEVICE_12, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_12, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_13
  pinMode (RELAY_PIN_DEVICE_13, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_13, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_14
  pinMode (RELAY_PIN_DEVICE_14, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_14, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_15
  pinMode (RELAY_PIN_DEVICE_15, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_15, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_16
  pinMode (RELAY_PIN_DEVICE_16, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_16, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_17
  pinMode (RELAY_PIN_DEVICE_17, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_17, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_18
  pinMode (RELAY_PIN_DEVICE_18, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_18, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_19
  pinMode (RELAY_PIN_DEVICE_19, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_19, LOW);
#endif
#ifdef RELAY_PIN_DEVICE_20
  pinMode (RELAY_PIN_DEVICE_20, OUTPUT);
  digitalWrite(RELAY_PIN_DEVICE_20, LOW);
#endif
 
  }


void RelaySetup::onOffRelay(unsigned int relayPin, unsigned int delayTime){


  digitalWrite(relayPin, HIGH);
  delay(delayTime);
  digitalWrite(relayPin, LOW);
  delay(50);
  Serial.println("Relay switched");
  
  
  }

  void RelaySetup::durableRelay(unsigned int relayPin, bool highOrLow){

    if (highOrLow==true){
      digitalWrite(relayPin, HIGH);
    }else{
      digitalWrite(relayPin, LOW);
    } 
    }
    
