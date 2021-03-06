CC = g++
CFLAGS = -std=c++11

SOURCES = main.cpp
DEPS = config.h engine.h helpers.h mesh.h point.h rect.h
FILES = $(SOURCES) $(DEPS)

LINKER_FLAGS = -lglfw3 -lGL -lX11 -lXi -lXrandr -lXxf86vm -lXinerama -lXcursor -lrt -lm -pthread

OBJS = $(FILES:.cpp=.o)

LINUX_BIN = run

#Compile(output into error.txt if there is an error), link, then run
linux:
	$(CC) $(CFLAGS) -c $(FILES) 2> "errors.txt"
	$(CC) $(CFLAGS) $(OBJS) -o $(LINUX_BIN) $(LINKER_FLAGS)
