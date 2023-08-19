

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void dot(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}


void dash(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(900);
}

void loop(){
   // Name: Ridhima
   // Morse code: .-. .. -.. .... .. -- .-

   // led blink for R
   dot();
   dash();
   dot();
   delay(2000);


   // led blink for I 
   dot();
   dot();
   delay(2000);

   // led blink for D
   dash();
   dot();
   dot();
   delay(2000);

   // led blink for H
   dot();
   dot();
   dot();
   dot();
   delay(2000);

   // led blink for I
   dot();
   dot();
   delay(2000);

   //led blink for M
   dash();
   dash();
   delay(2000);

   //led blink for A
   dot();
   dash();
   delay(20000);
}




