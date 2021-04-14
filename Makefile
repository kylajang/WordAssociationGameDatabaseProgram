CC := g++
CFLAGS := -Wall -pedantic --std=c++17

# My Variables
	PART1_EXE_NAME := boba
	PART1_EXE_PATH := ./$(PART1_EXE_NAME)
	DEFAULT_DATAFILE_NAME := names.db

# Targets

boba:
	@echo Building $@
	$(CC) $(CFLAGS) main.cpp -o $@ \
		&& chmod +x $@

make:	boba
	$(PART1_EXE_PATH)

clean:
	rm $(PART1_EXE_PATH)

