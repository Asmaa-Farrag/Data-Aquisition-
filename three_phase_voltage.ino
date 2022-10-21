float phase1 = A0;
float phase2 = A1;
float phase3 = A2;
float phase_voltage1 = 0;
float phase_voltage2 = 0;
float phase_voltage3 = 0;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(500000);
}
void loop() {
  // read the input on analog pin:
  int phase1 = analogRead(phase1);
  int phase2 = analogRead(phase2);
  int phase3 = analogRead(phase3);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
   float phase_voltage1 = phase1 * (3.3 / 4095.0);
   float phase_voltage2 = phase2 * (3.3 / 4095.0);
   float phase_voltage3 = phase3 * (3.3 / 4095.0);
  // print out the value you read:
  //Serial.print(2.5);
  //Serial.print(" ");
  //Serial.print(1.5);
  //Serial.print(" ");
  Serial.println(phase_voltage1);
  //Serial.print(" ");
  //Serial.print(phase_voltage2);
  //Serial.print(" ");
  //Serial.println(phase_voltage3);
}
