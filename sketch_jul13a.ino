int Led1 = 13; // BLUE : dot in morse code
int Led2= 12; // RED : dash in morse code
int delayTime=200;

/*void M_blink(int first = -1, int second = -1, int third = -1, int forth = -1) 
{
  if (first != -1)
  {
   digitalWrite(first,HIGH);
   delay(delayTime);
   digitalWrite(first,LOW);
   delay(delayTime);    
  }
  if (second != -1)
  {
   digitalWrite(second,HIGH);
   delay(delayTime);
   digitalWrite(second,LOW);
   delay(delayTime);    
  }
  if (third != -1)
  {
   digitalWrite(third,HIGH);
   delay(delayTime);
   digitalWrite(third,LOW);
   delay(delayTime);    
  }
  if (forth != -1)
  {
   digitalWrite(forth,HIGH);
   delay(delayTime);
   digitalWrite(forth,LOW);
   delay(delayTime);    
  }

}*/


void setup() {
  // put your setup code here, to run once:
  pinMode(Led1,OUTPUT);
  pinMode(Led2,OUTPUT);
  //M_blink(Led2,Led2,Led2);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Morse_Code();
}

void Morse_Code()
{
   for(int i=0;i<3;i++)
  {
     digitalWrite(Led1,HIGH);
     delay(delayTime);
     digitalWrite(Led1,LOW);
     delay(delayTime);
   
  }
  for(int i=0;i<3;i++)
  {
    digitalWrite(Led2,HIGH);
   delay(delayTime);
   digitalWrite(Led2,LOW);
   delay(delayTime);
  }
  for(int i=0;i<3;i++)
  {
   digitalWrite(Led1,HIGH);
   delay(delayTime);
   digitalWrite(Led1,LOW);
   delay(delayTime);
   
  }
  digitalWrite(Led1,LOW);
   
   digitalWrite(Led2,LOW);
   delay(delayTime+300);
}


*/
