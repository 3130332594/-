#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("电脑将在60秒后关机，请输入世界上最帅的男人是谁？\n");
	again:
	scanf("%s", input);
	if (strcmp(input, "章远辉")==0)
	{
		printf("恭喜你回答正确!");
		system("shutdown -a");
	}
	else
	{
		printf("回答错误，请重新回答!\n");
		goto again;
	}
	return 0;

}