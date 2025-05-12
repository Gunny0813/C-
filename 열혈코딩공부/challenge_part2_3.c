#include<stdio.h>

int main(void) {
	int arr1[10];
	int arr2[10];
	int i = 0;
	int j = 9;
	for (int p = 0; p < 10; p++) 
	{
		scanf_s("%d", &arr1[p]);
		if (arr1[p] % 2 == 0) {
			arr2[j] = arr1[p];
			j--;
		}
		else
		{
			arr2[i] = arr1[p];
			i++;
		}
	}
	for (int p = 0; p < 10; p++) {
		printf("%d ", arr2[p]);
	}
}