all: main docs

main: main.o SimpleMath.o
	g++ main.o SimpleMath.o -o main

main.o: main.cpp SimpleMath.h
	g++ main.cpp -c

SimpleMath.o: SimpleMath.cpp SimpleMath.h
	g++ SimpleMath.cpp -c

docs: main.cpp SimpleMath.cpp SimpleMath.h
	doxygen doxyfile

clean-code: 
	rm -f main.o SimpleMath.o main

clean-docs: 
	rm -r -f ./docs

clean: clean-code clean-docs



