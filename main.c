#include <stdio.h>
#include <stdlib.h>
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

	return 0;
}