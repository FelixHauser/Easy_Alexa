#ifndef Relay_h
#define Relay_h

#include "Configuration.h"
#include <Arduino.h>

class RelaySetup{
  
  
  public:

  RelaySetup (); //Contructor

  void onOffRelay(unsigned int relayPin, unsigned int delayTime); //simulates a push button: on for a delay of time and then off

  void durableRelay(unsigned int relayPin, bool highOrLow); //simulates a switch: on until turned off
  
  private:

  void setupRelayPins();
  
  };







#endif
