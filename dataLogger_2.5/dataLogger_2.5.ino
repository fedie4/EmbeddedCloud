#include <Adafruit_BMP280.h>

Adafruit_BMP280 bmp;

char payload[50]; // Daros a escribir en SD y serial

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  bmp.begin(0x76); // Inicializar comunicación I2C con el sensor barométrico.
}

void loop() {
  // put your main code here, to run repeatedly:
  sprintf(payload, "temperatura: %.2f, presión: %.2f", bmp.readTemperature(), bmp.readPressure());
  Serial.println(payload);
  //Serial.println(bmp.readPressure()); // en pascales
  delay(500);
}
