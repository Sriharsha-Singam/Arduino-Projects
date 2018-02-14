
#include "MeOrion.h"
MeUltrasonicSensor ultraSensor(PORT_3);

int x;

void setup() {
}

void loop() {
  x = ultraSensor.distanceCm();

  if ((x > 0) and (x < 30)) {
    //example if statement
  }
}
