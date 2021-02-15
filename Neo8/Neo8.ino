#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip (64,6);
int color=0;
void setup() {
  // put your setup code here, to run once:
strip.begin();
strip.setBrightness(25);
strip.clear();
}

void loop() {
  for(int i=0; i<strip.numPixels();i++){
  strip.setPixelColor(i,Wheel(color));
      }
  strip.show();
  delay(50);
  color= color+1;
  }
    uint32_t Wheel(byte WheelPos) {
  WheelPos = 255 - WheelPos;
  if(WheelPos < 85) {return strip.Color(255 - WheelPos * 3, 0, WheelPos * 3);}
  if(WheelPos < 170) {WheelPos -= 85; return strip.Color(0, WheelPos * 3, 255 - WheelPos * 3);}
  WheelPos -= 170;  return strip.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
 }
