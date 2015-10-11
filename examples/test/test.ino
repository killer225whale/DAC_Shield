#include <DAC_shield.h>

//initialize object
DAC_shield DAC;

void setup() {

  //Set pins to OUTPUTs
  DAC.prep(); 

  //Write values to output pins
  //Syntax:
  //DAC.set(OUTPUT_PORT_#, 8-bit value from 0 to 255);
 
  
  DAC.set(0, 0);  //Should output 0V
  DAC.set(1, 85); //Should output 1/3 max voltage
  DAC.set(2, 170); //Should output 2/3 max voltage
  DAC.set(3, 255); //Should output maximum voltage
}

void loop() {
  // put your main code here, to run repeatedly:

}


