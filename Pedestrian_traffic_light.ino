int red = 9;
int yellow = 8;
int green = 7;
int pedestrian = 10;
int vehicle = 11;


void setup() {
 pinMode(red, OUTPUT);
 pinMode(yellow, OUTPUT);
 pinMode(green, OUTPUT);
 pinMode(pedestrian, INPUT);
 pinMode(vehicle, INPUT);
}

void loop() {
  delay(200);
  if (digitalRead(pedestrian) == LOW && digitalRead(vehicle) == LOW)
  {
    regularLights();
  }
  else if (digitalRead(pedestrian) == HIGH && digitalRead(vehicle) == LOW || digitalRead(pedestrian) == HIGH && digitalRead(vehicle) == HIGH)
  {
   pedestrianLights();
  }
       else if (digitalRead(pedestrian) == LOW && digitalRead(vehicle) == HIGH)
       {
        vehicleLights();
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

void pedestrianLights()
{
   digitalWrite(green, HIGH);
   delay(7000);
   digitalWrite(green, LOW);
   digitalWrite(yellow, HIGH);
   delay(2000);
   digitalWrite(yellow, LOW); 
   digitalWrite(red, HIGH);
   delay(3000);
   digitalWrite(red, LOW);
}

void vehicleLights()
{
    digitalWrite(green, HIGH);
    delay(7000);
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(2000);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(5000);
    digitalWrite(red, LOW);
}
