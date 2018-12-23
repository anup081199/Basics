#include "dht.h"
#define dht_apin D1 //
dht DHT;


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
delay(500);
Serial.println("DHT11 Humidity & tremprature sensor \n\n");
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  int readdata = DHT.read11(dht_apin);
  float t = DHT.temperature;
  float h = DHT.humidity;

  Serial.print("Current humidity = ");
  Serial.print(h);
  Serial.print("% ");
  Serial.print("temprature = ");
  Serial.print(t);
  Serial.println("c ");

  delay(1000);
}
