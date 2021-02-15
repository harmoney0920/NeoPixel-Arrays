#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip (64,6);


void setup() {
  // put your setup code here, to run once:
strip.begin();
strip.setBrightness(25);
strip.clear();
}

void loop() {
  strip.setPixelColor(0,255,0,255);
  strip.show();
  strip.setPixelColor(0,0,0,0); 
  strip.show();
  delay(100);
  
  
  // put your main code here, to run repeatedly:

}
