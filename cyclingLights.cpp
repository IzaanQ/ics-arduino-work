int ledPins[]={2,3,4,5,6,7,8,9};

void setup() {
  for (int i = 0; i < 8; i++){
    pinMode(ledPins[i], OUTPUT);
    }
}

void loop() {
oneAfterAnotherLoop();
}

void oneAfterAnotherLoop()
{
  int DelayTime = 50;

  // Turning on the LED
  for(int i = 0; i <= 8; i++){
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[i-1], LOW);
    delay(DelayTime);  
  }

           
   
}
