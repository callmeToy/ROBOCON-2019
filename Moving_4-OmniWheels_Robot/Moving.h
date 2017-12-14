#ifndef __MOVING_H
#define __MOVING_H

#include "Arduino.h"
//#include "cstdint.h"
#include "string.h"
#include "stdio.h"

class MOTOR {
  public:
    uint8_t State();    //  Declare function to return direction state of motor.
    uint8_t Pulse();    //  Declare function to return pulse value of motor.

    void setDirection(bool var);    //  Function to set default direction ("true" is forward)
    void setPin(uint8_t pwmPin, uint8_t dirPin);  //  Funstion to set PWM pin and Direction pin of motor.
    void setPulse(uint8_t maxPulse, uint8_t deltaPulse, uint32_t deltaTime);
    void IncreasePulse();  //  Function to increase pulse of motor.
    void DecreasePulse();  //  Function to decrease pulse of motor.
    void Stop();   //  Function to stop motor.
    void Forward();  //  Function to get motor rotating forward.
    void Backward(); //  Function to get motor rotating backward.
    boolean isForward();  //  if motor rotates forward, funtion will return "true".
    boolean isBackward(); //  if motor rotates backward, function will return "true".

  private:  //  Declare private variables in class.
    uint8_t _pwmPin;  //  PWM-pin.
    uint8_t _dirPin;  //  Direction-pin.

    uint8_t _State;   //  Actual state of motor.
    uint8_t _isForward;   //  State is forward.
    uint8_t _isBackward;  //  State is backward.

    uint8_t _Pulse;
    uint8_t _maxPulse;
    uint8_t _deltaPulse;

    uint32_t _previousTime;
    uint32_t _deltaTime;
    const uint32_t _deltaTimeStop = 2;
};

#endif
