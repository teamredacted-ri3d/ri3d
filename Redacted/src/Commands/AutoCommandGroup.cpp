// PNW Ri3D: Team REDACTED
// Jon Grimm, Justin Grimm, Kevin Parsons
// 2015

// RobotBuilder Version: 1.5
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

// Command Groups are fun and easy, especially for writing more than one autonomous.

#include "AutoCommandGroup.h"

// Make sure we include our commands!
#include "DriveCommand.h"
#include "GripperClose.h"
#include "ForkliftMove.h"
#include "GripperOpen.h"

AutoCommandGroup::AutoCommandGroup() {
	// Sequential steps will wait until the command finishes to run the next one.
	AddSequential(new GripperClose());
	AddSequential(new ForkliftMove(-0.5, 2.5)); //Negative is up!
	AddSequential(new DriveCommand(-0.125, -0.75, 3.5));
	AddSequential(new ForkliftMove(0.5, 1.5));
	AddParallel(new GripperOpen());
	AddParallel(new DriveCommand(-0.5, -0.5, 2));

	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.
}
