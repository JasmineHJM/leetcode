//1
//1  1  1
//1  2  3  2  1
//1  3  6  7  6  3  1
//1  4  10 16 19  16 10  4  1
//���������ε����󣬵�һ��ֻ��һ����1������ÿ�е�ÿ��������ǡ���������������
//���Ͻ��������Ͻǵ�����3����֮�ͣ����������ĳ��������Ϊ��������0����
//���n�е�һ��ż�����ֵ�λ�á����û��ż��������� - 1��
//��������3, �����2������4�����3������n(n <= 1000000000)

#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		if (n <= 2)
			cout << -1 << endl;
		else
		{
			if (n % 2 == 1)
				cout << 2 << endl;
			else if (n % 4 == 2)
				cout << 4 << endl;
			else if (n % 4 == 0)
				cout << 3 << endl;
		}
	}
	return 0;
}


//�Ƚ����׷��ֵ�n����2n + 1��Ԫ�أ����ǶԳƵģ�����ֻ��Ҫ�����n�е�ǰn��Ԫ�ؼ���
//��һ��Ԫ�ع̶���1���ڶ����̶���n - 1������Ƚ����׷���
//Ȼ����ǵݹ鰴��ʽȥ�Ҿͺã��ʼֻ�е�һ�У�����n��
//����Ǵ������ڵ�vector��ά���飬��ȥ���n�У�
//���û�еĻ��Ϳ���ֱ�Ӵ���������Ķ�ά������ֱ���Ҿͺá�

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//ֻ��Ҫ��ÿһ�е�ǰ�벿�־Ϳ�����
void FillArray(vector<vector<int>> &res, int row)
{
	for (int i = res.size() - 1; i<row - 1; ++i)
	{
		int cur = i + 2; //Ҫ����ǵ�cur��
		vector<int> newRow(cur, 0); //�ȴ����µ�����ǰ��n��������ʼ��Ϊ0
		//ÿ�е�һ������1���ڶ�������������1
		newRow[0] = 1; newRow[1] = cur - 1;

		for (int j = 2; j<cur; ++j)
		{
			if (j == cur - 1)
				newRow[j] = 2 * res[i][j - 2] + res[i][j - 1];
			else
				newRow[j] = res[i][j - 2] + res[i][j - 1] + res[i][j];
		}
		res.push_back(newRow);
	}
}
int FindAnswer(vector<vector<int>> &res, int n)
{
	for (int i = 0; i<n; ++i)
	{
		if (res[n - 1][i] % 2 == 0)
			return i + 1;
	}
	return 0;
}
int main()
{
	int n;
	vector<vector<int>> result(1, vector<int>(1, 1));
	while (cin >> n)
	{
		if (n > result.size())
			FillArray(result, n);
		cout << FindAnswer(result, n) << endl;
	}
	return 0;
}
