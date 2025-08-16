#include <Servo.h>

// Pin assignments
const int trigPin = 7;
const int echoPin = 6;
const int servoPin = 9;

Servo doorServo;

long duration;
int distance;

bool doorOpen = false;
unsigned long lastOpenTime = 0;
const unsigned long openDuration = 3000; // Time to keep door open (ms)

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  doorServo.attach(servoPin);
  doorServo.write(0); // Door closed initially
  Serial.begin(9600);
}

void loop() {
  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure distance
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Check if person is within range and door is closed
  if (distance > 0 && distance <= 20 && !doorOpen) {
    doorServo.write(90); // Open door
    doorOpen = true;
    lastOpenTime = millis();
    Serial.println("DOOR IS OPENED!");
  }

  // Close door after openDuration
  if (doorOpen && millis() - lastOpenTime >= openDuration) {
    doorServo.write(0); // Close door
    doorOpen = false;
    Serial.println("DOOR IS CLOSED!");
  }

  delay(100); // Short delay for stability
}