#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>


int main_challenge_part2_4(void) {
	char ch[100];
	printf("���ڿ��Է�");
	scanf("%s", ch);
	for (int i = 0; i < strlen(ch) / 2; i++)
	{
		if (ch[i] != ch[strlen(ch)-1 - i])
		{
			printf("ȸ���� �ƴմϴ�.");
			return 0;
		}

	}
	printf("ȸ���Դϴ�");
	return 0;
	
}