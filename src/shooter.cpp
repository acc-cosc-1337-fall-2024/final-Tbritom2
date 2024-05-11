//
#include "shooter.h"

Roll* Shooter::throw_dice(Die& die1, Die& die2) {
    Roll* roll = new Roll(die1, die2);
    rolls.push_back(roll);
    return roll;
}

void Shooter::display_rolled_values() {
    for (Roll* roll : rolls) {
        std::cout << "Rolled value: " << roll->roll_value() << std::endl;
    }
}

Shooter::~Shooter() {
    for (Roll* roll : rolls) {
        delete roll;
    }
    rolls.clear();
}
