#include "pumpControl.h"

boolean pumpON = false;
int tankLevel = 0;
void setup() {
  Serial.begin(9600);
  pinSetup();
}

void loop() {
  tankLevel = getTankLevel();
  Serial.println(tankLevel);
  if (tankLevel < TANK_FULL || tankLevel > TANK_EMPTY)
  {
    digitalWrite(pumpLED, HIGH);
  }
  else
  {
    digitalWrite(pumpLED, LOW);
  }
//  if (tankLevel > TANK_EMPTY && pumpON == false){
//    turnPumpON();
//    pumpON = true;
//    digitalWrite(pumpLED,HIGH);
//  }
//
//  else if (tankLevel < TANK_FULL && pumpON == true){
//    turnPumpOFF();
//    pumpON = false;
//    digitalWrite(pumpLED,LOW);
//  }
  
  delay(1000);
}
