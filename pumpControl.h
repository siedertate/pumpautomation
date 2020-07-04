#ifndef pumpControl_h
#define pumpControl_h

#define TANK_FULL 15    //water spill at 12
#define TANK_EMPTY 150
#define relayPump 3
#define DEMOVALUE 20
#define trigPin 4
#define echoPin 7
#define pumpLED 13

void turnPumpON();
void turnPumpOFF();
void pinSetup();
int getTankLevel();

#endif
