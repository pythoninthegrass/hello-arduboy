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
  counter = counter + 1;
  arduboy.print(counter);
  arduboy.display();
}
