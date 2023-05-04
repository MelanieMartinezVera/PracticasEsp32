
// Definir el pin de salida del relé
int relePin = 33;
int buzzerPin = 32;

void setup() {
  // Establecer el pin del relé como salida
  pinMode(relePin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Encender el relé
  digitalWrite(relePin, HIGH);
  delay(1000); // Esperar un segundo

  digitalWrite(buzzerPin, LOW);
  delay(1000);
   digitalWrite(buzzerPin, LOW);
  delay(1000);

  // Apagar el relé
  digitalWrite(relePin, LOW);
  delay(1000); // Esperar un segundo





}


