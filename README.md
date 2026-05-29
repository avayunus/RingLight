# Ring Light (working)

ESP32 firmware for a desk lamp built on a WS2812B addressable LED strip.

## Current state
Basic LED control working on breadboard. 
Cycles through colors at low brightness for testing.

## Hardware
- ESP32 dev board
- BTF-Lighting WS2812B strip, 144 LEDs/m
- 220Ω resistor on data line
- USB power (for now)

## Wiring
- ESP32 5V → strip 5V
- ESP32 GND → strip GND  
- ESP32 GPIO5 → 330Ω → strip DIN
