const int touchSensorPin = 2;
const int ledPin = 13;

void setup() {
  pinMode(touchSensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  int touchState = digitalRead(touchSensorPin);

  if (touchState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(50);
}