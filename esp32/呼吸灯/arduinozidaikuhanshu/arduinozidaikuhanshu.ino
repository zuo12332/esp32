#define pin_led  12


void setup() {
  // put your setup code here, to run once:
  pinMode(pin_led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //渐亮
  for(int i=0;i<256;i++){
    analogWrite(pin_led,i);
    delay(10);
  }
  //渐灭
    for(int i=255;i>=0;i--){
    analogWrite(pin_led,i);
    delay(10);
  }
}
