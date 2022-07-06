
#include <Keyboard.h>;

bool pushed = false;


void setup() {
  // put your setup code here, to run once:

  Keyboard.begin();

}

void loop() {
  // put your main code here, to run repeatedly:

  if(pushed == false) {
    delay(1000);
    Keyboard.press('n');
    delay(100);
    Keyboard.releaseAll();

    pushed = true;
  }

}
