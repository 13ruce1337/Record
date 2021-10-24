CC=g++
CF=-c 

all: main.o
	$(CC) main.o -o ./bin/TDND

main.o:
	$(CC) $(CF) ./src/main.cpp

clean:
	rm -rf *o ./bin/TDND