/**
* The MySensors Arduino library handles the wireless radio link and protocol
* between your home built sensors/actuators and HA controller of choice.
* The sensors forms a self healing radio network with optional repeaters. Each
* repeater and gateway builds a routing tables in EEPROM which keeps track of the
* network topology allowing messages to be routed to nodes.
*
* Created by Henrik Ekblad <henrik.ekblad@mysensors.org>
* Copyright (C) 2013-2020 Sensnology AB
* Full contributor list: https://github.com/mysensors/MySensors/graphs/contributors
*
* Documentation: http://www.mysensors.org
* Support Forum: http://forum.mysensors.org
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* version 2 as published by the Free Software Foundation.
*
*******************************
*
* DESCRIPTION
* The ArduinoGateway prints data received from sensors on the serial link.
* The gateway accepts input on serial which will be sent out on radio network.
*
* The GW code is designed for Arduino Nano 328p / 16MHz
*
* Wire connections (OPTIONAL):
* - Inclusion button should be connected between digital pin 3 and GND
* - RX/TX/ERR leds need to be connected between +5V (anode) and digital pin 6/5/4 with resistor 270-330R in a series
*
* LEDs (OPTIONAL):
* - To use the feature, uncomment any of the MY_DEFAULT_xx_LED_PINs
* - RX (green) - blink fast on radio message received. In inclusion mode will blink fast only on presentation received
* - TX (yellow) - blink fast on radio message transmitted. In inclusion mode will blink slowly
* - ERR (red) - fast blink on error during transmission error or receive crc error
*
*/

// Enable debug prints to serial monitor
//#define MY_DEBUG

// Enable and select radio type attached
#define MY_RADIO_RF24
//#define MY_RADIO_NRF5_ESB
//#define MY_RADIO_RFM69
//#define MY_RADIO_RFM95

// Set LOW transmit power level as default, if you have an amplified NRF-module and
// power your radio separately with a good regulator you can turn up PA level.
#define MY_RF24_PA_LEVEL RF24_PA_LOW

// Enable serial gateway
#define MY_GATEWAY_SERIAL

// Define a lower baud rate for Arduinos running on 8 MHz (Arduino Pro Mini 3.3V & SenseBender)
//#if F_CPU == 8000000L
//#define MY_BAUD_RATE 38400
//#endif

// Enable inclusion mode
#define MY_INCLUSION_MODE_FEATURE
// Enable Inclusion mode button on gateway
//#define MY_INCLUSION_BUTTON_FEATURE

// Inverses behavior of inclusion button (if using external pullup)
//#define MY_INCLUSION_BUTTON_EXTERNAL_PULLUP

// Set inclusion mode duration (in seconds)
#define MY_INCLUSION_MODE_DURATION 60
// Digital pin used for inclusion mode button
//#define MY_INCLUSION_MODE_BUTTON_PIN  3

// Set blinking period
#define MY_DEFAULT_LED_BLINK_PERIOD 300

// Inverses the behavior of leds
//#define MY_WITH_LEDS_BLINKING_INVERSE

// Flash leds on rx/tx/err
// Uncomment to override default HW configurations
//#define MY_DEFAULT_ERR_LED_PIN 4  // Error led pin
//#define MY_DEFAULT_RX_LED_PIN  6  // Receive led pin
//#define MY_DEFAULT_TX_LED_PIN  5  // the PCB, on board LED


#define CHILD_ID 1  

#include <MySensors.h>

// Initialize general message
MyMessage msg(CHILD_ID, V_TEXT);

void setup() {
    // Setup locally attached sensors
}

void presentation() {
    // Present locally attached sensors
}

void loop() {
    // Send locally attached sensor data here
}

void receive(const MyMessage &message) {


    if ((message.getSensor() == 0) && (message.getSender() == 100)) {
        Serial.println(message.getFloat());
    }

    //if (message.type == V_STATUS) {
    //}

    // получаем сразу все данные из строки ДЕБАГА и разбираем её )))

    //Serial.println("message");
    //Serial.print("sensor: ");
    //Serial.println(message.sensor);
    //Serial.print("type: ");
    //Serial.println(message.type);
    //Serial.print("getBool(): ");
    //Serial.println(message.getBool());
    //Serial.print("getByte(): ");
    //Serial.println(message.getByte());
    //Serial.print("getString(): ");
    //Serial.println(message.getString());
    //
    //// Serial.println(message.getCustomString());
    //// Serial.println(message.getStream());
    //// Serial.println(message.getCustom());
    //Serial.println(message.getFloat());
    //Serial.println(message.getInt());
    //Serial.println(message.getLong());
    //Serial.print("getCommand(): ");
    //Serial.println(message.getCommand());
    //Serial.print("getSensor(): ");
    //Serial.println(message.getSensor());
    //Serial.print("getSender(): ");
    //Serial.println(message.getSender());
    //Serial.print("getDestination(): ");
    //Serial.println(message.getDestination());
    //Serial.print("getHeaderSize(): ");
    //Serial.println(message.getHeaderSize());
    //Serial.print("getPayloadType(): ");
    //Serial.println(message.getPayloadType());
    //Serial.print("getLength(): ");
    //Serial.println(message.getLength());
    //Serial.print("getExpectedMessageSize(): ");
    //Serial.println(message.getExpectedMessageSize());
    //Serial.print("isProtocolVersionValid(): ");
    //Serial.println(message.isProtocolVersionValid());
    //Serial.print("getLast(): ");
    //Serial.println(message.getLast());
    //Serial.print("isEcho(): ");
    //Serial.println(message.isEcho());
    //Serial.print("getRequestEcho(): ");
    //Serial.println(message.getRequestEcho());
    //Serial.print("getVersion(): ");
    //Serial.println(message.getVersion());
    //Serial.print("getSigned(): ");
    //Serial.println(message.getSigned());

    // Тут получаем и присваиваем значения переменных
    // 0 - это сенсор температуры с ноды 24 ( задано руками в скетче ноды ), 1 - это сенсор влажности

    //if ((message.getSensor() == 0) && (message.getSender() == 100)) {
    //    node24temp = message.getFloat();
    //}

    /*
    if ((message.getSensor() == 1) && (message.getSender() == 24)) {
        node24batt = message.getFloat();
    }
    
      if ((message.getSensor() == 0) && (message.getSender() == 61)) {
    node61temp = message.getFloat();
 
  }

      if ((message.getSensor() == 1) && (message.getSender() == 61)) {
    node61hum = message.getFloat();
  }

        if ((message.getSensor() == 2) && (message.getSender() == 61)) {
    node61pres = message.getFloat();
  }

          if ((message.getSensor() == 3) && (message.getSender() == 61)) {
    node61batt = message.getFloat();
  }  
  */
    /*
    if ((message.getSensor() == 1) && (message.getSender() == 133)) {
    noda133temp = message.getFloat();
 
  }

      if ((message.getSensor() == 2) && (message.getSender() == 133)) {
    noda133hum = message.getFloat();
  }

      if ((message.getSensor() == 110) && (message.getSender() == 133)) {
    noda133batt = message.getFloat();
  } 

      if ((message.getSensor() == 1) && (message.getSender() == 134)) {
    noda134temp = message.getFloat();
 
  }

      if ((message.getSensor() == 2) && (message.getSender() == 134)) {
    noda134hum = message.getFloat();
  }

        if ((message.getSensor() == 1) && (message.getSender() == 135)) {
    noda135temp = message.getFloat();
 
  }

      if ((message.getSensor() == 2) && (message.getSender() == 135)) {
    noda135hum = message.getFloat();
  }

          if ((message.getSensor() == 1) && (message.getSender() == 136)) {
    noda136temp = message.getFloat();
 
  }

      if ((message.getSensor() == 2) && (message.getSender() == 136)) {
    noda136hum = message.getFloat();
  }

      if ((message.getSensor() == 0) && (message.getSender() == 60)) {
    noda60temp = message.getFloat();

  }

      if ((message.getSensor() == 1) && (message.getSender() == 60)) {
    noda60hum = message.getFloat();
  }

        if ((message.getSensor() == 2) && (message.getSender() == 60)) {
    noda60pres = message.getFloat();
  }

          if ((message.getSensor() == 3) && (message.getSender() == 60)) {
    noda60batt = message.getFloat();
  }
  
  if ((message.getCommand() == 1) && (message.getSender() == 30)) {
    if (message.getSensor() == 1) { // данные с сенсора 1 ноды 30 к прмеру может быть температура (вы сами определяете номер сенсора для температуры)
      releSt = message.getBool();

    }
  }
// отправляем на ноду подтверждение, что получили данные и шлем её ответ ))) сразу )))

//  if ((message.getCommand() == 1) && (message.getSender() == 0) && (message.getSensor() == 1) && (message.getDestination() == 22)) {
//    //Confirmation_Answer_Accepted = 1;
//    //sleep_CHANGE = 0;
//    Serial.println(message.getString()); 
//    Serial.println("data for Sensor 22"); 
//    String str = message.getString();
//    str.trim();
//    Serial.println(message.getString()); 
//    if (str == "HIGH") {
//      //s = send(msg.setDestination(0).set("LOW")); 
//      send(msg.setDestination(22).set("Close")); 
//      Serial.println(message.getString()); 
//    }
//    if (str == "LOW") {
//      send(msg.setDestination(22).set("Open")); 
//      Serial.println(message.getString()); 
//    }
//  } 

 */
}