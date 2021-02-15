#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip (64,6);


void setup() {
  // put your setup code here, to run once:
strip.begin();
strip.setBrightness(25);
strip.clear();
}

void loop() {
  for(int i=0; i<strip.numPixels();i++){
  strip.setPixelColor(i,255,0,255);
  }
  strip.show();
  delay(500);
   for(int i=0; i<strip.numPixels();i++){
  strip.setPixelColor(i,0,0,0);
  strip.show();
   }
}
