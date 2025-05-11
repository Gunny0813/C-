#include <stdio.h>


void Recursive(int num)
{
	if (num <= 0)
		return;
	printf("Recursive call! %d\n", num);
	Recursive(num - 1);
	
}


int main_Re(void)
{
	Recursive(3);
	return 0;

}