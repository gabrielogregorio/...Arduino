void setup() {
  Serial.begin(9600); // Define a velocidade da serial
  pinMode(7,OUTPUT);  // Define a velocidade da serial
}

void loop() {
  if (Serial.available() > 0){            // Se tiver algo para ler na serial    
      
     char numeroNaSerial = Serial.read(); // Cria uma variável do tipo caractere que recebe o que estiver na serial

     if (numeroNaSerial == 'l'){          // Se tiver 1
         digitalWrite(7,HIGH);            // Ligue a saida 7
     }
      
     if (numeroNaSerial == 'd'){          // Se tiver 0
         digitalWrite(7,LOW);             // Desligue a saida 7
     }
  }
}
