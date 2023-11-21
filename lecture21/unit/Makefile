all: main run-unit-tests

main: main.o leap.o
	g++ main.o leap.o -o main

main.o: main.cpp leap.h
	g++ -Wall main.cpp -c

leap.o: leap.cpp leap.h
	g++ -Wall leap.cpp -c

leapTest: leapTest.cpp leap.o
	g++ leapTest.cpp leap.o -o leapTest

run-unit-tests: leapTest
	./leapTest

clean:
	rm -f leap.o main.o main leapTest

