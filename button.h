#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h> // so we have access to pinMode, digitWrite, etc.

class Button {
public:
  /* Constructor - sets button pin number, default values for private class variables (is_pressed_) */
  Button(int button_pin);

  // add setup and loop
  void setup();

  void loop();

  /* Getter for private variable is_pressed_ */
  bool isPressed();

private:
  bool is_pressed_; // state of this button
  int button_pin_; // pin button is attached to
};

#endif /* BUTTON_H */
