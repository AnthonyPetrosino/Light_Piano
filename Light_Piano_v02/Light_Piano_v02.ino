void setup() {
  Serial.begin(9600); // Start serial communication at 9600 baud

  // Set up each analog pin for the photoresistors
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
}

void loop() {
  // Read the analog values from all five photoresistors
  int lightLevel1 = analogRead(A0);
  int lightLevel2 = analogRead(A1);
  int lightLevel3 = analogRead(A2);
  int lightLevel4 = analogRead(A3);
  int lightLevel5 = analogRead(A4);

  // Send all light levels over Serial as a comma-separated string
  Serial.print(lightLevel1);
  Serial.print(",");
  Serial.print(lightLevel2);
  Serial.print(",");
  Serial.print(lightLevel3);
  Serial.print(",");
  Serial.print(lightLevel4);
  Serial.print(",");
  Serial.println(lightLevel5);

  delay(100); // Adjust delay as needed to reduce frequency of data transmission
}