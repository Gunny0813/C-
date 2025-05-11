#include<stdio.h>
/* Multiply();*/
int MX();

int main_challenge123(void)
{
	
	int A, B;
	scanf_s("%d %d", &A, &B);
	printf("%d",MX(A, B));

	
	
	
	
	
	/*
	int num1, num2;
	scanf_s("%d %d",&num1,&num2);
	Multiply(num1, num2);
	*/

	
	
	
	/*
	int num;
	int position=0;
	char ch[20] = { 0, };
	scanf_s("%d", &num);

	while(1)
	{ 
		int mod = num % 16;
		if(mod<10)
		{
			ch[position] = 48 + mod;
		}
		else 
		{
			ch[position] = 65 + (mod - 10);
		}
		
		num /= 16;

		position++;
		if (num == 0)
		{
			break;
		}
	
	}
	for(int i =position-1;i>=0;i--)
	{
		printf("%c", ch[i]);
	
	
	}
	*/


	return 0;

}
int MX(int num1,int num2)
{
	int ex =2;
	int Sol = 1;
	if(num1>num2)
	{
		while(1)
		{
			if(num1%ex==0 && num2%ex==0)
			{
				Sol *= ex;
				num1 /= ex;
				num2 /= ex;
				int ex = 2;
				continue;
			}
			if(num2 <=ex)
			{
				break;
			}
			ex++;
		}
	
	}
	else
	{
		while (1)
		{
			if (num1 % ex == 0 && num2 % ex == 0)
			{
				Sol *= ex;
				num1 /= ex;
				num2 /= ex;
				int ex = 2;
				continue;
			}
			if (num1 <= ex)
			{
				break;
			}
			ex++;
		}
	}
	
	return Sol;
	
	
	

}


/*
void Multiply(int num1,int num2)
{
	
	if(num1 < num2)
	{
		for(int i = num1;i<=num2;i++)
		{
			printf("%d´Ü\n", i);
			for (int j = 1; j < 10; j++) 
			{
				printf("%d x %d = %d\n", i, j, j * i);
			}
		}
	}
	else 
	{
		
		for (int i = num2; i <= num1; i++)
		{
			printf("%d´Ü\n", i);
			for (int j = 1; j < 10; j++)
			{
				printf("%d x %d = %d\n", i, j, i * j);
			}
		}
	
	}

}
*/