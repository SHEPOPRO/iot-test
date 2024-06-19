int digital = 0;
const int buzzerPin = D0;  // Define buzzer pin as D0

ADC_MODE(ADC_TOUT);

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);  // Set buzzer pin as OUTPUT
}

void loop() {
  digital = analogRead(A0);
  Serial.print("digital:");
  Serial.println(digital);

  if (digital > 950) {
    digitalWrite(buzzerPin, HIGH);  // Turn on the buzzer
  } else {
    digitalWrite(buzzerPin, LOW);  // Turn off the buzzer
  }

  delay(300);
}
