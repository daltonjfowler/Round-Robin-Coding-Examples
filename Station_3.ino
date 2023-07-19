/*
Sample Code for Round Robin Station 3
Sample Light/Sound Sensor Code
This code will print out a reading from our sensor if plugged into Analog 0
*/

int sensorPin = 0;   //holds our sound sensor location, or light sensor Analog 0
int reading = 0;  //holds our reading from our sensor


void setup() 
{
    Serial.begin(9600); //starts our serial monitor with 9600 refresh rate
    pinMode(sensorPin,INPUT); //set sound/light as an input
}

void loop() 
{
    reading = analogRead(sensorPin); //read the potentiometer and save value
    Serial.print("The sensor reads: "); //print label
    Serial.println(reading); //print value of potentiometer
    delay(25); //pause for 25ms
}
