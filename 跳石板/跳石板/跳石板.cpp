/*
小易来到了一条石板路前，每块石板上从1挨着编号为：1、2、3.......
这条石板路要根据特殊的规则才能前进：对于小易当前所在的编号为K的 石板，
小易单次只能往前跳K的一个约数(不含1和K)步，即跳到K + X(X为K的一个非1和本身的约数)的位置。 
小易当前处在编号为N的石板，他想跳到编号恰好为M的石板去，小易想知道最少需要跳跃几次可以到达。
例如：N = 4，M = 24：4->6->8->12->18->24
于是小易最少需要跳跃5次，就可以从4号石板跳到24号石板
*/

#include <iostream>
#include <vector>

using namespace std;

void GetFewNum(int num, vector<int> &a){
	int tem = sqrt(num);
	for (int i = 2; i <= tem; i++){
		int temp = num / i;
		if (temp == num / i){
			if (temp != i){
				a.push_back(temp);
				a.push_back(i);
			}
			else
				a.push_back(i);
		}
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	vector<int> res(m + 1, 0);
	int k = n;
	res[k] = 1;
	while (k <= m){
		if (res[k] == 0){
			k++;
			continue;
		}
		vector<int> a;
		GetFewNum(k, a);
		for (int i = 0; i < a.size(); i++){
			if (a[i] + k <= m && res[a[i] + k] == 0)
				res[a[i] + k] = res[k] + 1;
			else if (a[i] + k <= m && res[a[i] + k] != 0)
				res[a[i] + k] = res[a[i] + k] < res[k] + 1 ? res[a[i] + k] : res[k] + 1;
		}
		k++;
	}
	if (res[m] != 0)
		cout << res[m] - 1 << endl;
	else
		cout << -1 << endl;
	return 0;
}

//方法二
/*
#include<iostream>
#include<vector>
#include<set>
#include<math.h>

using namespace std;

void get_yue_shu(int n, vector<int>&a){
	for (int i = 2; i <= sqrt(n); i++){
		if (n%i == 0){
			a.push_back(i);
			if (n / i != i)
				a.push_back(n / i);
		}
	}
}

int main(){
	int n, m;
	while (cin >> n >> m){
		vector<int> res(m + 1, 0);
		res[n] = 1;
		for (int i = n; i <= m; i++){
			vector<int>a;
			//位置i无法到达，跳过
			if (res[i] == 0)
				continue;
			get_yue_shu(i, a);
			//记录从起点到i的最小步数
			for (int j = 0; j<a.size(); j++){
				//由点i出发能到达的点
				if ((a[j] + i) <= m&&res[a[j] + i] != 0)
					//其它点也能到达，比较大小，记录最小步数
					res[a[j] + i] = min(res[a[j] + i], res[i] + 1);
				else if ((a[j] + i) <= m)
					//到达点i的最小步数加1
					res[a[j] + i] = res[i] + 1;
			}
		}
		if (res[m] == 0)
			cout << -1 << endl;
		else
			cout << res[m] - 1 << endl;
	}
	return 0;
}
*/