/*
Author: Nicodemus Allan 000838957
Date: 2022/09/12
*/

#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("\n\nHello, World!");
  Serial.println("Nicodemus Allan");
  Serial.println("000838957");
  Serial.println("Chip ID = " + String(ESP.getChipId()));
  Serial.println("Flash Chip ID = " + String(ESP.getFlashChipId()));
  Serial.println("\n");
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println(String(millis()) + " milliseconds");
  delay(2000);
}