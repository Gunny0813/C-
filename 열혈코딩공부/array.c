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
	printf("�ִ�:%d\n", arr[4]);
	printf("�ּ�:%d\n", arr[0]);
	for (int i = 0; i < 5; i++)
	{
		sum += arr[i];
	}
	printf("����:%d", sum);
	



	/*
	char ch[9] = {"Good time"};
	for (int i = 0; i < 9; i++)
	{
		printf("%c", ch[i]);
	}
	*/
	/*
	char str[] = "Good morning!";
	printf("�迭 str�� ũ��: %d\n", sizeof(str));
	printf("�� ���� ������ ��� %c\n", str[13]);
	printf("�� ���� ������ ���: %d", str[13]);

	char nu = '\0';
	char sp = ' ';
	printf("%d %d", nu, sp);
	*/
	char str[50];
	int index = 0;

	printf("���ڿ� �Է�:");
	scanf("%s", str);
	printf("�Է¹��� ���ڿ�: %s \n", str);

	printf("���ڴ������:");
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