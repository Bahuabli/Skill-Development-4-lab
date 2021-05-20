
/***************************
***  port maping 
*** switch -> PORTB^0 (pin 8)
*** LED    -> PORTB^1 (pin 9)
*****************************/

void setup()
{

  DDRB =  0x02; //0000 0010 making switch pin as input
  				//and LED pin as output
  PORTB = 0x01; //init the pullup resistor on switch 
 
}

void loop()
{
  int val = PINB & 0x01;
  
  if(val == 0)
  {
    PORTB = 0x03;	//LED ON and pullup resistor enable
  }
  else
  {
    PORTB = 0x01;	//LED OFF and pullup resistor enable
  }
}

