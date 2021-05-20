/***********************************************************
***** AIM : Blink an LED connected on PORTB^0 (pin8) of Atmega328 IC
***********************************************************/
void setup()
{
  DDRB = 0x01; //config PORTB^0 in as output pin
}

void loop()
{
  PORTB = 0x01; //write logic 1 on PORTB^0 pin
  delay(1000); // Wait for 1000 millisecond(s)
  PORTB = 0x00; //write logic 0 on PORTB^0 pin
  delay(1000); // Wait for 1000 millisecond(s)
}
