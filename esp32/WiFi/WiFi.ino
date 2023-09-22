#include <WiFi.h>
#define LED 2
//定义WiFi名与密码
const char *ssid="11";
const char *password="15223125934";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //连接WiFi
  WiFi.begin(ssid,password);
  Serial.print("正在连接 Wi-Fi");
  //检测是否连接成功
  while(WiFi.status()!=WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.println("连接成功");
  Serial.print("IP地址");
  Serial.println(WiFi.localIP());
  //通过板载LED反馈WiFi连接状态
  pinMode(LED,OUTPUT);
  digitalWrite(LED,HIGH);
  delay(100);
  digitalWrite(LED,LOW);
  delay(100);
  digitalWrite(LED,HIGH);
  delay(1500);
  digitalWrite(LED,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

}
