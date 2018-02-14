int led1=5;
int led2=4;
int led3=3;
int led4=2;
int led5=1;


void setup() {
  // put your setup code here, to run once:
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led4, OUTPUT);
   pinMode(led5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    lightsOn(1);
    lightsOn(2);
    lightsOn(3);
    lightsOn(4);
    lightsOn(5);

}
void lightsOn(int ledno)
{
     if( ledno==1)
     {
      digitalWrite(led1,HIGH);
     }
     else if( ledno==2)
     {
      digitalWrite(led2,HIGH);
     }
     else if( ledno==3)
     {
      digitalWrite(led3,HIGH);
     }
     else if( ledno==4)
     {
      digitalWrite(led4,HIGH);
     }
     else if( ledno==5)
     {
      digitalWrite(led5,HIGH);
     }
     
     
}
void lightsOff(int ledno)
{
   if( ledno==1)
     {
      digitalWrite(led1,LOW);
     }
     else if( ledno==2)
     {
      digitalWrite(led2,LOW);
     }
     else if( ledno==3)
     {
      digitalWrite(led3,LOW);
     }
     else if( ledno==4)
     {
      digitalWrite(led4,LOW);
     }
     else if( ledno==5)
     {
      digitalWrite(led5,LOW);
     }
}

