#include <Ultrasonic.h>

int portaTrig = 7;
int portaEcho = 6;
float distancia;

int pino[3];

Ultrasonic ultrasonic(portaTrig,portaEcho);

void setup() {
  Serial.begin(9600);
  
  pino[0] = 2;
  pino[1] = 3;
  pino[2] = 4;
    for (int k=0; k<3; k++) {
    pinMode(pino[k], OUTPUT);
  }

}

void loop() {
  distancia = ultrasonic.read(CM);
  Serial.println(distancia);

  digitalWrite(pino[2], LOW);
  digitalWrite(pino[1], HIGH);
  digitalWrite(pino[0], LOW);


  if(distancia < 100) 
  {
    delay(1000);
    digitalWrite(pino[1], HIGH);
    digitalWrite(pino[2], HIGH);
    digitalWrite(pino[0], HIGH);


  }
  
}
