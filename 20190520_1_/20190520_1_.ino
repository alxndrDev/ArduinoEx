int potPin = A3;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int reading = analogRead(potPin);
  Serial.print("Variable registor : ");
  Serial.println(reading);
  delay(500);

}
