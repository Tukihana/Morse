void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
  Serial.begin(9600);
}
int p=11,a;
void loop()
{if (Serial.available()>0){

  p=p%4+8;
  a=Serial.read();
  a-='0';
  
digitalWrite(p,LOW);
  delay(10);

    setpin(2,a&1);
      setpin(3,(a>>1)&1);
      setpin(4,(a>>2)&1);
      setpin(5,(a>>3)&1);
  delay(10);
digitalWrite(p,HIGH);
  delay(10);
  p--;

}}
void setpin(int pin,int v)
{
  if (v==0){
  digitalWrite(pin,LOW);
  }
  else{
  digitalWrite(pin,HIGH);
  }
}
