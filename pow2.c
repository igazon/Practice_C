#include "myfunctions.h"

int pow2(int p) {
	if (p > 0) return (2<<(p-1));
	else if (p < 0) return (2>>p); // ???? 
	else if (p == 0) return 1;
	// return (int) (2<<p); not correct
}