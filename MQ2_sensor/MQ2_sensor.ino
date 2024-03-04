// fire detection with MQ2 sensor

#define MQ2pin (0)
float sensorValue;

void setup() {
  Serial.begin(9600);
  Serial.println("Gas sesnor warming up");
  delay(20000);

}

void loop() {
  sensorValue= analogRead(MQ2pin);
  Serial.print(sensorValue);
  if(sensorValue>300);
  {
    Serial.print("| Smoke detected!");
  }
  Serial.println(""); delay(2000);

}
