/*
 * CPU_Temprature
 * Reads the temprature of an megaAVR microcontroller
 * 
 * No circuit needed.
 * 
 * Note only these following microcontrollers support the library:
 * ATmega168A,ATmega168P,ATmega328,ATmega328P & ATmega32U4
 * 
 * created on 1 Nov 2022
 * By Jaswanth Venkata Sai Chennu
 * modified on 6 Dec 2024
 * By Jaswanth Venkata Sai Chennu
 */
//include the library
#include <AVR_CPU_Temprature.h>                                 

void setup() {
  Serial.begin(9600);
  Serial.println(F("Internal Temperature Sensor"));
}

void loop() {
  //print the temprature in celsius
  Serial.print(CPUTemp(), 1);
  Serial.println("*C");
  delay(1000);
}
