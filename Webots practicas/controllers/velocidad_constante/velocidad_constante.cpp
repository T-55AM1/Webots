// File:          Avanzador.cpp
// Date:          18/08/2026
// Description:  Un controlador de ejemplo
// Author:       Manuel Emiliano Osorio Muñoz
// Modifications:
#include <webots/Motor.hpp>
#include <webots/Robot.hpp>

// All the webots classes are defined in the "webots" namespace
using namespace webots;

int main(int argc, char **argv) {
  // create the Robot instance.
  Robot *robot = new Robot();

  // get the time step of the current world.
  int timeStep = (int)robot->getBasicTimeStep();


    Motor *motor = robot->getMotor("MOTOR 1");
    motor->setPosition(INFINITY);    
  //  DistanceSensor *ds = robot->getDistanceSensor("dsname");
  //  ds->enable(timeStep);

 
  while (robot->step(timeStep) != -1) {
    // Read the sensors:
    // Enter here functions to read sensor data, like:
    //  double val = ds->getValue();

      motor->setPosition(10.0);
  };

  // Enter here exit cleanup code.

  delete robot;
  return 0;
}
