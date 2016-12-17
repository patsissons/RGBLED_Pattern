# Analog RGB LED Pattern

This sketch is designed to combine the [Blinkylabs Pattern Paint](http://blinkinlabs.com/blinkytape/patternpaint/) lighting sequence creator with the arduino [FastLED](http://fastled.io/) library. This combination allows quick and easy construction of lighting sequences that can be rendered effortlessly using an arduino and an analog (PWM Based) RGB LED strip.

## Getting Started

1. Install the [Arduino Software](https://www.arduino.cc/en/Main/Software) ([`choco install arduino`](https://chocolatey.org/packages/arduino))
1. Install [Blinkylabs Pattern Paint](http://blinkinlabs.com/blinkytape/patternpaint/)
1. Install the [FastLED Library](https://github.com/FastLED/FastLED/releases/latest)
1. Install the [BlinkyTape_Arduino Library](https://github.com/Blinkinlabs/BlinkyTape_Arduino/releases/latest)
1. Open the `RGBLED_Pattern.ino` sketch
1. Create a pattern using Pattern Paint and export it as `pattern.h`
1. Update the `PIN_RED`, `PIN_GREEN`, `PIN_BLUE`, and `BRIGHTNESS` defines (if needed)
1. Compile and Upload the sketch

### Installing Arduino Libraries

1. Open the Arduino IDE
1. `Sketch` Menu `->` `Include Library` `->` `Add .ZIP Library...`
1. Locate downloaded zip file

## Designing Lighting sequences

You can use Pattern Paint to create your lighting sequences, or since Pattern Paint works with PNG and BMP files, you can alternatively use any raster image editor (such as Photoshop) to create complex effects and import the image into Pattern Paint.

Note that a RGB LED sequence is always a single pixel height image, as these strips do not have addressable pixels.

The included lighting sequence simply blinks RGB LED strip with red every second.
