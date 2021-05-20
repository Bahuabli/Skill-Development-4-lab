/************************************************
*** AIM : TO read analog voltage from pin A0 and 
*** display the digital on serial monitor
**************************************************/
void setup()
{
 Serial.begin(9600); //config the serial port
}

void loop()
{
  int val = analogRead(A0); //read the analog voltage
  Serial.println(val);		//selt the valus to serial port 
  delay(100);
}
