#include<stdio.h>

int main_challange5(void)
{	
	int prime = 0;
	int start = 2;
	while(1)
	{
		int Divisor = 0;
		for(int i = 1;i<start+1;i++)
		{
			if(start%i==0)
			{
				Divisor++;
			}
		
		}
		if(Divisor==2)
		{
			printf("%d ", start);
			prime++;
		}
		start++;
	
		if(prime ==10)
		{
			break;
		}
	

	}




	return 0;
}