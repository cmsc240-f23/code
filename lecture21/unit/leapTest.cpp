#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "leap.h"

TEST_CASE("Testing isLeapYear function") 
{
    CHECK(isLeapYear(2000) == true);  // Divisible by 400
    CHECK(isLeapYear(1996) == true);  // Divisible by 4 but not by 100
    CHECK(isLeapYear(1900) == false); // Divisible by 100 but not by 400
    CHECK(isLeapYear(2019) == false); // Not divisible by 4

    CHECK_THROWS_AS(isLeapYear(0), std::invalid_argument);    // Invalid argument 0
    CHECK_THROWS_AS(isLeapYear(-100), std::invalid_argument); // Invalid argument less than 0
}


