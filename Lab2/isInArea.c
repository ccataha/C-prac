#include <math.h>
_Bool isInArea(double x, double y) {
	if ((abs(x) <= abs(y)) && (abs(x) < 1 && abs(y) < 1))
		return 1;
	else
		return 0;
}