// second program blinking of LED light
int ledPin=7;



void setup() {
  // put your setup code here, to run once:
    pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(5000);
  digitalWrite(ledPin, LOW);   // turn the LED off by making the voltage LOW
  delay(5000);

}
