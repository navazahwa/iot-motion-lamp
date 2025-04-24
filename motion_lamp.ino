int pirPin = 2;
int ledPin = 13;

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gerakan = digitalRead(pirPin);
  if (gerakan == HIGH) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Gerakan terdeteksi!");
  } else {
    digitalWrite(ledPin, LOW);
    Serial.println("Tidak ada gerakan");
  }
  delay(500);
}
