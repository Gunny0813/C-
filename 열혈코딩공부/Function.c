#include<stdio.h>

int Add(int num1, int num2)
{
	//��������(o) ��ȯ��(o) 
	int result = num1 + num2;
	return result;
}
void ShowAddResult(int num)
{
	//��������(o) ��ȯ��(x) 
	printf("������� ���: %d\n", num);
}
int ReadNum(void)
{
	//��������(x) ��ȯ��(o) 
	int num;
	scanf_s("%d", &num);
	return num;
}
void HowToUseThisProg(void)
{
	printf("�ΰ��� ������ �Է��Ͻø� ��������� ��µ˴ϴ�\n");
	printf("��! �׷� �ΰ��� ������ �Է��ϼ���\n");
}

int NumberCompare(int num1, int num2);
int AbsoCompare(int num1, int num2);
int GetAbsoValue(int num);


int main_function(void)
{
	/*
	int num1, num2;
	num1 = printf("12345\n");
	num2 = printf("I love my home\n");
	printf("%d %d \n", num1, num2);
	*/
	/*
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	*/
	/*
	printf("3�� 4�߿��� ū ���� %d�̴�.\n", NumberCompare(3, 4));
	printf("7�� 2�߿��� ū ���� %d�̴�.\n", NumberCompare(7, 2));
	*/
	int num1, num2;
	printf("�ΰ��� ���� �Է�:");
	scanf_s("%d %d", &num1, &num2);
	printf("%d�� %d�� ������ ū ����: %d\n",num1,num2,AbsoCompare(num1,num2));
	return 0;
}

int NumberCompare(int num1,int num2)
{
	if (num1 > num2)
	{
		return num1;
	}
	else
		return num2;

}
int AbsoCompare(int num1,int num2)
{
	if(GetAbsoValue(num1)>GetAbsoValue(num2))
	{
		return num1;
	}
	else
	{
		return num2;
	}

}
int GetAbsoValue(int num)
{
	if(num<0)
	{
		return num * (-1);
	}
	else
	{
		return num;
	}
}