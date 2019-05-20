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
   for(int i = 0; i<7;i++){
    pinMode(i, OUTPUT);
  }
  pinMode(13,INPUT);
}
int flag = 0;
void loop() {
  
  if(digitalRead(13) == HIGH){
    flag = flag ^ 01;
  }
  if(flag == 0){
    for(int i = 0 ; i<10; i++){
      displayNumber(i);  
      delay(500);
    }
  }
  if(flag == 1){
    for(int i = 9;i>=0; i--){
      displayNumber(i);
      delay(500);
    }
  }
}

void displayNumber(int num){

  for(int i = 0 ;i<7;i++){
    digitalWrite(i, digits[num][i]);
  }

  
}
