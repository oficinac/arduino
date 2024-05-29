int led_verde =13;
int led_amarelo = 12;
int led_vermelho = 11;
void setup(){
  pinMode(led_verde,OUTPUT);
  pinMode(led_amarelo,OUTPUT);
  pinMode(led_vermelho,OUTPUT);

}

void loop(){
  digitalWrite(led_verde,HIGH);
  digitalWrite(led_amarelo,LOW);
  digitalWrite(led_vermelho,LOW);
  delay(5000);
  digitalWrite(led_verde,LOW);
  digitalWrite(led_amarelo,HIGH);
  digitalWrite(led_vermelho,LOW);
  delay(1000);
  digitalWrite(led_verde,LOW);
  digitalWrite(led_amarelo,LOW);
  digitalWrite(led_vermelho,HIGH);
  delay(3000);
}
