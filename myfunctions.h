#ifndef BIBLE
#define BIBLE
#include <stdio.h>
#include <stdlib.h> /* for size_t */
#include <stddef.h> /* for memcpy */
#endif
size_t mystrlen(const char *str);
void * mymemove (void *dest, const void *sourse, size_t len);	
char * strtrns (const char *string, const char *old, const char *new, char *result);
int ispower2(int value);
int pow2(int p);
int fact(int n);
int nz_bits(int n);