#include <stdio.h>

int main_challange6(void)
{
	int input_second;
	scanf_s("%d", &input_second);
	int sec = input_second % 60;
	int min = input_second / 60;
	int hour = min / 60;
	min = min % 60;
	printf("h:%d m:%d s:%d", hour, min, sec);
	return 0;


}