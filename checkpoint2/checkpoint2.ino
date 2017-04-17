#include <SevSeg.h>
SevSeg sevseg; 
void setup() {
   Serial.begin(9600);
   Serial.println("Group:20");
   Serial.println("04050192");
   Serial.println("04050386");

  byte numDigits =4;
   byte digitPins[] = {13,10,9,2};
   byte segmentPins[] = {12,8,4,6,7,11,3,5};
   sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins);
}
void loop() 
{
 
  int a,n=0,x;
    if (Serial.available()) 
    { 
         a = Serial.parseInt();
         if(0<=a && a<=9999)
          {
            Serial.println(a);
            sevseg.setNumber(a);
            sevseg.refreshDisplay();
          }
     
        else 
          {
            Serial.println("range error");
          }
      }   
     else
    sevseg.refreshDisplay();
   
   

}


