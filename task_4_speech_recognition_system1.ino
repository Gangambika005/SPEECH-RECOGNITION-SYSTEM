char command;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT); // Red LED
  pinMode(3, OUTPUT); // Yellow LED
  pinMode(4, OUTPUT); // Green LED
}

void loop() {
  if (Serial.available()) {
    command = Serial.read();

    if (command == 'a') digitalWrite(2, HIGH);
    if (command == 'b') digitalWrite(2, LOW);
    if (command == 'c') digitalWrite(3, HIGH);
    if (command == 'd') digitalWrite(3, LOW);
    if (command == 'e') digitalWrite(4, HIGH);
    if (command == 'f') digitalWrite(4, LOW);
    if (command == 'g') {
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
    }
    if (command == 'h') {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
    }
  }
}
