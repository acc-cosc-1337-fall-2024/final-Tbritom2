//
#include "point_phase.h"
#include "roll.h"

PointPhase::PointPhase(int p) : point(p) {}

RollOutcome PointPhase::get_outcome(Roll* roll) {
    int rolled_value = roll->get_value();
    if (rolled_value == point)
        return RollOutcome::point;
    else if (rolled_value == 7)
        return RollOutcome::seven_out;
    else
        return RollOutcome::nopoint;
}