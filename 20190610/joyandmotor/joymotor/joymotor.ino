#include <Servo.h>

#define x_axis A0
#define y_axis A1

int potpin = 0;
Servo myservo;
int val;
void setup() {
  pinMode(x_axis, INPUT);
  pinMode(y_axis, INPUT);
  myservo.attach(9);
  Serial.begin(9600);
}

int x = 0;
int y = 0;
int pos =0;

void loop() {
  x = analogRead(x_axis);
  y = analogRead(y_axis);

  if(x == 0){
    pos = (int)(512-y)/11.4 ;
  }else if(x == 1023){
    pos =  map(y, 0, 512, 135, 180);
  }else{
    if(y ==0){
      pos = map(x, 0,1023,45,135);
    }
  }

  
 
  
  Serial.println(pos);
  myservo.write(pos);
  
  
}
