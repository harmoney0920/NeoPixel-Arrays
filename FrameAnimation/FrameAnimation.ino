#include <Adafruit_NeoPixel.h>
#include "frames.h"
Adafruit_NeoPixel strip (64, 6);

int whichFrame= 0;

int colors[8][3]{
  {183, 183,183},
  {255,122,6}, 
  {255,255,255},
  {0,0,0},
  {0,255,0},
  {0,0,255},
  {255,238,6},
   {255,0,255}
};

void setup() {
  strip.begin();
  strip.setBrightness(25);
  strip.clear();
  }

void loop() {

  for(int i=0; i<strip.numPixels(); i++){
    int pixAddress = pixelMap[i];
    int whichColor = animation[whichFrame][i];
    int red = colors[whichColor][0];
    int green = colors[whichColor][1];
    int blue = colors[whichColor][2];
    if(pixAddress!=-1){
      strip.setPixelColor(pixAddress, red,green,blue);
    }
  }
  strip.show();
  delay(5000);
  whichFrame= (whichFrame + 1)%5;
  }
