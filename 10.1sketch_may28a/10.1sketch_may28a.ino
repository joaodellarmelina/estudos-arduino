#include <Ultrasonic.h>

int portaTrig = 7;
int portaEcho = 6;
int tempo;
float distancia;

Ultrasonic ultrasonic( portaTrig , portaEcho );

void setup()
{
  Serial.begin(9600);

}

void loop()
{
  distancia = ultrasonic.read(CM);

  Serial.print(" Distancia = ");
  Serial.print( distancia );
  Serial.println("cm");
  delay(500);
}