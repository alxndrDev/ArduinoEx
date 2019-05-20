#define DELAY_TIME 500

#define PUSH_BUTTON_1 13
#define PUSH_BUTTON_2 12
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
   digitalWrite(9, HIGH);

   pinMode(PUSH_BUTTON_1, INPUT);
   pinMode(PUSH_BUTTON_2, INPUT);
}

void loop() {
  if(digitalRead(PUSH_BUTTON_1) == HIGH){
    for(int i =0; i<10; i++){
      delay(1000);
      displayDigit(i);
    }
  }

   if(digitalRead(PUSH_BUTTON_2) == HIGH){
    for(int i =10; i>0; i--){
      delay(1000);
      displayDigit(i);
    }
  }
}

void displayDigit(int num){
  int pin =2;
  for(int i = 0 ;i<7;i++){
    digitalWrite(pin+i, digits[num][i]);
  }
}
