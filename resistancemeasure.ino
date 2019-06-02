#include <Firmata.h>
 
int potPin1 = 2;// select the input pin for the potentiometer
int potPin2 = 1;
int sensorValue1 = 0;       // variable to store the value coming from the sensor
int sensorValue2 = 0; 
 
void setup(void)
{
  // start serial port
  Serial.begin(9600);
}
 
 
void loop(void)
{

// read the value from the sensor:
sensorValue1 = analogRead(potPin1);
sensorValue2 = analogRead(potPin2);
sensorValue1 = sensorValue1/4;
sensorValue2 = sensorValue2/4;
// stop the program for <sensorValue> milliseconds:
//Serial.write(sensorValue1);
Serial.write(sensorValue1);
Serial.write(sensorValue2);
delay(500);
}
