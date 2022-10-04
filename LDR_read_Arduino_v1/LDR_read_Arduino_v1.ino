// tomamos una variable global para conectar el pin.
// const int pinLDR = 34; no good

#define PIN_LDR 34// la mejor forma de hacerlo

void setup() {

  Serial.begin(9600); // inicializamos la comu seria desde el ESP32 hacia la computadora a través del cable USB; 9600 bites/s
}

void loop() {

  Serial.println(analogRead(PIN_LDR));
  delay(100);
  
}
