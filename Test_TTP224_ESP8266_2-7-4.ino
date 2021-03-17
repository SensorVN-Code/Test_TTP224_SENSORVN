/*
  Created by SENSORVN.COM, February 18, 2021.
  Wiring
  VCC -> 3.3V
  GND -> GND
  OUT1 -> GPIO4
  OUT2 -> GPIO14
  OUT3 -> GPIO12
  OUT4 -> GPIO13
*/
#define OUT1  4
#define OUT2  14
#define OUT3  12
#define OUT4  13

void setup()
{
  pinMode(OUT1,INPUT_PULLUP);
  pinMode(OUT2,INPUT_PULLUP);
  pinMode(OUT3,INPUT_PULLUP);
  pinMode(OUT4,INPUT_PULLUP);
  Serial.begin(115200);
}

void loop()
{
  if(digitalRead(OUT1)==HIGH)
  {
    Serial.println(1);
    delay(300);
  }
  if(digitalRead(OUT2)==HIGH)
  {
    Serial.println(2);
    delay(300);
  }
  if(digitalRead(OUT3)==HIGH)
  {
    Serial.println(3);
    delay(300);
  }
  if(digitalRead(OUT4)==HIGH)
  {
    Serial.println(4);
    delay(300);
  }
}
