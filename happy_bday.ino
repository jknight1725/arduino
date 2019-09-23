#include "pitches.h"

int freq[] = {NOTE_C4, NOTE_C4,NOTE_D4, NOTE_C4, NOTE_F4,
NOTE_E4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_G4,
NOTE_F4, NOTE_C4, NOTE_C4, NOTE_C5, NOTE_A4, NOTE_F4,
NOTE_E4, NOTE_D4, NOTE_AS4, NOTE_AS4, NOTE_A4, NOTE_F4,
NOTE_G4, NOTE_F4};
int const freqSize {25};

int melody[] = {NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5,
NOTE_A5, NOTE_B5, NOTE_C6};
int const melSize {8};

int duration {500};

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  for(int note=0; note < melSize; note++) {
    tone(2, melody[note], duration);
    delay(1000);
  }
delay(2000);
}
