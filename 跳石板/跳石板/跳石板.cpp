/*
С��������һ��ʯ��·ǰ��ÿ��ʯ���ϴ�1���ű��Ϊ��1��2��3.......
����ʯ��·Ҫ��������Ĺ������ǰ��������С�׵�ǰ���ڵı��ΪK�� ʯ�壬
С�׵���ֻ����ǰ��K��һ��Լ��(����1��K)����������K + X(XΪK��һ����1�ͱ����Լ��)��λ�á� 
С�׵�ǰ���ڱ��ΪN��ʯ�壬�����������ǡ��ΪM��ʯ��ȥ��С����֪��������Ҫ��Ծ���ο��Ե��
���磺N = 4��M = 24��4->6->8->12->18->24
����С��������Ҫ��Ծ5�Σ��Ϳ��Դ�4��ʯ������24��ʯ��
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

//������
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
			//λ��i�޷��������
			if (res[i] == 0)
				continue;
			get_yue_shu(i, a);
			//��¼����㵽i����С����
			for (int j = 0; j<a.size(); j++){
				//�ɵ�i�����ܵ���ĵ�
				if ((a[j] + i) <= m&&res[a[j] + i] != 0)
					//������Ҳ�ܵ���Ƚϴ�С����¼��С����
					res[a[j] + i] = min(res[a[j] + i], res[i] + 1);
				else if ((a[j] + i) <= m)
					//�����i����С������1
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