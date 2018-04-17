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
	return 0;
}