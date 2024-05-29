int valor;
float umidade;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);    

}

void loop() {
  valor = analogRead(A0);
  umidade = 100-valor*100.0/1023.0;
  delay(1000);
  Serial.print("Umidade...");
  Serial.println(umidade);
}
