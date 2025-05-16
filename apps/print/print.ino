#include <Arduboy2.h>
Arduboy2 arduboy;

void setup() {
  // turn on
  arduboy.begin();
  // erase screen
  arduboy.clear();
  // print string
  arduboy.print("Hello");
  // refresh display to show string
  arduboy.display();
}

void loop() {
  // put your main code here, to run repeatedly:

}
