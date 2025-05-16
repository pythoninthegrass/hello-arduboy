#include <Arduboy2.h>
Arduboy2 arduboy;

int counter;

bool upButtonPressed = false;
bool downButtonPressed = false;
unsigned long lastRepeatTime = 0;
const unsigned long repeatDelay = 300;  // initial delay before repeating
const unsigned long repeatRate = 150;   // how fast to repeat when holding button

void setup() {
  arduboy.begin();
  arduboy.clear();
  arduboy.setTextWrap(true);
  counter = 0;
}

void loop() {
  arduboy.clear();

  unsigned long currentTime = millis();

  // increment once per button press
  if ( arduboy.pressed(UP_BUTTON) ) {
    if (!upButtonPressed || (currentTime - lastRepeatTime >= repeatRate)) {
      counter = counter + 1;
      upButtonPressed = true;
      lastRepeatTime = currentTime;
    }
  } else {
    upButtonPressed = false;
  }

  // decrement once per button press
  if ( arduboy.pressed(DOWN_BUTTON) ) {
    if (!downButtonPressed || (currentTime - lastRepeatTime >= repeatRate)) {
      counter = counter - 1;
      downButtonPressed = true;
      lastRepeatTime = currentTime;
    } else {
      downButtonPressed = false;
    }
  }
  
  if (counter == 36) {
    arduboy.print("Not quite 42");
  } else if (counter == 42) {
    arduboy.print("Something, something meaning of life...");
  } else {
    arduboy.print(counter);
  }

  arduboy.display();
  delay(50);
}
