#ifndef Radio_h
#define Radio_h

#include "Configuration.h"


class RadioSetup{
  
  
  public:

  RadioSetup (); //Contructor

  void sendFrequency(unsigned int code);

  
  
  private:

  void setupSwitch();
  
  };

#endif
