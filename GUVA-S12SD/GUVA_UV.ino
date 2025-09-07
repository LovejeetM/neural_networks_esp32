
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);
  float uvIndex = voltage / 0.1;  
  Serial.print("UV Index: ");
  Serial.println(uvIndex);
  delay(1000);
}
