#include <stdio.h>
#include <math.h>
void main() {
	double x = 5;
	printf("x=%lf\n", x);
	printf("f(x)=%lf\n", func(x));
	printf("Input x:\n");
	scanf("%lf", &x);
	printf("x=%lf\n", x);
	printf("f(x)=%lf\n", func(x));
}
double f(double x) {
	double res;
	res = -sqrt(x);
	return res;
}