#include "myfunctions.h"

int ispower2(int value){
	// return value|(value<<1);
	return !(value&(value-1)); 
}