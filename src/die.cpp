//
#include "die.h"
#include <cstdlib>
#include <ctime>

Die::Die() : sides(6) {
    // Seed the random number generator with the current time
    srand(time(nullptr));
}

int Die::roll() const {
    // Generate a random value between 1 and 6
    return rand() % sides + 1;
}