CC=g++
CF=-c 

all: main.o test.o
	
main.o: test.o
	@echo "=== Running tests... ==="
	./tests/TDND
	@echo "=== Building application... ==="
	$(CC) $(CF) ./src/main.cpp
	$(CC) main.o -o ./bin/TDND

test.o:
	@echo "=== Compiling tests... ==="
	$(CC) $(CF) ./tests/record_test.cpp
	$(CC) record_test.o -o ./tests/TDND

clean:
	@echo "=== Uninstall application... ==="
	rm -rf *o ./bin/TDND ./tests/TDND /tmp/record.log