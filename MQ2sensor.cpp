int digital =0;
ADC_MODE(ADC_TOUT);
void setup() {

Serial.begin(9600);

}

void loop() {
digital = analogRead(A0);
Serial.print("digital:");
Serial.println(digital);
delay(300);


}
