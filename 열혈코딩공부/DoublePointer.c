#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void MaxAndMin(int arr[],int size,int**mxptr,int**mnptr)
{
	int* max, * min;
	int i;

	max = &arr[0];
	min = &arr[0];
	for (i = 0; i < size; i++) {
		if (*max < arr[i]){
			max = &arr[i];
		}
		if (*min > arr[i]) {
			min = &arr[i];
		}
	}

	*mxptr = max;
	*mnptr = min;

}


int main(void){
	int* maxptr;
	int* minptr;
	int arr[5];
	int i;
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxptr, &minptr);
	printf("%d %d", *maxptr, *minptr);
	return 0;
}

