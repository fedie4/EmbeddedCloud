#define PIN_BUTTON 33
#define PIN_LED 32

/* estados de señales digitales
 *  
 *  HIGH      LOW
 *  1         0
 *  3,3 V     0 V
 *  
 *  Estos se pueden leer con la función digitalRead()
 *  pin digital: los pines se pueden confiugurar en distintos modos. 
 */
// la dif entre setup y loop: el setup es la config, una vez al inicio del programa y loop es el còdigo que se repite.
 void setup()  {
  pinMode(PIN_BUTTON, INPUT);
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);

  // pinMode(PIN_BUTTON, OUTPUT);  // Config para poner al pin en modo de salida, por ej si queremos encender un led.
  }

 void loop()  {
  int state = digitalRead(PIN_BUTTON);
  digitalWrite(PIN_LED, state);
  }
