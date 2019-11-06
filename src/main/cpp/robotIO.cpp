/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include "frc/WPILib.h"
#include "rev/CANSparkMax.h"
#include "robotIO.h"

using namespace frc;
using namespace std;

/////////////////////////////////////////JOYSTICK SETUP/////////////////////////////////////////////////////////

Joystick * m_stick = new Joystick(1);
Joystick * m_partner = new Joystick(2);

/////////////////////////////////////////MAIN CONTROLLER VARS///////////////////////////////////////////////////

bool buttonX; //Button 1
bool buttonXHeld;
bool buttonCircle; //Button 2
bool buttonCircleHeld;
bool buttonTriangle; //Button 3
bool buttonTriangleHeld;
bool buttonSquare; //Button 0
bool buttonSquareHeld;
bool shoulderLeft; //Button 5
bool shoulderLeftHeld;
bool shoulderRight; //Button 4
bool shoulderRightHeld;
bool buttonShare; //Button 8
bool buttonShareHeld;
bool buttonOptions; //Button 9
bool buttonOptionsHeld;
bool buttonPS; //Button 12
bool buttonPSHeld;
bool buttonPressLStick; //Button 11
bool buttonL3Held;
bool buttonPressRStick; //Button 10
bool buttonR3Held;
bool bigButton; //Button 13
bool bigButtonHeld;
int dPad; //D-Pad
double rStickY; //Axis 2
double rStickX; //Axis 5
double lStickY; //Axis 1
double lStickX; //Axis 0
double rTrigger; //Axis 4
double lTrigger; //Axis 3

/////////////////////////////////////////PARTNER CONTROLLER VARS///////////////////////////////////////////////////

bool buttonX_P; //Button 1
bool buttonXHeld_P;
bool buttonCircle_P; //Button 2
bool buttonCircleHeld_P;
bool buttonTriangle_P; //Button 3
bool buttonTriangleHeld_P;
bool buttonSquare_P; //Button 0
bool buttonSquareHeld_P;
bool shoulderLeft_P; //Button 5
bool shoulderLeftHeld_P;
bool shoulderRight_P; //Button 4
bool shoulderRightHeld_P;
bool buttonShare_P; //Button 8
bool buttonShareHeld_P;
bool buttonOptions_P; //Button 9
bool buttonOptionsHeld_P;
bool buttonPS_P; //Button 12
bool buttonPSHeld_P;
bool buttonPressLStick_P; //Button 11
bool buttonL3Held_P;
bool buttonPressRStick_P; //Button 10
bool buttonR3Held_P;
bool bigButton_P; //Button 13
bool bigButtonHeld_P;
int dPad_P; //D-Pad
double rStickY_P; //Axis 2
double rStickX_P; //Axis 5
double lStickY_P; //Axis 1
double lStickX_P; //Axis 0
double rTrigger_P; //Axis 4
double lTrigger_P; //Axis 3

/////////////////////////////////////////CONTROLLS SETUP///////////////////////////////////////////////////

robotIO::robotIO() {
    Joystick * m_stick = new Joystick(1);   //Joystick 1 init
    Joystick * m_partner = new Joystick(2); //Joystick 2 init
}


/*//////////////////////////////////////IMPORTANT NOTE/////////////////////////////////////////////////////

                                    GetRawButton vs. GetRawButtonPressed  

                        GetRawButton = button value(value = 1 while button held down)

    GetRawButtonPressed = button pressed once(value = true once button pressed then sets back to false right after)

/////////////////////////////////////////////////////////////////////////////////////////////////////////*/






/*/////////////////////////////////WHEN TO USE GetRawButton vs GetRawButtonPressed/////////////////////////


//////////////////////////////////////////////ButtonHeld vs Button/////////////////////////////////////////

Use GetRawButtonPressed(regular button) for commands that happen ONCE PER BUTTON PRESS I.E. PID POSITIONS

Use GetRawButton(button held) for commands that occur WHILE A BUTTON IS HELD DOWN I.E. RED ROVER CLIMBER/ROLLERS

/////////////////////////////////////////////////////////////////////////////////////////////////////////*/






bool robotIO::getButtonX(){                                    //creates function
    buttonX = m_stick->GetRawButtonPressed(2);                 //sets buttonX variable = to "joystick name" -> GetRawButtonPressed(button ID)
    return buttonX;                                            //returns button value
}

bool robotIO::getButtonXHeld(){                                //creates function
    buttonX = m_stick->GetRawButton(2);                        //sets buttonXHeld variable = to "joystick name" -> GetRawButton(button ID)
    return buttonXHeld;                                        //returns button value
}                                                              //pattern continues for remaining functions

bool robotIO::getButtonCircle(){
    buttonCircle = m_stick->GetRawButtonPressed(3);
    return buttonCircle;
}

bool robotIO::getButtonCircleHeld(){
    buttonCircle = m_stick->GetRawButton(3);
    return buttonCircleHeld;
}

bool robotIO::getButtonTriangle(){
    buttonTriangle = m_stick->GetRawButton(4);
    return buttonTriangle;
}

bool robotIO::getButtonTriangleHeld(){
    buttonTriangle = m_stick->GetRawButton(4);
    return buttonTriangleHeld;
}

bool robotIO::getButtonSquare(){
    buttonSquare = m_stick->GetRawButtonPressed(1);
    return buttonSquare;
}

bool robotIO::getButtonSquareHeld(){
    buttonSquare = m_stick->GetRawButton(1);
    return buttonSquareHeld;
}

bool robotIO::getButtonOptions(){
    buttonOptions = m_stick->GetRawButtonPressed(10);
    return buttonOptions;
}

bool robotIO::getButtonOptionsHeld(){
    buttonOptions = m_stick->GetRawButton(10);
    return buttonOptionsHeld;
}

bool robotIO::getButtonShare(){
    buttonShare = m_stick->GetRawButtonPressed(9);
    return buttonShare;
}

bool robotIO::getButtonShareHeld(){
    buttonShare = m_stick->GetRawButton(9);
    return buttonShareHeld;
}

bool robotIO::getShoulderRight(){
    shoulderRight = m_stick->GetRawButtonPressed(6);
    return shoulderRight;
}

bool robotIO::getShoulderRightHeld(){
    shoulderRight = m_stick->GetRawButton(6);
    return shoulderRightHeld;
}

bool robotIO::getShoulderLeft(){
    shoulderLeft = m_stick->GetRawButtonPressed(5);
    return shoulderLeft;
}

bool robotIO::getShoulderLeftHeld(){
    shoulderLeft = m_stick->GetRawButton(5);
    return shoulderLeftHeld;
}

bool robotIO::getBigButton(){
    bigButton = m_stick->GetRawButtonPressed(14);
    return bigButton;
}

bool robotIO::getBigButtonHeld(){
    bigButton = m_stick->GetRawButton(14);
    return bigButtonHeld;
}

bool robotIO::getButtonPressLStick(){
    buttonPressLStick = m_stick->GetRawButtonPressed(11);
    return buttonPressLStick;
}

bool robotIO::getButtonPressLStickHeld(){
    buttonPressLStick = m_stick->GetRawButton(11);
    return buttonL3Held;
}

bool robotIO::getButtonPressRStick(){
    buttonPressRStick = m_stick->GetRawButtonPressed(12);
    return buttonPressRStick;
}

bool robotIO::getButtonPressRStickHeld(){
    buttonPressRStick = m_stick->GetRawButton(12);
    return buttonR3Held;
}

int robotIO::getDPad(){
    dPad = m_stick->GetPOV();                      //GetPOV function used to get D-Pad Values. Can equal 0,90,180, or 270
    return dPad;
}

double robotIO::getLStickX(){
    lStickX = m_stick->GetRawAxis(0);              //GetRawAxis used to get value of joystick position. Values scale linearly from 0-1
    return lStickX;
}

double robotIO::getLStickY(){
    lStickY = m_stick->GetRawAxis(1);
    return lStickY;
}

double robotIO::getRStickX(){
    rStickX = m_stick->GetRawAxis(2);
    return rStickX;
}

double robotIO::getRStickY(){
    rStickY = m_stick->GetRawAxis(5);
    return rStickY;
}

////////////////////////////////////////PARTNER CONTROLLS SETUP///////////////////////////////////////////////////

bool robotIO::getButtonX_P(){
    buttonX_P = m_partner->GetRawButtonPressed(2);
    return buttonX_P;
}

bool robotIO::getButtonXHeld_P(){
    buttonX_P = m_partner->GetRawButton(2);
    return buttonXHeld_P;
}

bool robotIO::getButtonCircle_P(){
    buttonCircle_P = m_partner->GetRawButtonPressed(3);
    return buttonCircle_P;
}

bool robotIO::getButtonCircleHeld_P(){
    buttonCircle_P = m_partner->GetRawButton(3);
    return buttonCircleHeld_P;
}

bool robotIO::getButtonTriangle_P(){
    buttonTriangle_P = m_partner->GetRawButtonPressed(4);
    return buttonTriangle_P;
}

bool robotIO::getButtonTriangleHeld_P(){
    buttonTriangle_P = m_partner->GetRawButton(4);
    return buttonTriangleHeld_P;
}

bool robotIO::getButtonSquare_P(){
    buttonSquare_P = m_partner->GetRawButtonPressed(1);
    return buttonSquare_P;
}

bool robotIO::getButtonSquareHeld_P(){
    buttonSquare_P = m_partner->GetRawButton(1);
    return buttonSquareHeld_P;
}

bool robotIO::getButtonOptions_P(){
    buttonOptions_P = m_partner->GetRawButtonPressed(10);
    return buttonOptions_P;
}

bool robotIO::getButtonOptionsHeld_P(){
    buttonOptions_P = m_partner->GetRawButton(10);
    return buttonOptionsHeld_P;
}

bool robotIO::getButtonShare_P(){
    buttonShare_P = m_partner->GetRawButtonPressed(9);
    return buttonShare_P;
}

bool robotIO::getButtonShareHeld_P(){
    buttonShare_P = m_partner->GetRawButton(9);
    return buttonShareHeld_P;
}

bool robotIO::getShoulderRight_P(){
    shoulderRight_P = m_partner->GetRawButtonPressed(6);
    return shoulderRight_P;
}

bool robotIO::getShoulderRightHeld_P(){
    shoulderRight_P = m_partner->GetRawButton(6);
    return shoulderRightHeld_P;
}

bool robotIO::getShoulderLeft_P(){
    shoulderLeft_P = m_partner->GetRawButtonPressed(5);
    return shoulderLeft_P;
}

bool robotIO::getShoulderLeftHeld_P(){
    shoulderLeft_P = m_partner->GetRawButton(5);
    return shoulderLeftHeld_P;
}

bool robotIO::getBigButton_P(){
    bigButton_P = m_partner->GetRawButtonPressed(14);
    return bigButton_P;
}

bool robotIO::getBigButtonHeld_P(){
    bigButton_P = m_partner->GetRawButton(14);
    return bigButtonHeld_P;
}

bool robotIO::getButtonPressLStick_P(){
    buttonPressLStick_P = m_partner->GetRawButtonPressed(11);
    return buttonPressLStick_P;
}

bool robotIO::getButtonPressLStickHeld_P(){
    buttonPressLStick_P = m_partner->GetRawButton(11);
    return buttonL3Held_P;
}

bool robotIO::getButtonPressRStick_P(){
    buttonPressRStick_P = m_partner->GetRawButtonPressed(12);
    return buttonPressRStick_P;
}

bool robotIO::getButtonPressRStickHeld_P(){
    buttonPressRStick_P = m_partner->GetRawButton(12);
    return buttonR3Held_P;
}

int robotIO::getDPad_P(){
    dPad_P = m_partner->GetPOV();
    return dPad_P;
}

double robotIO::getLStickX_P(){
    lStickX_P = m_partner->GetRawAxis(0);
    return lStickX_P;
}

double robotIO::getLStickY_P(){
    lStickY_P = m_partner->GetRawAxis(1);
    return lStickY_P;
}

double robotIO::getRStickX_P(){
    rStickX_P = m_partner->GetRawAxis(2);
    return rStickX_P;
}

double robotIO::getRStickY_P(){
    rStickY_P = m_partner->GetRawAxis(5);
    return rStickY_P;
}
