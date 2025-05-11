#include <stdio.h>

int main_challange4(void)
{
	int  Left = 3500;
	int Cream = 500;
	int Shrimp = 700;
	int Cola = 400;

	printf("현재 당신이 소유하고 있는 금액:%d  \n", Left);

	for(int i=1;i<5;i++)
	{
		for (int j = 1; j < 4; j++)
		{
			for (int q = 1; q < 6; q++)
			{
				if(Cream*i+Shrimp*j+Cola*q==3500)
				{
					printf("크림빵:%d  새우깡:%d  콜라:%d\n", i, j, q);
				}
			}
		}
	}






	return 0;
}