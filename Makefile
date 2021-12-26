#recipes
VPATH = src
SDIR = src
CC = g++
CFLAGS = -std=c++11 #-Wall

#targets
main: main.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.cpp
	$(CC) $(CFLAGS) -c $^
