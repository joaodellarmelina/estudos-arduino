#include <Ultrasonic.h>

int portaTrig = 7;
int portaEcho = 6;
float distancia;

int porta[3];

Ultrasonic ultrasonic(portaTrig,portaEcho);

void setup() {
  Serial.begin(9600);
  
  porta[1] = 3; // VERMELHO
  porta[2] = 4; // AMARELO
  porta[0] = 2; // VERDE

  for (int k=0; k<3; k++) {
    pinMode(porta[k], OUTPUT);
  }

}

void loop() {
  distancia = ultrasonic.read(CM);
  Serial.println(distancia);

// VERMELHO LIGADO
  digitalWrite(porta[1], HIGH); 
  digitalWrite(porta[2], LOW);
  digitalWrite(porta[0], LOW);
// -------------

// CHECA DISTANCIA EM CM
  if(distancia < 40) 
  {
// VERDE LIGADO
    delay(1000);
    digitalWrite(porta[1], LOW);
    digitalWrite(porta[2], LOW);
    digitalWrite(porta[0], HIGH);


// CHECA SE VERDE LIGADO
    if (digitalRead(porta[0]) == HIGH)
    {
// AMARELO LIGA e VERDE desliga
      delay(1000);
      digitalWrite(porta[2], HIGH);
      digitalWrite(porta[0], LOW);
      delay(3000);
    }


  }
  
}
