#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int num1;
	scanf_s("%d", &num1);
	int arr[32];
	int i = 0;
	int j;
	
	while (num1 >= 1) 
	{
		arr[i] = num1 % 2;
		i++;
		num1 /= 2;

	}
	for (j = i - 1; j >= 0; j--) 
	{
		printf("%d", arr[j]);
	}
	
	return 0;
}

