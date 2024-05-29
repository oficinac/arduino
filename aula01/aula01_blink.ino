void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);   //HIGH = 1   LOW = 0
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
}
