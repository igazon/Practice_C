#include "myfunctions.h"

int nz_bits(int n){
	if (n == 0) return 0;
	else if(n > 0) return n % 2 + nz_bits(n/2);
}