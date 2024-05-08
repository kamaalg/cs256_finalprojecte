// #include "pitches.h"

// int melody[] = {
// NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_A4,
// NOTE_G4, NOTE_C5, NOTE_AS4, NOTE_A4,                   
// NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_FS4, NOTE_DS4, NOTE_D4,
// NOTE_C4, NOTE_D4,0,                                 

// NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_A4,
// NOTE_G4, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_AS4, NOTE_C5, NOTE_AS4, NOTE_A4,      //29               //8
// NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_FS4, NOTE_DS4, NOTE_D4,
// NOTE_C4, NOTE_D4,0,                                       

// NOTE_D4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_DS5, NOTE_D5,
// NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_C5,
// NOTE_C4, NOTE_D4, NOTE_DS4, NOTE_FS4, NOTE_D5, NOTE_C5,
// NOTE_AS4, NOTE_A4, NOTE_C5, NOTE_AS4,             //58

// NOTE_D4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_DS5, NOTE_D5,
// NOTE_C5, NOTE_D5, NOTE_C5, NOTE_AS4, NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_C5, NOTE_G4,
// NOTE_A4, 0, NOTE_AS4, NOTE_A4, 0, NOTE_G4,
// NOTE_G4, NOTE_A4, NOTE_G4, NOTE_FS4, 0,

// NOTE_C4, NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_DS4,
// NOTE_C4, NOTE_D4, 0,
// NOTE_C4, NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_DS4,
// NOTE_C4, NOTE_D4, -1

// };

// // note durations: 8 = quarter note, 4 = 8th note, etc.
// int noteDurations[] = {       //duration of the notes
// 8,4,8,4,
// 4,4,4,12,
// 4,4,4,4,4,4,
// 4,16,4,

// 8,4,8,4,
// 4,2,1,1,2,1,1,12,
// 4,4,4,4,4,4,
// 4,16,4,

// 4,4,4,4,4,4,
// 4,4,4,12,
// 4,4,4,4,4,4,
// 4,4,4,12,

// 4,4,4,4,4,4,
// 2,1,1,2,1,1,4,8,4,
// 2,6,4,2,6,4,
// 2,1,1,16,4,

// 4,8,4,4,4,
// 4,16,4,
// 4,8,4,4,4,
// 4,20,
// };

// int speed=90;  
// void setup() {

// Serial.begin(115200);
// for (int thisNote = 0; melody[thisNote]!=-1; thisNote++) {

// int noteDuration = speed*noteDurations[thisNote];
// tone(A17, melody[thisNote],noteDuration*.95);
// Serial.println(melody[thisNote]);

// delay(noteDuration);

// noTone(A17);
// }
// }

// void loop() {
// // no need to repeat the melody.
// }

void song(int buzzerPin){
  
  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(900);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(900);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(900);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(900);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(900);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(900);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(900);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(900);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(900);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(900);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(900);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(900);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(450);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(450);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(450);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(450);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 87);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 123);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 87);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 123);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 123);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 82);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 87);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 98);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 82);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 87);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 98);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 82);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 87);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 98);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 82);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 87);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 98);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 87);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 123);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 87);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 123);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 123);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 98);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 123);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 82);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 87);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 98);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 82);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 87);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 98);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(900);
  noTone(buzzerPin);
}

void setup() {
  // put your setup code here, to run once:
  // call the song function with digital pin
  song(A17);
}

void loop() {
  // put your main code here, to run repeatedly:
}
