void setup() {
    Serial.begin(9600);
}

void loop() {
  int myNumber = 3;
  if(myNumber < 3){
    Serial.println("I will never be printed");
  }
  else{
    Serial.println("It always print me");
  }
  delay(1000);
}
