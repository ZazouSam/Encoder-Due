#include <Arduino.h>
#include <Encoder.h>
#include "Encoder_Custom.h"

void setup()
{
  Serial.begin(115200);
  Serial.println("Encoder Test");

  encoder_zero();
  encoder_setup(27, 33, 39, 45, 51, 10);
}

void loop()
{
  debouncer27.update();
  debouncer33.update();
  debouncer39.update();
  debouncer45.update();
  debouncer51.update();
  debouncer10.update();
  if (debouncer27.fell())
  {
    Serial.println("BTN1");
  }
  if (debouncer33.fell())
  {
    Serial.println("BTN2");
  }
  if (debouncer39.fell())
  {
    Serial.println("BTN3");
  }
  if (debouncer45.fell())
  {
    Serial.println("BTN4");
  }
  if (debouncer51.fell())
  {
    Serial.println("BTN5");
  }
  if (debouncer10.fell())
  {
    Serial.println("BTN6");
  }

  // Read the current position of the encoder
  long newPosition1 = encoders[0].read() / 4;
  long newPosition2 = encoders[1].read() / 4;
  long newPosition3 = encoders[2].read() / 4;
  long newPosition4 = encoders[3].read() / 4;
  long newPosition5 = encoders[4].read() / 4;
  long newPosition6 = encoders[5].read() / 4;

  // Only update if the position has changed
  if (newPosition1 != oldPosition1)
  {

    // Check the direction of rotation
    if (newPosition1 > oldPosition1)
    {
      count1++;
      Serial.print("Count1: ");
      Serial.println(count1);
      oldPosition1 = newPosition1;
    }
    else if (newPosition1 < oldPosition1)
    {
      count1--;
      Serial.print("Count1: ");
      Serial.println(count1);
      oldPosition1 = newPosition1;
    }
  }
  if (newPosition2 != oldPosition2)
  {

    // Check the direction of rotation
    if (newPosition2 > oldPosition2)
    {
      count2++;
      Serial.print("Count2: ");
      Serial.println(count2);
      oldPosition2 = newPosition2;
    }
    else if (newPosition2 < oldPosition2)
    {
      count2--;
      Serial.print("Count2: ");
      Serial.println(count2);
      oldPosition2 = newPosition2;
    }
  }
  if (newPosition3 != oldPosition3)
  {

    // Check the direction of rotation
    if (newPosition3 > oldPosition3)
    {
      count3++;
      Serial.print("Count3: ");
      Serial.println(count3);
      oldPosition3 = newPosition3;
    }
    else if (newPosition3 < oldPosition3)
    {
      count3--;
      Serial.print("Count3: ");
      Serial.println(count3);
      oldPosition3 = newPosition3;
    }
  }
  if (newPosition4 != oldPosition4)
  {

    // Check the direction of rotation
    if (newPosition4 > oldPosition4)
    {
      count4++;
      Serial.print("Count4: ");
      Serial.println(count4);
      oldPosition4 = newPosition4;
    }
    else if (newPosition4 < oldPosition4)
    {
      count4--;
      Serial.print("Count4: ");
      Serial.println(count4);
      oldPosition4 = newPosition4;
    }
  }
  if (newPosition5 != oldPosition5)
  {

    // Check the direction of rotation
    if (newPosition5 > oldPosition5)
    {
      count5++;
      Serial.print("Count5: ");
      Serial.println(count5);
      oldPosition5 = newPosition5;
    }
    else if (newPosition5 < oldPosition5)
    {
      count5--;
      Serial.print("Count5: ");
      Serial.println(count5);
      oldPosition5 = newPosition5;
    }
  }
  if (newPosition6 != oldPosition6)
  {

    // Check the direction of rotation
    if (newPosition6 > oldPosition6)
    {
      count6++;
      Serial.print("Count6: ");
      Serial.println(count6);
      oldPosition6 = newPosition6;
    }
    else if (newPosition6 < oldPosition6)
    {
      count6--;
      Serial.print("Count6: ");
      Serial.println(count6);
      oldPosition6 = newPosition6;
    }
  }
}