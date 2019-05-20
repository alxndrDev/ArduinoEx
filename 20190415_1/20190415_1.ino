
int tr[4] = {A0,A1,A2,A3};  //실렉트 신호, 트랜지스터 핀
int fnd[8] = {2, 3, 4, 5, 6, 7, 8, 9};

byte fnd_val[10][7] = {
  {1,1,1,1,1,1,0},
  {0,1,1,0,0,0,0},
  {1,1,0,1,1,0,1},
  {1,1,1,1,0,0,1},
  {0,1,1,0,0,1,1},
  {1,0,1,1,0,1,1},
  {1,0,1,1,1,1,1},
  {1,1,1,0,0,0,0},
  {1,1,1,1,1,1,1},
  {1,1,1,0,0,1,1}
};

int num =1;
int po = 0;

void setup() {
  //트랜지스터 실렉트 핀 출력 설정
  for(int i = 0;i<4;i++){
    pinMode(tr[i], OUTPUT);
  }

  // 7-세그먼트 핀 출력 설정
  for(int j=0;j<8;j++){
    pinMode(fnd[j], OUTPUT);
  }

  digitalWrite(9, HIGH);
}

void loop() {
  digitalWrite(tr[0], HIGH);
  digitalWrite(tr[1], HIGH);
  digitalWrite(tr[2], HIGH);
  digitalWrite(tr[3], HIGH);

  for(int pinOut=0;pinOut<7;pinOut++){
    digitalWrite(fnd[pinOut], fnd_val[po][pinOut]); // 7 segment OUTPUT    0^1
  }
  po++;

  if(po == 10){
    po = 0;
  }
  delay(500);
}
