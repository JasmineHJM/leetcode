#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

//判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

class Solution{
public:
	bool isPalindrome(int x){
		if (x<0)
			return false;
		if (x % 10 == 0 && x != 0)
			return false;
		if (x >= 0 && x <= 9)      // 以上为特判
			return true;
		int idx = 1;
		while (x / (int)pow(10.0, idx)>0)  // 是几位数
			idx++;
		idx--;
		// 34543
		while (x>10 && idx>0){
			if ((int)x / (int)pow(10.0, idx) != x % 10)
				return false;
			int last = x;
			x %= (int)pow(10.0, idx);  // 右移第一位
			int sub = lowbit(last) - lowbit(x);  // 求相差几位数
			x /= 10;  // 左移最后一位
			if (sub>1){
				idx -= (sub - 1) * 2;  // 先把准备好以后要用的幂指数
				while (sub>1 && x){
					if (x % 10 != 0)     // 看看丢失的0是否对称
						return false;
					x /= 10;
					sub--;
				}

			}
			idx -= 2;  // 别忘了之前移动的两位
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