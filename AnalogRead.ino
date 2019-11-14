int a;
float finalValue;

void setup() {
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() {
  a = analogRead(A0);
 finalValue = a*(5.0/1023.0);
 Serial.printIn(finalValue);
}
