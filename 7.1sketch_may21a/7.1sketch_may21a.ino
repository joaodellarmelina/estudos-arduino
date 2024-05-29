int tempo = 200;
int pino[5];

void setup() {
 pino[0] = 11;
 pino[1] = 9;
 pino[2] = 7;
 pino[3] = 5;
 pino[4] = 2;
  for (int k=0; k<=5; k++) {
    pinMode(pino[k], OUTPUT);
  }
}

void loop() {
  for (int k=0; k<=5; k++) {
    digitalWrite(pino[k], HIGH);
    delay(tempo);
    digitalWrite(pino[k], LOW);
  }

}
