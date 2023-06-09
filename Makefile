FILENAME           = main
COMPILER           = gcc
COMPILER_FLAGS     = -Wall -O
SRC                = ./src/
OUT                = ./bin/

default: compile run

compile:
	$(COMPILER) $(SRC)$(FILENAME).c $(COMPILER_FLAGS) -o $(OUT)$(FILENAME)

run:
	$(OUT)$(FILENAME)

clean:
	rm -rf $(OUT)*.exe
