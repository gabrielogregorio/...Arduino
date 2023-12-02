#include "VarSpeedServo.h"

VarSpeedServo baseServo;
VarSpeedServo extensionServo;
VarSpeedServo heightServo;
VarSpeedServo clawServo ;

int joystickLeftY = A0;
int joystickLeftX = A1;
int joystickRightX = A2;
int joystickRightY = A3;

static int baseRotationAngle = 90;
static int armExtensionAngle = 90;
static int armHeightAngle = 70;
static int clawOpeningAngle = 75;

void setup() {
  Serial.begin(9600);

  clawServo .attach(3);
  heightServo.attach(6);
  extensionServo.attach(5);
  baseServo.attach(9);

  baseServo.write(90);
  extensionServo.write(90);
  heightServo.write(70);
  clawServo.write(75);
}

int joystickMin = 0;
int joystickMax = 1023;

int applyTest(int joystick, int rotationAngle, int minAngle, int maxAngle, VarSpeedServo &baseServo) {
  int angle = analogRead(joystick);
  int factorIncrease = map(angle, joystickMin, joystickMax, 1, 2);

  if (angle > 600 && rotationAngle <= maxAngle) {
    rotationAngle += factorIncrease;
  } else if (angle < 300 && rotationAngle >= minAngle) {
    rotationAngle -= factorIncrease;
  }

  baseServo.write(rotationAngle);

  return rotationAngle;
}

void loop() {
  baseRotationAngle = applyTest(joystickLeftY, baseRotationAngle, 10 ,250, baseServo);
  armExtensionAngle = applyTest(joystickLeftX, armExtensionAngle, 60, 180, extensionServo);
  armHeightAngle = applyTest(joystickRightX, armHeightAngle, -20,120,  heightServo);
  clawOpeningAngle = applyTest(joystickRightY, clawOpeningAngle,  50, 110, clawServo );

  delay(50);
}