int speedPin = 5; //pin used to set speed
int dir1 = 4; //direction pin 1
int dir2 = 3; //direction pin 2
int motorSpeedLow = 150; //Low motor speed
int motorSpeedMed = 200; //Medium motor speed
int motorSpeedHigh = 255; //Max motor speed

void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT);
}

void loop() {
  //Rotate clockwise at low speed
  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, LOW);
  analogWrite(speedPin, motorSpeedLow);
  delay(5000); //5 second delay

  //Rotate counter-clockwise at medium speed
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);
  analogWrite(speedPin, motorSpeedMed);
  delay(5000); //5 second delay

  //Rotate clockwise at medium speed
  digitalWrite(dir1, HIGH);
  digitalWrite(dir2, LOW);
  analogWrite(speedPin, motorSpeedMed);
  delay(5000); //5 second delay

  //Rotate counter-clockwise at high speed
  digitalWrite(dir1, LOW);
  digitalWrite(dir2, HIGH);
  analogWrite(speedPin, motorSpeedHigh);
  delay(5000); //5 second delay
}
