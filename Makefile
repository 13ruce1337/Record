CC=g++
CF=-c 

all: main.o test.o
	
main.o: test.o
	@echo "=== Running tests... ==="
	./tests/TDND
	@echo "=== Building application... ==="
	$(CC) $(CF) ./src/main.cpp
	$(CC) main.o -o ./bin/TDND
	@echo "=== Build complete ==="

test.o:
	@echo "=== Compiling tests... ==="
	$(CC) $(CF) ./tests/TDNDtest.cpp
	$(CC) TDNDtest.o -o ./tests/TDND

clean:
	@echo "=== Uninstall application... ==="
	rm -rf *o ./bin/TDND ./tests/TDND /tmp/record.log