int red = 9;
int yellow = 8;
int green = 7;
int greenPed = 6;
int redPed = 5;
int pedestrian = 10;
int vehicle = 11;
int pulseVeh = 0;
int pulsePed = 0;
void pedestrianLights();
void vehicleLights();
void regularLights();


void setup() {
 Serial.begin(9600);
 pinMode(red, OUTPUT);
 pinMode(yellow, OUTPUT);
 pinMode(green, OUTPUT);
 pinMode(pedestrian, INPUT);
 pinMode(vehicle, INPUT);
}

void loop() {
  digitalRead(pedestrian);
  while (pedestrian == LOW)
        {
          regularLights();
        }
  
  if (digitalRead(pedestrian) == HIGH)
  {
    pulsePed++;
    Serial.print(pulsePed);
  }
     else if (digitalRead(vehicle) == HIGH)
              {
               pulseVeh++;
               Serial.print(pulseVeh);
              }

  
  if (pulsePed > 0)
  {
    pedestrianLights();
    pulsePed = 0;
    Serial.print(pulsePed);
  }

      else if (pulseVeh > 0)
              {
                vehicleLights();
                pulseVeh = 0;
                Serial.print(pulseVeh);
              }

               else if (pulseVeh > 0 && pulsePed > 0)
                       {
                          pedestrianLights();
                          pulseVeh = 0;
                          pulsePed = 0;
                          Serial.print(pulsePed);
                          Serial.print(pulseVeh);
                       }

  regularLights();
      
}

void regularLights()
{
    digitalWrite(redPed, HIGH);
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
   digitalWrite(red, HIGH);
   digitalWrite(greenPed, HIGH);
   delay(7000);
   digitalWrite(greenPed, LOW);
   digitalWrite(redPed, HIGH);
   delay(3000);
   digitalWrite(redPed, LOW);
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
