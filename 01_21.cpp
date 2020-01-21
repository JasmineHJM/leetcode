#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

//�ж�һ�������Ƿ��ǻ���������������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������

class Solution{
public:
	bool isPalindrome(int x){
		if (x<0)
			return false;
		if (x % 10 == 0 && x != 0)
			return false;
		if (x >= 0 && x <= 9)      // ����Ϊ����
			return true;
		int idx = 1;
		while (x / (int)pow(10.0, idx)>0)  // �Ǽ�λ��
			idx++;
		idx--;
		// 34543
		while (x>10 && idx>0){
			if ((int)x / (int)pow(10.0, idx) != x % 10)
				return false;
			int last = x;
			x %= (int)pow(10.0, idx);  // ���Ƶ�һλ
			int sub = lowbit(last) - lowbit(x);  // ����λ��
			x /= 10;  // �������һλ
			if (sub>1){
				idx -= (sub - 1) * 2;  // �Ȱ�׼�����Ժ�Ҫ�õ���ָ��
				while (sub>1 && x){
					if (x % 10 != 0)     // ������ʧ��0�Ƿ�Գ�
						return false;
					x /= 10;
					sub--;
				}

			}
			idx -= 2;  // ������֮ǰ�ƶ�����λ
		}
		return true;
	}
	int lowbit(int x){
		int sum = 0;
		while (x)
			sum++, x /= 10;
		return sum;
	}
};