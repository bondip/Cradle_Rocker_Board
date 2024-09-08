#include "driver/gpio.h"

#define DRVR_GPIO 2

void setup() {
  // put your setup code here, to run once:

  pinMode(DRVR_GPIO, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(DRVR_GPIO, HIGH);
  delay(10); // Wait for 1000 millisecond(s)
  digitalWrite(DRVR_GPIO, LOW);
  delay(990); // Wait for 1000 millisecond(s)

}
