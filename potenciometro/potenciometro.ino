long valor;
// Variable donde se almacena el valor del potenciometro

// se declaran los pins de los LEDs
int LED_1 = 2;
int LED_2 = 3;
int LED_3 = 4;
int LED_4 = 5;

void setup() {
  // Inicia la comunicación serial
  Serial.begin(9600);

  // Escribimos un mensaje de inicio
  Serial.println("Inicio de sketch - valores del potenciometro");

  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
}

void loop() {
  // leemos el pin A0 valor
  valor = analogRead(A0);

  // Imprimimos por el monitor serie
  Serial.print("El valor es = ");
  Serial.println(valor);
  delay(100);

  if(valor >= 768 && valor <= 1023)
  {
    digitalWrite(LED_1, HIGH);
    digitalWrite(LED_2, LOW);
    digitalWrite(LED_3, LOW);
    digitalWrite(LED_4, LOW);
  }
  if(valor >= 512 && valor <= 767)
  {
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, HIGH);
    digitalWrite(LED_3, LOW);
    digitalWrite(LED_4, LOW);
  }
  if(valor >= 26 && valor <= 511)
  {
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
    digitalWrite(LED_3, HIGH);
    digitalWrite(LED_4, LOW);
  }
  if(valor >= 0 && valor <= 255)
  {
    digitalWrite(LED_1, LOW);
    digitalWrite(LED_2, LOW);
    digitalWrite(LED_3, LOW);
    digitalWrite(LED_4, HIGH);
  }
}
