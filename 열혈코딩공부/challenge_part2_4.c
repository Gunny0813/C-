#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>


int main_challenge_part2_4(void) {
	char ch[100];
	printf("문자열입력");
	scanf("%s", ch);
	for (int i = 0; i < strlen(ch) / 2; i++)
	{
		if (ch[i] != ch[strlen(ch)-1 - i])
		{
			printf("회문이 아닙니다.");
			return 0;
		}

	}
	printf("회문입니다");
	return 0;
	
}