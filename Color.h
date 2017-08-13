/*
Joe Mulhern 2017
PWM colors for strips. Make with RGB LEDs
*/
#ifndef Color_h
#define Color_h

#include "Arduino.h"

class Color {
  public:
    Color(int redPIN, int greenPIN, int bluePIN);
    void red();
    void green();
    void blue();

    void orange();
    void yellow();
    void indigo();
    void cyan();
    void magenta();
    void white();
    void off();
    void pink();
    void rainbow();
  private:
    int _redPIN, _greenPIN, _bluePIN;

};

#endif
