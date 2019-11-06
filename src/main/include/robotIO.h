/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

class robotIO {
 public:
  robotIO();

/////////////////////////////////////////MAIN CONTROLLER VARS///////////////////////////////////////////////////

void joystickInit();

bool getButtonX(); //Button 1
bool getButtonXHeld(); //Button 1 held
bool getButtonCircle(); //Button 2
bool getButtonCircleHeld(); //Button 2 held
bool getButtonTriangle(); //Button 3
bool getButtonTriangleHeld(); //Button 3 held
bool getButtonSquare(); //Button 0
bool getButtonSquareHeld(); //Button 0 held
bool getShoulderLeft(); //Button 5
bool getShoulderLeftHeld(); //Button 5 held
bool getShoulderRight(); //Button 4
bool getShoulderRightHeld(); //Button 4 held
bool getButtonShare(); //Button 8
bool getButtonShareHeld(); //Button 8 held
bool getButtonOptions(); //Button 9
bool getButtonOptionsHeld(); //Button 9 held
bool getButtonPS(); //Button 12
bool getButtonPSHeld(); // Button 12 held
bool getButtonPressLStick(); //Button 11(L3)
bool getButtonPressLStickHeld(); //Button 11(L3) held
bool getButtonPressRStick(); //Button 10(R3)
bool getButtonPressRStickHeld(); //Button 10(R3) held
bool getBigButton(); //Button 13(center pad)
bool getBigButtonHeld(); //Button 13(centner pad) held
int getDPad(); //D-Pad
double getRStickY(); //Axis 2
double getRStickX(); //Axis 5
double getLStickY(); //Axis 1
double getLStickX(); //Axis 0
double getRTrigger(); //Axis 4
double getLTrigger(); //Axis 3

/////////////////////////////////////////PARTNER CONTROLLER VARS///////////////////////////////////////////////////

bool getButtonX_P(); //Button 1
bool getButtonXHeld_P(); //Button 1 held
bool getButtonCircle_P(); //Button 2
bool getButtonCircleHeld_P(); //Button 2 held
bool getButtonTriangle_P(); //Button 3
bool getButtonTriangleHeld_P(); //Button 3 held
bool getButtonSquare_P(); //Button 0
bool getButtonSquareHeld_P(); //Button 0 held
bool getShoulderLeft_P(); //Button 5
bool getShoulderLeftHeld_P(); //Button 5 held
bool getShoulderRight_P(); //Button 4
bool getShoulderRightHeld_P(); //Button 4 held
bool getButtonShare_P(); //Button 8
bool getButtonShareHeld_P(); //Button 8 held
bool getButtonOptions_P(); //Button 9
bool getButtonOptionsHeld_P(); //Button 9 held
bool getButtonPS_P(); //Button 12
bool getButtonPSHeld_P(); // Button 12 held
bool getButtonPressLStick_P(); //Button 11(L3)
bool getButtonPressLStickHeld_P(); //Button 11(L3) held
bool getButtonPressRStick_P(); //Button 10(R3)
bool getButtonPressRStickHeld_P(); //Button 10(R3) held
bool getBigButton_P(); //Button 13(center pad)
bool getBigButtonHeld_P(); //Button 13(centner pad) held
int getDPad_P(); //D-Pad
double getRStickY_P(); //Axis 2
double getRStickX_P(); //Axis 5
double getLStickY_P(); //Axis 1
double getLStickX_P(); //Axis 0
double getRTrigger_P(); //Axis 4
double getLTrigger_P(); //Axis 3
};
