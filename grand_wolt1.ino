const int leds[6]={6,7,8,9,10,11};
const int key1= 4;
const int key2= 5;
 int reading1 =0;
 int reading2 =0;

void setup()
{
  Serial.begin(9600);
  for(int i =0;i<6;i++)
  {pinMode(leds[i],OUTPUT);}
   pinMode(key1,INPUT);
   pinMode(key2,INPUT);}

void loop()
{
  reading1 = digitalRead(key1);
  reading2 = digitalRead(key2); 
  
  if(reading1==1)
  {analogWrite(leds[0],127);
  digitalWrite(leds[2],1);}
  else
  {analogWrite(leds[0],0);
  digitalWrite(leds[2],0);}
  
  
  if(reading2==1)
  {digitalWrite(leds[4],1);
   analogWrite(leds[5],127);}
else
{digitalWrite(leds[4],0);
   analogWrite(leds[5],0);}
}