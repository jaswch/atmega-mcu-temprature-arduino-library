/*
 * CPU_Temprature
 * Reads the temprature of the avr microcontroller
 * 
 * No circuit needed.
 * 
 * Note only these following microcontrollers 
 * support an internal temprature sensor:
 * ATmega168A,ATmega168P,ATmega328,ATmega328P,
 * ATmega32U4 (Arduino Micro).
 * 
 * 
 */
#include <AVR_CPU_Temprature.h>                                 //initialize the library

void setup() {
  Serial.begin(9600);
  //Using the "F" macro to save space in our lovely SRAM!
  Serial.println(F("Internal Temperature Sensor"));
}

void loop() {
  //print the temprature in celsius
  Serial.print(CPUTemp(), 1);
  Serial.println("*C");
  delay(1000);                  //delay between each read for stability
}
