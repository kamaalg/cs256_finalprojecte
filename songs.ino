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


// void setup() {
//   // put your setup code here, to run once:
//   // call the song function with digital pin
//   song(11);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
// }

uint32_t DemoCounter = 0;

void setup() {
  //Serial.begin(115200);
  pinMode(25, OUTPUT); // Configure pin 25 (where you have DAC connected) as an output
}

void loop() {
  //DacAudio.FillBuffer(); // No need for FillBuffer() when using tone()

  if (!Sound.Playing) {
    //DacAudio.Play(&Sound); // No need for DacAudio.Play() when using tone()
    game_of_thrones(25);
  }
  //Serial.println(DemoCounter++);
}
