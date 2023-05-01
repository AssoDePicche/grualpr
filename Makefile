FILENAME       = hello
COMPILER       = gcc
COMPILER_FLAGS = -Wall

default: compile run

compile:
	$(COMPILER) ./src/$(FILENAME).c $(COMPILER_FLAGS) -o ./build/$(FILENAME)

run:
	./build/$(FILENAME)

clean:
	rm -rf ./build/*
