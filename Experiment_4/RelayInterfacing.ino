/*************************************************
***	AIM: Interfacing of relay with Atmega328 uC
*** port maping
*** Relay	-> PORTB^5 (pin13)
*************************************************/
void setup()
{
	DDRB = 0x20;	//config the relay pin as output pin
}

void loop()
{
  PORTB = 0x20;		//turn ON the relay
  delay(1000); // Wait for 1000 millisecond(s)

  PORTB = 0x00;		//turn OFF the relay
  delay(1000); // Wait for 1000 millisecond(s)
}