#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

//����һ�������(ransom) �ַ�����һ����־(magazine)�ַ������жϵ�һ���ַ���ransom�ܲ����ɵڶ����ַ���magazines������ַ����ɡ�
//������Թ��ɣ����� true �����򷵻� false��
//(��Ŀ˵����Ϊ�˲���¶������ּ���Ҫ����־������������Ҫ����ĸ����ɵ����������˼��)
class Solution {
public:
	bool canConstruct(string ransomNote, string magazine) {
		int cnt[26] = { 0 };
		for (int i = 0; i < magazine.length(); i++)
			cnt[magazine[i] - 'a']++;
		for (int i = 0; i < ransomNote.length(); i++)
		if (--cnt[ransomNote[i] - 'a'] < 0) return false;
		return true;
	}
};
