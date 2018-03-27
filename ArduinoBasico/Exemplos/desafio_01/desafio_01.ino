int threshold = 770;

void setup() {
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  
  // To calibrate the threshold
  //Serial.println(sensorValue);
  
  if(sensorValue < threshold)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }
  delay(100);
}
