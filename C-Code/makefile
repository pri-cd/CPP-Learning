CXX := gcc
SRCDIR := ./
BINDIR := ./bin

# Find all .cpp files in the source directory
SRCS := $(wildcard $(SRCDIR)/*.c)

# Generate the names of the output files
BINS := $(patsubst $(SRCDIR)/%.c,$(BINDIR)/%.out,$(SRCS))

# Default target
all: $(BINS)

# Rule to compile each source file
$(BINDIR)/%.out: $(SRCDIR)/%.c
	$(CXX) -o $@ $<

# Clean target to remove all generated binaries
clean:
	rm -f $(BINS)
