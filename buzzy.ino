//Creating Buzzes to Make Music
int buzz = 13;
int c = 262;
int g= 392;
int a= 440;
int f =349;
int e = 330;
int d=294;
void setup() {
  // put your setup code here, to run once:
   pinMode(buzz,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<2;i++)
  {
    tone(buzz,c,300);
    delay(300);
  }
  for(int i=0;i<2;i++)
  {
    tone(buzz,g,300);
    delay(300);
  }
  for(int i=0;i<2;i++)
  {
    tone(buzz,a,300);
    delay(300);
  }
  for(int i=0;i<1;i++)
  {
    tone(buzz,g,300);
    delay(300);
  }
  for(int i=0;i<2;i++)
  {
    tone(buzz,f,300);
    delay(300);
  }
  for(int i=0;i<2;i++)
  {
    tone(buzz,e,300);
    delay(300);
  }
  for(int i=0;i<2;i++)
  {
    tone(buzz,d,300);
    delay(300);
  }
  for(int i=0;i<1;i++)
  {
    tone(buzz,c,300);
    delay(300);
  }
  for(int i=0;i<2;i++)
  {
    tone(buzz,c,300);
    delay(300);
  }
}
   
