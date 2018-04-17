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
	return 0;
}