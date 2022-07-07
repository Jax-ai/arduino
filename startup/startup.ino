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

     Keyboard.releaseAll();

    //Wait 1 minute for computer to boot up
    delay(35000);

    //Login     
    loginToComputer();

    delay(15000);

    //Open the GPU Software and apply tune
    openMSI();

    //Open Miner
    openMinder();



    pushed = true;
  }

}


void loginToComputer() {


    //Press enter
    Keyboard.press(KEY_UP_ARROW);
    delay(500);
    Keyboard.releaseAll();
    
    
    //Enter Password
    Keyboard.print("1234");
    delay(300);
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
 Keyboard.releaseAll();
 delay(100);
      Keyboard.print("run");
  delay(500);
  Keyboard.releaseAll();
    delay(500);
 Keyboard.press(KEY_RETURN);
  delay(100);
   Keyboard.releaseAll();
   delay(100);
  Keyboard.print("C:\\Program Files (x86)\\MSI Afterburner\\MSIAfterburner.exe");
delay(500);
 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(500);

  Keyboard.press(KEY_TAB);
 Keyboard.releaseAll();
 delay(200);
   Keyboard.press(KEY_TAB);
 Keyboard.releaseAll();
 delay(200);

 Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(5000);

  Keyboard.press('a');
 delay(100);

 Keyboard.releaseAll();


}

void openMinder() {
  //Open directory  
  Keyboard.press(KEY_LEFT_GUI);
  delay(100);
 Keyboard.releaseAll();
 delay(100);
      Keyboard.print("run");
  delay(100);
  Keyboard.releaseAll();
 Keyboard.press(KEY_RETURN);
  delay(100);
   Keyboard.releaseAll();
   delay(100);


 delay(100);
  Keyboard.print("C:\\Users\\Stream-Pc\\Documents\\Miner\\gminer_2_70_windows64\\mine_ravencoin");

  Keyboard.press(KEY_RETURN);
 Keyboard.releaseAll();
 delay(500);
}
