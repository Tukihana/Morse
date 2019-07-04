void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}
int a;
void loop()
{if (Serial.available()>0){
  a=Serial.read();
  a-='0';
  
digitalWrite(6,LOW);
  delay(10);

    setpin(2,a&1);
      setpin(3,(a>>1)&1);
      setpin(4,(a>>2)&1);
      setpin(5,(a>>3)&1);
  delay(10);
  digitalWrite(6,HIGH);
  delay(10);

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
