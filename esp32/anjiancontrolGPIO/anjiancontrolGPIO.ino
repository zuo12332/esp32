#define led_pin   2   //led引脚
#define keystrock_pin  14  //按键引脚

int led_logic=0;
bool state=false;



void setup() {
  // put your setup code here, to run once:
  pinMode(led_pin,OUTPUT);
  pinMode(keystrock_pin,INPUT_PULLDOWN);
}

void loop() {
  // put your main code here, to run repeatedly:
  //按键消抖
  if(digitalRead(keystrock_pin)){
    delay(10);
    if(digitalRead(keystrock_pin)&&!state){
      led_logic=!led_logic;
      digitalWrite(led_pin,led_logic);
      state=!state;
    }
  else if(!digitalRead(keystrock_pin)){
    state=false;
  }
  }
}
