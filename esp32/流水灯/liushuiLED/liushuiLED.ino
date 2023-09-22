int pin_list[5]={13,12,14,27,26};
int num=sizeof(pin_list)/sizeof(pin_list[0]);



void setup() {
  // put your setup code here, to run once:
  for(int i=0;i<num;i++)
  {
    pinMode(pin_list[i],OUTPUT);
  }
}

void loop() {
  for(int i=0;i<num;i++)
  {
    digitalWrite(pin_list[i],LOW);
    if(i>0){
      digitalWrite(pin_list[i-1],HIGH);
      
    }
    else{
      digitalWrite(pin_list[num-1],HIGH);
    }
    delay(250);
  }
}
