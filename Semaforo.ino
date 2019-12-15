const int verde = 7;
const int amarelo = 6; 
const int vermelho = 5;

void setup() {
  pinMode(verde,OUTPUT);
  pinMode(amarelo,OUTPUT);
  pinMode(vermelho,OUTPUT);

  digitalWrite(verde,LOW);
  digitalWrite(amarelo,LOW);
  digitalWrite(vermelho,LOW);

}

void loop() {
  digitalWrite(vermelho,LOW);
  digitalWrite(verde,HIGH);
  delay(5000);

  digitalWrite(verde,LOW);
  digitalWrite(amarelo,HIGH);
  delay(2000);

  digitalWrite(amarelo,LOW);
  digitalWrite(vermelho,HIGH);
  delay(5000);
}
