#define DO_PIN 2


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(DO_PIN, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int lightState = digitalRead(DO_PIN);

  if (lightState == HIGH){
    Serial.println("The ligth is not present");
    delay(2000);}
  else{
    Serial.println("The light is present");
    delay(2000);}
   
}
