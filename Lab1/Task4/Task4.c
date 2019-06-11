#include <stdio.h>
#include <math.h>
double x, result;
void main() {
	x = 1.2;
	printf("x=%lf\n", x);
	printf("f(x)=%lf\n", f());
	printf("Input x:\n");
	scanf("%lf", &x);
	printf("x=%lf\n", x);
	printf("f(x)=%lf\n", f());
}
void f(void) {
	result = -sqrt(x);
}