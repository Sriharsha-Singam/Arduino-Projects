#include "MeOrion.h"

MeUltrasonicSensor ultraSensor(PORT_3);
MeDCMotor rightMotor(M1);
MeDCMotor leftMotor(M2);
int motorSpeed = 106;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

int x = 0;
boolean stopped = false;



void loop() {
  // put your main code here, to run repeatedly:
    x = ultraSensor.distanceCm();
    delay(100);
    stop_before(x,60);

   }

void stop_before(int x,int distance){
  if (x == 0 or x>distance){
      
      leftMotor.run(-motorSpeed);
      rightMotor.run(motorSpeed);
      
  } 
  else {

   rightMotor.run(-motorSpeed);
  }
}

/*
boolean scan_area()
{
  rightMotor.run(motorSpeed);//rotate clockwise
  leftMotor.run(-motorSpeed);
  int y = 0
  for(int j = 0;j<5;j++){
    Y = ultraSensor.distanceCm();
      if (y = 0 and y<distance){
        return false;}
       delay(100);
  rightMotor.run(-motorSpeed);//rotate counterclockwise
  leftMotor.run(motorSpeed);
  for(int j = 0;j<10;j++){
      Y = ultraSensor.distanceCm();
      if (x = 0 and x<distance){
          rightMotor.run(motorSpeed);//rotate clockwise
          leftMotor.run(-motorSpeed); 
          delay(300);
          return false;}
      delay(100);
  rightMotor.stop();//rotate counterclockwise
  leftMotor.stop();
  return True;
  }      
}*/

boolean turn_45()
{
  rightMotor.run(motorSpeed);//rotate clockwise
  leftMotor.run(-motorSpeed);
  int y = 0;
  for(int j = 0;j<10;j++){
    y = ultraSensor.distanceCm();
      if (y != 0 and y<45){
        return true;
        }
       delay(100);
   }
   return false;
}


