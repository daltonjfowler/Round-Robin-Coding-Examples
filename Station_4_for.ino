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
      for(count=0; count<5;count++) //create variable i=0, while i is less than 5 repeat the following. Add 1 to i each time it repeats
      {
        Serial.println(count); //print value of i for each time it loops
      }
      count = 0; //reset value of count
      
      //alternatively we can also create a local variable!
      
      for(int i=0; i<5;i++) //create variable i=0, while i is less than 5 repeat the following. Add 1 to i each time it repeats
      {
        Serial.println(i); //print value of i for each time it loops
      }
      //we don't have to reset i, it's delcared new each time we re-enter the for loop!
      delay(250); //human reaction time
    }
}
