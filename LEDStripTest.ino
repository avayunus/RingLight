#include <Adafruit_NeoPixel.h>

#define LED_PIN 4
#define LED_COUNT 144

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.setBrightness(5); // very low because you're using USB power
  strip.clear();
  strip.show();
}

void loop() {
  fillStrip(strip.Color(255, 0, 0));   // red
  delay(2000);

  fillStrip(strip.Color(0, 255, 0));   // green
  delay(2000);

  fillStrip(strip.Color(0, 0, 255));   // blue
  delay(2000);

  fillStrip(strip.Color(255, 255, 255)); // dim white
  delay(2000);

  fillStrip(strip.Color(0, 0, 0)); // off
  delay(1000);
}

void fillStrip(uint32_t color) {
  for (int i = 0; i < LED_COUNT; i++) {
    strip.setPixelColor(i, color);
  }
  strip.show();
}