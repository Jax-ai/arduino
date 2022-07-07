
#include <Keyboard.h>
#include <Mouse.h>

bool pushed = false;


void setup() {
  // put your setup code here, to run once:

  Keyboard.begin();
  Mouse.begin();

}

void loop() {


  if(pushed == false) {

    //Wait 1 minute for computer to boot up
    delay(35000);

    //Login     
    loginToComputer();

    //Open the GPU Software and apply tune
    openMSI();

    //Open Miner
    openMinder();



    pushed = true;
  }

}


void loginToComputer() {

    Keyboard.press(KEY_RETURN);

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

  //Open directory  
  Keyboard.press(KEY_LEFT_GUI);
  delay(100);
  Keyboard.press('R');
  delay(100);
  Keyboard.releaseAll();

  delay(100);
  Keyboard.print("C:\\Program Files (x86)\\MSI Afterburner\\MSIAfterburner.exe");

  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(100);

  Keyboard.press('A');
  Keyboard.releaseAll();
  delay(100);




}

void openMinder() {

  //Open directory  
  Keyboard.press(KEY_LEFT_GUI);
  delay(100);
  Keyboard.press('R');
  delay(100);
  Keyboard.releaseAll();

  Keyboard.press(KEY_RETURN);
  delay(100);

 Keyboard.releaseAll();
  //Tab to the file

  //Press enter
}

void moveMouseToCorner() {
  
  delay(100);
  Mouse.move(127, 127);
  delay(100);
  Mouse.move(127, 127);
  delay(100);
  Mouse.move(127, 127);
  delay(100);
  Mouse.move(127, 127);
  delay(100);
  Mouse.move(127, 127);
  delay(100);
  Mouse.move(127, 127);
  delay(100);
  Mouse.move(127, 127);
  delay(100);
  Mouse.move(127, 127);
  delay(100);
  Mouse.move(127, 127);
  delay(100);
  Mouse.move(127, 127);
  delay(100);
  Mouse.move(127, 127);
  delay(100);
  Mouse.move(127, 127);
  delay(100);
  Mouse.move(127, 127);
  delay(100);
  Mouse.move(127, 127);
  delay(100);
  Mouse.move(127, 127);
  delay(100);
  Mouse.move(127, 127);
  
}
