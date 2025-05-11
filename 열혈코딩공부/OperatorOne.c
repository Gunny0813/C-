#include <stdio.h>

int main_while(void)
{	
	int total = 0;
	int num = 2;
	do 
	{
		total += num;
		num += 2;
	} while (num < 102);
	
	
	printf("гу╟Х:%d", total); 
	return 0;
	
}