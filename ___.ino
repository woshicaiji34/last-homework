#include<Arduino.h>
class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void c_space();
    void w_space();
  private:
    int _pin;
};

Morse::Morse(int pin)
{
  pinMode(pin,OUTPUT);_pin=pin;
}
void Morse::dot()
{
  digitalWrite(_pin,HIGH);    delay(250);
  digitalWrite(_pin,LOW);   delay(250);
}
void Morse::dash()
{
  digitalWrite(_pin,HIGH);  delay(1000);
  digitalWrite(_pin,LOW);     delay(250);
}
void Morse::c_space()
{
  digitalWrite(_pin,LOW);     delay(750);
} 
void Morse::w_space()
{
  digitalWrite(_pin,LOW);     delay(1750);
} 


char incomingByte=0;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
    if ( Serial.available()>0 )
   {
      incomingByte = Serial.read();
      switch(incomingByte)
      {
      case 'a':Serial.print("The morse is ");
               Serial.println("*-"); morse.dot(); morse.dash(); morse.c_space(); 
               break;
      case 'b':Serial.print("The morse is ");
               Serial.println("-***");morse.dash(); morse.dot(); morse.dot(); morse.dot(); morse.c_space();
               break;
      case 'c':Serial.print("The morse is ");
               Serial.println("-*-*");morse.dash(); morse.dot(); morse.dash(); morse.dot(); morse.c_space();
               break;
      case 'd':Serial.print("The morse is ");
               Serial.println("-**");morse.dash(); morse.dot(); morse.dot(); morse.c_space();
               break;
      case 'e':Serial.print("The morse is ");
               Serial.println("*");morse.dash(); morse.dot(); 
               break;
      case 'f':Serial.print("The morse is ");
               Serial.println("**-*");morse.dot(); morse.dot(); morse.dash(); morse.dot(); morse.c_space();
               break;
      case 'g':Serial.print("The morse is ");
               Serial.println("--*"); morse.dash(); morse.dash(); morse.dot(); morse.c_space();
               break;
      case 'h':Serial.print("The morse is ");
               Serial.println("****"); morse.dash(); morse.dash(); morse.dash(); morse.dash(); morse.c_space();
               break;
      case 'i':Serial.print("The morse is ");
               Serial.println("**");morse.dash(); morse.dash(); morse.c_space();
               break;
      case 'j':Serial.print("The morse is ");
               Serial.println("*---"); morse.dash(); morse.dot(); morse.dot(); morse.dot(); morse.c_space();
               break;
      case 'k':Serial.print("The morse is ");
               Serial.println("-*-");morse.dash(); morse.dot(); morse.dash(); morse.c_space();
               break;
      case 'l':Serial.print("The morse is ");
               Serial.println("**-*"); morse.dot(); morse.dash(); morse.dot(); morse.dot(); morse.c_space();
               break;
      case 'm':Serial.print("The morse is ");
               Serial.println("--"); morse.dot(); morse.dot(); morse.c_space();
               break;
      case 'n':Serial.print("The morse is ");
               Serial.println("-*");morse.dash(); morse.dot(); morse.c_space();
               break;
      case 'o':Serial.print("The morse is ");
               Serial.println("---");morse.dash(); morse.dash(); morse.dash(); morse.c_space();
               break;
      case 'p':Serial.print("The morse is ");
               Serial.println("*--*"); morse.dot(); morse.dash(); morse.dash(); morse.dot(); morse.c_space();
               break;
      case 'q':Serial.print("The morse is ");
               Serial.println("--*-");morse.dash(); morse.dash(); morse.dot(); morse.dash(); morse.c_space();
               break;
      case 'r':Serial.print("The morse is ");
               Serial.println("*-*");morse.dot(); morse.dash(); morse.dot(); morse.c_space();
               break;
      case 's':Serial.print("The morse is ");
               Serial.println("***");  morse.dot(); morse.dot(); morse.dot(); morse.c_space();
               break;
      case 't':Serial.print("The morse is ");
               Serial.println("-");  morse.dash(); morse.c_space();
               break;
      case 'u':Serial.print("The morse is ");
               Serial.println("**-");morse.dot(); morse.dot(); morse.dash(); morse.c_space();
               break;
      case 'v':Serial.print("The morse is ");
               Serial.println("***-");morse.dot(); morse.dot(); morse.dot(); morse.dash(); morse.c_space();
               break;
      case 'w':Serial.print("The morse is ");
               Serial.println("*--");morse.dot(); morse.dash(); morse.dash(); morse.c_space();
               break;
      case 'x':Serial.print("The morse is ");
               Serial.println("-**-");morse.dash(); morse.dot(); morse.dot(); morse.dash(); morse.c_space();
               break;
      case 'y':Serial.print("The morse is ");
               Serial.println("-*--");morse.dash(); morse.dot(); morse.dash(); morse.dash(); morse.c_space();
               break;
      case 'z':Serial.print("The morse is ");
               Serial.println("--**");morse.dash(); morse.dash(); morse.dot(); morse.dot(); morse.c_space();
               break; 
      case ' ':morse.w_space();
      }  
    }
}
