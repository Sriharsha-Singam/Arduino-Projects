#include "MeOrion.h"

MeDCMotor rightMotor(M1);
MeDCMotor leftMotor(M2);
int motorSpeed = 100;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
   leftMotor.run(motorSpeed);
   rightMotor.run(-motorSpeed);
   delay(5000);
   leftMotor.stop();
   rightMotor.stop();

   }

/*void move_distance(int distance,int motor_num){
    motor.run(motor
}*/

