CC=gcc
FLAGS=-Wall -g
# FILENAME_MAIN=01--print-horizontal-histogram-of-length-of-words-using-function-pointers
FILENAME_MAIN=02--arrays-of-function-pointers
FILENAME_LIB=01--print-horizontal-histogram-of-length-of-words-using-function-pointers
EXECUTABLE=$(FILENAME_MAIN).out

all: build run

build:
$(CC) $(FLAGS) -c $(FILENAME_MAIN).c -o $(FILENAME_MAIN).o
$(CC) $(FLAGS) -c $(FILENAME_LIB).c -o $(FILENAME_LIB).o
$(CC) $(FLAGS) $(FILENAME_MAIN).o $(FILENAME_LIB).o -o $(EXECUTABLE)

run:
./$(EXECUTABLE)

clean:
rm -fr $(EXECUTABLE) *.o *.dSYM
