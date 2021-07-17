char indate=0;
  
void setup()
{
	Serial.begin(9600);
  
  	pinMode(13, OUTPUT);

  	Serial.println("OK");
}

void loop()
{
  	if(Serial.available()>0)
    {
    	indate=Serial.read();
      MorseOut(indate);
      
      space();
      
    }
}

//封装字母
void MorseOut(char a)
{
    switch(a)
    {
      case 'a':
      dot();line();
      break;
      case 'b':
      line();dot();dot();dot();
      break;
      case 'c':
      line();dot();line();dot();
      break;
      case 'd':
      line();dot();dot();
      break;
      case 'e':
      dot();
      break;
      case 'f':
      dot();dot();line();dot();
      break;
      case 'g':
      line();line();dot();
      break;
      case 'h':
      dot();dot();dot();dot();
      break;
      case 'i':
      dot();dot();
      break;
      case 'j':
      dot();line();line();line();
      break;
      case 'k':
      line();dot();line();
      break;
      case 'l':
      dot();line();dot();dot();
      break; 
      case 'm':
      line();line();
      break;
      case 'n':
      line();dot();
      break;
      case 'o':
      line();line();line();
      break;
      case 'p':
      dot();line();line();dot();
      break;
      case 'q':
      line();line();dot();line();
      break;
      case 'r':
      dot();line();dot();
      break;
      case 's':
      dot();dot();dot();
      break;
      case 't':
      line();
      break;
      case 'u':
      dot();dot();line();
      break;
      case 'v':
      dot();dot();dot();line();
      break;
      case 'w':
      dot();line();line();
      break;
      case 'x':
      line();dot();dot();line();
      break;
      case 'y':
      line();dot();line();line();
      break;
      case 'z':
      line();line();dot();dot();
      break;
    }
}

//封装字母的组成部分
int DIAN=100;	//魔术数字
int XIAN=300;
int DuanTing=200;
int ChangTing=700;
  //一点作为一个基本的信号单位，一划的长度就相当于是3点的时间长度；在一个字母或是数字之内，每个点、划之间的间隔就应该是两点的时间长度；字母（数字）与字母（数字）之间的间隔就是7点的时间长度。
void dot()
{
	  digitalWrite(13,HIGH);
    delay(DIAN);
    digitalWrite(13,LOW);
    delay(DuanTing);
}
void line()
{
    digitalWrite(13,HIGH);
    delay(XIAN);
    digitalWrite(13,LOW);
    delay(DuanTing);
}
void space()
{
	delay(ChangTing);
}
