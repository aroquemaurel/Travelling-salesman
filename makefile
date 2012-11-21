SRC=src
LIB=lib
BIN=bin
TEST=tests
CFLAGS= -Wall -g -I lib 
EXE=voyageurDeCommerce

# Programme principal
$(EXE): $(BIN)/main.o $(BIN)/util.o
	gcc -o $(EXE) $(BIN)/main.o $(BIN)/util.o
$(BIN)/main.o: $(SRC)/main.c 
	gcc -o $(BIN)/main.o -c $(SRC)/main.c $(CFLAGS)
$(BIN)/util.o: $(SRC)/util.c 
	gcc -o $(BIN)/util.o -c $(SRC)/util.c $(CFLAGS)

# Tests unitaires de util.c
$(BIN)/mainUnitTests.o: $(TEST)/mainUnitTests.c
	gcc -o $(BIN)/mainUnitTests.o -c $(TEST)/mainUnitTests.c
$(BIN)/testUtil.o: $(TEST)/testUtil.c
	gcc -o $(BIN)/testUtil.o -c $(TEST)/testUtil.c
$(BIN)/fctTestUnitaire.o: $(TEST)/fctTestUnitaire.c
	gcc -o $(BIN)/fctTestUnitaire.o -c $(TEST)/fctTestUnitaire.c
unitTests: $(BIN)/mainUnitTests.o $(BIN)/testUtil.o $(BIN)/fctTestUnitaire.o $(BIN)/util.o
	gcc -o unitTests $(BIN)/mainUnitTests.o $(BIN)/testUtil.o $(BIN)/fctTestUnitaire.o $(BIN)/util.o

clean:
	rm -rfv $(BIN)/*.o

all: $(EXE) 

tarball: 
	tar -jcvf voyageurDeCommerce.tar.bz2 ./$(BIN) ./$(TEST) ./$(EXE) ./$(LIB) ./$(SRC) makefile
