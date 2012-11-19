SRC=src
LIB=lib
BIN=bin
TEST=tests/
CFLAGS= -Wall -g -I lib 
EXE=voyageurDeCommerce


main: $(BIN)/main.o $(BIN)/util.o
	gcc -o $(EXE) $(BIN)/main.o $(BIN)/util.o $(CFLAGS)

$(BIN)/main.o: $(SRC)/main.c 
	gcc -o $(BIN)/main.o -c $(SRC)/main.c $(CFLAGS)

$(BIN)/util.o: $(SRC)/util.c 
	gcc -o $(BIN)/util.o -c $(SRC)/util.c $(CFLAGS)

clean:
	rm -rfv $(BIN)/*.o

all: main

tarball: 
	tar -jcvf voyageurDeCommerce.tar.bz2 ./$(BIN) ./$(TEST) ./$(EXE) ./$(LIB) ./$(SRC) makefile
