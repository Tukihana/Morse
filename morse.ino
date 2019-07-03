#ifndef Morse_h
#define Morse_h
#include "Morse.h"
#include "Arduino.h"
Morse morse(13);
int in = 0;   
void setup() {
    Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
}

void loop(){
  if (Serial.available() > 0) {
    char a[6];

    int i=0;
                
in = Serial.read();
switch(in)
{
  case 'a':*a='*-';morse.dot();morse.dash();break;
  case 'b':*a='-***';morse.dash();morse.dot();morse.dot();morse.dot();break;
  case 'c':*a='-*-*'; morse.dash();morse.dot(); morse.dash();morse.dot();break;
  case 'd':*a='-**'; morse.dash();morse.dot();morse.dot();break;
  case 'e':*a='*';morse.dot();break;
  case 'f':*a='**-*';morse.dot();morse.dot();morse.dash(); morse.dot();break;
  case 'g':*a='--*';morse.dash();morse.dash();  morse.dot();break;
  case 'h':*a='****';morse.dot();morse.dot();morse.dot();morse.dot();break;
  case 'i':*a='**';morse.dot();morse.dot();break;
  case 'j':*a='*---';morse.dot();morse.dash();morse.dash();morse.dash();break;
  case 'k':*a='-*-';morse.dash(); morse.dot();morse.dash(); break;
  case 'l':*a='*-**';morse.dot(); morse.dash();morse.dot();morse.dot();break;
  case 'm':*a='--';morse.dash();morse.dash();break;
  case 'n':*a='-*'; morse.dash();morse.dot();break;
  case 'o':*a='---';morse.dash();morse.dash();morse.dash();break;
  case 'p':*a='*--*';morse.dot(); morse.dash();morse.dash(); morse.dot();break;
  case 'q':*a='--*-'; morse.dash();morse.dash(); morse.dot();morse.dash(); break;
  case 'r':*a='*-*';morse.dot();morse.dash(); morse.dot();break;
  case 's':*a='***';morse.dot();morse.dot();morse.dot();break;
  case 't':*a='-';morse.dash();break;
  case 'u':*a='**-';morse.dot();morse.dot();morse.dash();break;
  case 'v':*a='***-';morse.dot();morse.dot();morse.dot();morse.dash();break;
  case 'w':*a='*--';morse.dot();morse.dash();morse.dash();break;
  case 'x':*a='-**-'; morse.dash();morse.dot();morse.dot();morse.dash();break;
  case 'y':*a='-*--'; morse.dash();morse.dot();morse.dash();morse.dash();break;
  case 'z':*a='--**'; morse.dash();morse.dash(); morse.dot();morse.dot();break;
  
} ;morse.c_space();
    if (in==' ')
    {
  morse.w_space();
    }                

  }
}

#endif
