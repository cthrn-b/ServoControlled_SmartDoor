# Servo Controlled Smart Door (Arduino)

This project demonstrates a **smart door system** controlled by a **servo motor** and user input.
The servo acts as a lock mechanism that opens and closes the door based on control logic (e.g., button press, potentiometer, or sensor input).

## Folder Structure

ServoControlled_SmartDoor/
│── src/
│   └── code.ino      # Arduino source code
│── videos/
│   └── videos         # Circuit diagram or wiring reference
│── README.md               # Project documentation
│── LICENSE                 # License file

## Components Used

* 1 × Arduino Uno (or compatible board)
* 1 × Servo Motor (SG90 or similar)
* 1 × Push Button / Potentiometer / IR Sensor (for input trigger)
* 1 × Breadboard
* Jumper Wires

## How It Works

1. The **input device** (button, sensor, or potentiometer) sends a signal to the Arduino.
2. The Arduino processes the signal and sends commands to the **servo motor**.
3. The **servo motor** rotates to open or close the smart door (e.g., 0° = locked, 90° = unlocked).

## How to Run

1. Connect the servo motor and input components as shown in the wiring diagram.
2. Upload the code to your Arduino board.
3. Press the button (or trigger input) to unlock the door. Release it to lock again.

## License

This project is licensed under the **MIT License**.
You are free to use, modify, and distribute this project with attribution.

## Author

Catherine Bugarin