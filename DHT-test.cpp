#include <DHT.h>
float hum =0.0 , temp_c = 0.0 , temp_f = 0.0; 
const byte DHT_PIN =D1;
const byte DHT_TYPE =22;
DHT dht(DHT_PIN, DHT_TYPE);
void setup() {
  Serial.begin(9600);
  dht.begin();
 
  }

void loop() {
delay(2000);

hum = dht.readHumidity ();

temp_c =dht.readTemperature ();


 
if (isnan(hum)||isnan(temp_c) ){

  Serial.println("Failed To Read Fro DHT Sensor");
  return;

}
Serial.print("Humidity:");
Serial.print(hum);
Serial.print("%\t");
Serial.print("Temperature:");
Serial.print(temp_c);
Serial.print("c\t");
Serial.println();
