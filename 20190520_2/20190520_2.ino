float value=0;
int ledpin =3;
int potPin = A3;

void setup() {
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}
int reading=0;
float tempC =0;
void loop() {
//  for(value = 0; value <= 255; value+=5){
//    analogWrite(ledpin, value);
//    delay(30);
//  }
//
//  for(value = 255; value >= 0; value -= 5){
//    analogWrite(ledpin, value);
//    delay(30);
//  }
  reading=analogRead(potPin);
  //tempC = reading / 9.31;
  value = (5.0 * reading * 100.0) / 1024; ;
  Serial.println(value);
  analogWrite(ledpin, (value));
  delay(1000);

}
