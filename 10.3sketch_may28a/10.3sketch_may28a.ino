#include <Stepper.h>
Stepper myStepper(100,8,10,9,11);

void setup()
{
  myStepper.setSpeed(180);
}
void loop()
{
  myStepper.step(512);
  delay(2000);
}