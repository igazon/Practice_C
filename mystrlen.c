#include "myfunctions.h"
#include "string.h"

size_t mystrlen(const char *str) {
	unsigned int size = 0;
	while (*str != '\0') {
		size++;
		str++;
	}

	return size;
}
