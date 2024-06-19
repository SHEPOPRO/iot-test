const int flameSensorPin = D6; 
const int relayPin = D7;      
int thresholdValue = 500;      

void setup() {
  Serial.begin(115200);
  pinMode(relayPin, OUTPUT);  
}

void loop() {
  int sensorValue = analogRead(flameSensorPin);

  Serial.print("Flame Sensor Value: ");
  Serial.println(sensorValue);

  // Flame detection logic
  if (sensorValue > thresholdValue) {
    Serial.println("Flame detected!");
    digitalWrite(relayPin, HIGH); 
  } else {
    Serial.println("No flame detected");
    digitalWrite(relayPin, LOW);  
  }

  delay(1000); 
}
