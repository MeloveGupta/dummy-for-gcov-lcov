// test_calculator.cpp
// this file tests the calculator functions
// i didnt use any testing framework because i dont know how to set one up yet
// so i just used if statements and cout... it works i think

#include "calculator.h"
#include <iostream>

using namespace std;

int tests_passed = 0;
int tests_failed = 0;

// simple test function i made
// not sure if this is how your supposed to do it but whatever
void check(string test_name, bool condition) {
    if (condition) {
        cout << "  PASS: " << test_name << endl;
        tests_passed++;
    } else {
        cout << "  FAIL: " << test_name << endl;
        tests_failed++;
    }
}

int main() {
    cout << "===== Calculator Tests =====" << endl;
    cout << endl;

    // testing add function
    cout << "--- Testing add() ---" << endl;
    check("2 + 3 = 5", add(2, 3) == 5);
    check("0 + 0 = 0", add(0, 0) == 0);
    check("-1 + 1 = 0", add(-1, 1) == 0);
    check("100 + 200 = 300", add(100, 200) == 300);
    cout << endl;

    // testing subtract
    cout << "--- Testing subtract() ---" << endl;
    check("5 - 3 = 2", subtract(5, 3) == 2);
    check("0 - 0 = 0", subtract(0, 0) == 0);
    check("10 - 20 = -10", subtract(10, 20) == -10);
    cout << endl;

    // testing multiply
    cout << "--- Testing multiply() ---" << endl;
    check("3 * 4 = 12", multiply(3, 4) == 12);
    check("0 * 5 = 0", multiply(0, 5) == 0);
    check("-2 * 3 = -6", multiply(-2, 3) == -6);
    cout << endl;

    // i should test divide and power too but im running out of time
    // will add more tests later probably

    // testing absolute
    cout << "--- Testing absolute() ---" << endl;
    check("-5 becomes 5", absolute(-5) == 5);
    check("3 stays 3", absolute(3) == 3);
    check("0 stays 0", absolute(0) == 0);
    cout << endl;

    // print results
    cout << "===== Results =====" << endl;
    cout << "Passed: " << tests_passed << endl;
    cout << "Failed: " << tests_failed << endl;
    cout << endl;

    if (tests_failed == 0) {
        cout << "all tests passed!!" << endl;
    } else {
        cout << "some tests failed... need to fix" << endl;
    }

    return 0;
}
