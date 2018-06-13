# Project settings
OUTPUT  := $(shell basename $(CURDIR))

LIBS    := GL glut GLU
LIBDIRS := /usr/include/GL/glut.h

# Rules
SOURCES := $(wildcard *.cpp)
OBJECTS := $(patsubst %.cpp,%.o,$(SOURCES))

LIBS    := $(addprefix -l,$(LIBS))
LIBDIRS := $(addprefix -L,$(LIBDIRS))

.PHONY: default clean

%.o: %.cpp
	g++ -c $^ -L /usr/include/GL/glut.h

default: $(OBJECTS)
	g++ -o $(OUTPUT) $(OBJECTS) $(LIBS) $(LIBDIRS)

clean:
	rm -f $(OUTPUT) $(OBJECTS)
