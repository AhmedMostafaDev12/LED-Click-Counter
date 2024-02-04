int button = 5;
int blue=6;
int red =7;
int green=8;
int reading = 0;
int counter = 0;
void setup()
{ Serial.begin(9600);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  reading =digitalRead(button);
  if(reading== 1 )
  { counter++;
    
   if(counter==1)
   {digitalWrite(green,1);}
   
   else if(counter ==2)
   {digitalWrite(red,1);}
   
   else if(counter == 3)
   {digitalWrite(blue,1);}
   
  else if(counter ==4)
  {digitalWrite(green,0);
   digitalWrite(red,0);
   digitalWrite(blue,0);
   counter =0;}
   
  delay(250);
    
  }

}