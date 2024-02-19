


const int Buz=9;
int led1=8;


void setup() {

  pinMode(Buz,OUTPUT);
  pinMode(led1,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {

  tone(Buz,1000);
  delay(1000);
  digitalWrite(led1, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);          
  noTone(Buz);
  delay(1000);
  digitalWrite(led1, LOW);  // turn the LED on (HIGH is the voltage level)
  delay(500);    


  // put your main code here, to run repeatedly:

}
