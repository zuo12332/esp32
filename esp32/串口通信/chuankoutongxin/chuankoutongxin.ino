void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial2.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    char data=Serial.read();
    Serial2.write(data);
  } 
  if(Serial2.available()){
    char data=Serial2.read();
    //将数据发送到UART0
    Serial.write(data);

  }
}
