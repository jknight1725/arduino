#include <LiquidCrystal.h>
#include "pitches.h"

LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

int melody[] = {NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5,
NOTE_A5, NOTE_B5, NOTE_C6};

void setup() {
    lcd.begin(16, 2);
    lcd.print("Hello, World");
}

void loop() {
  lcd.setCursor(0, 1);


  for(int note=0; note < 8; note++) {
    lcd.display();
    lcd.print(melody[note]);
    delay(500);
    lcd.noDisplay();
    lcd.clear();
    delay(1000);
  }
}
