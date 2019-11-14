
const int trigger = 12;
const int echo = 11;

long duration;
int distance;


void setup() {
pinMode(trigger, OUTPUT); // Sets the trig as an Output
pinMode(echo, INPUT); // Sets the echo as an Input
Serial.begin(9600);
}

void loop() {
//Initially disabling of the trig output
digitalWrite(trigger, LOW);
delayMicroseconds(2);
// Sets the trigger on HIGH for 10 micro seconds
digitalWrite(trigger, HIGH);
delayMicroseconds(10);
digitalWrite(trigger, LOW);
// Reads the echo and save the value in the duration variable
duration = pulseIn(echo, HIGH); //pulseIn counts the time duration of a pulse that switches from HIGH to LOW

//Calculating distance (0.034 because the sound speed is 0.034 cm/us)
distance = duration*0.034/2;

Serial.println(distance);
}
