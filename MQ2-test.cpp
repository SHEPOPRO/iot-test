const int MQ2_PIN = A0;      // Pin connected to the MQ-2 sensor
const float VCC = 5.0;      // VCC voltage
const float RL_VALUE = 10.0; // Value of the load resistance

void setup() {
  Serial.begin(9600);
  pinMode(MQ2_PIN, INPUT);
}

void loop() {
  int sensorValue = analogRead(MQ2_PIN);
  float voltage = sensorValue * (VCC / 1023.0);
  
  // Calculate resistance of the sensor
  float sensorResistance = (VCC * RL_VALUE / voltage) - RL_VALUE;

  // Print the sensor value and resistance
  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print("\t Resistance: ");
  Serial.println(sensorResistance);

  // Add gas detection logic here based on the resistance value
  // For example:
  if (sensorResistance > 600) {
    Serial.println("Gas detected!");
    // Add any other action or alerting mechanism here
  }

  delay(1000); // Delay for better readability and stability
}
