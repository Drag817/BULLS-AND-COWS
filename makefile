.PHONY: clean

all: 
	g++ -Wall -c ./src/main.cpp -o ./build/main.o
	g++ -Wall -c ./src/functions.cpp -o ./build/functions.o
	g++ -Wall ./build/main.o ./build/functions.o -o ./bin/main

run: 
	./bin/main

clean:
	rm -f build/*.o
	rm -f bin/main
