// tomamos una variable global para conectar el pin.
// const int pinLDR = 34; no good

#define PIN_LDR 34// la mejor forma de hacerlo
#define PIN_LM35 35

void setup() {

  Serial.begin(9600); // inicializamos la comu seria desde el ESP32 hacia la computadora a través del cable USB; 9600 bites/s
}

void loop() {

  //Serial.println(analogRead(PIN_LDR));
  //delay(100);

  // 5000/(10*4095) = 0.1221
  // IMPRIMIR LA TEMP EN CENTIGRADOS

  Serial.println(analogRead(PIN_LM35)*0.1221);
  delay(50);
}
