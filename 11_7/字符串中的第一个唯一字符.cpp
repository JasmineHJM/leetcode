#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>

//����һ���ַ������ҵ����ĵ�һ�����ظ����ַ���������������������������ڣ��򷵻� - 1��
class Solution {
public:
	int firstUniqChar(string s)
	{
		/*
		int count[256] = {0};
		int size = s.size();
		for(int i = 0; i < size; ++i)
		count[s[i]] += 1;
		for(int i = 0; i < size; ++i)
		if(1 == count[s[i]])
		return i;
		return -1;
		*/
		for (int i = 0; i<s.size(); ++i)
		{
			int index = s.find(s[i]);
			int reverse_index = s.rfind(s[i]);
			if (index == reverse_index)
				return i;
		}
		return -1;
	}
};