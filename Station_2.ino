/*
Sample Code for Round Robin Station 2
Sample Potentiometer Code
This code will print out a reading from our potentiometer if plugged into Analog 2
*/

int twistPin = 2; //Holds our potentiometer in Analog 2
int twist = 0; //holds the value of our potentiometer reading

void setup() 
{
    Serial.begin(9600); //starts our serial monitor with 9600 refresh rate
    pinMode(twistPin,INPUT); //set potentiometer as an input
}

void loop() 
{
    twist = analogRead(twistPin); //read the potentiometer and save value
    Serial.print("The Potentiometer reads: "); //print label
    Serial.println(twist); //print value of potentiometer
    delay(25); //pause for 25ms
}
