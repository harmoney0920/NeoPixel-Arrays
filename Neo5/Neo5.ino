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
  delay(100);
  strip.show();
  }
 for(int i=0; i<strip.numPixels();i++){
  strip.setPixelColor(i,0,0,0);
  delay(100);
  strip.show();
   }
}
