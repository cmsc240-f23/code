#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <stdexcept>
#include "doctest.h"

using namespace std;

string numberClassifier(int number) 
{
    if (number == 0) 
    {
        throw invalid_argument("Number must not be zero");
    } 
    else if (number > 0) 
    {
        if (number % 2 == 0) 
        {
            return "Even Positive";
        } 
        else 
        {
            return "Odd Positive";
        }
    } 
    else 
    { 
        if (number % 2 == 0) 
        {
            return "Even Negative";
        } 
        else 
        {
            return "Odd Negative";
        }
    }
}


TEST_CASE("Testing the numberClassifier function") 
{
    CHECK_THROWS_AS(numberClassifier(0), invalid_argument);
    CHECK(numberClassifier(2) == "Even Positive");
    CHECK(numberClassifier(-2) == "Even Negative");
    CHECK(numberClassifier(1) == "Odd Positive");
    CHECK(numberClassifier(-1) == "Odd Negative");
    CHECK(numberClassifier(100) == "Even Positive");
    CHECK(numberClassifier(-101) == "Odd Negative");
}

