/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/home/maxwell/CTD-IoT/d2/lab1/src/lab1.ino"

// setup() runs once, when the device is first turned on.
void setup();
void loop();
#line 3 "/home/maxwell/CTD-IoT/d2/lab1/src/lab1.ino"
void setup() {
  // Put initialization like pinMode and begin functions here.
  Serial.begin(115200);
  
  
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  // The core of your code will likely live here.
  Serial.println(analogWriteMaxFrequency(A0));
}