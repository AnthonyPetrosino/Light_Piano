void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud
  pinMode(A0, INPUT); // Set A0 as input for the photoresistor
}

void loop() {
  int lightLevel = analogRead(A0); // Read the analog value from the photoresistor
  Serial.println(lightLevel);     // Send the light level to the serial port
  delay(100);                     // Delay to reduce data frequency TODO Adjust to be faster?
}