int tempPin = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println();
  Serial.println();
  Serial.print("Time,analogReading,tempF,resistance\n");

}

void loop() {
  // put your main code here, to run repeatedly:
  int tempReading = analogRead(tempPin);
  double thermoresist = 10000.0 * ((1024.0 / tempReading - 1));
  double tempK = log(thermoresist);
  tempK = 1/ (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK)) * tempK);
  float tempC = tempK - 273.15;
  float tempF = (tempC * 9.0) /5.0 + 32.0;
  float time = millis();

  Serial.print(time/1000);
  Serial.print(",");
  Serial.print(tempReading);
  Serial.print(",");
  Serial.print(tempF);
  Serial.print(",");
  Serial.println(thermoresist);
  delay(1000);
}
