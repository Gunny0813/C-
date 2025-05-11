#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main_challange_array(void)
{
	char ch[50];
	scanf("%s", ch);
	int index = 0;
	char Max = 0;
	while(ch[index] != '\0')
	{
		if (Max < ch[index])
		{
			Max = ch[index];
		}
		index++;
	}
	printf("%c", Max);

	return 0;
}