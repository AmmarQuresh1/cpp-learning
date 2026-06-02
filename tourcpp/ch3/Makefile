# 1. compiler and flags
CXX := g++
CXXFLAGS := -O0 -std=c++23 -Wall -Wextra -fmodules

# 2. Automatically find all .cpp files in the current dir
SRCS := $(wildcard *.cc)

# 3. Convert list of src files into executable targets
TARGETS := $(SRCS:.cc=)

# Declare phony targets
.PHONY: all clean

# compiles every single executable found
all:$(TARGETS)

# 4. The pattern rule
%: %.cc
	$(CXX) $(CXXFLAGS) $< -o $@

#5. clean rule to clear all compiled binaries
clean:
	rm -f $(TARGETS)
