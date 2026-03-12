// calculator.cpp
// this file has all the math functions for the calculator
// i tried to keep it simple... not sure if everything is right

#include "calculator.h"
#include <iostream>

// this function adds two number together i think
int add(int a, int b) {
    return a + b;
}

// subtracts b from a... pretty straightforward
int subtract(int a, int b) {
    return a - b;
}

// multiplys two numbers
int multiply(int a, int b) {
    return a * b;
}

// divison function... handles divide by zero
// i copied this from stackoverflow lol
float divide(float a, float b) {
    if (b == 0) {
        std::cout << "error: cant divide by zero!!" << std::endl;
        return 0;
    }
    return a / b;
}

// returns the absolute value of a number
// not sure if there is a built in function for this but i wrote my own
int absolute(int num) {
    if (num < 0) {
        return -num;
    } else {
        return num;
    }
}

// calculates base to the power of exp
// TODO: test this later... forgot
// i know there is pow() but i wanted to write it myself
int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result = result * base;
    }
    return result;
}
