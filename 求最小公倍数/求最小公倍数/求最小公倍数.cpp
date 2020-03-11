//输入描述:输入两个正整数A和B。
//输出描述 :输出A和B的最小公倍数。

# include<iostream>
using namespace std;

int GYS(int a, int b)    //求最大公约数
{
	int r = 0;
	while (r = a%b)
	{
		a = b;
		b = r;
	}
	return b;
}
int main()
{
	int A = 0, B = 0;
	cin >> A;
	cin >> B;
	int r = GYS(A, B);
	cout << (A*B) / r << endl;    //最小公倍数=a与b乘积除以最大公约数
	return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)  //最大公约数（辗转相除）
{
	return b == 0 ? a : gcd(b, a%b);
}
int lcm(int a, int b)//最小公倍数
{
	return a / gcd(a, b)*b;   //这里先除后乘，防止数字过大溢出
}
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << lcm(a, b) << endl;
	}

	return 0;
}
*/