#include <SoftwareSerial.h>

SoftwareSerial BTSerial(3,2);

int LED[3] = {8,9,10};
unsigned int num = 0;
unsigned int red = 0;
unsigned int green = 0;
unsigned int yel = 0;
unsigned int spe = 0;

char null = '\n';
char data = 0;

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);

  for(num = 0;num<3;num++){
    pinMode(LED[num], OUTPUT);
  }
  pinMode(4, OUTPUT);
  Serial.println("Bluetooth Communication Test");

}

void loop() {
  if(BTSerial.available()){
    data = BTSerial.read();
    Serial.write(data);
    Serial.write(null);

    if(data == 'r'){
      switch(red){
        case 0:
          Serial.println("RED LED [ON]");

          digitalWrite(LED[0], HIGH);
          red = 1;
          break;
        case 1:
          Serial.println("RED LED [OFF]");

          digitalWrite(LED[0], LOW);
          red = 0;
          break;
      }
    }else if(data == 'g'){
      switch(green){
        case 0:
          Serial.println("GREEN LED [ON]");

          digitalWrite(LED[2], HIGH);
          green = 1;
          break;
        case 1:
          Serial.println("GREEN LED [OFF]");

          digitalWrite(LED[2], LOW);
          green = 0;
          break;
      }
    }else if(data == 'y'){
      switch(yel){
        case 0:
          Serial.println("YELLOW LED [ON]");

          digitalWrite(LED[1], HIGH);
          yel = 1;
          break;
        case 1:
          Serial.println("YELLOW LED [OFF]");

          digitalWrite(LED[1], LOW);
          yel = 0;
          break;
      }
    }else if(data == 's'){
      switch(spe){
        case 0:
         Serial.println("SPEAKER[ON]");
         tone(4, 4000,3000);
         spe = 1;
         
         break;
        case 1:
        Serial.println("SPEAKER[OFF]");
         tone(4, 0, 0);
         spe = 0;
         
         break; 
      }
    }
  }
 








  delay(10);




}
