# Makefile for librkllmrt
# Use with GNU Make or similar

# Compiler options
CXX = g++
CXXFLAGS = -std=c++11 -fPIC -Wall -O2 -g
LDFLAGS = -shared -pthread

# Source and include directories
SRC_DIR = src
INCLUDE_DIR = include
BUILD_DIR = build
EXAMPLES_DIR = examples

# Library name
LIB_NAME = librkllmrt.so
LIB_PATH = $(BUILD_DIR)/$(LIB_NAME)

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))

# Example executable
EXAMPLE_SRC = $(EXAMPLES_DIR)/rkllm_test.cpp
EXAMPLE_BIN = $(BUILD_DIR)/rkllm_test

# Default target
all: directories $(LIB_PATH) $(EXAMPLE_BIN)

# Create build directory
directories:
	mkdir -p $(BUILD_DIR)

# Build the library
$(LIB_PATH): $(OBJS)
	$(CXX) $(LDFLAGS) -o $@ $^

# Compile object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Build the example
$(EXAMPLE_BIN): $(EXAMPLE_SRC) $(LIB_PATH)
	$(CXX) $(CXXFLAGS) -I$(INCLUDE_DIR) $< -L$(BUILD_DIR) -lrkllmrt -o $@

# Install the library
install: $(LIB_PATH)
	cp $(LIB_PATH) /usr/local/lib/
	cp $(INCLUDE_DIR)/rkllm.h /usr/local/include/

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR)/*

.PHONY: all directories install clean
