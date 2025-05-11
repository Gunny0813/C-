#include <stdio.h>

int main_challange(void)
{
	int N;
	scanf_s("%d", &N);
	int i = 2;
	int j = 1;
	while(1)
	{

		if(i>N)
		{
			printf("%d",j-1);
			break;
		}
		i *= 2;
		j++;
	}


	return 0;
}