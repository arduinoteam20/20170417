void setup() {
   pinMode(13,OUTPUT);
   Serial.begin(9600);
   Serial.println("Group:20");
   Serial.println("04050192");
   Serial.println("04050386");
}
void loop()
{
  char val;
  if(Serial.available())
  {
    val = Serial.read(); 
    switch(val)
    {
     
      case'0':
       digitalWrite(13,LOW);
       Serial.println("LED OFF");
       break;
        case'1':
        digitalWrite(13,HIGH);
       Serial.println("LED ON");
       break;
       default:
       digitalWrite(13,LOW);
       Serial.println("error");
      
    }
  }
}
