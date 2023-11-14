/**
 * @file SimpleMath.cpp
 * @brief Implementation of SimpleMath class.
 *
 * This file contains the implementations of the SimpleMath class functions.
 * It provides basic mathematical operations such as addition, subtraction,
 * multiplication, and division.
 */
#include <stdexcept>
#include "SimpleMath.h"


int SimpleMath::add(int a, int b) 
{
    return a + b;
}

int SimpleMath::subtract(int a, int b) 
{
    return a - b;
}

int SimpleMath::multiply(int a, int b) 
{
    return a * b;
}

double SimpleMath::divide(int a, int b) 
{
    if (b == 0) {
        throw std::invalid_argument("Division by zero.");
    }
    return static_cast<double>(a) / b;
}
