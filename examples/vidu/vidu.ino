#include "avgP.h"
void setup() 
{
  Serial.begin(9600);
}
void loop() {
  Serial.print("Nhiet do: ")
  Serial.println(avgNhietDoP(3,1));
  Serial.print("Do am: ");
  Serial.println(avgDoAmP(5,1););
}