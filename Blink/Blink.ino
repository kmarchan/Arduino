/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
const int red = 11;
const int blue = 10;
const int yellow = 9;

void setup() 
{
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void fade(int pin)
{
  int i = 1;
  while( i <= 255)
  {
    analogWrite(pin, i);
    delay(5);
    i++;
  }
  i =  245;
  while(i >= 0)
  {
    analogWrite(pin, i);
    delay(5);
    i--;
  }
}

void blink(const byte which)
{
digitalWrite(which, HIGH);
delay(10);
digitalWrite(which, LOW);
delay(10);
}
void loop()
{
Serial.println(F("Fading RED."));
blink(red);
fade(red);
blink(red);
//Serial.println(F("Fading BLUE."));
blink(blue);
fade(blue);
blink(blue);
//Serial.println(F("Fading YELLOW."));
blink(yellow);
fade(yellow);
blink(yellow);
blink (red);
blink (blue);
blink (yellow);
}
