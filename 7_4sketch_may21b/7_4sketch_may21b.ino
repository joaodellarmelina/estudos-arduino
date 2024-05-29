int brilho; 
int porta = 11; 
bool jaleu = false;

void setup() 
{
  pinMode(porta, OUTPUT);
  Serial.begin(9600);

  Serial.println("Digite um valor entre 0 (brilho mínimo) e 100 (brilho máximo):");
  Serial.println();


 
}

void loop() {
  if (Serial.available() > 0 && !jaleu)
  {
    Serial.print("Valor lido: ");
    int valor = Serial.parseInt();
    jaleu = true;
    Serial.println(valor);

    Serial.println(valor);
    

    brilho = valor*2.55;
    analogWrite(porta, brilho);
  }

  }
