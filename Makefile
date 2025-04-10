#this sets these objects as the default target so the makefile automatically uses these when using the make command and makes the executable named lab8.exe
make: main.o
	g++ -Wall main.o -o lab9.exe
# Builds the object file using main as the target and makes sure to also grab matrix.hpp because it is included in main.
main.o: main.cpp matrix.hpp
	g++ -Wall -c main.cpp -o main.o

# this part is used to clean up the output of the makefile so the file can be made again
clean:
	rm -f main.o lab9.exe
