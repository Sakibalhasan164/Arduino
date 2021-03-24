int LEDpin = 4;       // LED on pin 5
int switchPin = 7;   // momentary switch on 13, other side connected to ground

boolean running = true;

void setup()
{
//  Serial.begin(9600);
  pinMode(LEDpin, OUTPUT);
  pinMode(switchPin, INPUT_PULLUP);
//  digitalWrite(switchPin, HIGH);      // turn on pullup resistor
}

void loop()
{
  if (digitalRead(switchPin) == LOW)
  {  // switch is pressed - pullup keeps pin high normally
    delay(500);                        
    running = !running;                
//    Serial.println(running);
    // indicate via LED
  }
if(running){digitalWrite(LEDpin,HIGH);}else{digitalWrite(LEDpin,LOW);}
  
}
