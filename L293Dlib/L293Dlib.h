#ifndef L293Dlib_h
#define L293Dlib_h

#include "Arduino.h"

class L293Dlib {
  public:
    L293Dlib(int En,int IN13,int IN24);
    void motorSpeed(int num);
    void forward();
    void backward();
    void stopMotor();
    
  private:
    int _En;
    int _IN13;
    int _IN24;
};

#endif