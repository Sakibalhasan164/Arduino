int datapin=8;
int clockpin=9;
int latchpin=10;

long int myoutput[8]={11000000,00000000,11101111,11111111};

void setup() {
  // put your setup code here, to run once:
pinMode(datapin,OUTPUT);
pinMode(clockpin,OUTPUT);
pinMode(latchpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
 for(int i=0;i<4;i++){
  digitalWrite(latchpin,LOW);
shiftOut(datapin,clockpin,MSBFIRST,myoutput[i]);
digitalWrite(latchpin,HIGH);
Serial.println(i);
delay(500);
  
  }

}
