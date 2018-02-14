#include "MeOrion.h"

MeUltrasonicSensor ultraSensor(PORT_3);
MeDCMotor rightMotor(M1);
MeDCMotor leftMotor(M2);
int motorSpeed = 100;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

int x = 0;
int last_distance = 0;

void loop() {
  // put your main code here, to run repeatedly:
    x = ultraSensor.distanceCm();
    delay(100);
    stop_before(x,30);
    speed_ = (last_distance - x)/x;
    serial.print(speed_);
    last_distance = x;

   }

void stop_before(int x,int distance){
  if (x == 0 or x>distance){
      leftMotor.run(-motorSpeed);
      rightMotor.run(motorSpeed);
  } else {

    
   rightMotor.run(-motorSpeed);
  }
}


