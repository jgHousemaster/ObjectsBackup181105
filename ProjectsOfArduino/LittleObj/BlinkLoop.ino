void setup()
{
  for (int i=9; i<=10; i++)    //通过循环的方式设置9-13号引脚为输出状态
  {
    pinMode(i,OUTPUT);
  }
}
void loop()
{
  for (int x=9; x<=10; x++)   //通过循环的方式依次让每个引脚的led在1秒内完成明灭
  {
    digitalWrite(x,HIGH);
    delay(1000);
    digitalWrite(x,LOW);
    delay(1000);
  }
}
