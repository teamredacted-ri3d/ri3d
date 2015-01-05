// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/GripperClose.h"
#include "Commands/GripperOpen.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
	// Process operator interface input here.
        // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS

	manipJoy = new Joystick(1);
	
	gripperCloseButtone = new JoystickButton(manipJoy, 3);
	gripperCloseButtone->WhenPressed(new GripperClose());
	gripperOpenButton = new JoystickButton(manipJoy, 2);
	gripperOpenButton->WhenPressed(new GripperOpen());
	driverJoy = new Joystick(0);
	
     

        // SmartDashboard Buttons
	SmartDashboard::PutData("GripperOpen", new GripperOpen());

	SmartDashboard::PutData("Autonomous Command", new AutonomousCommand(0, 0, 0));

	SmartDashboard::PutData("GripperClose", new GripperClose());


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

Joystick* OI::getManipJoy() {
	return manipJoy;
}

Joystick* OI::getDriverJoy() {
	return driverJoy;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
