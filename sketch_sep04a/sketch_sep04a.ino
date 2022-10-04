const int LED_PIN = 34;


void setup() {
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);  //Pausa en milisegundos (ms)
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
