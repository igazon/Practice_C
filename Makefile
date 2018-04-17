CC = gcc

CFLAGS=-c -Wall

main: main.o mystrlen.o mymemove.o
	$(CC) main.o myfunctions.h mystrlen.o mymemove.o -o main

main.o: main.c 
	$(CC) $(CFLAGS) main.c

mystrlen.o: mystrlen.c
	$(CC) $(CFLAGS) mystrlen.c

mymemove.o: mymemove.c
	$(CC) $(CFLAGS) mymemove.c

clean:
	rm -rf *.o