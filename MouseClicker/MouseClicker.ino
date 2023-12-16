// Digispark Mouse Clicker

#include <DigiMouse.h>
unsigned int DownTime = 10;   // Time, in MS, that the button is pressed
unsigned int UpTime = 80;     // Time, in MS, that the button is released


void setup() {  
  pinMode(1, OUTPUT);         // LED
  pinMode(0, INPUT_PULLUP);   // Inhibit switch
  DigiMouse.begin();
}
void loop() {

  // Check to see if inhibit is selected
  int state = digitalRead(0);  
  if(state==HIGH){
    digitalWrite(1, HIGH);
    DigiMouse.setButtons(1 << 0);  
    DigiMouse.delay(10);
    DigiMouse.setButtons(0);  
    digitalWrite(1, LOW);
    DigiMouse.delay(80);
  } else {
    DigiMouse.delay(10);
  }
  
  
  

}