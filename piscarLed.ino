void setup() {
  // Definir o pino 7 como saída
  pinMode(7,OUTPUT);
}

void loop() {
  // Liberar 5 volts na porta digital 7 do Arduino
  digitalWrite(7,HIGH);

  // Esperar 0.1 segundo
  delay(100);

  // Fazer a porta número 7 voltar a ter 0 volts.
  digitalWrite(7,LOW);

  // Esperar 0.1 segundo
  delay(100);
}
