// Pin Definitions
int pirPin = 2;   // PIR sensor output connected to digital pin 2
int ledPin = 13;  // LED connected to digital pin 13

void setup() {
  // Initialize serial communication at 9600 baud
  Serial.begin(9600);

  // Set PIR pin as input
  pinMode(pirPin, INPUT);

  // Set LED pin as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the PIR sensor output
  int pirValue = digitalRead(pirPin);

  // Print the PIR sensor output value to the serial monitor
  Serial.println(pirValue);

  // If the PIR sensor detects motion, turn on the LED
  if (pirValue == HIGH) {
    digitalWrite(ledPin, HIGH);

  } else {
    digitalWrite(ledPin, LOW);
  }

  // Delay for a short time to avoid reading the sensor too quickly
  delay(10);
}
