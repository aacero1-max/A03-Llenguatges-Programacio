#define LED_ROJO 2
#define LED_AMARILLO 4
#define LED_VERDE 5

void setup() {
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_AMARILLO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);

  Serial.begin(115200);
}

void loop() {

  Serial.println("Semaforo VERDE");
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_ROJO, LOW);
  delay(3000);

  Serial.println("Semaforo AMARILLO");
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARILLO, HIGH);
  delay(1000);

  Serial.println("Semaforo ROJO");
  digitalWrite(LED_AMARILLO, LOW);
  digitalWrite(LED_ROJO, HIGH);
  delay(3000);

  Serial.println("Preparando cambio a VERDE");
  digitalWrite(LED_ROJO, LOW);
  digitalWrite(LED_AMARILLO, HIGH);
  delay(1000);

  digitalWrite(LED_AMARILLO, LOW);
}
