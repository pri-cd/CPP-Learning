# Specify the compiler and its flags
CC = gcc
CFLAGS = -std=c11 -Wall

# Define source and bin directories
SRC_DIR = .
BIN_DIR = bin

# Find all .c files in the source directory
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Generate executable names (remove the path and extension)
EXE_NAMES = $(notdir $(basename $(SRCS)))

# Target: build all executables
all: $(EXE_NAMES)

# Rule to build individual executables
$(EXE_NAMES): %: $(SRC_DIR)/%.c | $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $(BIN_DIR)/$@

# Create the bin directory
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Clean up generated executables
clean:
	rm -rf $(BIN_DIR)

# Declare 'clean' as a phony target
.PHONY: clean
