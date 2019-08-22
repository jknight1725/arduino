void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter + to increase speed, - to decrease speed");
}

int timer = 1000;
void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    char operation = Serial.read();
    if( (operation == '+') ){
      if(timer > 125) {
        timer /= 2;
        Serial.println((String)"Speed Increased to "+timer+' '+"ms");
      }else{
        Serial.println("max speed 125ms");
      }
    }
    if( (operation == '-') ){
      if(timer < 4000) {
        timer *= 2;
        Serial.println((String)"Speed Decreased to "+timer+' '+"ms");
      }else{
        Serial.println("min speed 4000ms");
      }
    }
  }
  digitalWrite(LED_BUILTIN, HIGH);
  delay(timer);
  digitalWrite(LED_BUILTIN, LOW);
  delay(timer);
}
