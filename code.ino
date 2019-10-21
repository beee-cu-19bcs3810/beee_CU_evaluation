int x;
void  setup()
(
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  )
 
  void loop()
  (
  r=digitalRead(2);
  if(r==LOW)
  {
    digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(3,LOW);
    delay(1000);
    digitalWrite(3,HIGH);
    delay(1000);
    digitalWrite(3,LOW);
    delay(1000);
  }
  else
  {
    digitalWrite(4,HIGH);
    delay(1000);
  }
    
    