#include "IRLibAll.h"
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//set OLED display
Adafruit_SSD1306 display = Adafruit_SSD1306(128, 32, &Wire);
 
//Create a receiver object to listen on pin 2
IRrecvPCI myReceiver(6);
 
//Create a decoder object 
IRdecode myDecoder;

//Create a character value for the decoded value
char code;
 
void setup() {
  Serial.begin(9600);

//initialize the display
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Address 0x3C for 128x32
  Serial.println("OLED begun");
  display.display();
  
  delay(1000);
  display.clearDisplay();
  display.display();
  
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Make your future.");
  display.setCursor(0,0);
  display.display(); // actually display all of the above

//initialize the IR reciever
  myReceiver.enableIRIn();
  Serial.println(F("Ready to receive IR signals"));
}
 
void loop() {
  //Continue looping until you get a complete signal received
  if (myReceiver.getResults()) {
    myDecoder.decode();           //Decode it
    myDecoder.dumpResults(false);  //Now print results. Use false for less detail

    display.println(myDecoder.decode());
    delay(10);
    yield();
    display.display();
    
    myReceiver.enableIRIn();      //Restart receiver
  }
}
