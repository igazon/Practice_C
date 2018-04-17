CC = gcc

CFLAGS=-c -Wall

main: main.o mystrlen.o
	$(CC) main.o myfunctions.h mystrlen.o -o main

main.o: main.c 
	$(CC) $(CFLAGS) main.c

mystrlen.o: mystrlen.c
	$(CC) $(CFLAGS) mystrlen.c

clean:
	rm -rf *.o