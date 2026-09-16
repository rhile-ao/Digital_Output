/*====================================================
                  DIGITAL OUTPUT LED 
======================================================
Description:
  This program contains three LED modes: Blink LED, 
  Alternate LED, and Run LED. Each mode uses a 500ms 
  delay and runs for three cycles.

Programmer:
  De Asis, Felicity M.
  Dela Torre, Shanna Dale R.
  Galpo, Rhile L.

Date:
  2 September 2026
----------------------------------------------------*/
// GPIOS
uint8_t const LED[] = {32, 33, 25, 26, 27, 12};
uint8_t const NUM_PINS = sizeof(LED) / sizeof(LED[0]);

void setup() {
  for (int i = 0; i < NUM_PINS; i++) {
    pinMode(LED[i], OUTPUT);
  }
}

#include "LED_Modes.h"
// 3 cycle 
void loop() {
  blink();   
  alt();
  run();
}