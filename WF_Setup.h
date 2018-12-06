#ifndef WF_Setup_h
#define WF_Setup_h

#include <Arduino.h>

#ifdef ARDUINO_ARCH_ESP32
#include <WiFi.h>
#else
#include <ESP8266WiFi.h>
#endif



class WFSetup{
  
  
  public:

   WFSetup (const char* ssid, const char* password); //Contructor

   bool wifiIsOn();
  
  
  private:

  void setupSerial();
  
  const char* _ssid;
  const char* _password;
  
  };







#endif
