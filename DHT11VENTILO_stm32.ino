#include <DHT.h>;

#define DHT11_PIN A0
#define DHTTYPE DHT11

#define ventilateurpin 3

DHT dht(DHT11_PIN, DHTTYPE);

float temp, hum;

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(ventilateurpin, OUTPUT);
}

void loop() {
  temp = dht.readTemperature();
  hum = dht.readHumidity();
  Serial.print(temp);
  Serial.println(" °C");
  Serial.print(hum);
  Serial.println(" %");
  delay(1000);
  if (temp >= 25) {
    analogWrite(ventilateurpin, 255);
  }
  else {
    analogWrite(ventilateurpin, 0);
  }
}
