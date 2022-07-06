
#include <Keyboard.h>

bool pushed = false;


void setup() {
  // put your setup code here, to run once:

  Keyboard.begin();

}

void loop() {
  // put your main code here, to run repeatedly:

  if(pushed == false) {

    //Wait 1 minute for computer to boot up
    delay(10000);
    Keyboard.press('n');
    delay(100);
    Keyboard.releaseAll();

    pushed = true;
  }

}
