void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

  int potValue {150};
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
  // put your main code here, to run repeatedly:
  Serial.println(map(potValue, fromLow, fromHigh, toLow, toHigh));
  Serial.println(myMap(potValue, fromLow, fromHigh, toLow, toHigh));
}
