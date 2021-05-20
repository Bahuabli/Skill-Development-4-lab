/***********************************************
**** AIM: interfacing of temperature sensor TMP36
****		with uC Atmega328 and display the value 
****		of temperature on serial monitor
*************************************************/

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //TMP36 is connected on A0 pin
  int val = analogRead(A0);  //Read temp sensor
  float temp = map(val,20,358,-40,125); //map ADC value to actule temperature
  Serial.print(temp); //display temp
  Serial.println("*C");
  delay(100);
  
}
