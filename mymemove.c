#include "myfunctions.h"
#include <stddef.h> /* for memcpy */

void * mymemove (void *dest, const void *sourse, size_t len) {
	unsigned char tmp[len];
	memcpy(tmp, sourse, len);
	memcpy(dest, tmp, len);
	return dest;
}