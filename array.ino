#define LED_1 13
#define LED_2 12
#define PUSH_1 2
#define PUSH_2 3

void setup(){
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop(){
  if(digitalRead(2) == HIGH){
    digitalWrite(LED_1, HIGH);
    delay(1000);
    digitalWrite(LED_1, LOW);
  }
  if(digitalRead(3) == HIGH){
    digitalWrite(LED_2, HIGH);
    delay(1000);
    digitalWrite(LED_2, LOW);
  }
}
