FILENAME           = hello
COMPILER           = gcc
COMPILER_FLAGS     = -Wall -O -I$(INCLUDE_DIR)
INCLUDE_DIR        = vendor
DEPENDENCIES_FILES = ./vendor/unity/unity.c

default: compile test clean

compile:
	$(COMPILER) ./src/$(FILENAME).c $(COMPILER_FLAGS) -o ./build/$(FILENAME)

test:
	$(COMPILER) ./tests/$(FILENAME).spec.c $(DEPENDENCIES_FILES) $(COMPILER_FLAGS) -o ./build/$(FILENAME).spec.exe
	./build/$(FILENAME).spec.exe

run:
	./build/$(FILENAME)

clean:
	rm -rf ./build/*
