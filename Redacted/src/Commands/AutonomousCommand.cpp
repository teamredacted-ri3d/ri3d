// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "AutonomousCommand.h"

AutonomousCommand::AutonomousCommand(float LeftSpeed, float RightSpeed, float Time) {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES

	leftSpeed = LeftSpeed;
	rightSpeed = RightSpeed;
	time = Time;
}

// Called just before this Command runs the first time
void AutonomousCommand::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void AutonomousCommand::Execute() {
	Robot::drive->right1->Set((-1.0) * rightSpeed);
	Robot::drive->left1->Set(leftSpeed);
}

// Make this return true when this Command no longer needs to run execute()
bool AutonomousCommand::IsFinished() {
	if (TimeSinceInitialized() > time)
			return true;
	return false;
}

// Called once after isFinished returns true
void AutonomousCommand::End() {
	Robot::drive->right1->Set(0);
	Robot::drive->left1->Set(0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutonomousCommand::Interrupted() {
	End();
}
