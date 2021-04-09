int num=0;
int button=5;
int led=10;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(button,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(button)==LOW){
    delay(600);
    num++;
    Serial.println(num);
    }

}
