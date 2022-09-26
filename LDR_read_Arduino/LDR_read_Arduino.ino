// int pinLDR = 34;
#define PIN_LDR 34
#define PIN_LM35 35

void setup() {

  Serial.begin(9600);
}

void loop() {
  //int m = analogRead(PIN_LDR); //hce un càlculo de conversiòn al ADC.
  //Serial.println();

  Serial.println(analogRead(PIN_LM35)*0.1221);
  delay(1000);

  // 5000/

}
