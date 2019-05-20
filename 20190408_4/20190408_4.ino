#define doe 1046.6
#define re 1174.6
#define mi 1318.6
#define pa 1397.0
#define sol 1568.0
#define ra 1760.0
#define si 1975.6
#define doee 2093.2



int speakerOut = 4;

void setup() {
  pinMode(speakerOut, OUTPUT);  
}

int fly[14] = {doe,doe,sol,sol,ra,ra,sol,pa,pa,mi,mi,re,re,doe};

void loop() {
  for(int i = 0;i<14;i++){
    tone(speakerOut, fly[i], 1000);  
    delay(1000);
  }
  while(1);
}
