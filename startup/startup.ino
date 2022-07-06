
#include <Keyboard.h>

bool pushed = false;


void setup() {
  // put your setup code here, to run once:

  Keyboard.begin();
  Mouse.begin();

}

void loop() {
  // put your main code here, to run repeatedly:

  if(pushed == false) {

    //Wait 1 minute for computer to boot up
    delay(35000);
     Keyboard.press(KEY_RETURN);
    loginToComputer();

    openMSI();

    pushed = true;
  }

}


void loginToComputer() {

    //Press enter
    Keyboard.press(KEY_RETURN);
    delay(100);
    Keyboard.releaseAll();
    
    
    //Enter Password
    Keyboard.press('1');
    delay(100);
    Keyboard.releaseAll();
    
    Keyboard.press('2');
    delay(100);
    Keyboard.releaseAll();
    
    Keyboard.press('3');
    delay(100);
    Keyboard.releaseAll();
    
    Keyboard.press('4');
    delay(100);
    Keyboard.releaseAll();
    
    //Submit Password
    
     Keyboard.press(KEY_RETURN);
    delay(100);
    Keyboard.releaseAll();
}


void openMSI() {

  delay(100);
  Mouse.move(1000, 500, 0);

  delay(100);
  Mouse.press();

  delay(100);
  Mouse.release();

  delay(200);


}