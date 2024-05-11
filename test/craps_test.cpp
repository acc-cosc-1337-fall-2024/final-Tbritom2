#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "die.h"
#include <cassert>
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
int main() {
    Die die;

    // Test roll() function
    for (int i = 0; i < 10; ++i) {
        int rollResult = die.roll();
        assert(rollResult >= 1 && rollResult <= 6);
    }

    return 0;
}