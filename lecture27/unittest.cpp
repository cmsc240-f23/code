#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <climits>
#include <stdexcept>
#include <vector>

using namespace std;

int maxElement(vector<int> nums)
{
    // If empty throw invalid_argument exception.
    if (nums.empty()) 
    {
        throw invalid_argument("Input vector is empty");
    }

    int max = -INT_MAX;

    for (int num : nums)
    {
        if (num > max)
        {
            max = num;
        }
    }

    return max;
}

TEST_CASE("Testing the maxElement function") 
{
    CHECK(maxElement({1, 2, 3, 4, 5}) == 5);
    CHECK(maxElement({-10, -20, -30, -40, -5}) == -5);
    CHECK(maxElement({100, 200, 300, 400, 500}) == 500);
    CHECK(maxElement({42}) == 42);
    CHECK_THROWS_AS(maxElement({}), invalid_argument);
}

