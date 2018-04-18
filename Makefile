CC = gcc

CFLAGS=-c -Wall

main: main.o mystrlen.o mymemove.o strtrns.o ispower2.o pow2.o fact.o sum_digit.o nz_bits.o
	$(CC) main.o myfunctions.h mystrlen.o mymemove.o strtrns.o ispower2.o pow2.o fact.o sum_digit.o nz_bits.o -o main

main.o: main.c 
	$(CC) $(CFLAGS) main.c

mystrlen.o: mystrlen.c
	$(CC) $(CFLAGS) mystrlen.c

mymemove.o: mymemove.c
	$(CC) $(CFLAGS) mymemove.c

strtrns.o: strtrns.c
	$(CC) $(CFLAGS) strtrns.c

ispower2.o: ispower2.c
	$(CC) $(CFLAGS) ispower2.c

pow2.o: pow2.c
	$(CC) $(CFLAGS) pow2.c

fact.o: fact.c
	$(CC) $(CFLAGS) fact.c

sum_digit.o: sum_digit.c
	$(CC) $(CFLAGS) sum_digit.c

nz_bits.o: nz_bits.c
	$(CC) $(CFLAGS) nz_bits.c

clean:
	rm -rf *.o