int led1=5;
int led2=4;
int led3=3;
int led4=2;
int led5=1;

int speaker = 6;//pin of speaker

//notes
int _0_C = 200;
int A_sharp_3 = 466.16; 
int B_3 = 493.88;
int C = 164.81;
int D = 174.61;
int F = 220;
int F_sharp = 277.18;
int A_sharp_4 = 932.33;
int B_4 = 987.7;
int G_3 = 196;
int G_4 = 493.88;
int A = 261.63;
int B_sharp = 475; //???????????????

//note length
int half_note = 1111;
int quarter_note = 556;
int dot_eighth = 417;
int eighth_note = 278;
int sixteenth = 139;

int light6= 11;
int light5=10;
int light4=9;
int light3=8;
int light2=7;
int light9=13;
int light8=12;


void numbers(int light6, int light5, int light4, int light3, int light2, int light9, int light8, int delay_=1000, boolean shutoff = true)
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
     
     delay(delay_);

     if (shutoff=true){
       digitalWrite(light9,LOW);
       digitalWrite(light8,LOW);
       digitalWrite(light4,LOW);
       digitalWrite(light3,LOW);
       digitalWrite(light2,LOW);
       digitalWrite(light5,LOW);
       digitalWrite(light6,LOW);}
}

void setup() {
  // put your setup code here, to run once:
   pinMode(speaker,OUTPUT);//set speaker
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led4, OUTPUT);
   pinMode(led5, OUTPUT);
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
    //numbers(light6,light5,light4,light3,light2,0,light8);//0

    //after count down
    numbers(light6,light5,light4,light3,light2,light9,light8,300,false);//8
    lightsOn(1);
    delay(300);
    lightsOn(2);
    delay(200);
    lightsOn(3);
    delay(100);
    lightsOn(4);
    delay(100);
    lightsOff(1);
    lightsOff(2);
    lightsOff(3);
    lightsOff(4);
    numbers(0,0,0,0,0,0,0,0,true);

  lightsOn(1);
  play_note(B_3, quarter_note); //measure 1
  lightsOff(1);
  lightsOn(2);
  play_note(B_3, quarter_note);
  lightsOff(2);
  lightsOn(3);
  play_note(B_3, quarter_note);
  lightsOff(3);

    lightsOn(1);
    lightsOn(2);
    lightsOn(3);
    lightsOn(4);
  play_note(F_sharp, eighth_note);
  play_note(A_sharp_3, eighth_note);

    lightsOff(1);
    lightsOff(2);
    lightsOff(3);
    lightsOff(4);
    
  lightsOn(1);//measure 2
  play_note(B_3, quarter_note); 
  lightsOff(1);
  lightsOn(2);
  play_note(B_3, quarter_note);
  lightsOff(2);
  lightsOn(3);
  play_note(B_3, quarter_note);
  lightsOff(3);
  
    lightsOn(1);
    lightsOn(2);
    lightsOn(3);
    lightsOn(4);
  play_note(F_sharp, eighth_note);
  play_note(A_sharp_3, eighth_note);

    lightsOff(1);
    lightsOff(2);
    lightsOff(3);
    lightsOff(4);
    
  lightsOn(1);//measure 3
  play_note(B_3, quarter_note); 
  lightsOff(1);
  lightsOn(2);
  play_note(B_3, quarter_note);
  lightsOff(2);
  lightsOn(3);
  play_note(B_3, quarter_note);
  lightsOff(3);

    lightsOn(1);
    lightsOn(2);
    lightsOn(3);
    lightsOn(4);
  play_note(F_sharp, eighth_note);
  play_note(D, eighth_note);
      lightsOff(1);
    lightsOff(2);
    lightsOff(3);
    lightsOff(4);
    
  lightsOn(1);//measure 4
  play_note(B_3, quarter_note); 
  lightsOff(1);
  lightsOn(2);
  play_note(B_3, quarter_note);
  lightsOff(2);
  lightsOn(3);
  play_note(B_3, quarter_note);
  lightsOff(3);
  
      lightsOn(1);
    lightsOn(2);
    lightsOn(3);
    lightsOn(4);
  play_note(F_sharp, eighth_note);
  play_note(F_sharp, eighth_note);
        lightsOff(1);
    lightsOff(2);
    lightsOff(3);
    lightsOff(4);
  lightsOn(1);//measure 5
  play_note(B_3, quarter_note); 
  lightsOff(1);
  lightsOn(2);
  play_note(B_3, quarter_note);
  lightsOff(2);
  lightsOn(3);
  play_note(B_3, quarter_note);
  lightsOff(3);
      lightsOn(1);
    lightsOn(2);
    lightsOn(3);
    lightsOn(4);  
  play_note(F_sharp, dot_eighth);
  play_note(D, sixteenth);
          lightsOff(1);
    lightsOff(2);
    lightsOff(3);
    lightsOff(4);

    lightsOn(2);
    lightsOn(3);  
  play_note(B_3, quarter_note); //measure 6
      lightsOff(2);
    lightsOff(3);
    lightsOn(4); 
  play_note(F_sharp,eighth_note);
  lightsOff(4);
  
      lightsOn(1);
  play_note(D, eighth_note);
        lightsOn(1);
    lightsOn(2);
    lightsOn(3);
    lightsOn(4); 
  play_note(B_3, half_note);
            lightsOff(1);
    lightsOff(2);
    lightsOff(3);
    lightsOff(4);
  //measure 7

  lightsOn(1);
  play_note(F, quarter_note); 
  lightsOff(1);
  lightsOn(2);
  play_note(F, quarter_note);
  lightsOff(2);
  lightsOn(3);
  play_note(F, quarter_note);
   lightsOff(3);

         lightsOn(1);
    lightsOn(2);
    lightsOn(3);
    lightsOn(4);
  play_note(F_sharp, dot_eighth);
  play_note(D, sixteenth);
            lightsOff(1);
    lightsOff(2);
    lightsOff(3);
    lightsOff(4);

        lightsOn(2);
    lightsOn(3);
  play_note(A_sharp_3, quarter_note); //measure 8
      lightsOff(2);
    lightsOff(3);
  play_note(F_sharp, dot_eighth);
  play_note(D, sixteenth);
           lightsOn(1);
    lightsOn(2);
    lightsOn(3);
    lightsOn(4);
  play_note(B_3, half_note);
              lightsOff(1);
    lightsOff(2);
    lightsOff(3);
    lightsOff(4);
  play_note(B_3, half_note); //measure 9 nothing
  play_note(B_3, dot_eighth);
  play_note(B_3, sixteenth);
  play_note(B_3, quarter_note);
  play_note(A_sharp_3, dot_eighth);
  play_note(A, sixteenth); 

  lightsOn(1);
  play_note(G_3, sixteenth); //measure 10
  lightsOff(1);

  lightsOn(4);
  play_note(F_sharp, sixteenth);
  lightsOff(4);

           lightsOn(1);
    lightsOn(2);
    lightsOn(3);
    lightsOn(4);  
  play_note(G_3, eighth_note);
                lightsOff(1);
    lightsOff(2);
    lightsOff(3);
    lightsOff(4);
  delay (278);
  play_note(B_sharp, eighth_note);
             lightsOn(1);
    lightsOn(2);
    lightsOn(3);
    lightsOn(4); 
  play_note(F, quarter_note);
                  lightsOff(1);
    lightsOff(2);
    lightsOff(3);
    lightsOff(4);

    //ending
                  lightsOff(1);
    lightsOff(2);
    lightsOff(3);
    lightsOff(4);
    delay(500);
    numbers(light6,light5,light4,light3,light2,light9,light8,6,false);//8
    lightsOn(1);
    lightsOn(2);
    lightsOn(3);
    lightsOn(4);
    delay(5000);
    lightsOff(1);
    lightsOff(2);
    lightsOff(3);
    lightsOff(4);
    numbers(0,0,0,0,0,0,0,0,true);

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
void play_note(int note,int length_){
  tone(speaker,note,length_);
  delay(length_+65);
}


