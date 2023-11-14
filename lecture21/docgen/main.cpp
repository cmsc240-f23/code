/**
 * @file main.cpp
 * @brief Test harness for the SimpleMath class.
 *
 * This file serves as a test driver for the SimpleMath class. It demonstrates
 * the usage of the class and tests its functionality with basic examples.
 */
#include <iostream>
#include "SimpleMath.h"


int main() 
{
    SimpleMath calc;

    // Test addition
    int sum = calc.add(3, 4);
    std::cout << "3 + 4 = " << sum << std::endl;

    // Test subtraction
    int difference = calc.subtract(10, 4);
    std::cout << "10 - 4 = " << difference << std::endl;

    // Test multiplication
    int product = calc.multiply(6, 7);
    std::cout << "6 * 7 = " << product << std::endl;

    // Test division
    try 
    {
        double quotient = calc.divide(10, 2);
        std::cout << "10 / 2 = " << quotient << std::endl;
    } 
    catch (const std::invalid_argument& e) 
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test division by zero
    try 
    {
        double quotient = calc.divide(10, 0);
        std::cout << "10 / 0 = " << quotient << std::endl;
    } 
    catch (const std::invalid_argument& e) 
    {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }

    return 0;
}

