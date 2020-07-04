#include "Arduino.h"
#include "pumpControl.h"

void pinSetup()
{
    pinMode(relayPump, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(trigPin, OUTPUT);
    pinMode(pumpLED, OUTPUT);

}
void turnPumpON()
{
  digitalWrite(relayPump, HIGH);
  
}

void turnPumpOFF()
{
  digitalWrite(relayPump, LOW);
  
}

int getTankLevel()
{
  // Clears the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  int duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  int distance= duration*0.034/2;
  return distance;

}
