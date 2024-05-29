int botao = 2;
int led = 13;
int estado = 0;

void setup()
{
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  estado = digitalRead(botao);
  if (estado == 1) {
    digitalWrite(led, HIGH);
    Serial.println(estado);
  } else {
    digitalWrite(led, LOW);
    Serial.println(estado);
  }
  delay(100);
}
