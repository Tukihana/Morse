void dot()
{
  digitalWrite(13,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  delay(250);
}

void dash()
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(250);
}

void c_space()
{
  digitalWrite(13,LOW);
  delay(750);
}
void w_space()
{
  digitalWrite(13,LOW);
  delay(250*7);
}
int in = 0;   
void setup() {
    Serial.begin(9600); 
}
void loop(){
  if (Serial.available() > 0) {
    char a[6];
    int i=0;
in = Serial.read();
switch(in)
{
  case 'a':*a='*-';dot();dash();break;
  case 'b':*a='-***';dash();dot();dot();dot();break;
  case 'c':*a='-*-*'; dash();dot(); dash();dot();break;
  case 'd':*a='-**'; dash();dot();dot();break;
  case 'e':*a='*';dot();break;
  case 'f':*a='**-*';dot();dot();dash(); dot();break;
  case 'g':*a='--*';dash();dash();dot();break;
  case 'h':*a='****';dot();dot();dot();dot();break;
  case 'i':*a='**';dot();dot();break;
  case 'j':*a='*---';dot();dash();dash();dash();break;
  case 'k':*a='-*-';dash(); dot();dash(); break;
  case 'l':*a='*-**';dot(); dash();dot();dot();break;
  case 'm':*a='--';dash();dash();break;
  case 'n':*a='-*'; dash();dot();break;
  case 'o':*a='---';dash();dash();dash();break;
  case 'p':*a='*--*';dot(); dash();dash(); dot();break;
  case 'q':*a='--*-'; dash();dash(); dot();dash(); break;
  case 'r':*a='*-*';dot();dash(); dot();break;
  case 's':*a='***';dot();dot();dot();break;
  case 't':*a='-';dash();break;
  case 'u':*a='**-';dot();dot();dash();break;
  case 'v':*a='***-';dot();dot();dot();dash();break;
  case 'w':*a='*--';dot();dash();dash();break;
  case 'x':*a='-**-'; dash();dot();dot();dash();break;
  case 'y':*a='-*--'; dash();dot();dash();dash();break;
  case 'z':*a='--**'; dash();dash(); dot();dot();break;
  
} ;c_space();
    if (in==' ')
    {
  w_space();
    }                
  }
}
