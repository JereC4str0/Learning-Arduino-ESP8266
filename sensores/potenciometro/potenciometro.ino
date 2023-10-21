

void setup()
{
  // velocidad de comunicacion
  Serial.begin(9600);
}

// A0 = pin analogico del ESP8266
void loop()
{
  int x = analogRead(A0);
  // mapea el valor de 0 - 1023 a 0 - 100 (simplifica)
  x = map(x, 0, 1024, 0, 99);
  Serial.println(x);
  delay(500);
}
