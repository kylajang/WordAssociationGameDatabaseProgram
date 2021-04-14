CC := g++
CFLAGS := -Wall -pedantic --std=c++17

# My Variables
	PART1_EXE_NAME := project1
	PART1_EXE_PATH := ./$(PART1_EXE_NAME)
	DEFAULT_DATAFILE_NAME := words.db

# Targets

project1:
	@echo Building $@
	$(CC) $(CFLAGS) main.cpp -o $@ \
		&& chmod +x $@

make:	project1
	$(PART1_EXE_PATH)

clean:
	rm $(PART1_EXE_PATH)

