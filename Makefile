# Makefile for calculator coverage project
# just basic targets nothing fancy

# build the test
build:
	g++ --coverage -c calculator.cpp -o calculator.o
	g++ --coverage -c test_calculator.cpp -o test_calculator.o
	g++ --coverage -o test_calculator calculator.o test_calculator.o

# run the tests
run: build
	./test_calculator

# generate coverage report with gcov and lcov
coverage: run
	gcov-12 calculator.cpp
	lcov --capture --directory . --output-file coverage.info --gcov-tool gcov-12
	genhtml coverage.info --output-directory coverage_report
	@echo ""
	@echo "done! open coverage_report/index.html to see the report"

# clean up all the generated files
# there are so many lol
clean:
	rm -f test_calculator
	rm -f *.o *.gcda *.gcno *.gcov
	rm -f coverage.info
	rm -rf coverage_report
