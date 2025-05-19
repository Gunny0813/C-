#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main(void)
{
	int A[2][4] = { {1,2,3,4},{5,6,7,8} };
	int B[4][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			B[j][i] = A[i][j];
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", B[j][i]);
		}
	}
	

}