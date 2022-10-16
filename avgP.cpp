#include "avgP.h"

float avgNhietDoP(int pin, int tt)
{
  #define DHTPIN pin    
  #define DHTTYPE DHT11  
  DHT dht(DHTPIN, DHTTYPE);
  dht.begin();
	float nhietdo[10];
  float tong = 0;
  for(int i = 0 ; i < 10 ; i ++){
    nhietdo[i] = dht.readTemperature();
    delay(tt * 1000);
  }
  for(int i = 0 ; i < 10 ; i++){
    tong +=  nhietdo[i];
  }
  return (tong / 10);
}
float avgDoAmP(int pin, int tt)
{
  #define DHTPIN pin    
  #define DHTTYPE DHT11  
  DHT dht(DHTPIN, DHTTYPE);
  dht.begin();
	float doam[10];
  float tong = 0;
  for(int i = 0 ; i < 10 ; i ++){
    doam[i] = dht.readHumidity();
    delay(tt * 1000);
  }
  for(int i = 0 ; i < 10 ; i++){
    tong +=  doam[i];
  }
  return (tong/10);
}
