#include <Music.h>
#include <Servo.h>


    // the number of the LED pin


Servo servo1;

void setup()
{ pinMode(13, OUTPUT); 
	music.init();
 servo1.attach(9); }

void loop()
{ digitalWrite(13, HIGH); 
  delay(500);              // Wait for one second
  
  digitalWrite(13, LOW);    // Turn off the LED
  
  delay(400);  
  
  int position; 

  servo1.write(90); 
  delay(1000);         // Pause to get it time to move

  servo1.write(0); }

