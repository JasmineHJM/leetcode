//1
//1  1  1
//1  2  3  2  1
//1  3  6  7  6  3  1
//1  4  10 16 19  16 10  4  1
//以上三角形的数阵，第一行只有一个数1，以下每行的每个数，是恰好是它上面的数，
//左上角数到右上角的数，3个数之和（如果不存在某个数，认为该数就是0）。
//求第n行第一个偶数出现的位置。如果没有偶数，则输出 - 1。
//例如输入3, 则输出2，输入4则输出3。输入n(n <= 1000000000)

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


//比较容易发现第n行有2n + 1个元素，且是对称的，所以只需要求出第n行的前n个元素即可
//第一个元素固定是1，第二个固定是n - 1，这个比较容易发现
//然后就是递归按公式去找就好，最开始只有第一行，输入n，
//如果是大于现在的vector二维数组，就去填到第n行，
//如果没有的话就可以直接从已求出来的二维数组里直接找就好。

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//只需要填每一行的前半部分就可以了
void FillArray(vector<vector<int>> &res, int row)
{
	for (int i = res.size() - 1; i<row - 1; ++i)
	{
		int cur = i + 2; //要填的是第cur行
		vector<int> newRow(cur, 0); //先创建新的那行前面n个数，初始化为0
		//每行第一个都是1，第二个都是行数减1
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
