#define _CRT_SECURE_NO_WARNINGS 1

//���������ַ������ӵ�һ�ַ�����ɾ���ڶ����ַ��������е��ַ���
//���磬���롱They are students.���͡�aeiou������ɾ��֮��ĵ�һ���ַ�����ɡ�Thy r stdnts.��

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void fun(char *str1, char *str2)
{
	if (str1 == NULL || str2 == NULL)
		return;
	int i = 0;
	int j = 0;
	int n1 = strlen(str1);
	int n2 = strlen(str2);
	for (i = 0; i<n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			if (str1[i] == str2[j])
				break;
		}
		if (j == n2)
			printf("%c", str1[i]);
	}
}
int main()
{
	char str1[1000];
	char str2[1000];
	gets(str1);
	gets(str2);
	fun(str1, str2);
	system("pause");

	return 0;
}