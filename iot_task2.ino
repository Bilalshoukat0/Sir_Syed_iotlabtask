int sensor = 0;

void setup()
{
  pinMode(5, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  
  sensor = digitalRead(5);
  if (sensor == HIGH) {
    digitalWrite(13, HIGH);
    Serial.println("Sensor activated!");
  } else {
    digitalWrite(13, LOW);
  }
  delay(10);
}