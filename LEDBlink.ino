#define LED 2 //define our LED pin

void setup() {
  pinMode(LED, OUTPUT); //set the pin to output mode
}

void loop() {
  digitalWrite(LED , HIGH); //turn led on
  Serial.println("LED ON!");
  delay(500); //wait
  digitalWrite(LED, LOW); //turn led off
  Serial.println("LED OFF!");
  delay(500);
}
