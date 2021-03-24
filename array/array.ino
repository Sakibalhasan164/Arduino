int pinArray[]={2,3,4,5,6};
int d;
//want to control delay with the potentiometer
int pot=A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(byte i=0;i<5;i++){
    pinMode(pinArray[i],OUTPUT);
    }
}

void loop() {

for(int i=0;i<5;i++){
  int potValue=analogRead(pot);
int customDelay=map(potValue,0,1023,50,600);
//Serial.print(customDelay);
d=customDelay;
int index=pinArray[i];
  digitalWrite(index,HIGH);
  digitalWrite(index-1,LOW);
  delay(d);
  }
for(int j=5;j>-1;j--){
  int potValue=analogRead(pot);
int customDelay=map(potValue,0,1023,50,600);
//Serial.print(customDelay);
d=customDelay;
  int index=pinArray[j];
  digitalWrite(index,LOW);
  digitalWrite(index-1,HIGH);
//  Serial.println(pinArray[j]);
  delay(d);
  }

  
}
