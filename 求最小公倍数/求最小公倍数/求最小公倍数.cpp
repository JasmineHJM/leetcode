//��������:��������������A��B��
//������� :���A��B����С��������

# include<iostream>
using namespace std;

int GYS(int a, int b)    //�����Լ��
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
	cout << (A*B) / r << endl;    //��С������=a��b�˻��������Լ��
	return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)  //���Լ����շת�����
{
	return b == 0 ? a : gcd(b, a%b);
}
int lcm(int a, int b)//��С������
{
	return a / gcd(a, b)*b;   //�����ȳ���ˣ���ֹ���ֹ������
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