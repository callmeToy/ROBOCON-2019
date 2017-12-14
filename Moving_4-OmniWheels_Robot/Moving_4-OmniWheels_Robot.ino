#include "PS2X_lib.h"
#include "LiquidCrystal.h"
#include "Moving.h"
#include "inttypes.h"
//#include "cstdint.h"

/******************************************************************************************************/

MOTOR motorLT;  //  Declare Left-toward motor.
MOTOR motorRT;  //  Declare Right-toward motor.
MOTOR motorLB;  //  Declare Left-backward motor.
MOTOR motorRB;  //  Declare Right-backward motor.

void moveToward() {   //  Initial function for robot moving toward. Xe tiến về phía trước

  if (motorLT.isBackward() && motorRT.isForward() &&
      motorLB.isBackward() && motorRB.isForward()) {

    motorLT.IncreasePulse();
    motorRT.IncreasePulse();
    motorLB.IncreasePulse();
    motorRB.IncreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Backward();
      motorRT.Forward();
      motorLB.Backward();
      motorRB.Forward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void turnLeftToward() {   //  Initial function for robot turning left toward.

  if (motorLT.isBackward() && motorRT.isForward() &&
      motorLB.isBackward() && motorRB.isForward()) {

    motorLT.DecreasePulse();
    motorRT.IncreasePulse();
    motorLB.DecreasePulse();
    motorRB.IncreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Backward();
      motorRT.Forward();
      motorLB.Backward();
      motorRB.Forward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void turnRightToward() {  //  Initial function for robot turning right toward.
  if (motorLT.isBackward() && motorRT.isForward() &&
      motorLB.isBackward() && motorRB.isForward()) {

    motorLT.IncreasePulse();
    motorRT.DecreasePulse();
    motorLB.IncreasePulse();
    motorRB.DecreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Backward();
      motorRT.Forward();
      motorLB.Backward();
      motorRB.Forward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void moveTowardLeft() { //  Initial function for robot moving left toward.
  if (motorLT.isBackward() && motorRT.isForward() &&
      motorLB.isBackward() && motorRB.isForward()) {

    motorLT.DecreasePulse();
    motorRT.IncreasePulse();
    motorLB.IncreasePulse();
    motorRB.DecreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Backward();
      motorRT.Forward();
      motorLB.Backward();
      motorRB.Forward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void moveTowardRight() {  //  Initial function for robot moving right toward.
  if (motorLT.isBackward() && motorRT.isForward() &&
      motorLB.isBackward() && motorRB.isForward()) {

    motorLT.IncreasePulse();
    motorRT.DecreasePulse();
    motorLB.DecreasePulse();
    motorRB.IncreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Backward();
      motorRT.Forward();
      motorLB.Backward();
      motorRB.Forward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void moveBackward() { //  Initial function for robot moving backward.
  if (motorLT.isForward() && motorRT.isBackward() &&
      motorLB.isForward() && motorRB.isBackward()) {

    motorLT.IncreasePulse();
    motorRT.IncreasePulse();
    motorLB.IncreasePulse();
    motorRB.IncreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Forward();
      motorRT.Backward();
      motorLB.Forward();
      motorRB.Backward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void turnLeftBackward() { //  Initial function for robot turning left backward.
  if (motorLT.isForward() && motorRT.isBackward() &&
      motorLB.isForward() && motorRB.isBackward()) {

    motorLT.IncreasePulse();
    motorRT.DecreasePulse();
    motorLB.IncreasePulse();
    motorRB.DecreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Forward();
      motorRT.Backward();
      motorLB.Forward();
      motorRB.Backward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void turnRightBackward() {
  if (motorLT.isForward() && motorRT.isBackward() &&
      motorLB.isForward() && motorRB.isBackward()) {

    motorLT.DecreasePulse();
    motorRT.IncreasePulse();
    motorLB.DecreasePulse();
    motorRB.IncreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Forward();
      motorRT.Backward();
      motorLB.Forward();
      motorRB.Backward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void moveBackwardLeft() { //  Initial function for robot moving left backward.
  if (motorLT.isForward() && motorRT.isBackward() &&
      motorLB.isForward() && motorRB.isBackward()) {

    motorLT.IncreasePulse();
    motorRT.DecreasePulse();
    motorLB.DecreasePulse();
    motorRB.IncreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Forward();
      motorRT.Backward();
      motorLB.Forward();
      motorRB.Backward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void moveBackwardRight() {  //  Initial function for robot moving right backward.
  if (motorLT.isForward() && motorRT.isBackward() &&
      motorLB.isForward() && motorRB.isBackward()) {

    motorLT.DecreasePulse();
    motorRT.IncreasePulse();
    motorLB.IncreasePulse();
    motorRB.DecreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Forward();
      motorRT.Backward();
      motorLB.Forward();
      motorRB.Backward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void moveLeft() { //  Initial function for robot moving left.
  if (motorLT.isForward() && motorRT.isForward() &&
      motorLB.isBackward() && motorRB.isBackward()) {


    motorLT.IncreasePulse();
    motorRT.IncreasePulse();
    motorLB.IncreasePulse();
    motorRB.IncreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Forward();
      motorRT.Forward();
      motorLB.Backward();
      motorRB.Backward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void turnTowardLeft() { //  Initial function for robot moving left.
  if (motorLT.isForward() && motorRT.isForward() &&
      motorLB.isBackward() && motorRB.isBackward()) {

    motorLT.DecreasePulse();
    motorRT.DecreasePulse();
    motorLB.IncreasePulse();
    motorRB.IncreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Forward();
      motorRT.Forward();
      motorLB.Backward();
      motorRB.Backward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void turnBackwardLeft() { //  Initial function for robot moving left.
  if (motorLT.isForward() && motorRT.isForward() &&
      motorLB.isBackward() && motorRB.isBackward()) {

    motorLT.IncreasePulse();
    motorRT.IncreasePulse();
    motorLB.DecreasePulse();
    motorRB.DecreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Forward();
      motorRT.Forward();
      motorLB.Backward();
      motorRB.Backward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void moveRight() {  //  Initial function for robot moving right.
  if (motorLT.isBackward() && motorRT.isBackward() &&
      motorLB.isForward() && motorRB.isForward()) {

    motorLT.IncreasePulse();
    motorRT.IncreasePulse();
    motorLB.IncreasePulse();
    motorRB.IncreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Backward();
      motorRT.Backward();
      motorLB.Forward();
      motorRB.Forward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void turnTowardRight() {  //  Initial function for robot moving right.
  if (motorLT.isBackward() && motorRT.isBackward() &&
      motorLB.isForward() && motorRB.isForward()) {

    motorLT.DecreasePulse();
    motorRT.DecreasePulse();
    motorLB.IncreasePulse();
    motorRB.IncreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Backward();
      motorRT.Backward();
      motorLB.Forward();
      motorRB.Forward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void turnBackwardRight() {  //  Initial function for robot moving right.
  if (motorLT.isBackward() && motorRT.isBackward() &&
      motorLB.isForward() && motorRB.isForward()) {

    motorLT.IncreasePulse();
    motorRT.IncreasePulse();
    motorLB.DecreasePulse();
    motorRB.DecreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Backward();
      motorRT.Backward();
      motorLB.Forward();
      motorRB.Forward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void rotateLeft() { //  Initial function for robot rotating left-side.
  if (motorLT.isForward() && motorRT.isForward() &&
      motorLB.isForward() && motorRB.isForward()) {

    motorLT.IncreasePulse();
    motorRT.IncreasePulse();
    motorLB.IncreasePulse();
    motorRB.IncreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Forward();
      motorRT.Forward();
      motorLB.Forward();
      motorRB.Forward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void rotateRight() {  //  Initial function for robot rotating right-side.
  if (motorLT.isBackward() && motorRT.isBackward() &&
      motorLB.isBackward() && motorRB.isBackward()) {

    motorLT.IncreasePulse();
    motorRT.IncreasePulse();
    motorLB.IncreasePulse();
    motorRB.IncreasePulse();
  }
  else {
    if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
        motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

      motorLT.Backward();
      motorRT.Backward();
      motorLB.Backward();
      motorRB.Backward();
    }
    else {
      motorLT.DecreasePulse();
      motorRT.DecreasePulse();
      motorLB.DecreasePulse();
      motorRB.DecreasePulse();
    }
  }
}
/*******************************************************************************************************/
void stopAll() {  //  Initial function for robot stopping.
  if (motorLT.Pulse() == 0 && motorRT.Pulse() == 0 &&
      motorLB.Pulse() == 0 && motorRB.Pulse() == 0) {

    motorLT.Forward();
    motorRT.Forward();
    motorLB.Forward();
    motorRB.Forward();
  }
  else {

    motorLT.Stop();
    motorRT.Stop();
    motorLB.Stop();
    motorRB.Stop();
  }
}

/*******************************************************************************************************/

/*******************************************************************************************************/
#define PS2_DAT        13  //14
#define PS2_CMD        11  //15
#define PS2_SEL        10  //16
#define PS2_CLK        12  //17

#define pressures   false
#define rumble      false

PS2X ps2x;

int error = 0;
byte type = 0;
byte vibrate = 0;

uint8_t tempRX;
uint8_t tempLY;
uint8_t tempRY;
uint8_t tempLX;

/*******************************************************************************************************/

/*******************************************************************************************************/
void setup() {
  // put your setup code here, to run once:

  Serial.begin(57600);
  delay(300);

  error = ps2x.config_gamepad(PS2_CLK, PS2_CMD, PS2_SEL, PS2_DAT, pressures, rumble);

  motorLT.setPin(3, 2);
  motorRT.setPin(5, 4);
  motorLB.setPin(6, 7);
  motorRB.setPin(9, 8);

  motorLT.setDirection(true);
  motorRT.setDirection(true);
  motorLB.setDirection(true);
  motorRB.setDirection(true);

  motorLT.setPulse(80, 4, 10);
  motorRT.setPulse(80, 4, 10);
  motorLB.setPulse(80, 4, 10);
  motorRB.setPulse(80, 4, 10);

}

void loop() {
  // put your main code here, to run repeatedly:
  ps2x.read_gamepad(false, vibrate); //read controller and set large motor to spin at 'vibrate' speed

  //**************************************************************
  tempRX = ps2x.Analog(PSS_RX);
  tempRY = ps2x.Analog(PSS_RY);
  tempLX = ps2x.Analog(PSS_LX);
  tempLY = ps2x.Analog(PSS_LY);

  //  Serial.print(tempRX, DEC); Serial.print("\t");
  //  Serial.print(tempRY, DEC); Serial.print("\t");
  //  Serial.print(tempLX, DEC); Serial.print("\t");
  //  Serial.print(tempLY, DEC); Serial.println("");
  //  Serial.print("LT:");  Serial.print(motorLT.Pulse(), DEC);  Serial.println("  ");
  //  Serial.print("RT:");  Serial.print(motorRT.Pulse(), DEC);  Serial.print("  ");
  //  Serial.print("LB:");  Serial.print(motorLB.Pulse(), DEC);  Serial.print("  ");
  //  Serial.print("RB:");  Serial.print(motorRB.Pulse(), DEC);  Serial.println("  ");


  if (tempLY > 100 && tempLY < 200)
  {
    if (tempRX < 100)
    {
      Serial.println("Move Left");
      moveLeft();
    }
    else if (tempRX > 200)
    {
      Serial.println("Move Right");
      moveRight();
    }

    else if (ps2x.Button(PSB_L1) && ps2x.Button(PSB_R1))
    {
      Serial.println("Stop");
      stopAll();
    }
    else if (ps2x.Button(PSB_L1) && !ps2x.Button(PSB_R1))
    {
      Serial.println("Rotate left");
      rotateLeft();
    }
    else if (ps2x.Button(PSB_R1) && !ps2x.Button(PSB_L1))
    {
      Serial.println("Rotate right");
      rotateRight();
    }
    else
    {
      Serial.println("Stop");
      stopAll();
    }
  }
  else if (tempLY < 100)
  {
    if (tempRX < 100)
    {
      Serial.println("Move toward left");
      moveTowardLeft();
    }
    else if (tempRX > 200)
    {
      Serial.println("Move toward right");
      moveTowardRight();
    }
    else
    {
      if (ps2x.Button(PSB_L1))
      {
        Serial.println("Turn toward left");
        turnTowardLeft();
      }
      else if (ps2x.Button(PSB_R1))
      {
        Serial.println("Turn toward right");
        turnTowardRight();
      }
      else
      {
        Serial.println("Move straight");
        moveToward();
      }
    }
  }
  else if (tempLY > 200)
  {
    if (tempRX < 100)
    {
      Serial.println("Move backward left");
      moveBackwardLeft();
    }
    else if (tempRX > 200)
    {
      Serial.println("Move backward right");
      moveBackwardRight();
    }
    else
    {
      if (ps2x.Button(PSB_L1))
      {
        Serial.println("Turn backward left");
        turnBackwardLeft();
      }
      else if (ps2x.Button(PSB_R1))
      {
        Serial.println("Turn backward right");
        turnBackwardRight();
      }
      else
      {
        Serial.println("Move back");
        moveBackward();
      }
    }
  }
}
