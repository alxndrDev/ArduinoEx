#include <pitches.h>

int speakerOut = 4;
int song[28] = {
    NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_E4,0,
    NOTE_G4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_D4, 0,
    NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_E4,0,
    NOTE_G4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_C4, 0, 
  };

void setup() {
  pinMode(speakerOut ,OUTPUT);

}

void loop() {
 for(int i=0;i<28;i++){
  tone(speakerOut, song[i], 500);
  delay(500);
 }
 while(1);
}
