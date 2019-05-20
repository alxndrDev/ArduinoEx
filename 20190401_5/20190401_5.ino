#define OUTPIN 6

void setup() {
  pinMode(OUTPIN, OUTPUT);
}

int led = 0;
void loop() {
  analogWrite(OUTPIN, led++);
  if(led == 255) led = 0;
  delay(10);
}
