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
#include <Arduino.h> // Include Arduino core library for tone function

#include <MusicDefinitions.h>
#include <XT_DAC_Audio.h>

#include "SoundData.h"

XT_Wav_Class Sound(relaxing);
XT_DAC_Audio_Class DacAudio(25, 0);


void song(int buzzerPin){
  
  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 196);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 175);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(450);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(450);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(450);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(150);
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
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 554);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 554);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 554);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(300);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(150);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(150);
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
void game_of_thrones(int buzzerPin){
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
void tetris(int buzzerPin){
  tone(buzzerPin, 659);
  delay(509);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(276);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(234);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(503);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(267);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(238);
  noTone(buzzerPin);

  tone(buzzerPin, 165);
  delay(269);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(241);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(273);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(518);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(285);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(234);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(495);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(232);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(262);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(512);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(279);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(234);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(495);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(494);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(262);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(512);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(279);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(495);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(495);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 123);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 247);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(262);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(217);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(279);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(495);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(234);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(478);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(262);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(250);
  noTone(buzzerPin);

  tone(buzzerPin, 147);
  delay(279);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(233);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(991);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(762);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(262);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(279);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(235);
  noTone(buzzerPin);

  tone(buzzerPin, 131);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(234);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(740);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(232);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(262);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(498);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(279);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(495);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(495);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(494);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(262);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(512);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(279);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(1008);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(279);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(989);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(262);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(1008);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(279);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(989);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(262);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(1008);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(279);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(989);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(262);
  noTone(buzzerPin);

  tone(buzzerPin, 415);
  delay(1008);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(279);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(989);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(262);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(1008);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(279);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(989);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(262);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(1008);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(279);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(989);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(262);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(512);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(279);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(495);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(989);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 110);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(262);
  noTone(buzzerPin);

  tone(buzzerPin, 831);
  delay(1998);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(279);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 104);
  delay(261);
  noTone(buzzerPin);

  tone(buzzerPin, 208);
  delay(262);
  noTone(buzzerPin);
}




void gang(int buzzerPin){
  
  tone(buzzerPin, 2093);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(235);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(201);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(123);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(235);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(201);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(123);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(235);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(201);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(123);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(235);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(201);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(123);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(586);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(633);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(772);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(525);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(540);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(297);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(278);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(698);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(540);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(204);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(575);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(563);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(525);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(451);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(544);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(606);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(602);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(606);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(648);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(563);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(571);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(201);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(571);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(204);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(540);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(494);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(235);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(201);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(123);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(235);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(201);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(123);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(235);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(201);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(123);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(586);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(633);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(772);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(525);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(540);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(297);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(278);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(698);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(540);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(204);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(575);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(563);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(525);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(451);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(544);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(606);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(602);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(606);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(648);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(563);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(571);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(201);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(571);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(204);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(540);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(494);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(235);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(201);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(123);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(162);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(235);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(201);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(154);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(123);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(586);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(633);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(772);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(525);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(540);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(297);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(278);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(698);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(540);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(204);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(575);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(563);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(525);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(451);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(544);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(606);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(602);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(606);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(648);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(563);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(571);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(201);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(571);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(204);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(540);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(494);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(586);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(633);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(772);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(525);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(540);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(297);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(278);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(698);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(540);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(204);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(575);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(563);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(525);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(451);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(544);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(606);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(602);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(606);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(648);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(563);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(571);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(201);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(571);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(204);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(540);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(494);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(544);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(606);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(247);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(602);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(606);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(648);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(563);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(193);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(571);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(201);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(571);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(204);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(540);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(216);
  noTone(buzzerPin);

  tone(buzzerPin, 1976);
  delay(532);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 2093);
  delay(556);
  noTone(buzzerPin);

  tone(buzzerPin, 784);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 1568);
  delay(494);
  noTone(buzzerPin);
}
void gravity(int buzzerPin){
  
  tone(buzzerPin, 349);
  delay(207);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(197);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(196);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(198);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(198);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(196);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(196);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(197);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(210);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(197);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(196);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(198);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(198);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(196);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(196);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(197);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(210);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(197);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(196);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(198);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(198);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(196);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(196);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(197);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(210);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(197);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(196);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(198);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(198);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(198);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(89);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(184);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(91);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(1130);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(1130);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(377);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(377);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(1513);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(1513);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(573);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(573);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(558);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(558);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(1499);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(1130);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(1130);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(377);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(377);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(756);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(756);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(750);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(750);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(756);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(756);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(742);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(742);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(756);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(756);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(742);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(742);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(375);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(375);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(375);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(381);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(381);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(381);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(388);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(388);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(388);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(384);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(384);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(373);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(373);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(377);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(377);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(375);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(375);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(375);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(381);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(381);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(381);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(388);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(388);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(388);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 233);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 554);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(373);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(373);
  noTone(buzzerPin);

  tone(buzzerPin, 554);
  delay(373);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(377);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(377);
  noTone(buzzerPin);

  tone(buzzerPin, 554);
  delay(377);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(375);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(375);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(375);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(381);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(381);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(381);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(388);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(388);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(388);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 220);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(370);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(373);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(373);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(373);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(377);
  noTone(buzzerPin);

  tone(buzzerPin, 349);
  delay(377);
  noTone(buzzerPin);

  tone(buzzerPin, 466);
  delay(377);
  noTone(buzzerPin);

  tone(buzzerPin, 262);
  delay(384);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(384);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(384);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 277);
  delay(384);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(384);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(384);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 554);
  delay(371);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(210);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(198);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(197);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(196);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(198);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(198);
  noTone(buzzerPin);

  tone(buzzerPin, 554);
  delay(196);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(196);
  noTone(buzzerPin);

  tone(buzzerPin, 554);
  delay(197);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(159);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(159);
  noTone(buzzerPin);

  tone(buzzerPin, 1175);
  delay(147);
  noTone(buzzerPin);

  tone(buzzerPin, 2349);
  delay(147);
  noTone(buzzerPin);
}
void take_me_home(int buzzerPin){
  tone(buzzerPin, 294);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(241);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(579);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(1090);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(249);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(533);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(927);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(281);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(405);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(330);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(245);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(107);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(252);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(185);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(344);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(451);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(1385);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(281);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(483);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(82);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(124);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(103);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(277);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(234);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(142);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(245);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(977);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(92);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(348);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(284);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(252);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(281);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(241);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(447);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(96);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(291);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(256);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(195);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(142);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(259);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(742);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(309);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(320);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(1946);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(146);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(110);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(1665);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(405);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(288);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(302);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(1474);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(220);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(146);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(295);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(334);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(1225);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(256);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(96);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(206);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(312);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(316);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(1587);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(323);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(124);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(305);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(1744);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(352);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(540);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(188);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(1271);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(138);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(124);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(245);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(1403);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(316);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(430);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(732);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(270);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(259);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(483);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(927);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(312);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(387);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(288);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(227);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(110);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(249);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(238);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(181);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(302);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(462);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(1261);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(249);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(501);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(238);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(117);
  noTone(buzzerPin);

  tone(buzzerPin, 330);
  delay(117);
  noTone(buzzerPin);

  tone(buzzerPin, 294);
  delay(117);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(252);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(135);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(227);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(977);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(107);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(117);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(110);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(284);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(249);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(273);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(312);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(465);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(273);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(114);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(241);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(124);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(270);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(714);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(320);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(305);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(1406);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(341);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(305);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(142);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(210);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(1616);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(220);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(92);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(295);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(302);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(1467);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(206);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(149);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(245);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(309);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(43);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(1523);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(380);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(291);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(256);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(376);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(1538);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(423);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(121);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(334);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(1705);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(426);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(256);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(494);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(167);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(121);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(1204);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(284);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(312);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(1445);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(241);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 370);
  delay(515);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(426);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(309);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(472);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(462);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(309);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(526);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(437);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(302);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(447);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(366);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(295);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(323);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(384);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(277);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(515);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(163);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(1481);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(107);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(259);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(249);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(107);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(99);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(273);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(85);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(334);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(256);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(252);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(309);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(160);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(419);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(249);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(277);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(163);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(1420);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(181);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(252);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(1488);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(50);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(181);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(302);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(1942);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(160);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(153);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(142);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(1687);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(213);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(99);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(284);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(309);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(1449);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(206);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(117);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(277);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(312);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(1477);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(234);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(82);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(245);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(156);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(337);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(1740);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(167);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(124);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(103);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(266);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(1804);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(369);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(295);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(490);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(178);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(1218);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(121);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(181);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(238);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(1534);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(472);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(270);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(273);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(1445);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(494);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(167);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(124);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(170);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(1616);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(234);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(96);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(281);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(181);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(1612);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(231);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(99);
  noTone(buzzerPin);

  tone(buzzerPin, 523);
  delay(302);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(312);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(1925);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(256);
  noTone(buzzerPin);

  tone(buzzerPin, 659);
  delay(138);
  noTone(buzzerPin);

  tone(buzzerPin, 587);
  delay(369);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(1733);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(153);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(121);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(110);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(263);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(1740);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(330);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(241);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(508);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(174);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(1197);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(124);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(142);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(288);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(2106);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(359);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(121);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(1506);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(401);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(355);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(210);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(1513);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(238);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(89);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(423);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(156);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(1555);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(224);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(110);
  noTone(buzzerPin);

  tone(buzzerPin, 494);
  delay(316);
  noTone(buzzerPin);

  tone(buzzerPin, 440);
  delay(291);
  noTone(buzzerPin);

  tone(buzzerPin, 392);
  delay(1225);
  noTone(buzzerPin);
}
void setup() {
  //Serial.begin(115200);
  pinMode(25, OUTPUT); // Configure pin 25 (where you have DAC connected) as an output
}

void loop() {
  //DacAudio.FillBuffer(); // No need for FillBuffer() when using tone()

  if (!Sound.Playing) {
    //DacAudio.Play(&Sound); // No need for DacAudio.Play() when using tone()
    take_me_home(25);
  }
  //Serial.println(DemoCounter++);
}


// void setup() {
//   // put your setup code here, to run once:
//   // call the song function with digital pin
//   song(11);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
// }

uint32_t DemoCounter = 0;

