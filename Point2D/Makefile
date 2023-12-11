CXX = g++
CXXFLAGS = -std=c++11 -Wall
SRC_DIR = .
BIN_DIR = bin
TARGET = $(BIN_DIR)/point2D_main

SRCS = $(wildcard $(SRC_DIR)/*.cc)
OBJS = $(SRCS:$(SRC_DIR)/%.cc=$(BIN_DIR)/%.o)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BIN_DIR)/%.o: $(SRC_DIR)/%.cc
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BIN_DIR)

