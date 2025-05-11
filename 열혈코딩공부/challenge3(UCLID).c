#include<stdio.h>
int UCLID(int num1, int num2);
int main_UCLID(void)
{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	printf("%d",UCLID(num1, num2));






	return 0;
}
int UCLID(int num1, int num2)
{
	int GCD;
	if(num1>num2)
	{
		int R = num1 % num2;
		if (R == 0) 
		{
			return num2;
		}
		UCLID(num2, R);
	
	}
	else
	{
		int R = num2 % num1;
		if (R == 0)
		{
			return num1;
		}
		UCLID(num1, R);
	}



}