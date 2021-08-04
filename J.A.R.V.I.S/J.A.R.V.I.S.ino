#include <SD.h>
#include <SPI.h>
#include <TMRpcm.h>
#include <VoiceRecognitionV3.h>

#define SD_ChipSelectPin 53  
TMRpcm audio;  

VR myVR(10,11);
uint8_t buf[255];

void setup() {
 myVR.begin(9600);
 Serial.begin(115200);
 audio.speakerPin = 46;
 audio.setVolume(5);  
 pinMode(13,OUTPUT);
 if (!SD.begin(SD_ChipSelectPin)) {  
    return;
  }
 else{
    Serial.println("SD OK"); 
  }
}

