#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip (64,6);

boolean off=true;
void setup() {
  // put your setup code here, to run once:
strip.begin();
strip.setBrightness(25);
strip.clear();
}

void loop() {
  for(int i=0; i<strip.numPixels();i++){
     if(i%8==0){
      off=!off;
     }
    if(off==true){
      strip.setPixelColor(i,0,0,0);
      off=!off;
    }
    else if(off==false){
      strip.setPixelColor(i,255,0,255);
      off=!off;
      }
  }
  strip.show();
  }
