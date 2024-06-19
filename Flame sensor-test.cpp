const int flameSensorPin = D6; 
int thresholdValue = 500; 

void setup() {
  Serial.begin(115200);
}

void loop() {
  int sensorValue = analogRead(flameSensorPin);

  Serial.print("Flame Sensor Value: ");
  Serial.println(sensorValue);

  // Add your flame detection logic here
  if (sensorValue > thresholdValue) {
    // Flame detected, take appropriate action
    Serial.println("Flame detected!");
  } else {
    // No flame detected
    Serial.println("No flame detected");
  }

  delay(1000); // Adjust delay as needed
}
