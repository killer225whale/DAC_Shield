#include <DAC_shield.h>

DAC_shield DAC;

void setup() {
  // put your setup code here, to run once:
  DAC.prep();
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 256){
    DAC.write(0, i);
    DAC.write(1, i);
    DAC.write(2, i);
    DAC.write(3, i);
  }
}
