#define DELAY_TIME 500

byte digits[10][7] = {
  {0,0,0,0,0,0,1},
  {1,0,0,1,1,1,1},
  {0,0,1,0,0,1,0},
  {0,0,0,0,1,1,0},
  {1,0,0,1,1,0,0},
  {0,1,0,0,1,0,0},
  {0,1,0,0,0,0,0},
  {0,0,0,1,1,1,1},
  {0,0,0,0,0,0,0},
  {0,0,0,1,1,0,0}
};
void setup() {
  for(int i =2;i<10;i++){
    pinMode(i, OUTPUT);
  }
  digitalWrite(9,HIGH);
  Serial.begin(9600);
}

void loop() {
  
  if(Serial.available()){
    char ch = Serial.read();    
    if(ch >='0' && ch<= '9') displayDigit(ch - 0x30);
  }
}

void displayDigit(int num){
  int pin = 2;
  for(int i = 0; i<7;i++){
    digitalWrite(pin +i , digits[num][i]);
  }
}
