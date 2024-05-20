// Primeiro Código!

void setup() {
  pinMode(13, OUTPUT); // pinMode(porta, action) - Nesse caso estamos habilitando a PORTA 13 para saída de tensão

}

// Função LOOP executa o que está dentro dela infitamente. 
void loop() {
  // digitalWrite(porta, voltagem) HIGH = 5V / LOW = 0V
  digitalWrite(13, HIGH); 
  // delay(n) força uma pausa de n milissegundos na execução das linhas de comando.
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
// Sem o delay(1000) para dar a pausa o led iria ficar alternando em 5V e 0V em uma
// velocidade tão rápida que nem iamos conseguir ver
}

/* 
Finalizando cógido, esse passa uma instrução para um 
led ligar e desligar de 1 em 1 seg.

*/