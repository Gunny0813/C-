#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void arrange();
int main_array(void)
{

	int arr[5];
	int sum = 0;
	for (int i = 0; i < 5;i++)
	{
		scanf_s("%d", &arr[i]);
	}
	arrange(arr);
	printf("최대:%d\n", arr[4]);
	printf("최소:%d\n", arr[0]);
	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	printf("총합:%d", sum);
	



	/*
	char ch[9] = {"Good time"};
	for (int i = 0; i < 9; i++)
	{
		printf("%c", ch[i]);
	}
	*/
	/*
	char str[] = "Good morning!";
	printf("배열 str의 크기: %d\n", sizeof(str));
	printf("널 문자 문자형 출력 %c\n", str[13]);
	printf("널 문자 정수형 출력: %d", str[13]);

	char nu = '\0';
	char sp = ' ';
	printf("%d %d", nu, sp);
	*/
	char str[50];
	int index = 0;

	printf("문자열 입력:");
	scanf("%s", str);
	printf("입력받은 문자열: %s \n", str);

	printf("문자단위출력:");
	while (str[index] != '\0')
	{
		printf("%c",str[index]);
		index++;

	}
	printf("\n");
	return 0;
}

void arrange(int arr[5])
{
	for(int i =0;i<5;i++)
	{
		for(int j = 0;j<5;j++)
		{
			if(arr[i]<arr[j])
			{
				int k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;  
			}
		}
	
	}


}