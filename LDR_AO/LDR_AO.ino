#define AO_PIN A0


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(AO_PIN, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int lightValue = analogRead(AO_PIN);
    delay(2000);
    Serial.println(lightValue);
    delay(2000);
}
