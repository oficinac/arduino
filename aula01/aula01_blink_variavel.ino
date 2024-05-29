int led = 13;
int tempo = 1000;
void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);   
  delay(tempo);
  digitalWrite(led,LOW);
  delay(tempo);
}
