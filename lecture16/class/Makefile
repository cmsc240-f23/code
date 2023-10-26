all: main main.o 

main: main.cpp Pair.cpp Pair.h
	g++ main.cpp -o main

main.o: main.cpp Pair.h
	g++ -c main.cpp

clean:
	rm -f *.o main
