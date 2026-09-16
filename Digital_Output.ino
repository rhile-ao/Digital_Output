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
  9 September 2026
-------------------------------------------*/
// GPIOS
uint8_t const LED[] = {32, 33, 25, 26, 27, 14};
uint8_t const NUM_PINS = sizeof(LED)/sizeof(LED[0]);
const uint8_t SW1 = 18;
const uint8_t SW2 = 19;

bool SW1_state = 0;
bool SW2_state = 0;

#include "LED_Modes.h"

void setup() {

  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);

  for (int i = 0; i < NUM_PINS; i++) {
    pinMode(LED[i], OUTPUT);
  }
}


void loop(){

  SW1_state = digitalRead(SW1);
  SW2_state = digitalRead(SW2);

  // 01 - BLINK
  if(SW1_state == 0 && SW2_state == 1){
    blink();
  }
  // 10 - ALT
  else if(SW1_state && !SW2_state){
    alt();
  }
  // 11 - RUN
  else if(SW1_state && SW2_state){
    run();
  }
  // 00 - OFF
  else{
    off();
  }
}