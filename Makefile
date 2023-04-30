FILENAME       =
COMPILER       = gcc
COMPILER_FLAGS = -Wall

default: compile run

compile:
	$(COMPILER) $(FILENAME).c $(COMPILER_FLAGS) -o $(FILENAME).exe

run:
	./$(FILENAME).exe

clean:
	rm -f ./src/*/*.exe
	rm -f ./tests/*/*.exe
