#include <Arduino.h>
#include <Encoder.h>
#include <Wire.h>
#include "Encoder_Custom.h"
#include "Wire_encoder.h"

void setup()
{
  Wire.begin(2);
  Serial.begin(115200);
  Serial.println("Encoder Test");

  encoder_zero();
  encoder_setup(27, 33, 39, 45, 51, 10);
}

void loop()
{
  encoder_loop();
}

