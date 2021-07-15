int indate=0;
  
void setup()
{
	Serial.begin(9600);
  
  pinMode(13, OUTPUT);
 	pinMode(12, OUTPUT);
 	pinMode(11, OUTPUT);
 	pinMode(10, OUTPUT);
 	pinMode(9, OUTPUT);
 	pinMode(8, OUTPUT);

  Serial.println("How many lights do you want to light?");
}

int i;
void loop()
{
	if(Serial.available()>0)
    {
    	indate=Serial.read();
      indate=indate-'0';
      if(indate<=6&&indate>=1)
       {
            for(i=1;i<=indate;i++)
            {
                digitalWrite(i+7,HIGH);
            }
            delay(500);
            for(;i>=1;i--)
            {
                digitalWrite(i+7,LOW);        
            }
       }
       else
       {
            Serial.println("Input error");
       }
    }
}
