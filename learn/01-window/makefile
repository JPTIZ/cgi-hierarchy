# Project settings
OUTPUT := $(shell basename $(CURDIR))

# Rules
SOURCES := $(wildcard *.cpp)
OBJECTS := $(patsubst %.cpp,%.o,$(SOURCES))

.PHONY: default clean

%.o: %.cpp
	g++ -c $^ -L /usr/include/GL/glut.h

default: $(OBJECTS)
	g++ -o $(OUTPUT) $(OBJECTS) -l GL -l glut -L /usr/include/GL/glut.h

clean:
	rm -f $(OUTPUT) $(OBJECTS)
