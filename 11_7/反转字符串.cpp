#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

/*
��дһ���������������ǽ�������ַ�����ת�����������ַ������ַ����� char[] ����ʽ������
��Ҫ�����������������Ŀռ䣬�����ԭ���޸��������顢ʹ�� O(1) �Ķ���ռ�����һ���⡣
����Լ��������е������ַ����� ASCII ����еĿɴ�ӡ�ַ���
*/
class Solution {
public:
	//s[i]
	void reverseString(vector<char>& s) 
	{
		if (s.empty())
			return;
		int start = 0;
		int end = s.size() - 1;
		while (start<end)
		{
			swap(s[start], s[end]);
			start++;
			end--;
		}
	}
};

