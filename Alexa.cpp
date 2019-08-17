#include "Alexa.h"
#include <Espalexa.h>
#include "WF_Setup.h"

#ifdef RADIO_RADIO
  #include "Radio.h"
  RadioSetup radio;
#endif

#ifdef USES_RELAY
  #include "Relay.h"
  RelaySetup relay;
#endif

Espalexa palexa;

WFSetup wifi(WIFI_NAME, WIFI_PASSWORD);

bool isOn=false;





/**************************************************
 * 
 * 
 *   FUNCTION DEFFINITION SECTION
 *   comment out relay booleans if needed
 * 
 * 
 **************************************************/

#ifdef DEVICE_01
void device_01(uint8_t brightness);
//bool device01Relay=false;
#endif
#ifdef DEVICE_02
void device_02(uint8_t brightness);
//bool device02Relay=false;
#endif
#ifdef DEVICE_03
void device_03(uint8_t brightness);
bool device03Relay=false;
#endif
#ifdef DEVICE_04
void device_04(uint8_t brightness);
bool device04Relay=false;
#endif
#ifdef DEVICE_05
void device_05(uint8_t brightness);
//bool device05Relay=false;
#endif
#ifdef DEVICE_06
void device_06(uint8_t brightness);
//bool device06Relay=false;
#endif
#ifdef DEVICE_07
void device_07(uint8_t brightness);
//bool device07Relay=false;
#endif
#ifdef DEVICE_08
void device_08(uint8_t brightness);
//bool device08Relay=false;
#endif
#ifdef DEVICE_09
void device_09(uint8_t brightness);
//bool device09Relay=false;
#endif
#ifdef DEVICE_10
void device_10(uint8_t brightness);
//bool device10Relay=false;
#endif
#ifdef DEVICE_11
void device_11(uint8_t brightness);
//bool device11Relay=false;
#endif
#ifdef DEVICE_12
void device_12(uint8_t brightness);
//bool device12Relay=false;
#endif
#ifdef DEVICE_13
void device_13(uint8_t brightness);
//bool device13Relay=false;
#endif
#ifdef DEVICE_14
void device_14(uint8_t brightness);
//bool device14Relay=false;
#endif
#ifdef DEVICE_15
void device_15(uint8_t brightness);
//bool device15Relay=false;
#endif
#ifdef DEVICE_16
void device_16(uint8_t brightness);
//bool device16Relay=false;
#endif
#ifdef DEVICE_17
void device_17(uint8_t brightness);
//bool device17Relay=false;
#endif
#ifdef DEVICE_18
void device_18(uint8_t brightness);
//bool device18Relay=false;
#endif
#ifdef DEVICE_19
void device_19(uint8_t brightness);
//bool device18Relay=false;
#endif
#ifdef DEVICE_20
void device_20(uint8_t brightness);
//bool device20Relay=false;
#endif




AlexaSetup::AlexaSetup(){

  // no code to initialize, apparently
  
}


/**************************************************
 *  
 *                 ADD DEVICES SECTION
 *                 
 *   The default state is OFF              
 *                 
 *   You can add a third parameter as starting state
 *   It must be an integer between 0 (min) and 255 (max).
 *   
 *   ex: espalexa.addDevice(DEVICE_01, device_01, 128);
 *   here the device would be at 50% unless indicated
 *   otherwise by voice command
 * 
 * 
 **************************************************/

void AlexaSetup::initializeDevices(){
  
    isOn=wifi.wifiIsOn();

    if(isOn){
      
    #ifdef DEVICE_01
      palexa.addDevice(DEVICE_01, device_01);
    #endif
        #ifdef DEVICE_02
      palexa.addDevice(DEVICE_02, device_02);
    #endif
        #ifdef DEVICE_03
      palexa.addDevice(DEVICE_03, device_03);
    #endif
        #ifdef DEVICE_04
      palexa.addDevice(DEVICE_04, device_04);
    #endif
        #ifdef DEVICE_05
      palexa.addDevice(DEVICE_05, device_05);
    #endif
    #ifdef DEVICE_06
      palexa.addDevice(DEVICE_06, device_06);
    #endif
        #ifdef DEVICE_07
      palexa.addDevice(DEVICE_07, device_07);
    #endif
        #ifdef DEVICE_08
      palexa.addDevice(DEVICE_08, device_08);
    #endif
        #ifdef DEVICE_09
      palexa.addDevice(DEVICE_09, device_09);
    #endif
        #ifdef DEVICE_10
      palexa.addDevice(DEVICE_10, device_10);
    #endif
    #ifdef DEVICE_11
      palexa.addDevice(DEVICE_11, device_11);
    #endif
        #ifdef DEVICE_12
      palexa.addDevice(DEVICE_12, device_12);
    #endif
        #ifdef DEVICE_13
      palexa.addDevice(DEVICE_13, device_13);
    #endif
        #ifdef DEVICE_14
      palexa.addDevice(DEVICE_14, device_14);
    #endif
        #ifdef DEVICE_15
      palexa.addDevice(DEVICE_15, device_15);
    #endif
    #ifdef DEVICE_16
      palexa.addDevice(DEVICE_16, device_16);
    #endif
        #ifdef DEVICE_17
      palexa.addDevice(DEVICE_17, device_17);
    #endif
        #ifdef DEVICE_18
      palexa.addDevice(DEVICE_18, device_18);
    #endif
        #ifdef DEVICE_19
      palexa.addDevice(DEVICE_19, device_19);
    #endif
        #ifdef DEVICE_20
      palexa.addDevice(DEVICE_20, device_20);
    #endif

      palexa.begin();

    }else {
    while (1) {
      
      Serial.println("Cannot connect to WiFi. Please check data and reset the ESP.");
      delay(2500);
    }
  }
  
  
  }

void AlexaSetup::alexaLooping(){

   palexa.loop();
   delay(1);
  
  
  }

  



/**************************************************
 * 
 * 
 *           ACTION SETTINGS SECTION
 *   Here you can set up the actions the different
 *   devices have to do
 * 
 * 
 **************************************************/

#ifdef DEVICE_01
void device_01(uint8_t brightness){

    //EXAMPLE
    if (brightness) {
      Serial.print("ON, brightness ");
      Serial.println(brightness);
      //the device is ON and/or with a certain brightness
    }
    else  {
      Serial.println("OFF");
      //the device is OFF
    }
  
  }
#endif


#ifdef DEVICE_02
void device_02(uint8_t brightness){

  /*  example of use of the radio emitter
   
       if (brightness) {  
      radio.sendFrequency(4474193);  //device is ON  
    }
    else  {
      radio.sendFrequency(4474196);  //device is OFF      
    }
    
   */
  
  }
#endif



#ifdef DEVICE_03
void device_03(uint8_t brightness){

// example of use of a relay in push button simulator mode
 
      if (brightness) {  

       if (device03Relay==false){
        relay.onOffRelay(RELAY_PIN_DEVICE_03, onDelay);
       device03Relay=true;
       }
    }
    else  {

      if (device03Relay){
      relay.onOffRelay(RELAY_PIN_DEVICE_03, offDelay);
      device03Relay=false;
      }
    }
 
  }
#endif


#ifdef DEVICE_04
void device_04(uint8_t brightness){

  // example of use of a relay in switch simulator mode
   
      if (brightness) {  

       if (device04Relay==false){
        relay.durableRelay(RELAY_PIN_DEVICE_04, true);
       device01Relay=true;
       }
    }
    else  {

      if (device04Relay){
      relay.durableRelay(RELAY_PIN_DEVICE_04, false);
      device01Relay=false;
      }
    }
 
  
  }
#endif




#ifdef DEVICE_05
void device_05(uint8_t brightness){

  Serial.println("Device 05 has done something");
  
  }
#endif


#ifdef DEVICE_06
void device_06(uint8_t brightness){

  Serial.println("Device 06 has done something");
  
  }
#endif



#ifdef DEVICE_07
void device_07(uint8_t brightness){

  Serial.println("Device 07 has done something");
  
  }
#endif


#ifdef DEVICE_08
void device_08(uint8_t brightness){

  Serial.println("Device 08 has done something");
  
  }
#endif



#ifdef DEVICE_09
void device_09(uint8_t brightness){

  Serial.println("Device 09 has done something");
  
  }
#endif


#ifdef DEVICE_10
void device_10(uint8_t brightness){

  Serial.println("Device 10 has done something");
  
  }
#endif


#ifdef DEVICE_11
void device_11(uint8_t brightness){

  Serial.println("Device 11 has done something");
  
  }
#endif


#ifdef DEVICE_12
void device_12(uint8_t brightness){

  Serial.println("Device 12 has done something");
  
  }
#endif



#ifdef DEVICE_13
void device_13(uint8_t brightness){

  Serial.println("Device 13 has done something");
  
  }
#endif


#ifdef DEVICE_14
void device_14(uint8_t brightness){

  Serial.println("Device 14 has done something");
  
  }
#endif



#ifdef DEVICE_15
void device_15(uint8_t brightness){

  Serial.println("Device 15 has done something");
  
  }
#endif


#ifdef DEVICE_16
void device_16(uint8_t brightness){

  Serial.println("Device 16 has done something");
  
  }
#endif




#ifdef DEVICE_17
void device_17(uint8_t brightness){

  Serial.println("Device 17 has done something");
  
  }
#endif


#ifdef DEVICE_18
void device_18(uint8_t brightness){

  Serial.println("Device 18 has done something");
  
  }
#endif



#ifdef DEVICE_19
void device_19(uint8_t brightness){

  Serial.println("Device 19 has done something");
  
  }
#endif


#ifdef DEVICE_20
void device_20(uint8_t brightness){

  Serial.println("Device 20 has done something");
  
  }
#endif
