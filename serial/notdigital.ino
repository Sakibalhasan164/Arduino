int analogPin=A0;
int outputPin=9;
//this will use a sine wave to control the brighness of the led
int wavepin=5;
float angle=PI;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int analogValue=analogRead(analogPin);
//  Serial.println(analogValue); 
  delay(10);
//  int mapValue=map(analogValue,0,1023,0,255);
//  analogWrite(outputPin,mapValue);
//Serial.println("mapValue:"+mapValue);
//Serial.println("analogValue:");
//Serial.println(analogValue);
//delay(200);
for(float i=0;i<=6.283;i+=0.0002){
  float sinOutput=sin(i);
  Serial.println(sinOutput);
  int brightness=map(sinOutput,0,1,0,255);
  analogWrite(outputPin,brightness);
  }



delay(100);
//Serial.println(sinOutput);
//Serial.println(brightness);
}
