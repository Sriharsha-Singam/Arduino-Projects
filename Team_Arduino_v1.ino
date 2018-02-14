#include "MeOrion.h"

MeDCMotor rMotor(M1);MeDCMotor lMotor(M2);
MeUltrasonicSensor sens(PORT_3);

#define spd1 100
#define spd2 100
float x=0;
long rnd=0;
int d=0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  x=sens.distanceCm();
  delay(100); 
  if(x<45 && x>=25){
    brk();delay(100);
    if(d==1){r();}
    else{l();}
    delay(850);
  }
  else if(x<25 && x>.5){
    rev();delay(300);
    if(d==1){r();}
    else{l();}
    delay(850);
  }
  else{fwd();
    (rnd=random(3));
    if(rnd<1){d=1;}
    else{d=0;}
  }
}
void fwd(){rMotor.run(-spd1);lMotor.run(spd1+5);}
void rev(){rMotor.run(spd1);lMotor.run(-spd1);}
void brk(){rMotor.stop();lMotor.stop();}
void l(){rMotor.run(-spd1);lMotor.run(-spd1);}
void r(){rMotor.run(spd1);lMotor.run(spd1);}
