CXX = g++ 								
CXXFLAGS = -std=c++17 -Wall -Wextra

INCLUDES = -Iinclude


SRCDIR = src
OBJDIR = obj

# wildcard: This is a built-in make function that finds all files matching a given pattern.
SRCFIL = $(wildcard $(SRCDIR/*.cpp))
OBJFIL = $(wildcard $(OBJDIR/%.cpp, $OBJDIR/%.o, $(SRCS)))

TARGET = app 


all: $(TARGET)

$(TARGET): %(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@