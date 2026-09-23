#include <Arduino.h>
#include <FastLED.h>

#define NUM_STRIPS 10
#define LEDS_PER_STRIP 60
#define TOTAL_LEDS (NUM_STRIPS * LEDS_PER_STRIP)

CRGB leds[TOTAL_LEDS]; //declaring crgb array, named "leds", with each led mentioned.

void setup () {
  FastLED.addLeds<WS2812B, 32, GRB>(leds, 0*LEDS_PER_STRIP, LEDS_PER_STRIP); //GRB for order green->red->blue, inside () you've got led array(for all 600leds), the specific/postion of strip in that function (60led per strip), then num of led per strip.
  FastLED.addLeds<WS2812B, 33, GRB>(leds, 1*LEDS_PER_STRIP, LEDS_PER_STRIP);
  FastLED.addLeds<WS2812B, 25, GRB>(leds, 2*LEDS_PER_STRIP, LEDS_PER_STRIP);
  FastLED.addLeds<WS2812B, 26, GRB>(leds, 3*LEDS_PER_STRIP, LEDS_PER_STRIP);
  FastLED.addLeds<WS2812B, 27, GRB>(leds, 4*LEDS_PER_STRIP, LEDS_PER_STRIP);
  FastLED.addLeds<WS2812B, 14, GRB>(leds, 5*LEDS_PER_STRIP, LEDS_PER_STRIP);
  FastLED.addLeds<WS2812B, 12, GRB>(leds, 6*LEDS_PER_STRIP, LEDS_PER_STRIP);
  FastLED.addLeds<WS2812B, 13, GRB>(leds, 7*LEDS_PER_STRIP, LEDS_PER_STRIP);
  FastLED.addLeds<WS2812B, 23, GRB>(leds, 8*LEDS_PER_STRIP, LEDS_PER_STRIP);
  FastLED.addLeds<WS2812B, 4, GRB>(leds, 9*LEDS_PER_STRIP, LEDS_PER_STRIP);
  FastLED.setBrightness(255); //set brightness of leds from 0-255
}

void loop () {
  fill_solid(leds + 0*LEDS_PER_STRIP, LEDS_PER_STRIP, CRGB::Red); //the first part the pointer; leds +0*leds_per_strip indicates that in the array of 600 leds. It'll start at led 0 and fill 60 leds from there (leds array will be at pos 0 + 0*whatever is zero. 0+0, pos 0.). 0* being where the fill solid starts colouring. here it starts at led 0. then 60, then 120, etc...
  fill_solid(leds + 1*LEDS_PER_STRIP, LEDS_PER_STRIP, CRGB::Blue);
  fill_solid(leds + 2*LEDS_PER_STRIP, LEDS_PER_STRIP, CRGB::Green);
  fill_solid(leds + 3*LEDS_PER_STRIP, LEDS_PER_STRIP, CRGB::Red);
  fill_solid(leds + 4*LEDS_PER_STRIP, LEDS_PER_STRIP, CRGB::Blue);
  fill_solid(leds + 5*LEDS_PER_STRIP, LEDS_PER_STRIP, CRGB::Green);
  fill_solid(leds + 6*LEDS_PER_STRIP, LEDS_PER_STRIP, CRGB::Red);
  fill_solid(leds + 7*LEDS_PER_STRIP, LEDS_PER_STRIP, CRGB::Blue);
  fill_solid(leds + 8*LEDS_PER_STRIP, LEDS_PER_STRIP, CRGB::Green);
  fill_solid(leds + 9*LEDS_PER_STRIP, LEDS_PER_STRIP, CRGB::Red);
  FastLED.show();
  delay(5000);
}