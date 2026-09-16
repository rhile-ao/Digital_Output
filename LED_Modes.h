void blink(){
  // LEDS ON
  for(int i = 0; i < NUM_PINS; i++){
    digitalWrite(LED[i], 1);
  }
  delay(500);


  // LEDS OFF
  for(int i = 0; i < NUM_PINS; i++){
    digitalWrite(LED[i], 0);
  }
  delay(500);
}

void alt(){
  //on (0-2)
  for(int i = 0; i < 3; i++){
    digitalWrite(LED[i], 1);
  }
  //off
  for(int i = 3; i < 6; i++){
    digitalWrite(LED[i], 0);
  }
  delay(500);

  //off
  for(int i = 0; i < 3; i++){
    digitalWrite(LED[i], 0);
  }
  //on(3-5)
  for(int i = 3; i < 6; i++){
    digitalWrite(LED[i], 1);
  }
  delay(500);

  // OFF
  for(int i = 0; i < NUM_PINS; i++){
    digitalWrite(LED[i], 0);
  }
}

void run(){
  // LED 0 TO LED 5 (down)
  for(int i = 0; i < 6; i++){

    digitalWrite(LED[i], 1);
    delay(300);

    // LED OFF
    digitalWrite(LED[i], 0);
    delay(300);
  }
  // LED 4 TO LED 1 (up)
  for(int i = NUM_PINS-2; i >= 1; i--){

    digitalWrite(LED[i], 1);
    delay(300);

    // LED OFF
    digitalWrite(LED[i], 0);
    delay(300);
  }
}

void off(){
  // ALL LEDS OFF
  for(int i = 0; i < NUM_PINS; i++){
    digitalWrite(LED[i], 0);
  }
} 