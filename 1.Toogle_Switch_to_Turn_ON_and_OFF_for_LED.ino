int buttonstate = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(15,OUTPUT);
  pinMode(16,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonstate = digitalRead(15);
  if (buttonstate == 1)
    digitalWrite(15,HIGH);
  else
    digitalWrite(15,LOW);
}
