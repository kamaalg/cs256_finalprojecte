// #include <MusicDefinitions.h>
// #include <XT_DAC_Audio.h>

// #include "SoundData.h"

// XT_Wav_Class Sound(relaxing);

// XT_DAC_Audio_Class DacAudio(25,0);

// uint32_t DemoCounter=0;

// void setup() {
//   //Serial.begin(115200);
// }


// void loop() {
//   DacAudio.FillBuffer();
//   if(Sound.Playing==false)
//     DacAudio.Play(&Sound);
//   //Serial.println(DemoCounter++);
// }
#include <Arduino.h>  // Include Arduino core library for tone function

unsigned int notes[] = { 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 294, 220, 262, 175, 220, 294, 175, 220, 294, 175, 220, 294, 220, 262, 330, 233, 294, 349, 233, 294, 349, 233, 294, 349, 294, 392, 220, 262, 330, 220, 262, 330, 220, 294, 196, 262, 220, 262, 220, 294, 220, 262, 175, 233, 294, 175, 233, 294, 233, 294, 233, 330, 220, 262, 349, 220, 262, 349, 262, 349, 262, 392, 262, 330, 262, 330, 220, 294, 262, 175, 220, 294, 220, 262, 175, 220, 294, 175, 220, 294, 220, 294, 220, 349, 233, 294, 392, 233, 294, 392, 294, 392, 294, 440, 294, 392, 466, 294, 392, 466, 349, 440, 330, 392, 349, 440, 294, 294, 330, 233, 294, 349, 233, 294, 349, 233, 294, 392, 349, 440, 294, 294, 349, 220, 277, 330, 220, 277, 330, 294, 349, 247, 294, 220, 277, 330, 440, 523, 349, 440, 587, 349, 440, 587, 349, 440, 587, 440, 523, 659, 466, 587, 698, 466, 587, 698, 466, 587, 698, 587, 784, 440, 523, 659, 440, 523, 659, 440, 587, 392, 523, 440, 523, 440, 587, 440, 523, 349, 466, 587, 349, 466, 587, 466, 587, 466, 659, 440, 523, 698, 440, 523, 698, 523, 698, 523, 784, 523, 659, 523, 659, 440, 587, 523, 349, 440, 587, 440, 523, 349, 440, 587, 349, 440, 587, 440, 587, 440, 698, 466, 587, 784, 466, 587, 784, 587, 784, 587, 880, 587, 784, 932, 587, 784, 932, 698, 880, 659, 784, 698, 880, 587, 587, 659, 466, 587, 698, 466, 587, 698, 466, 587, 784, 698, 880, 587, 587, 698, 440, 554, 659, 440, 554, 659, 587, 554, 440, 587, 440, 587, 440, 523, 659, 523, 587, 698, 698, 698, 466, 587, 784, 587, 880, 698, 440, 698, 440, 587, 440, 587, 784, 932, 466, 784, 466, 587, 466, 277, 330, 277, 330, 196, 294, 220, 277, 349, 349, 392, 294, 349, 440, 294, 349, 440, 294, 349, 440, 294, 349, 466, 294, 349, 440, 262, 330, 392, 262, 330, 392, 262, 330, 392, 262, 330, 392, 262, 349, 440, 294, 349, 440, 294, 349, 440, 294, 349, 440, 294, 349, 466, 294, 349, 440, 277, 330, 392, 277, 349, 220, 330, 175, 220, 294, 294, 330, 220, 294, 349, 392, 440, 262, 392, 262, 349, 262, 330, 220, 262, 349, 220, 262, 392, 220, 262, 440, 262, 330, 392, 349, 392, 262, 349, 440, 392, 349, 277, 330, 277, 349, 277, 330, 175, 220, 294, 330, 262, 175, 220, 294, 587, 659, 440, 587, 698, 659, 698, 523, 784, 523, 698, 523, 784, 698, 880, 523, 784, 523, 698, 349, 466, 587, 587, 659, 440, 587, 698, 440, 587, 784, 587, 880, 466, 587, 932, 466, 587, 466, 784, 440, 698, 784, 659, 440, 587, 659, 554, 587, 698, 880, 587, 784, 932, 523, 698, 880, 523, 698, 880, 523, 698, 880, 523, 659, 880, 784, 466, 587, 784, 440, 587, 698, 440, 698, 440, 784, 440, 659, 349, 440, 587, 587, 659, 698, 587, 698, 880, 587, 659, 698, 587, 698, 932, 587, 659, 698, 523, 698, 880, 523, 698, 880, 698, 1047, 523, 659, 880, 784, 466, 587, 784, 440, 587, 698, 440, 698, 440, 784, 440, 659, 349, 440, 587, 294 };
uint32_t delays[] = { 250, 147, 250, 147, 250, 147, 147, 147, 147, 250, 147, 250, 147, 250, 147, 147, 147, 147, 250, 147, 250, 147, 250, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 147, 147, 250, 250, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 250, 250, 250, 250, 147, 147, 147, 250, 250, 250, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 147, 147, 250, 147, 147, 250, 250, 250, 250, 250, 250, 250, 250, 250, 147, 147, 250, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 147, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 147, 147, 250, 250, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 250, 250, 250, 250, 147, 147, 147, 250, 250, 250, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 147, 147, 250, 147, 147, 250, 250, 250, 250, 250, 250, 250, 250, 250, 147, 147, 250, 147, 147, 250, 250, 250, 250, 250, 250, 147, 147, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 147, 147, 250, 250, 250, 147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 147, 250, 250, 400, 400, 400, 400, 400, 147, 147, 250, 250, 250, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 147, 147, 525, 525, 525, 147, 147, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 147, 147, 250, 250, 250, 147, 147, 250, 250, 250, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 147, 147, 147, 250, 250, 250, 147, 147, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 147, 147, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 147, 147, 250, 250, 147, 147, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 400, 400, 400, 147, 147, 147, 400, 400, 400, 147, 147, 147, 400, 400, 400, 147, 147, 147, 250, 250, 250, 250, 250, 250, 250, 250, 147, 147, 147, 147, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 250, 400, 400, 400, 1125 };


void song(int buzzerPin) {

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);


  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);


  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 554);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 554);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 554);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(525);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(525);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(525);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 554);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(400);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(1125);
  noTone(buzzerPin);
}
