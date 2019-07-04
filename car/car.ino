void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  Serial.begin(9600);
}
int com;
void loop()
{
  if(Serial.available()>0){
    com=Serial.read();
    switch(com){
      case 'f':forward();break;
      case 's':stop();break;
      case 'b':backward();break;
      case 'l':left();break;
      case 'r':right();break;
      default:break;
    }
  }
}
void forward()
{
    digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
}
void backward()
{
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
}
void left(){
      digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  
}
void right(){
      digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(12,HIGH);
}
void stop(){
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  
}
