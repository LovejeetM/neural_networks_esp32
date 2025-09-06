
void setup() {
  
  Serial.begin(115200);

  Serial.println("\n\nESP32 is alive and running!");
  Serial.println("-------------------------");
}

void loop() {
  Serial.println("Hello, World! The code is looping.");
  
  
  delay(2000);
}