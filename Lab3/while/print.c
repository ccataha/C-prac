#include <stdio.h>
#include "functions.h"
void print(int n, int k) {
	double a = 0;
	int l = 0;
	int i = 0;

	while (1)
	{
		a = pow(-1, i) * ((double)(pow(i, 2) + 1) / (double)(pow(i, 3) + 3));

		l += 1;
		if (l == k)
		{
			l = 0;
			++i;
			continue;
		}

		printf("%.4f\n", a);

		n = n - 1;
		if (n == 0)
			break;

		++i;
	}
}