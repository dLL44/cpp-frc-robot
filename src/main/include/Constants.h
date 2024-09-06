// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */
namespace Constants {
    
    
    // op and driver controllers ( will figure out l8r )
    constexpr int CONTROLLER_OP = 0;
    constexpr int JOYSTICK_L = 1;
    constexpr int JOYSTICK_R = 2;
    constexpr double JOYSTICK_CURVE = 5.0/3.0;
    
    // DriveTrain.cpp
    constexpr int DRIVE_RL = 1;
    constexpr int DRIVE_RR = 2;
    constexpr int DRIVE_FL = 3;
    constexpr int DRIVE_FR = 4;
    
    constexpr int DRIVETRAIN_GEAR_RATIO = 9; // subject to change this year
    constexpr double WHEEL_CIRCUMFRANCE = 12.57; // also subject to change this year
}
