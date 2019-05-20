#define DELAY_TIME 500

int count = 0;

void setup() {
  Serial.begin(9600); // 시리얼 포트를 초기화. 전송속도는 9600 bps 
  pinMode(2, INPUT);

}

void loop() {
  
    if(digitalRead(2) == LOW){
      Serial.println("Button is OFF");
    }else{
     Serial.println("Button is ON");
    }
    delay(500);
}

void first(){

}
