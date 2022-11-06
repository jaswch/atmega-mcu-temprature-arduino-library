#include "Arduino.h"

#include "atmega-cpu-temp.h"

float CPUTemp() {
  unsigned int wADC;
  double t;

  ADMUX = (_BV(REFS1) | _BV(REFS0) | _BV(MUX3));
  ADCSRA |= _BV(ADEN);  

  delay(20);            
  ADCSRA |= _BV(ADSC);  
  while (bit_is_set(ADCSRA,ADSC));
  wADC = ADCW;
  t = (wADC - 324.31 ) / 1.22;
  return(t);
}
