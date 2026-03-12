// calculator.h
// this is my calculator header file... has all the function declarations

#ifndef CALCULATOR_H
#define CALCULATOR_H

// basic math stuff
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

// divison function(handles divide by zero)
float divide(float a, float b);

// extra functions
int absolute(int num);
int power(int base, int exp);

#endif
