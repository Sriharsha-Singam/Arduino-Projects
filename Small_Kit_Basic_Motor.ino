/* Basic Motor Running Code */

#include "MeOrion.h"

MeDCMotor rightMotor(M1);
MeDCMotor leftMotor(M2);

int motorSpeed = 150;  //can be any value from -255 to 255

void setup() {
}

void loop() {
  rightMotor.run(motorSpeed);
  leftMotor.run(-motorSpeed);
  delay(500);
  rightMotor.stop();
  leftMotor.stop();
  delay(1000);
}
