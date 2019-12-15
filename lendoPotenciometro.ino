const int pinoAnalogico = A8;

void setup() {
    Serial.begin(9600);
}

void loop() {
  float pinoLeitura = analogRead(pinoAnalogico)/20;

  for (int i = 0; i <= pinoLeitura ; i++){
      Serial.print("-");
  }

  Serial.println(); 
}
