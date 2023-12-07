# main - default target that builds the executable file named main using the object files
# main.o - target that will build the main.o object file
# Book.o - target that will build the Book.o object file
# Library.o - target that will build the Library.o object file
# clean - target that will remove the object files and the executable file

main: Book.o Library.o main.o
	g++ Book.o Library.o main.o -o main

Book.o: Book.cpp Book.h
	g++ Book.cpp -c 

Library.o: Book.h Library.h Library.cpp
	g++ Library.cpp -c

main.o: main.cpp Library.h
	g++ main.cpp -c

clean:
	rm -f *.o main


