#include <Arduino.h>
#include <Encoder.h>

Encoder myEnc(25, 23);

// Store the old position of the encoder
long oldPosition = -999;

// Store the count value
int count = 0;

void btnInterrupt() {
  // Print a message when the button is pressed
  Serial.println("Button pressed");
}

void setup() {
  Serial.begin(115200);
  Serial.println("Encoder Test");

  // Set the initial position of the encoder as the old position
  oldPosition = myEnc.read() / 4;

  // Configure pin 27 as input with a pull-up resistor
  pinMode(27, INPUT_PULLUP);

  // Attach the interrupt routine to pin 27
  attachInterrupt(digitalPinToInterrupt(27), btnInterrupt, FALLING);
}

void loop() {
  // Read the current position of the encoder
  long newPosition = myEnc.read() / 4;

  // Only update if the position has changed
  if (newPosition != oldPosition) {

    // Check the direction of rotation
    if (newPosition > oldPosition) {
      count++;
      Serial.print("Count: ");
      Serial.println(count);
      oldPosition = newPosition;
    } else if (newPosition < oldPosition) {
      count--;
      Serial.print("Count: ");
      Serial.println(count);
      oldPosition = newPosition;
    }
  }
}


