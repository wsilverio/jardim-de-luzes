const int ShiftPWM_latchPin = 10;

const bool ShiftPWM_invertOutputs = false;

const bool ShiftPWM_balanceLoad = false;

#include <ShiftPWM.h>

unsigned char maxBrightness = 255;
unsigned char pwmFrequency = 75;
int numRegisters = 3;
int numRGBleds = numRegisters * 8 / 3;

void setup() {
  Serial.begin(9600);

  ShiftPWM.SetAmountOfRegisters(numRegisters);

  ShiftPWM.SetPinGrouping(1);

  ShiftPWM.Start(pwmFrequency, maxBrightness);
}

void loop()
{
  rgbLedRainbow(numRGBleds, 10, 3, numRegisters * 8 / 3 * 4);
}

void rgbLedRainbow(int numRGBLeds, int delayVal, int numCycles, int rainbowWidth) {
  ShiftPWM.SetAll(0);
  for (int cycle = 0; cycle < numCycles; cycle++) {
    for (int colorshift = 0; colorshift < 360; colorshift++) {
      for (int led = 0; led < numRGBLeds; led++) {
        int hue = ((led) * 360 / (rainbowWidth - 1) + colorshift) % 360;
        ShiftPWM.SetHSV(led, hue, 255, 255);
      }
      delay(delayVal);
    }
  }
}
