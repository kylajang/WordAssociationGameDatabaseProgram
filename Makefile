CC := g++
CFLAGS := -Wall -pedantic -g --std=c++17

# My Variables
	PART1_EXE_NAME := project1
	PART1_EXE_PATH := ./$(PART1_EXE_NAME)
	DEFAULT_DATAFILE_NAME := words.db

# Targets
default:	boba

boba:	$(PART1_EXE_PATH)
	@echo "Building $@"
	$(PART1_EXE_PATH) "$(DEFAULT_DATAFILE_NAME)"

$(PART1_EXE_PATH):	main.cpp
	@echo "Compiling $@"
	$(CC) $(CFLAGS) main.cpp -o $@ \
		&& chmod +x $@

clean:
	-rm $(PART1_EXE_PATH)
