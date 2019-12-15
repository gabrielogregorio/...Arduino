void setup() {
    Serial.begin(9600);
    pinMode(6,INPUT);                        // Define o pino 6 como entrada
    
}

void loop() {
    bool statusBotao = digitalRead(6);       // Armazena o estado do pino 6

    if (statusBotao){                        // Se tiver ativado
          Serial.println("Botão acionado");
    } else {                                 // Senão
      Serial.println("Nada aqui...");
    }
}
