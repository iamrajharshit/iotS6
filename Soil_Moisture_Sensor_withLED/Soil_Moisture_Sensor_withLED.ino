//sensor pins

#define sensorPower 7
#define sensorPin A0
#define LED 4

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPower, OUTPUT);
  pinMode(LED, OUTPUT);

  //Initially keeping low
  digitalWrite(sensorPower, LOW);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Analog output:");

  Serial.println(readSensor());

  delay(1000);
}

int readSensor(){
  digitalWrite(sensorPower, HIGH);
  delay(10);
  int val = analogRead(sensorPin);
  if (val < 1020){ //led glows when read value is less than 1020
    digitalWrite(LED, HIGH);  // turn the LED on (HIGH is the voltage level)
  }
  else{
    digitalWrite(LED,LOW);
  }
  digitalWrite(sensorPower, LOW);
  return val;
}