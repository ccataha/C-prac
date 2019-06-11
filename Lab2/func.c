#include <math.h>
double f(double x) {
	if (x > 0)
		return log(x) + 9;
	else if (x = -sqrt(7))
		return 0;
	else if (x <= 0 && x != -sqrt(7))
		return -(x / (pow(x, 2) - 7));
}