/**
 * test microphone ( electet microphone   sparkfun BOB-09964 )
 *   VCC to 5v; GND to ground; AVD to analog pin 2
 **/

int sensorPin = A2;
int sensorValue = 0;
float middle;

void setup() {
  Serial.begin(9600);
  
  /* measure background noise*/
  middle = aveReading(sensorPin, 0, 3000, 1);
  Serial.print("Middle: ");
  Serial.println(middle);
  delay(1000);
}

void loop() {
  Serial.println(aveReading(sensorPin, middle, 100, 2));
  delay(50);
}

/* get a bunch of readings and return the average */
float aveReading(int pin, float middle, int nreadings, int delay_time)
{
  float result;
  result = 0.0;
  for(int i=0; i<nreadings; i++) {
    result += (abs((float)analogRead(pin) - middle) / (float)nreadings);
    delay(delay_time);
  }
  return(result);
}