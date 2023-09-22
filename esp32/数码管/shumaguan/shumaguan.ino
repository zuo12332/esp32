
  // put your setup code here, to run once:
  //设置所有引脚为输出引脚
  int pin_a=4;
  int pin_b=5;
  int pin_c=19;
  int pin_d=21;
  int pin_e=22;
  int pin_f=2;
  int pin_g=15;
  int pin_dp=18;
//定义存放所有输出引脚的数组
int pin_list[8]={pin_a,pin_b,pin_c,pin_d,pin_e,pin_f,pin_g,pin_dp};
//定义数字显示逻辑的二维数组
int number_array[][8]={
  //a,b,c,d,e,f,g,dp  
  {0,0,0,0,0,0,1,1},//0
  {1,0,0,1,1,1,1,1},//1
  {0,0,1,0,0,1,0,1},//2
  {0,0,0,0,1,1,0,1},//3
  {1,0,0,1,1,0,0,1},//4
  {0,1,0,0,1,0,0,1},//5
  {0,1,0,0,0,0,0,1},//6
  {0,0,0,1,1,1,1,1},//7
  {0,0,0,0,0,0,0,1},//8
  {0,0,0,0,1,0,0,1},//9
};
void setup(){
  for(int i=0;i<8;i++){
    pinMode(pin_list[i],OUTPUT);
    digitalWrite(pin_list[i],LOW);
  }
}
void loop() {
  // put your main code here, to run repeatedly:
  //显示数字
  int num=3;
  for(int i=0;i<8;i++){
  pinMode(pin_list[i],number_array[num][i]);
  }
}
