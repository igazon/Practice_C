#include "myfunctions.h"

int main(int argc, char const *argv[]) {
	// Hello World in C!
	printf("%s\n", "Hello World in C!");
	
	//1. strlen
	char str1[16] = "Hello!";
	char * str2 = "Another string";
	printf("Length of str1: %lu\n", mystrlen(str1));
	printf("Length of str2: %lu\n", mystrlen(str2));
	printf("Custom length: %lu\n", mystrlen(str2 + 7));

	// 2. mymemove
	char buffer[32] = "\0\0\0\0My string";
	char *buf1 = buffer + 4;
	char *buf2 = buffer;
	char *buf3 = buffer + 2;
	printf("Copy left: %s\n", mymemove(buf2, buf1, mystrlen(buf1) + 1));
	printf("Copy right: %s\n", mymemove(buf3, buf2, mystrlen(buf2) + 1));
	
	// 3. strtrns
	char string[64] = "sample text";
	const char * old_symbols = "st";
	const char * new_symbols = "ST";

	printf("Converted text: %s\n", strtrns(string, old_symbols, new_symbols, string));

	old_symbols = "abcdefghijklmnopqrstuvwxyz";
	new_symbols = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("Another text: %s\n", strtrns("Another example", old_symbols, new_symbols, string));

	new_symbols = "bcdefghijklmnopqrstuvwxyza";
	printf("Encrypted text: %s\n", strtrns("secret message", old_symbols, new_symbols, string));	
	printf("Decrypted text: %s\n", strtrns(string, new_symbols, old_symbols, string));

	// ispower2
	int val1 = 16;
	int val2 = 14;
	int val3 = -16;
	float val4 = 0.5;
	printf("val1: %d\n", ispower2(val1));
	printf("val2: %d\n", ispower2(val2));
	printf("val3: %d\n", ispower2(val3));
	printf("val4: %d\n", ispower2(val4));

	// pow2
	int pow5 = 2;
	printf("pow5: %d\n", pow2(pow5)); 
	int pow6 = -1;
	printf("pow6: %d\n", pow2(pow6)); 
	printf("pow6: %d\n", pow2(0)); 
	printf("pow6: %d\n", pow2(10)); 
	printf("pow6: %d\n", pow2(-3)); 

	// fact
	printf("factorial: %d\n", fact(4));	
	printf("factorial: %d\n", fact(-4));	

	// sum_digit
	printf("sum_digit: %d\n", sum_digit(123)); 	
	printf("sum_digit: %d\n", sum_digit(1235));
	
	// nz_bits
	printf("nz_bits: %d\n", nz_bits(15121)); 	// 7
	printf("nz_bits: %d\n", nz_bits(10));	// 2
	printf("nz_bits: %d\n", nz_bits(1));	// 1
	printf("nz_bits: %d\n", nz_bits(2));	// 1
	printf("nz_bits: %d\n", nz_bits(3));	// 2
	printf("nz_bits: %d\n", nz_bits(4));	// 1
	printf("nz_bits: %d\n", nz_bits(5));	// 5
	printf("nz_bits: %d\n", nz_bits(6));	// 6
	printf("nz_bits: %d\n", nz_bits(7));	// 3
	printf("nz_bits: %d\n", nz_bits(8));	// 8

	//
	return 0;
}