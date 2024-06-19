const byte RELAY =D7;
void setup() {
pinMode(RELAY, OUTPUT);
digitalWrite(RELAY, LOW);


}

void loop() {
 digitalWrite(RELAY, HIGH);
 delay(3000);
digitalWrite(RELAY, LOW);
 delay(3000);
}
