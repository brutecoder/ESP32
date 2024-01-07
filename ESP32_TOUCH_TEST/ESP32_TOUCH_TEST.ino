// ESP32 Touch Test with LED control
// Just test touch pin - Touch0 is T0 which is on GPIO 4.

const int touchPin = 4;  // Define the touch pin as GPIO 4
const int ledPin = 2;    // Define the onboard blue LED pin as GPIO 2

void setup() {
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");

  pinMode(ledPin, OUTPUT);  // Set the LED pin as output
}

void loop() {
  int touchValue = touchRead(touchPin);  // get value of Touch 0 pin = GPIO 4
  Serial.println(touchValue);

  if (touchValue < 20) {
    digitalWrite(ledPin, HIGH);  // Turn on the onboard blue LED
  } else {
    digitalWrite(ledPin, LOW);   // Turn off the onboard blue LED
  }

  delay(1000);
}
