#include <stdio.h>
//for문 연습
int main_For(void)
{	
	//0부터 num까지 총합
	/*int total = 0;
	int i, num;
	printf("0부터 num까지의 덧셈, num은?");
	scanf_s("%d", &num);
	for(i=0;i<num+1;i++)
	{
		total += i;
	}
	printf("0부터 num까지의 덧셈:%d", total);*/


	//실수평균
	/*
	double total = 0.0;
	double input = 0.0;
	int num = 0;
	for(; input>=0.0;)
	{
		total += input;
		printf("실수입력:");
		scanf_s("%lf", &input);
		num++;
	
	}
	printf("평균:%f", total / (num-1));
	*/

	/*
	int num1, num2,total;
	scanf_s("%d %d", &num1, &num2);
	for(total=0;num1<=num2;num1++)
	{
		total += num1;
	}
	printf("총합%d", total);
	*/

	/*
	int num;
	int factorial = 1;
	scanf_s("%d", &num);
	for(int i =1;i<=num;i++)
	{
		factorial *= i;
	
	}
	printf("%d펙토리얼을 %d", num, factorial);
	*/
	return 0;

}


