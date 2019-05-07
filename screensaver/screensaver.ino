

/*
 * Adapted from "Blink,"  The basic Arduino example.  
 * http://www.arduino.cc/en/Tutorial/Blink
 */

#include <MeggyJrSimple.h>;    // Required code, line 1 of 2.

int color;

void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup(); 
  color = 1;
}



void loop()                     // run over and over again
{
  
  for (int i = 0; i<8; i++)
  {
    for (int j = 0; j < 8; j++)
    DrawPx (i, j, color);
    DisplaySlate();
    delay(40);
  }
    if (color > 6)
  {
    color = 1;
  }
  DisplaySlate();
  color++;                    
}
