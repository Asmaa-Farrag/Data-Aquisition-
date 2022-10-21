void setup() {
  // initialize serial communication at 500000 bits per second:
  Serial.begin(500000);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
 float current = (sensorValue * (3.3 / 1023.0))- 1.1;
 float refined_current = voltage * 11;
  // print out the value you read:
  Serial.println(refined_current);
}
