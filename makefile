.PHONY: clean all run

BIN_DIR = ./bin
BUILD_DIR = ./bin
SRC_DIR = ./src

all: $(BIN_DIR)/main

$(BIN_DIR)/main: $(BUILD_DIR)/main.o $(BUILD_DIR)/functions.o
	g++ -Wall $(BUILD_DIR)/main.o $(BUILD_DIR)/functions.o -o $(BIN_DIR)/main

$(BUILD_DIR)/main.o:
	g++ -Wall -c $(SRC_DIR)/main.cpp -o $(BUILD_DIR)/main.o

$(BUILD_DIR)/functions.o:
	g++ -Wall -c $(SRC_DIR)/functions.cpp -o $(BUILD_DIR)/functions.o

run: 
	./bin/main

clean:
	rm -f build/*.o
	rm -f bin/main
