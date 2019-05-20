
boolean prev_btn, cur_btn;
byte key; 
byte keyflag;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  prev_btn = 0;
  cur_btn = 0;
  key = 0;
  keyflag = 0;

}

void loop() {
  //cur_btn = digitalRead(2);
  key = getKey(keyflag);
  if(key != prev_btn){
    if (key == HIGH){
      Serial.println("Button is ON...");
    }else{
      Serial.println("Button is OFF...");
    }
     prev_btn = key;
    delay(500);
  }
}

byte getKey(byte prev_key){

  keyflag = 0;
  key = digitalRead(2);
  
  if(key){
    delay(1);
    key = digitalRead(2);
    if(key) key = 1; 
  }
  if(key && (key != prev_key)) keyflag = 1;
  
  return key;
}
