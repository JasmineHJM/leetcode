#define _CRT_SECURE_NO_WARNINGS 1

//输入两个字符串，从第一字符串中删除第二个字符串中所有的字符。
//例如，输入”They are students.”和”aeiou”，则删除之后的第一个字符串变成”Thy r stdnts.”

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