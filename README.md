# Intro

Easy Alexa is an Arduino Sketch created using on the [ESPalexa Library](https://github.com/Aircoookie/Espalexa) by @Aircoookie with which ESP8266 modules can be recognised as Amazon's Alexa compatible devices. With it it should be a piece of cake to setup your devices.

The example sketch found on the library all the code is cluttered on the .ino file. In **Easy Alexa**, the sketch is splitted in 3 local libraries:

1. **WiFi Setup Library** which takes care of all the Wi-Fi connectivity
2. **Alexa Setup Library** which takes care of the setup of all the devices
3. **Configuration Library** which makes it easier to edit the WiFi credentials and device's names



# How it works

Assuming you have the [Arduino IDE](https://www.arduino.cc/en/Main/Software) and all the necessay drivers and board definitions for your ESP8266 modules, the setup is pretty easy:

1. Download the Easy_Alexa sketch and open it with the Arduino IDE.
2. Choose the corresponding board, port, etc...
3. Go to **Configuration.h** and enter your WiFi credentials.
4. Uncomment out the number of devices you need and give them appropiate names.
5. Go to **Alexa.cpp** file. 
6. There you can edit whether or not the device has a default state value. To do that go to the **ADD DEVICES SECTION** and add the value as a third parameter on the corresponding device declaration.
7. On the **ACTION SETTINGS SECTION** is where the magic happens. There you can fill in the already declared functions which will be called by each device. The limit is your imagination.
8. **Save as...** save the sketch with a new name, and upload it to your module.
9. On your Alexa App, go to **Discover New Devices** and follow the instructions.
10. That's it, you can go nuts with all your new devices.



# To keep in mind when installing

Obviously to use this Sketch template you need to have the ESP8266 board definitions on your Arduino IDE. It has been already reported that in order to be able to use the ESP8266 module family in combination with Alexa's ecosystem, **the board definition on the Arduino IDE has to be 2.3**. Any further version will result on the sketch not working properly.



# Acknowledgements

Many thanks to @Aircookie for his [ESPalexa Library](https://github.com/Aircoookie/Espalexa). It made things really easy on my home automation projects. Go check his other stuff!
