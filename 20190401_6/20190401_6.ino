int ledPin = 9;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

int a = 0;
void loop() {
  byte val;
  
  if(Serial.available()){
    val = Serial.read();
    a = a + val;
    Serial.println(a);
    analogWrite(ledPin, val);
    delay(1000);
  }
}
