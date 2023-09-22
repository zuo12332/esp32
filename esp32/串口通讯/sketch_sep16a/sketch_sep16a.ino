String readUART="";
void serial_init()  //串口初始化
{
  Serial.begin(115200);  //串口0初始化
  Serial2.begin(115200); //串口2初始化
}
void setup() {
  // put your setup code here, to run once:
  serial_init();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())//使用串口0给esp32发送数据
  {
    readUART=Serial.readString();
    Serial2.printf("%s\r\n",readUART);//将得到的数据发送给STM32
    Serial.printf("%s\r\n",readUART);//打印数据在电脑上
    readUART="";
  }
}
