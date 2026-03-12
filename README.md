# simple calculator with code coverage

so basically this is a small calculator project i made to learn about gcov and lcov. it has basic math functions like add, subtract, multiply, divide, and a couple extras. i also wrote some tests for it but i didnt finish testing everything because i ran out of time lol.

## what it does

its a simple calculator that can do basic math. i wrote it in c++ because thats what im learning right now. the main point of this project was to figure out how code coverage works with gcov and lcov, not to make a amazing calculator or anything.

## files

- `calculator.h` - header file with the function declarations
- `calculator.cpp` - the actual functions
- `test_calculator.cpp` - my tests (not all functions are tested yet)
- `Makefile` - for building and running stuff

## how to run

you need g++, gcov, and lcov installed. on ubuntu you can do:

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

after you run `make coverage` open `coverage_report/index.html` in your browser to see the report. its pretty cool actually.

## what i learned about coverage

so basically gcov and lcov show you which lines of you're code actually got executed during testing. i was suprised to see that my coverage wasnt 100% because i thought i tested everything but i guess i missed some functions. the report shows green for lines that were tested and red for lines that werent. it also shows you a percentage which is helpfull. i think code coverage is pretty usefull for finding parts of your code that you forgot to test. im going to try to get closer to 100% later when i have more time.
