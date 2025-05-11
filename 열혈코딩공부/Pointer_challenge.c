#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Swap3(int * num1,int *num2,int *num3)
{
	int temp1 = *num1;
	*num1 = *num2;
	*num2 = *num3;
	*num3 = temp1;

}

int main_Pointer_challenge(void)
{
	int num1, num2, num3;
	num1 = 10;
	num2 = 20;
	num3 = 30;
	printf("%d %d %d\n", num1, num2, num3);
	Swap3(&num1, &num2, &num3);
	printf("%d %d %d", num1, num2, num3);
	return 0;
}

