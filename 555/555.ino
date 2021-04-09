int analogPin=A0;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //the PWM sigle given by the 555!!
int value=analogRead(analogPin);
Serial.println(value);

}
