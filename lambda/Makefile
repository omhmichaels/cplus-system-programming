CC = g++

all: primitive 

primitive: primitive.o
	${CC} -o primitive primitive.o

primitive.o: primitive.cpp
	${CC} -c primitive.cpp
clean:
	rm primitive.o primitive
