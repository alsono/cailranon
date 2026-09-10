void setup() {
  int shooty = 0
  // the uhh button for shooting:
  pinMode(7, INPUT);
  // the thing that beeps when you ow:
  pinMode(10, OUTPUT);
  // the coils that shoot stuff:
  pinmode(4, OUTPUT);
  pinmode(5, OUTPUT);
  pinmode(6, OUTPUT);
}

void loop() {
shooty = digitalRead(7);
if val > 0 {
  tone(10, 900)
  digitalWrite(4, HIGH);
  delay(20);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(20);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(20);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(4, HIGH);
  delay(20);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(20);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(20);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(4, HIGH);
  delay(20);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(20);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(20);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  noTone(10)
  delay(5000)
}


}
