#include <stdio.h>

int ReturnBig(int , int, int);
int ReturnSmall(int, int, int);
double CelToFah(double);
double FahToCel(double);
void Fibonacci(int num);
int main_Function_problem(void)
{
	
	/*int num1, num2, num3;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("%d %d %d중 가장 큰 수는 %d이다\n",num1,num2,num3,ReturnBig(num1,num2,num3));
	printf("%d %d %d중 가장 작은 수는 %d이다\n", num1, num2, num3, ReturnSmall(num1, num2, num3));*/
	/*
	double result = CelToFah(5);
	printf("%f\n", result);
	printf("%f", FahToCel(result));
	*/
	int num;
	scanf_s("%d", &num);
	Fibonacci(num);

	return 0;

}
int ReturnBig(int num1,int num2,int num3)
{
	if(num1>num2)
	{
		if(num1>num3)
		{
			return num1;
		}
		else
		{
			return num3;
		}
	}
	else
	{
		if (num2 > num3)
		{
			return num2;
		}
		else
		{
			return num3;
		}
	}
}
int ReturnSmall(int num1, int num2, int num3)
{
	if (num1 < num2)
	{
		if (num1 < num3)
		{
			return num1;
		}
		else
		{
			return num3;
		}
	}
	else
	{
		if (num2 < num3)
		{
			return num2;
		}
		else
		{
			return num3;
		}
	}
}
double CelToFah(double num)
{
	return (num * 1.8 + 32);
}
double FahToCel(double num)
{
	return (num - 32) / 1.8;
}
void Fibonacci(int num)
{
	int num1 = 0;
	int num2 = 1;
	int num3;
	printf("%d %d ", num1, num2);
	for (int i = 2; i < num; i++) {
		num3 = num1 + num2;
		num1 = num2;
		num2 = num3;
		printf("%d ", num3);
	}
	
}

