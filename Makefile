#recipes
VPATH = src
SDIR = src
CC = g++
CFLAGS = -std=c++11 #-Wall

#targets
main: main.o task.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) -c $^

task.o: task.cpp
	$(CC) $(CFLAGS) -c $^

.PHONY: clean

clean:
	rm -f *o *out $(SDIR)/*out main
