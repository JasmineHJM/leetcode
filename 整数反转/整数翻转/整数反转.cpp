#define _CRT_SECURE_NO_WARNINGS 1

//给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
#include<iostream>
using namespace std;

class Solution {
public:
	int reverse(int x) {
		int rev = 0;
		while (x != 0)
		{
			int pop = x % 10; // 取末位
			x /= 10;
			if (rev > INT_MAX / 10
				/*|| (rev == INT_MAX / 10 && pop > 7)*/)// 情况2,排除
			{
				return 0;
			}
			if (rev < INT_MIN / 10
				/*|| (rev == INT_MIN / 10 && pop < -8)*/)// 情况2,排除
			{
				return 0;
			}
			rev = rev * 10 + pop;
		}

		return rev;
	}
};

