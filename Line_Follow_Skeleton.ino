#include <Arduino.h>
#include <Wire.h>
#include <MeLineFollower.h>
#include <MeOrion.h>

MePort lineSensor(3);
MeUltrasonicSensor ultraSensor(PORT_7);
int iteration = 0;
int x;

void setup(){
}

void loop(){
  if (iteration > 10) {
/*----------------Code space for Ultrasonic Sensor-----------------*/
    x = ultraSensor.distanceCm();
  

/*-----------------------------------------------------------------*/
  iteration = 0;
    }                                                                    
    if(((lineSensor.dRead1()*2+lineSensor.dRead2())==(0))){   /* If both sensor 1 and 2 are on the black line. */                  

    }                                                                                       
    if(((lineSensor.dRead1()*2+lineSensor.dRead2())==(1))){   /* Sensor 1 is on the black line (sensor 2 is off). */
                          
    }                                                                                      
    if(((lineSensor.dRead1()*2+lineSensor.dRead2())==(2))){   /* Sensor 2 is on the black line (sensor 1 is off). */ 

    }
iteration = iteration + 1;
}










