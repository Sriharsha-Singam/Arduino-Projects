int light6= 11;
int light5=10;
int light4=9;
int light3=8;
int light2=7;
int light9=13;
int light8=12;



void setup() {
  // put your setup code here, to run once:
   pinMode(light6, OUTPUT);
   pinMode(light5, OUTPUT);
   pinMode(light4, OUTPUT);
   pinMode(light3, OUTPUT);
   pinMode(light2, OUTPUT);
   pinMode(light9, OUTPUT);
   pinMode(light8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    numbers(0,0,light4,light3,light2,light9,light8);//9
    numbers(light6,light5,light4,light3,light2,light9,light8);//8
    numbers(0,0,light4,light3,light2,0,0);//7
    numbers(light6,light5,light4,light3,0,light9,light8);//6
    numbers(0,light5,light4,light3,0,light9,light8);//5
    numbers(0,0,light4,0,light2,light9,light8);//4
    numbers(0,light5,light4,light3,light2,light9,0);//3
    numbers(light6,light5,0,light3,light2,light9,0);//2
    numbers(0,0,light4,0,light2,0,0);//1
    numbers(light6,light5,light4,light3,light2,0,light8);//0
 /* //9
     digitalWrite(light9,HIGH);
     digitalWrite(light8,HIGH);
     digitalWrite(light4,HIGH);
     digitalWrite(light3,HIGH);
     digitalWrite(light2,HIGH);
     delay(1000);
     digitalWrite(light9,LOW);
     digitalWrite(light8,LOW);
     digitalWrite(light4,LOW);
     digitalWrite(light3,LOW);
     digitalWrite(light2,LOW);

  //8
     digitalWrite(light9,HIGH);
     digitalWrite(light8,HIGH);
     digitalWrite(light4,HIGH);
     digitalWrite(light3,HIGH);
     digitalWrite(light2,HIGH);
     digitalWrite(light5,HIGH);
     digitalWrite(light6,HIGH);
     delay(1000);
     digitalWrite(light9,LOW);
     digitalWrite(light8,LOW);
     digitalWrite(light4,LOW);
     digitalWrite(light3,LOW);
     digitalWrite(light2,LOW);
     digitalWrite(light5,LOW);
     digitalWrite(light6,LOW);

       //7
     
     digitalWrite(light4,HIGH);
     digitalWrite(light3,HIGH);
     digitalWrite(light2,HIGH);
   
     delay(1000);
     
     digitalWrite(light4,LOW);
     digitalWrite(light3,LOW);
     digitalWrite(light2,LOW);

       //6
     digitalWrite(light9,HIGH);
     digitalWrite(light8,HIGH);
     digitalWrite(light4,HIGH);
     digitalWrite(light5,HIGH);
     digitalWrite(light6,HIGH);
     delay(1000);
     digitalWrite(light9,LOW);
     digitalWrite(light8,LOW);
     digitalWrite(light4,LOW);
     digitalWrite(light5,LOW);
     digitalWrite(light6,LOW);

       //5
     digitalWrite(light9,HIGH);
     digitalWrite(light8,HIGH);
     digitalWrite(light4,HIGH);
     digitalWrite(light3,HIGH);
     digitalWrite(light5,HIGH);
     delay(1000);
     digitalWrite(light9,LOW);
     digitalWrite(light8,LOW);
     digitalWrite(light4,LOW);
     digitalWrite(light3,LOW);
     digitalWrite(light5,LOW);

       //4
     digitalWrite(light9,HIGH);
     digitalWrite(light8,HIGH);
     digitalWrite(light4,HIGH);
     digitalWrite(light2,HIGH);
     delay(1000);
     digitalWrite(light9,LOW);
     digitalWrite(light8,LOW);
     digitalWrite(light4,LOW);
     digitalWrite(light2,LOW);

       //3
     digitalWrite(light9,HIGH);
     digitalWrite(light4,HIGH);
     digitalWrite(light3,HIGH);
     digitalWrite(light2,HIGH);
     digitalWrite(light5,HIGH);
     delay(1000);
     digitalWrite(light9,LOW);
     digitalWrite(light4,LOW);
     digitalWrite(light3,LOW);
     digitalWrite(light2,LOW);
     digitalWrite(light5,LOW);

       //2
     digitalWrite(light9,HIGH);
     digitalWrite(light3,HIGH);
     digitalWrite(light2,HIGH);
     digitalWrite(light5,HIGH);
     digitalWrite(light6,HIGH);
     delay(1000);
     digitalWrite(light9,LOW);
     digitalWrite(light3,LOW);
     digitalWrite(light2,LOW);
     digitalWrite(light5,LOW);
     digitalWrite(light6,LOW);

       //1
     digitalWrite(light4,HIGH);
     digitalWrite(light2,HIGH);
     delay(1000);
     digitalWrite(light4,LOW);
     digitalWrite(light2,LOW);

       //0
     digitalWrite(light8,HIGH);
     digitalWrite(light4,HIGH);
     digitalWrite(light3,HIGH);
     digitalWrite(light2,HIGH);
     digitalWrite(light5,HIGH);
     digitalWrite(light6,HIGH);
     delay(1000);
     digitalWrite(light8,LOW);
     digitalWrite(light4,LOW);
     digitalWrite(light3,LOW);
     digitalWrite(light2,LOW);
     digitalWrite(light5,LOW);
     digitalWrite(light6,LOW);*/
    

     
}

void numbers(int light6, int light5, int light4, int light3, int light2, int light9, int light8)
{

   
     if( light9 != 0)
     {
     digitalWrite(light9,HIGH);
     
     }
     if( light8 != 0)
     {
     digitalWrite(light8,HIGH);
    
     }
     if( light4 != 0)
     {
     digitalWrite(light4,HIGH);
     
     }
     if( light3 != 0)
     {
     digitalWrite(light3,HIGH);
   
     }
     if( light2 != 0)
     {
     digitalWrite(light2,HIGH);

     }
     if( light6 != 0)
     {
     digitalWrite(light6,HIGH);

     }
     if( light5 != 0)
     {
     digitalWrite(light5,HIGH);

     }
     
     delay(1000);
     
     digitalWrite(light9,LOW);
     digitalWrite(light8,LOW);
     digitalWrite(light4,LOW);
     digitalWrite(light3,LOW);
     digitalWrite(light2,LOW);
     digitalWrite(light5,LOW);
     digitalWrite(light6,LOW);
}

