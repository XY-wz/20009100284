/*-----------------------------------------
大作业：
使用CD4511控制两个7位数码管
从0-99循环显示，每秒更新一次
通过按键对计时器清零，清零后重新开始计时

-------------------------------------------*/

#include<MsTimer2.h>

int tick=0;
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  digitalWrite(7,HIGH);
  //计时器中断
  MsTimer2::set(1000,onTimer);
  display(tick);
	MsTimer2::start();
  //外部中断
  pinMode(2,INPUT);
  attachInterrupt(0,onChange,FALLING);
}
//外部中断函数
void onChange()
{
  black;
	tick=0;
  display(tick);
}
//计时器中断函数
void onTimer()
{
  if(tick==99)
  {
  	black;
    tick=0;
    display(tick);
  }
  else
  {
	  black;
    tick++;
    display(tick);
  }
}

void loop()
{
  
}
//两个数码管显示函数
void display(int num)
{
  int geWei,shiWei;
  geWei=num%10;
  shiWei=num/10;
  //编辑十位
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(8,shiWei&0x1);
  digitalWrite(9,(shiWei>>1)&0x1);
  digitalWrite(10,(shiWei>>2)&0x1);
  digitalWrite(11,(shiWei>>3)&0x1);
  //编辑个位
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(8,geWei&0x1);
  digitalWrite(9,(geWei>>1)&0x1);
  digitalWrite(10,(geWei>>2)&0x1);
  digitalWrite(11,(geWei>>3)&0x1);
}
//数码管消隐函数
void black()
{
  digitalWrite(7,LOW);
  digitalWrite(7,HIGH);
}
