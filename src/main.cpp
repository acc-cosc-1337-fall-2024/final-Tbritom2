#include <iostream>
#include <cstdlib>
#include <ctime>
#include "die.h"
#include "shooter.h"
#include "come_out_phase.h"
#include "point_phase.h"

int main() {
    srand(time(0)); // Seed the random number generator

    Die die1, die2;
    Shooter shooter;
    Roll* roll = shooter.throw_die();

    int rolled_value;
    ComeOutPhase come_out_phase;
    while (come_out_phase.get_outcome(roll) == RollOutcome::natural || come_out_phase.get_outcome(roll) == RollOutcome::craps) {
        rolled_value = roll->get_value();
        std::cout << "Rolled " << rolled_value << " roll again\n";
        roll = shooter.throw_die();
    }

    std::cout << "Start of point phase\n";
    std::cout << "Roll until " << rolled_value << " or a 7 is rolled\n";
    int point = rolled_value;
    roll = shooter.throw_die();
    PointPhase point_phase(point);
    while (point_phase.get_outcome(roll) != RollOutcome::seven_out && point_phase.get_outcome(roll) != RollOutcome::nopoint) {
        rolled_value = roll->get_value();
        std::cout << "Rolled " << rolled_value << " roll again\n";
        roll = shooter.throw_die();
    }

    std::cout << "End of point phase\n";
    std::cout << "Shooter rolled values:\n";
    std::cout << rolled_value << std::endl;

    return 0;
}