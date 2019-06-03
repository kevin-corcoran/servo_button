//// Include the Servo library
#include <Servo.h> // looks only in computers path. Path added when
#include "button.h" // looks first in current directory for button.h file
//// Declare the Servo pin
int servoPin = 3;
//// Create a servo object
Servo Servo1;

// Create button object attached to pin 2
Button button(2);

void setup() {
//   // We need to attach the servo to the used pin number
  Servo1.attach(servoPin);
  button.setup();
}
//
void loop(){
  button.loop();
  delay(1000);
  if (/* button is pressed */) {
    /* code */
  // Make servo go to 90 degrees
    Servo1.write(90);
  }
}
