#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main(void)
{
	int arr[5][5];
	for (int i = 0; i < 4; i++) {
		int sum = 0;
		for (int j = 0; j < 4; j++) {
			scanf("%d", &arr[i][j]);
			sum += arr[i][j];
		}
		arr[i][4] = sum;
	}
	for (int  p= 0;  p< 5; p++) {
		int sum = 0;
		for (int q = 0; q < 4; q++) {
			sum += arr[q][p];
		}
		arr[4][p] = sum;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
}