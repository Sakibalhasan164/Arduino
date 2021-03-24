int ledPin=7;
int controler=4;
int test=8;
int analogPin=A0;
int analogPinTwo=A1;

void setup() {
  
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
pinMode(controler,INPUT_PULLUP);
pinMode(3,OUTPUT);
pinMode(test,OUTPUT);
int x=0;
//this is great!!!
while(x<4){
 blinkLED(test,300,1);
  x++;
  }
  digitalWrite(test,HIGH);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  int x=0;
  int potValue=analogRead(analogPin);
  int potBlinkControler=analogRead(analogPinTwo);
//  Serial.println(potBlinkControler);
  int blinkNTimes=map(potBlinkControler,0,1023,1,5);
  Serial.println(blinkNTimes);
//  Serial.println(potValue);

  
  int T=map(potValue,0,1023,100,350);
//  Serial.println(T);
if(digitalRead(controler)==LOW){  
digitalWrite(test,LOW);
blinkLED(ledPin,T,blinkNTimes);
  }
  else{
//    Serial.println("dones't works");
digitalWrite(ledPin,LOW); 
digitalWrite(test,HIGH);
 }
//the potentiometer

}

int blinkLED(int p,int d,int x){
  for(byte i=0;i<x;i++){
    digitalWrite(p,HIGH);
  delay(d);
  digitalWrite(p,LOW);
  delay(d);
    }
  }
