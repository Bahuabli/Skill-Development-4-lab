/********************************************
***	AIM : Interfacing of DC motor with Atmega320 uC for 
***			direction control using IC L293D
*** port maping
*** 1A (L293D i/p)		-> PORTB^1 (pin9) 
*** 2A (L293D i/p)		-> PORTB^0 (pin8)
*** 1,2EN (L293D i/p)	-> 5V
**********************************************/
void setup()
{
  DDRB = 0x03; //config 1A and 2A pins as output
}

void loop()
{
  PORTB = 0x02; //run motor in Clock wise direction
  delay(2000); // Wait for 2 sec
  PORTB = 0x01; //run motor in anti-Clock wise direction
  delay(2000); // Wait for 2 sec
}