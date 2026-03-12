# Simple calculator with code coverage

So, basically this is a small calculator project i made to learn about gcov and lcov. It has basic math functions like add, subtract, multiply, divide, and a couple extras. I also wrote some tests for it.

## What it does

Its a simple calculator that can do basic math. I wrote it in c++ because thats what i'm learning right now. The main point of this project was to figure out how code coverage works with gcov and lcov, not to make a amazing calculator or anything.

## Files

- `calculator.h` - header file with the function declarations
- `calculator.cpp` - the actual functions
- `test_calculator.cpp` - my tests (not all functions are tested yet)
- `Makefile` - for building and running stuff

## How to run

You need g++, gcov, and lcov installed, on ubuntu you can do:

```
sudo apt install g++ lcov
```

then just run these commands:

```
make build        # compiles everything
make run          # runs the tests
make coverage     # generates the coverage report
make clean        # cleans up all the generated files
```

after you run `make coverage` open `coverage_report/index.html` in your browser to see the report.

## What i learned about coverage

So basically gcov and lcov show you which lines of you're code actually got executed during testing. The report shows green for lines that were tested and red for lines that were not, it also shows you a percentage which is helpful. I think code coverage is pretty useful for finding parts of your code that you forgot to test.
