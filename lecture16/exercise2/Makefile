main: main.o IntStack.o
	g++ main.o IntStack.o -o main

main.o: main.cpp IntStack.h
	g++ -c main.cpp 

IntStack.o: IntStack.cpp IntStack.h
	g++ -c IntStack.cpp

clean:
	rm -f *.o main