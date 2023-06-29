
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

sum-two-ints: sum-two-ints.o
	$(CC) $(CFLAGS) -o sum-two-ints sum-two-ints.o

sum-two-ints.o: sum-two-ints.cpp
	$(CC) $(CFLAGS) -c sum-two-ints.cpp

clean:
	rm -rf sum-two-ints sum-two-ints.o
