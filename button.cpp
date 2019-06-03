#include "button.h"

  /* Constructor - sets button pin number, default values for private class variables (is_pressed_) */
Button::Button(int button_pin) {
  is_pressed_ = false;
  button_pin_ = button_pin;
}

// add setup and loop
void Button::setup() {
  Serial.begin(9600);
  pinMode(button_pin_, INPUT);
}

void Button::loop() {
  int input_val = digitalRead(button_pin_);
  if (input_val == 1) { // if button is pressed
    is_pressed_ = true; // change the state of this button
  } else {
    is_pressed_ = false;
  }
}

/* Getter for private variable is_pressed_ */
bool Button::isPressed() {
  return is_pressed_;
}
