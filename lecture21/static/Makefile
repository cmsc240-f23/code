all: main static-analysis

main: main.o
	g++ main.o -o main

main.o: main.cpp
	g++ -Wall main.cpp -c

static-analysis:
	cppcheck *.cpp

clean:
	rm -f main.o main



