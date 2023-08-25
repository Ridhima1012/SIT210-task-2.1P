
int pin = 2;
bool buttonPressed = false;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(pin, INPUT_PULLUP); // Configure pin as input with internal pull-up resistor
}

void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
}

void dash() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(900);
}

void loop() {
  if (digitalRead(pin) == LOW) { // Check if button is pressed
    buttonPressed = true;
  }

  if (buttonPressed) {
    // Restart the sequence
    // Name: Ridhima
    // Morse code: .-. .. -.. .... .. -- .-
    
    // led blink for R
    dot();
    dash();
    dot();
    delay(2000);
    Serial.print("R");

    // led blink for I 
    dot();
    dot();
    delay(2000);
    Serial.print("I");

    // led blink for D
    dash();
    dot();
    dot();
    delay(2000);
    Serial.print("D");

    // led blink for H
    dot();
    dot();
    dot();
    dot();
    delay(2000);
    Serial.print("H");

    // led blink for I
    dot();
    dot();
    delay(2000);
    Serial.print("I");

    //led blink for M
    dash();
    dash();
    delay(2000);
    Serial.print("M");

    //led blink for A
    dot();
    dash();
    Serial.print("A");
    buttonPressed = false; // Reset buttonPressed flag
  }
}








