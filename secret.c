#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("���Խ���60���ػ�����������������˧��������˭��\n");
	again:
	scanf("%s", input);
	if (strcmp(input, "��Զ��")==0)
	{
		printf("��ϲ��ش���ȷ!");
		system("shutdown -a");
	}
	else
	{
		printf("�ش���������»ش�!\n");
		goto again;
	}
	return 0;

}