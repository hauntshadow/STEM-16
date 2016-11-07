/*
Version 0.1
*/
const int sensorPin = A0;  // initialize light sensor to pin A0
const int motorPin = 9;  // initialize motors to pin 9
const int ledPin = 5;  // initialize leds to pin 5
const int buttonPin = 0;
int sensorState = 0; // holds light sensor value
int lightRead = 0;
int buttonState = 0;


void setup()  {
  pinMode(sensorPin, INPUT);  // sets light sensor as input
  pinMode(motorPin, OUTPUT);  // sets motors as output
  pinMode(ledPin, OUTPUT);  // sets leds as output
  digitalWrite(ledPin, HIGH);  // turns on led
  Serial.begin(9600);  // starts communication through port
  if(buttonState == HIGH)
    {
      lightRead = analogRead(sensorPin);
      Serial.println(lightRead);
      delay(100);
    }
}
void loop()  {
  sensorState = analogRead(sensorPin);  // retrieves light sensor reading
  if(sensorState >= sensorRead)  {
    digitalWrite(motorPin, HIGH);
  }
  else  {
    digitalWrite(motorPin, LOW);
  }
  Serial.println(sensorState);  // prints value of light sensor for diagnostics
  delay(10);  // retrieves data on delay
}
