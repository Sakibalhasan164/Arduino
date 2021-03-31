const int latchPin=10;
const int clockPin=11;
const int dataPin=12;


void setup() {
  // put your setup code here, to run once:
pinMode(latchPin,OUTPUT);
pinMode(clockPin,OUTPUT);
pinMode(dataPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<256;i++){
    digitalWrite(latchPin,LOW);
    shiftOut(dataPin,clockPin,MSBFIRST,i);
    digitalWrite(latchPin,HIGH);
    delay(500);
    
    }
  

}
