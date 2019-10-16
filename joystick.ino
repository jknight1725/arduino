int VRx = A0;
int VRy = A1;
//int SW = 2;

int xPosition = 0;
int yPosition = 0;
//int SW_state = 0;
int mapX = 0;
int mapY = 0;

int motorPin = 3;

void setup() {
  Serial.begin(9600); 

  pinMode(motorPin, OUTPUT);
  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);
  //pinMode(SW, INPUT_PULLUP); 

}

void loop() {
  xPosition = analogRead(VRx);
  yPosition = analogRead(VRy);
  //SW_state = digitalRead(SW);
  mapX = map(xPosition, 0, 1023, -512, 512);
  mapY = map(yPosition, 0, 1023, -512, 512);
  
  Serial.println("Coordinates:");
  Serial.print("X: ");
  Serial.println(mapX);
  Serial.print("Y: ");
  Serial.println(mapY);
  Serial.println();
  //Serial.print("Button: ");
  //Serial.println(SW_state);

  int motorMapx = map(mapX, -512, 512, 0, 255);
  int motorMapY = map(mapY, -512, 512, 0, 255);
  analogWrite(motorPin, motorMapx);
  delay(1000);

}
