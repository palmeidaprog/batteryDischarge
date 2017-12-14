OBJECTS = src/main.cpp src/batteryworkers.cpp
EXEC = bin/bdisch
CXXFLAGS = -Wall
CXX = g++

all: $(OBJECTS)
	$(CXX) -g -pthread -std=c++11 $(CXXFLAGS) -o $(EXEC) $(OBJECTS)
