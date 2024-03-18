//sensor pins

#define sensorPower 7
#define sensorPin A0


void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPower, OUTPUT);

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
  digitalWrite(sensorPower, LOW);
  return val;
}