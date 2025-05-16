#include <Arduboy2.h>
Arduboy2 arduboy;

int counter;

void setup() {
  arduboy.begin();
  arduboy.clear();
  counter = 0;
}

void loop() {
  arduboy.clear();
  if ( arduboy.pressed(UP_BUTTON) ) {
    counter = counter + 1;
  }
  if ( arduboy.pressed(DOWN_BUTTON) ) {
    counter = counter - 1;
  }
  if ( counter == 36 ) {
    arduboy.print("Not quite 42");
  }
  if ( counter == 42 ) {
    arduboy.print("Something, something meaning of life...");
  }
  arduboy.print(counter);
  arduboy.display();
}
