# 7月10日开源硬件第一次课堂笔记
## 开源软件
### 开源
是事物可以公开访问的，人人可以修改并分享的

开要有规则：授权、**GPL**等协议

### Github
[www.github.com](www.github.com)

工作原理：

>1.创建一个分支
>
>2.通过添加提交跟踪对分支更改的进度
>
>3.打开拉取请求
>
>4.对代码的讨论和审查
>
>（5.在生产中验证）
>
>6.合并

### markdown
如何成为PPT？

## 开源硬件
### 电脑的组成
输入、输出、存储、计算、控制

### 操作系统
用户通过操作系统去管理电脑的设备

>进程管理
>
>存储管理
>
>设备管理
>
>文件管理
>
>作业管理

### arduino
[wwww.arduino.cc](wwww.arduino.cc)

使用Atmel AVR 单片机，采用开源的软硬件平台，构建于开源simple I/O 接口板，并具有使用类似Java、C 语言的 Processing/Wiring 开发环境。

### 虚拟开发环境-tinkercad
[www.tinkercad.com](www.tinkercad.com)

一款免费、易于使用的三维设计、电子电路设计和编程的在线软件。面向教师、学生、业余爱好者和设计人员，使他们能够想象、设计并制作任何内容！

让LED等闪烁
```c
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}

int main()
{
setup();

while(1){
loop();
}
return 0;
}
```

