int red = 9;
int yellow = 8;
int green = 7;
int button = 10;
int buttonState;

void setup() {
 pinMode(red, OUTPUT);
 pinMode(yellow, OUTPUT);
 pinMode(green, OUTPUT);
 pinMode(button, INPUT);
}

void loop() {
  buttonState = digitalRead(button);
  delay(200);
  if (buttonState == LOW)
  {
    regularLights();
  }
  else 
  {
   buttonLights();
  }
  delay(200);
}

void regularLights()
{
    digitalWrite(red, HIGH);
    delay(5000);
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    delay(5000);
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(2000);
    digitalWrite(yellow, LOW);
}

void buttonLights()
{
   digitalWrite(red, HIGH);
   delay(3000);
   digitalWrite(red, LOW);
   digitalWrite(green, HIGH);
   delay(7000);
   digitalWrite(green, LOW);
   digitalWrite(yellow, HIGH);
   delay(2000);
   digitalWrite(yellow, LOW);
}
