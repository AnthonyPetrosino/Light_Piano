// int  recvValue = 0;  //  Initialize single input value
int val[4]; // Initialize 4 input sensors

void setup() {
  Serial.begin(9600);
}

void loop() {
  // For multiple sensor inputs:
  for (int i = 0; i < 4; i++)
  {
    val[i] = analogRead(i);
    Serial.print(val[i]);
    Serial.print(" ");
  }
  Serial.println();
  delay(10);
  
  // For single input:
  // recv1Value = analogRead(0); //  Read censor value sent to analog input 0
  // Serial.println(recv1Value); //  Send to MaxMSP
  // delay(5)
}
