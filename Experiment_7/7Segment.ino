/*******************************************************
*** AIM: intarface 7 segment display with Atmega328 uC
*** note : 7seg display is connected on PORTD 
*********************************************************/
int val[] = {	0xEE,	//0
				0x82,	//1
				0xDC,	//2
				0xD6,	//3 
				0xB2,	//4
				0x76,	//5
				0x7E,	//6
				0xC2,	//7
				0xFE,	//8
 				0xF6};	//9

void setup()
{
 DDRD = 0xFE;  //config 7seg pins as output pins
  
}

void loop()
{
  for(int i =0;i<10;i++)
  {
  	PORTD = val[i]; //display count on 7seg display
  	delay(1000); // Wait for 1000 millisecond(s)
  }
}