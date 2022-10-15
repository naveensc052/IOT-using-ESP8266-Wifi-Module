void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ldr_value = analogRead(A0);
  Serial.print("LDR VALUE:");
  Serial.println(ldr_value);
  delay(1000);
}
