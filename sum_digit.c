#include "myfunctions.h"

int sum_digit(int n) {
	if (n >= 1) return (n % 10) + sum_digit(n / 10);
	else return 0;
}