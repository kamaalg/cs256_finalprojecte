#include <MusicDefinitions.h>
#include <XT_DAC_Audio.h>

#include "SoundData.h"

XT_Wav_Class Sound(aurora);     
                                      
XT_DAC_Audio_Class DacAudio(25,0);    

uint32_t DemoCounter=0;               

void setup() {
  //Serial.begin(115200);               
}


void loop() {
  DacAudio.FillBuffer();                
  if(Sound.Playing==false)       
    DacAudio.Play(&Sound);       
  //Serial.println(DemoCounter++);        
}
