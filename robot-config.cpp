#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

motor LF = motor(PORT8, ratio18_1, true);
motor LM = motor(PORT9, ratio18_1, false);
motor LB = motor(PORT10, ratio18_1, true);

motor RF = motor(PORT1, ratio18_1, true);
motor RM = motor(PORT3, ratio18_1, false);
motor RB = motor(PORT2, ratio18_1, false);

motor IN = motor(PORT21, ratio18_1, false);
motor OUT = motor(PORT5, ratio18_1, true);

digital_out WING = digital_out(Brain.ThreeWirePort.A);
digital_out SCRAPER = digital_out(Brain.ThreeWirePort.H);


void vexcodeInit( void ) {
  // nothing to initialize
}