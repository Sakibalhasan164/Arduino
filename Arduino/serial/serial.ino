char myChar = 's';
String myName=" sakib hasan";
int ledPins[]={2,3,4,5};

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println(5);
Serial.println("hi there" + myName);
Serial.println(myChar);
Serial.println(sin(PI*0.5));

//lets try a for loop
for(int i=5;i>-1;i--){
  
 }
for(int i=0;i<4;i++){
  Serial.println(ledPins[i]);
  }

Serial.println(sizeof(ledPins));
int sum;
sum=addNums(3,4);
Serial.println("the sum is:");
Serial.println(sum);
 if(sum>3){
  Serial.println("the sum is greater than 3");
  }else{
    Serial.println("the sum is less than 3");
    }
}

void loop() {
  // put your main code here, to run repeatedly:

}

//let try some functions

int addNums(int num1,int num2){
 return num1+num2;
  
  }
