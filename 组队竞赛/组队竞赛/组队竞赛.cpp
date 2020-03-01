//牛牛举办了一次编程比赛, 参加比赛的有3*n个选手, 每个选手都有一个水平值a_i。
//现在要将这些选手进行组队, 一共组成n个队伍, 即每个队伍3人。
//牛牛发现队伍的水平值等于该队伍队员中第二高水平值。

#include<iostream>
#include<vector>
#include <algorithm>


using namespace std;

int main()
{
	/*本题的主要思路是贪心算法，保证每组的第二个值取到最大就排序，
	然后取 第 3n - 1  3n - 3  3n - 5...个元素累加即可
	例如 现在排序后 有 1  2  5  5  8  9  ，那么取  8 和 5相加等于 13
	我们每次尽量取最大，但是最大的数不可能是中位数，所以退而求其次，取 每组中第二大的 */
	int n;
	while (cin >> n)
	{
		vector<int> a(3 * n);
		long long sum = 0;
		for (int i = 0; i<3 * n; i++)
		{
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = n; i <= 3 * n - 2; i += 2)
		{
			sum += a[i];
		}
		cout << sum << endl;
	}
}
