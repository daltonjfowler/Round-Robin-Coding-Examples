/*
Sample Code for Round Robin Station 4
Sample While Loop Code
This code will count to 5 in Serial Monitor when button is pressed
*/

int buttonPin = 2; //Holds a button plugged into digital 2
int buttonState = 0; //Holds if our button is pressed or not
int count = 0; //hold our count variable

void setup() 
{
    Serial.begin(9600); //starts our serial monitor with 9600 refresh rate
    pinMode(buttonPin,INPUT); //set button as an input
}

void loop() 
{
  buttonState = digitalRead(buttonPin); //read if button is pressed
  if (buttonState == 1) //if button is pressed
    {
      do //always run once
      {
        count = count + 1; //add one to our counter
        Serial.println(count); //print counter
      } while (count < 5); //is it less than 5? then repeat!
      
      count = 0; //reset value of count
      delay(250); //delay for reaction time
    }
}
