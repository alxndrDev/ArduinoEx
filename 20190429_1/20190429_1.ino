int tr[4] ={A0, A1, A2, A3};
int fnd[8] = {2,3,4,5,6,7,8,9};

byte fnd_val[10][7] = 
{
  {0,0,0,0,0,0,1}, //0
  {1,0,0,1,1,1,1}, //1
  {0,0,1,0,0,1,0}, //2
  {0,0,0,0,1,1,0}, //3
  {1,0,0,1,1,0,0}, //4
  {0,1,0,0,1,0,0}, //5
  {0,1,0,0,0,0,0}, //6
  {0,0,0,1,1,1,1}, //7
  {0,0,0,0,0,0,0}, //8
  {0,0,0,1,1,0,0}};  //9

void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<4; i++)
  {
    pinMode(tr[i], OUTPUT);
  }
  for(int j=0;j<8; j++)
  {
    pinMode(fnd[j],OUTPUT);
  }
  digitalWrite(9, LOW);
}


int del_cnt =0;
int po=0;
void loop() {
  displayFND4(po);
  if(del_cnt == 500){
    del_cnt = 0;
    po++;
  }
  
  if(po==10000)po=0;
 
  del_cnt++;
  delay(1);
}
int pos =0;
void displayFND4(int num){
  int no;
  if(pos == 0) no = num / 1000;
  else if(pos == 1) no = (num %1000) /100;
  else if(pos == 2) no = (num % 100) /10;
  else if(pos == 3) no = num % 10;
  
  for(int i=0;i<4;i++){
    digitalWrite(tr[i], HIGH);
  }
  digitalWrite(tr[pos], LOW);
  
  for(int pinout=0; pinout<7; pinout++)
  {
    digitalWrite(fnd[pinout],!fnd_val[no][pinout]);
  }
  pos = ++pos % 4;
}
