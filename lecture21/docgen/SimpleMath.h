/**
 * @file SimpleMath.h
 * @brief Provides simple mathematical operations.
 */

#ifndef SIMPLEMATH_H
#define SIMPLEMATH_H

/**
 * @class SimpleMath
 * @brief A class that offers basic mathematical functions.
 *
 * This class can perform simple mathematical operations such as 
 * addition, subtraction, multiplication, and division.
 */
class SimpleMath 
{
public:
    /**
     * @brief Adds two numbers.
     * @param a First number to add.
     * @param b Second number to add.
     * @return The sum of a and b.
     */
    int add(int a, int b);

    /**
     * @brief Subtracts one number from another.
     * @param a Number to be subtracted from.
     * @param b Number that is to subtract.
     * @return The difference of a and b.
     */
    int subtract(int a, int b);

    /**
     * @brief Multiplies two numbers.
     * @param a First number to multiply.
     * @param b Second number to multiply.
     * @return The product of a and b.
     */
    int multiply(int a, int b);

    /**
     * @brief Divides one number by another.
     * @param a Numerator.
     * @param b Denominator.
     * @return The quotient of a and b.
     * @throw std::invalid_argument if b is zero.
     */
    double divide(int a, int b);
};

#endif // SIMPLEMATH_H
