OBJECTS = src/main.cpp
EXEC = bin/bdisch
CXXFLAGS = -Wall
CXX = g++

all: $(OBJECTS)
	$(CXX) -g -std=c++11 $(CXXFLAGS) -o $(EXEC) $(OBJECTS)
