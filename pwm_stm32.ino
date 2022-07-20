int ventilateur = PA9;
void setup() {
  pinMode(ventilateur, OUTPUT);
}

void loop() {
  analogWrite(ventilateur, 0);//0
  delay(3000);
  analogWrite(ventilateur, 16384);//25%
  delay(3000);
  analogWrite(ventilateur, 32768);//50%
  delay(3000);
  analogWrite(ventilateur, 49152);//75%
  delay(3000);
  analogWrite(ventilateur, 65535);//100%
  delay(3000);
}
