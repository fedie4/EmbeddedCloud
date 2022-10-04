#define PIN_BUTTON 33

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
  Serial.begin(9600);
  // pinMode(PIN_BUTTON, OUTPUT);  // Config para poner al pin en modo de salida, por ej si queremos encender un led.
  }

 void loop()  {
  Serial.println(digitalRead(PIN_BUTTON));
  delay(1000); // 1 s
  }
