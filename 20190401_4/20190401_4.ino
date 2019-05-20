#define DELAY_TIME 500

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

  Serial.begin(9600);

  Serial.println("Enter LED Number 2 to 6 or 'x' to Clear.");
}

void loop() {

  if(Serial.available()){
    char ch = Serial.read();
    if(ch = '2'){
      digitalWrite(2,HIGH);
      delay(DELAY_TIME);
      digitalWrite(2,LOW);

      Serial.print("Turned on LED #");
      Serial.println(ch);
    }

    if(ch = '3'){
      digitalWrite(3,HIGH);
      delay(DELAY_TIME);
      digitalWrite(3,LOW);

      Serial.print("Turned on LED #");
      Serial.println(ch);
    }

    if(ch = '4'){
      digitalWrite(4,HIGH);
      delay(DELAY_TIME);
      digitalWrite(4,LOW);

      Serial.print("Turned on LED #");
      Serial.println(ch);
    }
  
    if(ch = '5'){
      digitalWrite(5,HIGH);
      delay(DELAY_TIME);
      digitalWrite(5,LOW);

      Serial.print("Turned on LED #");
      Serial.println(ch);
    }

    if(ch = '6'){
      digitalWrite(6,HIGH);
      delay(DELAY_TIME);
      digitalWrite(6,LOW);

      Serial.print("Turned on LED #");
      Serial.println(ch);
    }
  }

}
