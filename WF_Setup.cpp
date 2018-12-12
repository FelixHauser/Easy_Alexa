#include "WF_Setup.h"

WFSetup::WFSetup(const char* ssid, const char* password){

  _ssid=ssid;
  _password=password;

  setupSerial();

  
}



bool WFSetup::wifiIsOn(){

bool state = true;
  int i = 0;
  
  WiFi.mode(WIFI_STA);
  WiFi.begin(_ssid, _password);
  Serial.println("");
  Serial.println("Connecting to WiFi");

  // Wait for connection
  Serial.print("Connecting...");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
    if (i > 20){
      state = false; break;
    }
    i++;
  }
  Serial.println("");
  if (state){
    Serial.print("Connected to ");
    Serial.println(_ssid);
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
  }
  else {
    Serial.println("Connection failed.");
  }
  return state;
    
  }




 void WFSetup::setupSerial(){
    
    Serial.begin(115200);
    
    }
