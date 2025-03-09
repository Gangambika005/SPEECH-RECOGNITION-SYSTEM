# SPEECH-RECOGNITION-SYSTEM

"COMPANY" : CODTECH IT SOLUTIONS

"NAME" : GANGAMBIKA BK

"INTERN ID" : CT08VCR

"DOMAIN" : EMBEDDED SYSTEMS

"DURATION" : 4 WEEKS

"MENTOR" : NEELA SANTHOSH

"DISCRIPTION" :

Introduction

Task 4 focuses on designing and simulating a speech-controlled automation system using Arduino UNO. Since direct voice input isn't supported in Tinkercad, the project simulates voice control using Serial Monitor input to represent voice commands converted to characters (as if sent from a Bluetooth-based mobile voice app).

The system consists of three LEDs representing appliances (Red, Yellow, Green), which can be controlled individually or all at once by sending specific characters ('a' to 'h') via the Serial Monitor. This task emphasizes concepts like serial input handling, digital output control, and user interaction via software commands.

Tools and Components Used :
Component	Purpose
Arduino UNO R3	Microcontroller board to process commands
Red, Yellow, Green LEDs	Represent appliances/devices
220Ω Resistors	Protect each LED from overcurrent
Breadboard + Jumper Wires	Electrical connections setup
Tinkercad Circuits	Platform for simulating embedded systems
Serial Monitor	To input simulated speech commands
Working Principle :
The program listens for input using Serial.read() and maps each character to a specific device control command. In a real-world scenario, this character would be sent via Bluetooth from a voice recognition app.

Character	Action
'a'	Turn ON Red LED
'b'	Turn OFF Red LED
'c'	Turn ON Yellow LED
'd'	Turn OFF Yellow LED
'e'	Turn ON Green LED
'f'	Turn OFF Green LED
'g'	Turn ON all LEDs
'h'	Turn OFF all LEDs
Each LED is connected to a dedicated Arduino digital pin (Red → D2, Yellow → D3, Green → D4), and protected by a 220Ω resistor. The simulation ensures only valid commands affect the LEDs, while unknown characters are ignored — resolving earlier issues like blinking LEDs caused by extra line endings.

Code Logic Summary
cpp
Copy
Edit
char command;

void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    command = Serial.read();

    if (command == 'a') digitalWrite(2, HIGH);
    else if (command == 'b') digitalWrite(2, LOW);
    else if (command == 'c') digitalWrite(3, HIGH);
    else if (command == 'd') digitalWrite(3, LOW);
    else if (command == 'e') digitalWrite(4, HIGH);
    else if (command == 'f') digitalWrite(4, LOW);
    else if (command == 'g') {
      digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
    }
    else if (command == 'h') {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
    }
  }
}
A dropdown setting of “No line ending” in Serial Monitor ensures clean character input and prevents unexpected behavior like blinking or rapid switching.

Applications :

This project simulates systems used in:
Voice-controlled smart homes
IoT-based device control
Touchless systems for accessibility
Home appliance automation
Voice assistants integrated with Bluetooth or Wi-Fi
It can be expanded into real implementations by adding modules like HC-05 Bluetooth and using mobile apps that convert voice to text commands.

Conclusion :
This task successfully simulates a speech recognition system using Serial Monitor input as a substitute for real voice commands. The circuit handles individual and group device control using simple character-based logic, making it a great foundation for future voice-controlled IoT applications. The task also demonstrates essential embedded concepts: input parsing, conditional logic, hardware simulation, and safe circuit design with resistors.

"OUTPUT" :
1-ALL LED's ARE OFF
2-A(RED ON)
3-C(YELLOW ON)
4-E(GREEN ON)
5-G ALL LED's ARE ON

![Image](https://github.com/user-attachments/assets/ba3a547c-5692-4d09-930e-922ae2c6aada)
![Image](https://github.com/user-attachments/assets/519526b2-735f-43f4-b3ac-97533c973b2a)

![Image](https://github.com/user-attachments/assets/bc412c8a-699c-451f-a90d-53591a792b32)

![Image](https://github.com/user-attachments/assets/16a66850-2703-4c2c-b183-37e55cfc0df7)
![Image](https://github.com/user-attachments/assets/c5ae1868-4803-429f-899e-fb4e02b892d8)



