#include <stdio.h>
#define N 5

void writeArray(int* arr, int n) {

	for (int* cur = arr; cur - arr < n; ++cur) {
		printf("%d ", *cur);
	}

	printf("\n");
}

void readArray(int* arr, int n){

	for (int* cur = arr; cur - arr < n; ++cur) {
		printf("Enter arr[%d]:\n", cur-arr);
		scanf("%d", cur);
	}

}

//Shell sort
void sort(int* arr, int n) 
{
	int i, j, step;
	int tmp;
	for (step = n / 2; step > 0; step /= 2)
	{

		for (i = step; i < n; i++)
		{
			tmp = *(i);
			for (j = i; j >= step; j -= step)
			{
				if (tmp < *(j - step))
					*(j) = *(j - step);
				else
					break;
			}
			*(j) = tmp;
		}

void sortStackArray(void) {
	printf("%d\n", N);
	int arr[N];
	readArray(&arr, N);
	writeArray(&arr, N);
	sort(&arr, N);
	writeArray(&arr, N);
}