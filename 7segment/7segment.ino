int datapin=8;
int clockpin=9;
int latchpin=10;

int num[16] = {B11111100, B01100000, B11011010, B11110010, B01100110, B10110110, B10111110, B11100000, B11111110, B11110110, B11101110, B00111110, B10011100, B01111010, B10011110, B10001110};

void setup() {
  // put your setup code here, to run once:
  pinMode(datapin,OUTPUT);
  pinMode(clockpin,OUTPUT);
  pinMode(latchpin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<16;i++){
    //first, pull the latchpin low
    digitalWrite(latchpin,LOW);
    shiftOut(datapin,clockpin,MSBFIRST,num[i]);
    digitalWrite(latchpin,HIGH);
    delay(500);   
    Serial.println(i);
    }

}
