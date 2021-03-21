//Muhammad Azizi Mohd Ariffin
//mazizi@tmsk.uitm.edu.my
//ESP8266 with Bylnk Platform

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include "DHT.h"
char auth[] = "MWwcuiXtjGGiLH7VA78pm4fRkt-nqsYF";
char ssid[] = "AziSheNetwork2.4@unifi";
char pass[] = "0178822437";

int pinDHT11 = D5;
DHT dht11(pinDHT11, DHT11);
unsigned long previousMillis = 0;

void setup() 
{
 Serial.begin(9600);
 Blynk.begin(auth, ssid, pass);
 dht11.begin();
}
void loop() 
{
  Blynk.run();
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis > 1500)
  {
    previousMillis = millis();
    float temperature = dht11.readTemperature();
    float humidity = dht11.readHumidity();
    Blynk.virtualWrite(V1, (int)temperature);
    Blynk.virtualWrite(V2, (int)humidity);
  }
}
