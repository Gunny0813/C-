#include<stdio.h>

int Add(int num1, int num2)
{
	//인자전달(o) 반환값(o) 
	int result = num1 + num2;
	return result;
}
void ShowAddResult(int num)
{
	//인자전달(o) 반환값(x) 
	printf("덧셈결과 출력: %d\n", num);
}
int ReadNum(void)
{
	//인자전달(x) 반환값(o) 
	int num;
	scanf_s("%d", &num);
	return num;
}
void HowToUseThisProg(void)
{
	printf("두개의 정수를 입력하시면 덧셈결과가 출력됩니다\n");
	printf("자! 그럼 두개의 정수를 입력하세요\n");
}

int NumberCompare(int num1, int num2);
int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);


int main_function(void)
{
	/*
	int num1, num2;
	num1 = printf("12345\n");
	num2 = printf("I love my home\n");
	printf("%d %d \n", num1, num2);
	*/
	/*
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	*/
	/*
	printf("3과 4중에서 큰 수는 %d이다.\n", NumberCompare(3, 4));
	printf("7과 2중에서 큰 수는 %d이다.\n", NumberCompare(7, 2));
	*/
	int num1, num2;
	printf("두개의 정수 입력:");
	scanf_s("%d %d", &num1, &num2);
	printf("%d와 %d중 절댓값이 큰 정수: %d\n",num1,num2,AbsoCompare(num1,num2));
	return 0;
}

int NumberCompare(int num1,int num2)
{
	if (num1 > num2)
	{
		return num1;
	}
	else
		return num2;

}
int AbsoCompare(int num1,int num2)
{
	if(GetAbsoValue(num1)>GetAbsoValue(num2))
	{
		return num1;
	}
	else
	{
		return num2;
	}

}
int GetAbsoValue(int num)
{
	if(num<0)
	{
		return num * (-1);
	}
	else
	{
		return num;
	}
}