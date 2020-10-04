CC = g++

all: error_handling

error_handling: error_handling.o
	${CC} -o error_handling error_handling.o

error_handling.o: error_handling.cpp
	${CC} -c error_handling.cpp
clean:
	rm error_handling.o error_handling
