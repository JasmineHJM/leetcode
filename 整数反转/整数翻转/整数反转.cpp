#define _CRT_SECURE_NO_WARNINGS 1

//����һ�� 32 λ���з�������������Ҫ�����������ÿλ�ϵ����ֽ��з�ת��
#include<iostream>
using namespace std;

class Solution {
public:
	int reverse(int x) {
		int rev = 0;
		while (x != 0)
		{
			int pop = x % 10; // ȡĩλ
			x /= 10;
			if (rev > INT_MAX / 10
				/*|| (rev == INT_MAX / 10 && pop > 7)*/)// ���2,�ų�
			{
				return 0;
			}
			if (rev < INT_MIN / 10
				/*|| (rev == INT_MIN / 10 && pop < -8)*/)// ���2,�ų�
			{
				return 0;
			}
			rev = rev * 10 + pop;
		}

		return rev;
	}
};

