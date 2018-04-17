#include "myfunctions.h"

void * mymemove (void *dest, const void *sourse, size_t len) {
	unsigned char tmp[len];
	memcpy(tmp, sourse, len);
	memcpy(dest, tmp, len);
	return dest;
}