//��������:����Ϊһ��������N(1 �� N �� 1, 000, 000)
//�������:���һ����С�Ĳ�����ΪFibonacci��"

#include<iostream>
#include<stdio.h>
using namespace std;

//����Fibonacci���ĺ���
int Fibonacci(int N)
{
	if (N == 0)
		return 0;
	else if (N == 1)
		return 1;
	else
		return Fibonacci(N - 1) + Fibonacci(N - 2);
}

int main()
{
	int N;
	cin >> N;
	int num = 0;
	//����i��ֵ���ô�һ��û��ϵ����ΪFibonacci������Ȼ��һ�������N
	for (int i = 0; i < 100000; i++)
	{
		if (Fibonacci(i) - N > 0)
		{
			num = i;
			break;
		}
	}
	//��ǰһ�����Ǻ�һ��Fibonacci������N��һЩ
	if (Fibonacci(num) - N < N - Fibonacci(num - 1))
		cout << Fibonacci(num) - N;
	else
		cout << N - Fibonacci(num - 1);
	return 0;
}

//
//#include<iostream>
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//	// a, b, b, b
//	// 0, 1, 1, 2
//	int a = 0, b = 1;
//	while (N > b) {
//		int tmp = a;
//		a = b;
//		b += tmp;
//	}
//	//cout<<"a= "<<a<<" b = "<<b<<endl;
//	cout << min(N - a, b - N) << endl;
//
//	return 0;
//}
