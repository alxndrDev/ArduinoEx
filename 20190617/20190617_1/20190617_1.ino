#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#define TRIG 7
#define ECHO 6



LiquidCrystal_I2C lcd(0x27, 16, 2);   // 주소, 글자 갯수, 라인 수
//0x27 is the I2C bus address for an unmodified module
int sensor = 0;

void setup() {
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);
  pinMode(8, OUTPUT);
  pinMode(10,INPUT);
  lcd.init();
  lcd.backlight();
  
}

void loop() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  int a = digitalRead(10);
  if(a == HIGH){
    Serial.println("Button");
  }
  double distance = pulseIn(ECHO, HIGH)/58.2 ;
  double dis = 155.0*(1.0 - distance/155.0);
  
  sensor = digitalRead(5);
  if(sensor == HIGH){ 
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    Serial.println("high");
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Detected HUMAN");
  }else{
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
      //안녕 난 30분뒤 너의 미래에서 왔어 승원아 이 건물은 곧 폭파 될거야 ,  도망가 !
    Serial.println("low");
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("NOT HUMAN");
  }
  tone(4, dis ,5000);
  Serial.println(distance);
// Serial.println((int)dis);
  delay(10);

  //지금값 * (처음수/다음수)
}
