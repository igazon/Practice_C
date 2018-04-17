#include "myfunctions.h"
char * strtrns (const char *string, const char *old, const char *news, char *result) {
	char *r;
	const char *o;

	for (r = result; *r = *string++; r++)
		for (o = old; *o; )
			if (*r == *o++) {
				*r = news[o - old - 1];
				break;
			}

	return result;
}