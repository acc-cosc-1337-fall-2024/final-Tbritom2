//
#ifndef HOLL_H
#define ROLL_H

#include "die.h"

class Roll {
public:
    Roll(Die& die1, Die& die2);
    int roll_value() const;
private:
    Die& die1;
    Die& die2;
    int rolled_value;
    void roll_dice();
};

#endif