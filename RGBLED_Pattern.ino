#include <FastLED.h>
#include <animation.h>

// include animation pattern
#include "pattern.h"

// PWM output pins
#define PIN_RED 5
#define PIN_GREEN 6
#define PIN_BLUE 3

// LED Brightness (0 - 255)
#define BRIGHTNESS 255

// LED color (basically single pixel strip)
CRGB color;

void show(const CRGB& rgb)
{
  analogWrite(PIN_RED,   scale8(rgb.r, BRIGHTNESS) );
  analogWrite(PIN_GREEN, scale8(rgb.g, BRIGHTNESS) );
  analogWrite(PIN_BLUE,  scale8(rgb.b, BRIGHTNESS) );
}

void setup() {
  // setup RGB channel output pins
  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE, OUTPUT);

  // reset strip to full off
  show(0);
}

//uint8_t hue;

void loop() {
  // use the animation library to fill the color
  animation.draw(&color);

  // show the color on the LED strip
  show(color);

  FastLED.delay(animation.getFrameDelay());
}


