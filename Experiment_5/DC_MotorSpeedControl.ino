/***************************************************
***  AIM : to interface DC motor with Atmega328 uC 
***			and control the speed using PWM signal
***	port maping
*** motor -> PORTB^3 (pin11)
***************************************************/
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  analogWrite(11,255);		//run motor with full speed 
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  analogWrite(11,128);		//run motor with aprox. half speed 
  delay(1000); // Wait for 1000 millisecond(s)
}