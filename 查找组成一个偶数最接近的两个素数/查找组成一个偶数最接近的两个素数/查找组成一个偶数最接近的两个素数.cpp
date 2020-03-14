//任意一个偶数（大于2）都可以由2个素数组成，组成偶数的2个素数有很多种情况，
//本题目要求输出组成指定偶数的两个素数差值最小的素数对

#include<iostream>
using namespace std;

bool IsPrime(int n)
{
	for (int i = 2; i < n; ++i)
	if (n%i == 0)
		return false;
	return true;
}
void Parse(int& n)
{
	int ret1 = n / 2;
	int ret2 = n - ret1;
	while (1)
	{
		if (IsPrime(ret1) && IsPrime(ret2))
			break;
		ret1--;
		ret2++;
	}
	cout << ret1 << endl;
	cout << ret2 << endl;
}
int main()
{
	int n;
	while (cin >> n)
		Parse(n);
	return 0;
}
