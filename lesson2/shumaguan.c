int indate=0;
  
void setup()
{
	Serial.begin(9600);
  
  pinMode(8, OUTPUT);
 	pinMode(2, OUTPUT);
 	pinMode(3, OUTPUT);
 	pinMode(4, OUTPUT);
 	pinMode(5, OUTPUT);
 	pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  Serial.println("What number do you want to display?");
}

int numTable[10][8] = {
//1为点亮，0为关闭
//a  b  c  d  e  f  g  dp用来关闭
{1, 1, 1, 1, 1, 1, 0, 0},     //0
{0, 1, 1, 0, 0, 0, 0, 0},     //1
{1, 1, 0, 1, 1, 0, 1, 0},     //2
{1, 1, 1, 1, 0, 0, 1, 0},     //3
{0, 1, 1, 0, 0, 1, 1, 0},     //4
{1, 0, 1, 1, 0, 1, 1, 0},     //5
{1, 0, 1, 1, 1, 1, 1, 0},     //6
{1, 1, 1, 0, 0, 0, 0, 0},     //7
{1, 1, 1, 1, 1, 1, 1, 0},     //8
{1, 1, 1, 1, 0, 1, 1, 0},     //9
};

void loop()
{
	if(Serial.available()>0)
    {      
    	    indate=Serial.read();
        	indate=indate-'0';
        	digitalWrite(8,numTable[indate][0]);
        	digitalWrite(2,numTable[indate][1]);
        	digitalWrite(3,numTable[indate][2]);
        	digitalWrite(4,numTable[indate][3]);
        	digitalWrite(5,numTable[indate][4]);
        	digitalWrite(6,numTable[indate][5]);
        	digitalWrite(7,numTable[indate][6]);
          delay(600);
        	digitalWrite(2,LOW);
        	digitalWrite(3,LOW);
        	digitalWrite(4,LOW);
        	digitalWrite(5,LOW);
        	digitalWrite(6,LOW);
        	digitalWrite(7,LOW);
        	digitalWrite(8,LOW);
               
    }
}
