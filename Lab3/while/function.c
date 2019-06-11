#include <math.h>

double function(int i) {
	return  pow(-1, i) * ((double)(pow(i, 2) + 1) / (double)(pow(i, 3) + 3));
}