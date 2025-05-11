#include <stdio.h>

int main_if(void)
{
	/*int num;
	printf("정수 입력:");
	scanf_s("%d", &num);
	if(num>0)
	{
		printf("0보다 큼");
	}
	if(num<0)
	{
		printf("0보다 작음");
	}
	if(num==0)
	{
		printf("0임");
	}*/
	

	/*
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈  2.뺄셈  3.곱셈  4.나눗셈\n");
	printf("선택?");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력");
	scanf_s("%lf %lf", &num1, &num2);
	
	if(opt==1)
	{
		result = num1 + num2;
	}
	if (opt == 2)
	{
		result = num1 - num2;
	}
	if (opt == 3)
	{
		result = num1 * num2;
	}
	if (opt == 4)
	{
		result = num1 / num2;
	}

	printf("%f", result);
	*/

	/*
	int num;
	for (num = 1; num <= 100; num++)
	{
		if(num%3==0 || num%4==0)
		{
			printf("3의 배수 또는 4의 배수:%d\n", num);
		}
	}
	*/
	/*
	int num;
	printf("정수입력:");
	scanf_s("%d", &num);
	if(num<0)
	{
		printf("0보다 작음");
	}
	else
	{
		printf("입력값이 0보다 작지않다");
	}
	*/
	/*
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈  2.뺄셈  3.곱셈  4.나눗셈\n");
	printf("선택?");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
	{
		result = num1 + num2;
	}
	else if (opt == 2)
	{
		result = num1 - num2;
	}
	else if (opt == 3)
	{
		result = num1 * num2;
	}
	else 
	{
		result = num1 / num2;
	}

	printf("%f", result);
	*/

	/*
	int num, abs;
	printf("정수 입력:");
	scanf_s("%d",&num);

	abs = num > 0 ? num : num * (-1);
	printf("절댓값:%d", abs);
	새로운 연산자 ? : 
	*/
	/*
	for(int i =1;i<100;i++)
	{
		if(i%7==0 || i%9==0)
		{
			printf("%d\n", i);
		}
	}
	*/
	/*
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	if(num1>num2)
	{
		printf("%d -%d = %d", num1, num2, num1 - num2);

	}
	else 
	{
		printf("%d-%d = %d", num2, num1, num2 - num1);
	}
	*/
	/*
	int a, b, c, d,num;
	scanf_s("%d %d %d %d", &a, &b, &c, &d);
	num = (a + b + c + d)/4;
	if(num>=90)
	{
		printf("A");
	}
	else if(num>=80)
	{
		printf("B");
	}
	else if(num>=70)
	{
		printf("C");
	}
	else if(num>=50)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
	*/
	/*
	int num1, num2,num3;
	scanf_s("%d %d", &num1, &num2);
	num3 = num1 > num2 ? num1 - num2 : num2 - num1;
	printf("%d", num3);
	*/



	return 0;

}


