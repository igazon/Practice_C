CC = gcc

CFLAGS=-c -Wall

main: main.o mystrlen.o mymemove.o strtrns.o
	$(CC) main.o myfunctions.h mystrlen.o mymemove.o strtrns.o -o main

main.o: main.c 
	$(CC) $(CFLAGS) main.c

mystrlen.o: mystrlen.c
	$(CC) $(CFLAGS) mystrlen.c

mymemove.o: mymemove.c
	$(CC) $(CFLAGS) mymemove.c

strtrns.o: strtrns.c
	$(CC) $(CFLAGS) strtrns.c

clean:
	rm -rf *.o