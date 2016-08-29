int pin = 13;

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  digitalWrite(pin, 1);
  delay(200);
  digitalWrite(pin, 0);
  delay(200);
  digitalWrite(pin, 1);
  delay(1500);
  digitalWrite(pin, 0);
  delay(2000);
}

