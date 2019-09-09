  int const ledPin = 5;
  int const buttonA = 4;
  int const potPin = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonA, INPUT_PULLUP);
  Serial.begin(9600);
}

  
  int potValue {0};
  int const fromLow {0};
  int const fromHigh {1023};
  int const toLow {0};
  int const toHigh{255};

  
  int myMap(int val, int fromLow, int fromHigh, int toLow, int toHigh)
  {
    int toRange = (toHigh - toLow);
    int fromRange = (fromHigh - fromLow);
    float ratio = (fromRange / toRange);
    int result = (val / ratio);
    return constrain(result, toLow, toHigh);
  }
  
void loop() { 
  potValue = analogRead(potPin);
  int const mapValue = map(potValue, fromLow, fromHigh, toLow, toHigh);
  if(analogRead(buttonA) == LOW) {
    analogWrite(ledPin, mapValue);
    delay(500);
    analogWrite(ledPin, 0);
    delay(500);
  }

  

  Serial.println(mapValue);
  Serial.println(myMap(potValue, fromLow, fromHigh, toLow, toHigh));
}
