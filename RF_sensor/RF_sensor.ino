const int irSensor=2;

void setup() {
  Serial.begin(9600);
  pinMode(irSensor, INPUT);
}

void loop() {
  int irData= digitalRead(irSensor);
  Serial.print("IR SENSOR DATA: \n");
  Serial.println(irData);
  if (irData==0)
  {
    Serial.print("Object detected\n");
  } else
  Serial.print("Object not detected\n");
}
