#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main_challenge_part2_5(void)
{
	int arr[4] = { 3,2,4,1 };
	BubbleSort(arr, sizeof(arr) / sizeof(int));

}

BubbleSort(int arr[],int len)
{
	int i, j;
	int temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < (len - i) - 1; j++)
		{
			temp = arr[j];
			if (arr[j] > arr[j + 1])
			{ 
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int p = 0; p < 4; p++)
	{
		printf("%d", arr[p]);
	}
}