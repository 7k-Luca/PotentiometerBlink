#define POTENTIOMETER A5
#define LED 2

void setup() {
  // Declaring Pins (OUTPUT or INPUT)
  pinMode(POTENTIOMETER, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600); // Sets Up Serial for Communication
}

void loop() {
  int potAnalogValue = analogRead(POTENTIOMETER); // Analog Value From Potentiometer
  Serial.println(potAnalogValue); // Prints Potentiometer Value
  delay(1);

  int mappedDelay = map(potAnalogValue, 0, 1023, 50, 1000); // Map analog value to a delay range
  // map(value, fromLow, fromHigh, toLow, toHigh);
  
  // Turns LED On
  digitalWrite(LED, HIGH);
  delay(mappedDelay);

  // Turns LED Off
  digitalWrite(LED, LOW);
  delay(mappedDelay);
}
