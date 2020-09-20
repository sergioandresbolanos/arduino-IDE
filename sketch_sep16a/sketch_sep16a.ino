int bombillo = 13;
int esperar = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(bombillo, OUTPUT); // se elige cuál bombillo se va a prender y qué tipo de electricidad hace:
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(bombillo, HIGH);
  delay(esperar);
  digitalWrite(bombillo, LOW);
  delay(esperar * 2);
}
