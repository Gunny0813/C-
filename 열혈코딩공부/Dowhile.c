#include <stdio.h>

int main_DoWhile(void)
{
	
	
	
	
	
	int total = 0;
	int num = 2;
	do
	{
		total += num;
		num += 2;
	} while (num < 102);


	printf("гу╟Х:%d", total);
	
	
	
	
	
	
	
	
	
	
	
	
	
	int num1 = 2;
	int num2;
	
	do
	{
		num2 = 1;
		do
		{
			printf("%d X %d = %d\n", num1, num2, num1 * num2);
			num2++;
		} while (num2 < 10);
		num1++;
	} while (num1 < 10);

	
	return 0;

}


