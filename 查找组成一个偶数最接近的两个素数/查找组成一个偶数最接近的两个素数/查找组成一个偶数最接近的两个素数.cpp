//����һ��ż��������2����������2��������ɣ����ż����2�������кܶ��������
//����ĿҪ��������ָ��ż��������������ֵ��С��������

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
