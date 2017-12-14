#include "Moving.h"
#include "Arduino.h"
//#include "cstdint.h"
#include "inttypes.h"

void MOTOR::setPin(uint8_t pwmPin, uint8_t dirPin) {
  _pwmPin = pwmPin;
  _dirPin = dirPin;
  pinMode(_pwmPin, OUTPUT);
  pinMode(_dirPin, OUTPUT);
}
/******************************************************************************************************/
void MOTOR::setPulse(uint8_t maxPulse, uint8_t deltaPulse, uint32_t deltaTime) {
  _maxPulse = maxPulse;
  _deltaPulse = deltaPulse;
  _deltaTime = deltaTime;
  _previousTime = millis();
//  _Pulse = 0;
}
/******************************************************************************************************/
void MOTOR::setDirection(bool var) {
  if (var == true) {
    _isForward = HIGH;
    _isBackward = LOW;
  }
  else {
    _isForward = LOW;
    _isBackward = HIGH;
  }
}
/******************************************************************************************************/
void MOTOR::IncreasePulse() {
  if (millis() - _previousTime >= _deltaTime) {
    _previousTime = millis();
    if (_Pulse > _maxPulse) {
      _Pulse -= _deltaPulse;
    }
    else if (_Pulse < _maxPulse) {
      _Pulse += _deltaPulse;
    }
    else
      return;
    analogWrite(_pwmPin, _Pulse);
  }
  else
    return;
}
/******************************************************************************************************/
void MOTOR::DecreasePulse() {
  if (millis() - _previousTime >= _deltaTime) {
    _previousTime = millis();
    if (_Pulse < 0) {
      _Pulse = 0;
    }
    else if (_Pulse > 0) {
      _Pulse -= _deltaPulse;
    }
    else
      return;
    analogWrite(_pwmPin, _Pulse);
  }
  else
    return;
}
/*******************************************************************************************************/
void MOTOR::Forward() {
  _State = _isForward;
  digitalWrite(_dirPin, _State);
}
/*******************************************************************************************************/
void MOTOR::Backward() {
  _State = _isBackward;
  digitalWrite(_dirPin, _State);
}
/*******************************************************************************************************/
void MOTOR::Stop() {
  if (millis() - _previousTime > _deltaTimeStop) {
    if (_Pulse > 0) {
      _Pulse -= _deltaPulse * 5;
      if (_Pulse < 0 )
      {
        _Pulse = 0;
      }
      analogWrite(_pwmPin, _Pulse);
    }
    else
      return;
  }
  else
    return;
}
/*******************************************************************************************************/
uint8_t MOTOR::Pulse() {
  return _Pulse;
}
/*******************************************************************************************************/
uint8_t MOTOR::State() {
  return _State;
}
/*******************************************************************************************************/
boolean MOTOR::isForward() {
  if (State() == _isForward)
    return true;
  else
    return false;
}
/*******************************************************************************************************/
boolean MOTOR::isBackward() {
  if (State() == _isBackward)
    return true;
  else
    return false;
}
