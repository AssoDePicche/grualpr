CC    = gcc
FLAGS = -Wall -O
SRC   = $(wildcard ./src/*/*.c)
OUT   = ./bin/app

default: compile run

compile:
	$(CC) $(FLAGS) $(SRC) -o $(OUT)
run:
	$(OUT)

clean:
	rm $(OUT)
