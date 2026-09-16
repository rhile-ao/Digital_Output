void blink(){
  // BLINK 3x
  for(int x = 0; x < 3; x++){

    // LEDS ON
    for(int i = 0; i < NUM_PINS; i++){
      digitalWrite(LED[i],1);
    }
    delay(500);

    // LEDS OFF
    for(int i = 0; i < NUM_PINS; i++){
      digitalWrite(LED[i],0);
    }
    delay(500);
  }
}
void alt(){
  // ALT 3x
  for(int x = 0; x < 3; x++){

    // FIRST 3 ON, SECOND 3 OFF
    for(int i = 0; i < 3; i++){
      digitalWrite(LED[i],1);
    }

    for(int i = 3; i < 6; i++){
      digitalWrite(LED[i],0);
    }

    delay(500);

    // FIRST 3 OFF, SECOND 3 ON
    for(int i = 0; i < 3; i++){
      digitalWrite(LED[i],0);
    }

    for(int i = 3; i < 6; i++){
      digitalWrite(LED[i],1);
    }

    delay(500);

    // SECOND 3 OFF BEFORE RUN
    for(int i = 3; i < 6; i++){
      digitalWrite(LED[i],0);
    }
  }
}
void run(){

  // RUN 3x
  for(int x = 0; x < 3; x++){

    // LED 0 TO LED 5
    for(int i = 0; i < 6; i++){
      digitalWrite(LED[i],1);
      delay(500);
      digitalWrite(LED[i],0);
    }

    // LED 4 TO LED 1
    for(int i = 4; i >= 1; i--){
      digitalWrite(LED[i],1);
      delay(500);
      digitalWrite(LED[i],0);
    }

    // LED 0 ONLY 
    if(x == 2){
      digitalWrite(LED[0],1);
      delay(500);
      digitalWrite(LED[0],0);
    }
  }
}