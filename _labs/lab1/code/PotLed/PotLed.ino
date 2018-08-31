int potIPT = A0;
int val = 0;
int LED_PIN = 3;

void setup() {   
  pinMode(LED_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  val = analogRead(potIPT);     // read the input pin
  analogWrite(LED_PIN, map(val, 0, 1023, 0, 255));
}
