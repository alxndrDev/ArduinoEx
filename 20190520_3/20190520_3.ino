int LED = 3;
int potPin = A3;

long VarR;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);

}
int value = 0;
void loop() {
  VarR = analogRead(potPin);

  Serial.print("variable Registor : ");
  Serial.println(VarR);

  value= VarR /4;
  digitalWrite(LED, value);
  Serial.println(value);
  delay(100);


}
