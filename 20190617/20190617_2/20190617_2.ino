#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#define TRIG 7
#define ECHO 6

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

  
}

void loop() {
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  double distance = pulseIn(ECHO, HIGH)/58.2 ;
  double dis = 155.0*(1.0 - distance/155.0);
  
 
  tone(4, dis ,5000);
  Serial.println(distance);

  delay(10);

  //지금값 * (처음수/다음수)
}
