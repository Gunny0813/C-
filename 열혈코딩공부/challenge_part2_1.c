#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void oddnum(int arr[10]);
void evennum(int arr[10]);
int main_challenge_part2_1()
{
	
	printf("총 10개의 숫자 입력");
	int arr[10];
	for (int i = 0; i < 10; i++) 
	{
		scanf_s("%d", &arr[i]);
		//
	}
	evennum(arr);
	oddnum(arr);
	return 0;
}

void evennum(int arr[10])
{
	int even[10];
	int j = 0;
	for (int i = 0; i < 10; i++) 
	{
		if(arr[i]%2==0)
		{
			even[j] = arr[i];
			j++;
		}
	}

	for(int i =0;i<j;i++)
	{
		printf("%d ", even[i]);
	}
	printf("\n");
}

void oddnum(int arr[10])
{
	int odd[10];
	int j = 0;
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 != 0 )
		{
			odd[j] = arr[i];
			j++;
		}
	}

	for (int i = 0; i < j; i++)
	{
		printf("%d ", odd[i]);
	}
	printf("\n");
}