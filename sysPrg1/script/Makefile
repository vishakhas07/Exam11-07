

CC = g++
CPPFLAGS = -c -Wall
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/

all:hello

hello: $(OBJ)sysPrg.o
	$(CC) -o hello $(OBJ)sysPrg.o
	mv hello $(BIN) 

$(OBJ)sysPrg.o: $(SRC)sysPrg.cpp
	$(CC) $(CPPFLAGS) $(SRC)sysPrg.cpp -I $(INCLUDE)
	mv sysPrg.o $(OBJ)

clean:
	rm -f a.out hello *.o
	rm -f $(OBJ)*.o
	rm -f $(BIN)hello
	







