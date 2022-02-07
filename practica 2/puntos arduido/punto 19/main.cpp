// C++ code
//
#define LED 12
const int val=A3;
void setup()
{
  pinMode(LED, OUTPUT);
  
}

void loop()
{
  analogWrite(LED,analogRead(val)/4);
}
